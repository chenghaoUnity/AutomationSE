using System;
using System.Linq;
using System.Collections.Generic;
using System.Text.RegularExpressions;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Analytics event payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "CustomEventPayload.asset", menuName = "Analytics Events/Custom", order = 0)]
    public class AnalyticsEventPayload : ScriptableObject
    {
        static readonly string k_WarningFormat_NullValue = "Unable to validate '{0}' param value is of type '{1}'. Value is 'null'.";
        static readonly string k_ErrorFormat_InvalidType = "Invalid value type for '{0}' param. Expected type: '{1}'.";
        static readonly string k_ErrorFormat_InvalidValue = "Invalid value for '{0}' param. Expected value: '{1}'.";
        static readonly string k_ErrorFormat_RequiredParamNotSet = "Required param not set ({0}).";

        static readonly string k_StandardEventPrefix = string.Empty; // "unity.";
        static readonly string k_Error_TooManyParams = "Too many event parameters.";
        static readonly string k_Error_NameNullOrEmpty = "Event name cannot be null or empty.";
        static readonly string k_Error_KeyValueCountNotEqual = "Number of keys must equal the number of values.";
        static readonly string k_PrefsKey_MaxParams = "AnalyticsEventPayload.maxParams";
        static readonly int k_DefaultMaxParams = 10;

        [SerializeField, ReadOnlyField]
        string m_EventName;
        [SerializeField, HideInInspector]
        readonly List<string> m_EventDataKeys = new List<string>();
        [SerializeField, HideInInspector]
        readonly List<object> m_EventDataValues = new List<object>();

        readonly Dictionary<string, object> m_EventData = new Dictionary<string, object>();

        /// <summary>
        /// Gets or sets the name of the event.
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

                Debug.Log(GetType());

                m_EventName = value;
            }
        }

        /// <summary>
        /// Gets or sets the max number of event parameters.
        /// </summary>
        /// <value>The max parameters.</value>
        public int maxParams 
        { 
            get 
            {
                bool hasKey = PlayerPrefs.HasKey(k_PrefsKey_MaxParams);
                return hasKey ? PlayerPrefs.GetInt(k_PrefsKey_MaxParams) : k_DefaultMaxParams; 
            } 
            set 
            { 
                PlayerPrefs.SetInt(k_PrefsKey_MaxParams, Mathf.Max(k_DefaultMaxParams, value)); 
            }
        }

        /// <summary>
        /// Validates the payload. Called just prior to sending the event payload.
        /// </summary>
        protected virtual void ValidatePayload ()
        {
        }

        /// <summary>
        /// Validates the data field.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        protected virtual void ValidateDataField (string key, object value)
        {
        }

        /// <summary>
        /// On validation failed. Throws an AnalyticsEventPayloadEception.
        /// </summary>
        /// <param name="message">Message.</param>
        protected virtual void OnValidationFailed (string message)
        {
            throw new AnalyticsEventPayloadException(message);
        }

        /// <summary>
        /// Validates that the key exists in payload data.
        /// </summary>
        /// <param name="key">The key to validate.</param>
        protected void ValidateDataKeyExists (string key)
        {
            if (!HasParam(key))
            {
                OnValidationFailed(string.Format(k_ErrorFormat_RequiredParamNotSet, key));
            }
        }

        /// <summary>
        /// Validates that at least one of the provided keys exist payload data.
        /// </summary>
        /// <param name="keys">The keys to validate.</param>
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
        /// Validates that all of the provided keys exist in payload data.
        /// </summary>
        /// <param name="keys">The keys to validate.</param>
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
        /// Validates the type of the value being set in payload data.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
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
        /// Validates the data value type is numeric.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        protected void ValidateDataValueTypeIsNumeric (string key, object value)
        {
            if (value is int || value is float || value is decimal) return;

            OnValidationFailed(string.Format(k_ErrorFormat_InvalidType, key, "int, float, or decimal"));
        }

        /// <summary>
        /// Validates the value against an enum type.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        /// <typeparam name="T">The enum type.</typeparam>
        protected void ValidateDataValueExistsInEnum<T> (string key, string value)
        {
            string[] acceptableValues = (Enum.GetValues(typeof(T)) as T[]).Select(x => x.ToString().ToLower()).ToArray();

            if (!acceptableValues.Contains(value))
            {
                OnValidationFailed(string.Format(k_ErrorFormat_InvalidValue, key, JoinWords("or", acceptableValues)));
            }
        }

        /// <summary>
        /// Gets the standard parameter value from an enum value.
        /// </summary>
        /// <returns>The standard parameter value.</returns>
        /// <param name="value">The enum value.</param>
        /// <typeparam name="T">The enum type.</typeparam>
        protected static string GetStandardParamValue<T> (T value) where T : struct
        {
            return ConvertEnumToString(value);
        }

        /// <summary>
        /// Creates a payload instance of type <c>T</c>.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="eventData">Event data.</param>
        /// <typeparam name="T">The 1st type parameter.</typeparam>
        public static T CreateInstance<T> (IDictionary<string, object> eventData = null) where T : AnalyticsEventPayload
        {
            return (T)CreateInstance(typeof(T), eventData);
        }

        /// <summary>
        /// Creates a payload instance of event type with event data.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="eventType">Event type.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsEventPayload CreateInstance (Type eventType, IDictionary<string, object> eventData = null)
        {
            var instance = ScriptableObject.CreateInstance(eventType) as AnalyticsEventPayload;

            instance.SetEventData(eventData);

            return instance;
        }

        /// <summary>
        /// Creates a payload instance with event name and event data.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="eventName">Event name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsEventPayload CreateInstance (string eventName, IDictionary<string, object> eventData = null)
        {
            Type eventType = AnalyticsEvent.GetStandardEventType(eventName);

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
        /// Gets the event data.
        /// </summary>
        /// <returns>The event data.</returns>
        public Dictionary<string, object> GetEventData ()
        {
            UpdateEventData();

            return m_EventData;
        }

        /// <summary>
        /// Sets the event data.
        /// </summary>
        /// <param name="eventData">Event data.</param>
        public void SetEventData (IDictionary<string, object> eventData)
        {
            if (eventData == null)
            {
                m_EventData.Clear();
                return;
            }

            foreach (KeyValuePair<string, object> field in eventData)
            {
                SetParam(field.Key, field.Value);
            }
        }

        /// <summary>
        /// Has the event parameter.
        /// </summary>
        /// <returns><c>true</c>, if parameter was hased, <c>false</c> otherwise.</returns>
        /// <param name="key">Key.</param>
        public bool HasParam (string key)
        {
            return (m_EventDataKeys.IndexOf(key) >= 0);
        }

        /// <summary>
        /// Gets the event parameter.
        /// </summary>
        /// <returns>The parameter.</returns>
        /// <param name="key">Key.</param>
        /// <typeparam name="T">The 1st type parameter.</typeparam>
        public T GetParam<T> (string key)
        {
            int index = m_EventDataKeys.IndexOf(key);

            if (index >= 0)
            {
                var param = m_EventDataValues[index];

                if (typeof(T).IsEnum)
                {
                    return ConvertStringToEnum<T>((string)param);
                }

                return (T)param;
            }

            return default(T);
        }

        /// <summary>
        /// Sets the event parameter.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        public void SetParam (string key, object value)
        {
            if (m_EventDataKeys.Count != m_EventDataValues.Count)
            {
                OnValidationFailed(k_Error_KeyValueCountNotEqual);
            }

            // Only add a param if value is not null or an empty string.
            if (value == null || (value is string && string.IsNullOrEmpty((string)value)))
            {
                return;
            }

            ValidateDataField(key, value);

            int index = m_EventDataKeys.IndexOf(key);

            if (index >= 0)
            {
                m_EventDataValues[index] = value;
            }
            else
            {
                if (m_EventDataKeys.Count >= maxParams)
                {
                    OnValidationFailed(k_Error_TooManyParams);
                }

                m_EventDataKeys.Add(key);
                m_EventDataValues.Add(value);
            }
        }

        /// <summary>
        /// Sends the event payload.
        /// </summary>
        public AnalyticsResult Send ()
        {
            UpdateEventData();
            ValidatePayload();

            var result = Analytics.CustomEvent(string.Concat(k_StandardEventPrefix, eventName), m_EventData);
            string verboseLog = string.Empty;

            // Enable verbose logging by adding the following symbol to Scripting Define Symbols in Player Settings.
#if DEBUG_ANALYTICS_STANDARD_EVENTS
            verboseLog = string.Concat("\n  Event Name: ", eventName);
            verboseLog += "\n  Event Data ({0} fields):";

            foreach (KeyValuePair<string, object> field in m_EventData)
            {
                verboseLog += string.Format("\n    Key: '{0}'\t\t Value: '{1}'", field.Key, field.Value);
            }
#endif

            if (result == AnalyticsResult.Ok)
            {
                if(AnalyticsEvent.debugMode)
                {
                    Debug.LogFormat("Successfully sent '{0}' (Result: '{1}').{2}", GetType(), result, verboseLog);
                }
            }
            else
            {
                Debug.LogErrorFormat("Failed to send '{0}' (Result: '{1}').{2}", GetType(), result, verboseLog);
            }

            return result;
        }

        static string JoinWords (string conjunction, string[] words)
        {
            string result = string.Join("', '", words);

            if (words.Length > 1)
            {
                int startIndex = result.LastIndexOf(",", StringComparison.Ordinal);

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

        static string ConvertEnumToString<T> (T value)
        {
            if (!typeof(T).IsEnum)
            {
                throw new ArgumentException("T must be an enum type.");
            }

            var stringValue = value.ToString();

            if (!typeof(T).Equals(typeof(AdvertisingNetwork)) &&
                !typeof(T).Equals(typeof(AuthorizationNetwork)) &&
                !typeof(T).Equals(typeof(SocialNetwork)))
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
            int index = Array.IndexOf(stringValues, value);

            if (index >= 0)
            {
                return enumValues[index];
            }

            return default(T);
        }

        void UpdateEventData ()
        {
            if (m_EventDataKeys.Count != m_EventDataValues.Count)
            {
                OnValidationFailed(k_Error_KeyValueCountNotEqual);
            }

            m_EventData.Clear();

            for (int i = 0; i < m_EventDataKeys.Count; i++)
            {
                ValidateDataField(m_EventDataKeys[i], m_EventDataValues[i]);
                m_EventData.Add(m_EventDataKeys[i], m_EventDataValues[i]);
            }
        }
    }
}
