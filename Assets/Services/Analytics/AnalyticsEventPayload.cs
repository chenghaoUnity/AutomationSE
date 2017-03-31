using System;
using System.Linq;
using System.Collections.Generic;
using System.Text.RegularExpressions;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// The base class from which all standard event payload classes derive.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "CustomEventPayload.asset", menuName = "Analytics Payloads/Custom", order = 0)]
    public class AnalyticsEventPayload : ScriptableObject
    {
        static readonly string k_WarningFormat_NullValue = "Unable to validate '{0}' param value is of type '{1}'. Value is 'null'.";
        static readonly string k_ErrorFormat_InvalidType = "Invalid value type for '{0}' param. Expected type: '{1}'.";
        static readonly string k_ErrorFormat_InvalidValue = "Invalid value for '{0}' param. Expected value: '{1}'.";
        static readonly string k_ErrorFormat_RequiredParamNotSet = "Required param not set ({0}).";

        static readonly string k_StandardEventPrefix = string.Empty; // "unity.";
        static readonly string k_Error_TooManyParams = "Too many event parameters.";
        static readonly string k_Error_NameNullOrEmpty = "Event name cannot be null or empty.";
        static readonly string k_PrefsKey_MaxParams = "AnalyticsEventPayload.maxParams";
        static readonly int k_DefaultMaxParams = 10;

        [SerializeField, ReadOnlyField] 
        string m_EventName;

        [SerializeField, HideInInspector] 
        List<AnalyticsEventParam> m_EventParams = new List<AnalyticsEventParam>();

        /// <summary>
        /// DO NOT reference m_EventData. Use GetEventData instead.
        /// </summary>
        readonly Dictionary<string, object> m_EventData = new Dictionary<string, object>();

        /// <summary>
        /// Gets or sets the name of the event.
        /// <remarks>
        /// The standard event payload classes override this property to make it read-only, 
        /// and get the value of <c>standardEventName</c>.
        /// </remarks>
        /// </summary>
        /// <value>The name of the event.</value>
        public virtual string eventName 
        { 
            get 
            { 
                return m_EventName;
            } 
            set 
            { 
                if (string.IsNullOrEmpty(value))
                {
                    OnValidationFailed(k_Error_NameNullOrEmpty);
                }

                m_EventName = value;
            }
        }

        /// <summary>
        /// Gets the payload event data.
        /// </summary>
        /// <value>The payload event data.</value>
        public Dictionary<string, object> eventData { get { return GetEventData(); } }

        /// <summary>
        /// Gets or sets the max number of allowable event parameters in the event payload data.
        /// <remarks>
        /// Update this value if the remote config file for your Unity project has been modified to support 
        /// more than the defaut maximum number of allowable parameters for custom events.
        /// </remarks>
        /// </summary>
        /// <value>The max number of parameters (default is 10).</value>
        public int maxParams 
        { 
            get 
            {
                var hasKey = PlayerPrefs.HasKey(k_PrefsKey_MaxParams);
                return hasKey ? PlayerPrefs.GetInt(k_PrefsKey_MaxParams) : k_DefaultMaxParams; 
            } 
            set 
            { 
                PlayerPrefs.SetInt(k_PrefsKey_MaxParams, Mathf.Max(k_DefaultMaxParams, value)); 
            }
        }

        /// <summary>
        /// Override this method to verify that any required fields are set in the payload data.
        /// <remarks>
        /// This method is invoked by the Send method just prior to sending the event payload.
        /// </remarks>
        /// </summary>
        protected virtual void ValidatePayload ()
        {
        }

        /// <summary>
        /// Override this method to verfy the value and value type set for specific event payload data fields.
        /// <remarks>
        /// This method is invoked by the SetParam and GetEventData methods.
        /// </remarks> 
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected virtual void ValidateDataField (string key, object value)
        {
        }

        /// <summary>
        /// Override this method to customize how invalid event data is handled.
        /// </summary>
        /// <param name="message">An error message indicating why validation failed, and how to fix it.</param>
        /// <exception cref="AnalyticsEventPayloadException">Thrown by default.</exception>
        protected virtual void OnValidationFailed (string message)
        {
            throw new AnalyticsEventPayloadException(message);
        }

        /// <summary>
        /// Validates that the specified key exists in event data.
        /// </summary>
        /// <param name="key">The expected event data key.</param>
        protected void ValidateDataKeyExists (string key)
        {
            if (!HasParam(key))
            {
                OnValidationFailed(string.Format(k_ErrorFormat_RequiredParamNotSet, key));
            }
        }

        /// <summary>
        /// Validates that at least one of the provided keys exist in event data.
        /// </summary>
        /// <param name="keys">The expected event data keys.</param>
        protected void ValidateAtLeastOneDataKeyExists (params string[] keys)
        {
            bool keyExists = false;

            for (int i = 0; i < keys.Length; i++)
            {
                keyExists |= HasParam(keys[i]);
            }

            if (!keyExists)
            {
                OnValidationFailed(string.Format(k_ErrorFormat_RequiredParamNotSet, JoinWords("or", keys)));
            }
        }

        /// <summary>
        /// Validates that all of the provided keys exist in event payload data.
        /// </summary>
        /// <param name="keys">The expected event data keys.</param>
        protected void ValidateAllDataKeysExist (params string[] keys)
        {
            var missingKeys = new List<string>();

            for (int i = 0; i < keys.Length; i++)
            {
                if (!HasParam(keys[i])) missingKeys.Add(keys[i]);
            }

            if (missingKeys.Count > 0)
            {
                OnValidationFailed(string.Format(k_ErrorFormat_RequiredParamNotSet, JoinWords("and", missingKeys.ToArray())));
            }
        }

        /// <summary>
        /// Validates the value type assigned to a specific event payload data field.
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        /// <typeparam name="T">The expected value type.</typeparam>
        protected void ValidateDataValueType<T> (string key, object value)
        {
            if (value == null)
            {
                if (AnalyticsEvent.debugMode)
                {
                    Debug.LogWarningFormat(k_WarningFormat_NullValue, key, typeof(T));
                }
            }
            else if (!(value is T))
            {
                OnValidationFailed(string.Format(k_ErrorFormat_InvalidType, key, typeof(T)));
            }
        }

        /// <summary>
        /// Validates the value type of a specific event payload data field is numeric.
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected void ValidateDataValueTypeIsNumeric (string key, object value)
        {
            if (value is int || value is float || value is decimal) return;

            OnValidationFailed(string.Format(k_ErrorFormat_InvalidType, key, "int, float, or decimal"));
        }

        /// <summary>
        /// Validates the value of the specified event data field exists within the specified enum type.
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        /// <typeparam name="T">The <c>enum</c> type.</typeparam>
        protected void ValidateDataValueExistsInEnum<T> (string key, string value)
        {
            var acceptableValues = (Enum.GetValues(typeof(T)) as T[]).Select(x => x.ToString().ToLower()).ToArray();

            if (!acceptableValues.Contains(value))
            {
                OnValidationFailed(string.Format(k_ErrorFormat_InvalidValue, key, JoinWords("or", acceptableValues)));
            }
        }

        /// <summary>
        /// Gets the standardized event data value from an enum value.
        /// </summary>
        /// <returns>The standard parameter value.</returns>
        /// <param name="value">The <c>enum</c> value.</param>
        /// <typeparam name="T">The <c>enum</c> type.</typeparam>
        protected static string GetStandardParamValue<T> (T value) where T : struct
        {
            return ConvertEnumToString(value);
        }

        /// <summary>
        /// Creates a new instance of payload type <c>T</c>, where <c>T</c> inherits from AnalyticsEventPayload.
        /// </summary>
        /// <returns>A new instance of payload type <c>T</c>, where <c>T</c> inherits from <see cref="AnalyticsEventPayload"/></returns>
        /// <param name="eventData">The event data (optional).</param>
        /// <typeparam name="T">Payload type that inherits from <see cref="AchievementPayload"/>.</typeparam>
        public static T CreateInstance<T> (IDictionary<string, object> eventData = null) where T : AnalyticsEventPayload
        {
            return (T)CreateInstance(typeof(T), eventData);
        }

        /// <summary>
        /// Creates a new instance of the specified <c>payloadType</c> as AnalyticsEventPayload.
        /// </summary>
        /// <returns>A new instance of <c>payloadType</c> as <see cref="AnalyticsEventPayload"/>.</returns>
        /// <param name="payloadType">The analytics event payload type.</param>
        /// <param name="eventData">The event data (optional).</param>
        public static AnalyticsEventPayload CreateInstance (Type payloadType, IDictionary<string, object> eventData = null)
        {
            var instance = ScriptableObject.CreateInstance(payloadType) as AnalyticsEventPayload;

            instance.SetEventData(eventData);

            return instance;
        }

        /// <summary>
        /// Creates a new instance of AnalyticsEventPayload with the specified <c>eventName</c>.
        /// </summary>
        /// <returns>A new instance of <see cref="AnalyticsEventPayload"/>.</returns>
        /// <param name="eventName">The name of the event.</param>
        /// <param name="eventData">The event data (optional).</param>
        public static AnalyticsEventPayload CreateInstance (string eventName, IDictionary<string, object> eventData = null)
        {
            var eventType = AnalyticsEvent.GetStandardEventType(eventName);

            if (eventType != null)
            {
                return CreateInstance(eventType, eventData);
            }

            var instance = CreateInstance<AnalyticsEventPayload>();

            instance.eventName = eventName;
            instance.SetEventData(eventData);

            return instance;
        }

        /// <summary>
        /// Gets the payload event data.
        /// </summary>
        /// <returns>The payload event data.</returns>
        public Dictionary<string, object> GetEventData ()
        {
            m_EventData.Clear();
            RemoveEmptyParams();

            for (int i = 0; i < m_EventParams.Count; i++)
            {
                ValidateDataField(m_EventParams[i].name, m_EventParams[i].value);
                m_EventData.Add(m_EventParams[i].name, m_EventParams[i].value);
            }

            return m_EventData;
        }

        /// <summary>
        /// Sets the payload event data.
        /// <remarks>
        /// Any field in <c>eventData</c> with a <c>null</c> value or an empty string will be dropped from the data set.
        /// Passing in a <c>null</c> value to <c>eventData</c> resets the event data.
        /// </remarks>
        /// </summary>
        /// <param name="eventData">The payload event data.</param>
        public void SetEventData (IDictionary<string, object> eventData)
        {
            m_EventParams.Clear();

            if (eventData != null)
            {
                for (int i = 0; i < eventData.Keys.Count(); i++)
                {
                    SetParam(eventData.Keys.ElementAt(i), eventData.Values.ElementAt(i));
                }
            }
        }

        /// <summary>
        /// Determines if the specified <c>key</c> exists in the payload event data.
        /// </summary>
        /// <returns><c>true</c>, if a field with the specified <c>key</c> exists in event data, <c>false</c> otherwise.</returns>
        /// <param name="key">The event data key.</param>
        public bool HasParam (string key)
        {
            return (m_EventParams.FindIndex(x => x.name == key) >= 0);
        }

        /// <summary>
        /// Gets the value of the event data field specified.
        /// </summary>
        /// <returns>The event data value as type <c>T</c>, or the default value of <c>T</c> if the specified key does not exist in event data.</returns>
        /// <param name="key">The event data key.</param>
        /// <typeparam name="T">The expected value type.</typeparam>
        public T GetParam<T> (string key)
        {
            var eventParam = m_EventParams.FirstOrDefault(x => x.name == key);

            if (eventParam == null) 
            {
                return default(T);
            }

            if (eventParam.type != typeof(T))
            {
                throw new ArgumentException("T must match param value type: " + eventParam.type);
            }

            if (eventParam.type.IsEnum)
            {
                return eventParam.GetEnumValue<T>();
            }

            return (T)eventParam.value;
        }

        /// <summary>
        /// Sets the specified event data field.
        /// <remarks>
        /// If the <c>key</c> or <c>value</c> is either <c>null</c> or an empty string, the field will not be added to event data.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        public void SetParam (string key, object value)
        {
            if (string.IsNullOrEmpty(key) || value == null || (value is string && string.IsNullOrEmpty((string)value)))
            {
                return;
            }

            var eventParam = new AnalyticsEventParam(key, value);

            if (eventParam.value == null)
            {
                return;
            }

            ValidateDataField(eventParam.name, eventParam.value);

            var index = m_EventParams.FindIndex(x => x.name == key);

            if (index < 0)
            {
                if (m_EventParams.Count >= maxParams)
                {
                    RemoveEmptyParams();
                }

                if (m_EventParams.Count >= maxParams)
                {
                    throw new InvalidOperationException(k_Error_TooManyParams);
                }

                m_EventParams.Add(eventParam);
            }
            else
            {
                m_EventParams[index].SetValue(value);
            }
        }

        /// <summary>
        /// Sends the event payload using Analytics.CustomEvent.
        /// <remarks>
        /// To log debug messages when the event is sent, set AnalyticsEvent.debugMode to <c>true</c>.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// To view the event name and a listing of event data parameters within the debug log messages for each event, 
        /// add DEBUG_ANALYTICS_STANDARD_EVENTS to Scripting Define Symbols for the target platforms in Player Settings.
        /// </remarks>
        /// <returns>The result of sending the event.</returns>
        public AnalyticsResult Send ()
        {
            if (string.IsNullOrEmpty(eventName))
            {
                OnValidationFailed(k_Error_NameNullOrEmpty);
            }

            ValidatePayload();

            var result = Analytics.CustomEvent(string.Concat(k_StandardEventPrefix, eventName), GetEventData());
            string verboseLog = string.Empty;

            // Enable verbose logging by adding the following symbol to Scripting Define Symbols in Player Settings.
#if DEBUG_ANALYTICS_STANDARD_EVENTS
            verboseLog = string.Concat("\n  Payload Type: ", GetType());
            verboseLog += string.Format("\n  Event Data ({0} params):", m_EventParams.Count);

            for (int i = 0; i < m_EventParams.Count; i++)
            {
                verboseLog += string.Format("\n    Key: '{0}';  Value: '{1}'", m_EventParams[i].name, m_EventParams[i].value);
            }
#endif

            switch (result)
            {
                case AnalyticsResult.Ok:
                    if (AnalyticsEvent.debugMode)
                    {
                        Debug.LogFormat("Successfully sent '{0}' event (Result: '{1}').{2}", eventName, result, verboseLog);
                    }
                    break;
                case AnalyticsResult.InvalidData:
                case AnalyticsResult.TooManyItems:
                    Debug.LogErrorFormat("Failed to send '{0}' event (Result: '{1}').{2}", eventName, result, verboseLog);
                    break;
                default:
                    Debug.LogWarningFormat("Unable to send '{0}' event (Result: '{1}').{2}", eventName, result, verboseLog);
                    break;
            }

            return result;
        }

        void RemoveEmptyParams ()
        {
            var emptyParams = m_EventParams.FindAll(
                x => string.IsNullOrEmpty(x.name) || (x.value is string && string.IsNullOrEmpty((string)x.value) || x.value == null)
            );

            if (emptyParams != null && emptyParams.Count > 0)
            {
                for (int i = emptyParams.Count - 1; i >= 0; i--)
                {
                    m_EventParams.Remove(emptyParams[i]);
                }
            }
        }

        static string JoinWords (string conjunction, string[] words)
        {
            var result = string.Join("', '", words);

            if (words.Length > 1)
            {
                var startIndex = result.LastIndexOf(",", StringComparison.Ordinal);

                if (words.Length == 2)
                {
                    result = result.Remove(startIndex, 1);
                }
                else
                {
                    startIndex++;
                }

                result = result.Insert(startIndex, string.Concat(" ", conjunction));
            }

            return result;
        }

        static string SplitCamelCase (string input)
        {
            input = Regex.Replace(input, "([a-z](?=[A-Z]))", "$0_");
            return Regex.Replace(input, "(?<!_|^)[A-Z][a-z]", "_$0");
        }

        static string ConvertEnumToString (object value)
        {
            var enumType = value.GetType();

            if (!enumType.IsEnum)
            {
                throw new ArgumentException("Value must be an enum type.");
            }

            var stringValue = value.ToString();

            if (!enumType.Equals(typeof(AdvertisingNetwork)) &&
                !enumType.Equals(typeof(AuthorizationNetwork)) &&
                !enumType.Equals(typeof(SocialNetwork)))
            {
                stringValue = SplitCamelCase(stringValue);
            }

            stringValue = stringValue.ToLower();

            return (stringValue == "none") ? null : stringValue;
        }

        static T ConvertStringToEnum<T> (string value)
        {
            if (!typeof(T).IsEnum)
            {
                throw new ArgumentException("T must be an enum type.");
            }

            var enumValues = Enum.GetValues(typeof(T)) as T[];
            var stringValues = enumValues.Select(x => ConvertEnumToString(x)).ToArray();
            var index = Array.IndexOf(stringValues, value);

            if (index >= 0)
            {
                return enumValues[index];
            }

            return default(T);
        }
    }
}
