using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "CustomEventPayload.asset", menuName = "Analytics Events/Custom", order = 0)]
    public class AnalyticsEventPayload : ScriptableObject, IEnumerable<KeyValuePair<string, object>>
    {
        protected static readonly string k_ErrorFormat_InvalidType = "Invalid value type for param '{0}'. Expected '{1}' type.";
        protected static readonly string k_ErrorFormat_RequiredParamNotSet = "Required param not set ({0}).";

        static readonly string k_StandardEventPrefix = "unity.";
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
                if (string.IsNullOrEmpty(m_EventName))
                {
                    OnValidationFailed(k_Error_NameNullOrEmpty);
                }

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
        /// Validates the type of the value being set in payload data.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        /// <typeparam name="T">The 1st type parameter.</typeparam>
        protected void ValidateDataValueType<T> (string key, object value)
        {
            if (!(value is T))
            {
                OnValidationFailed(string.Format(k_ErrorFormat_InvalidType, key, typeof(T)));
            }
        }

        /// <summary>
        /// Creates a payload instance of type <c>T</c>.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="eventData">Event data.</param>
        /// <typeparam name="T">The 1st type parameter.</typeparam>
        public static T CreateInstance<T> (IDictionary<string, object> eventData) where T : AnalyticsEventPayload
        {
            return (T)CreateInstance(typeof(T), eventData);
        }

        /// <summary>
        /// Creates a payload instance of event type with event data.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="eventType">Event type.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsEventPayload CreateInstance (Type eventType, IDictionary<string, object> eventData)
        {
            var instance = CreateInstance(eventType) as AnalyticsEventPayload;

            instance.SetEventData(eventData);

            return instance;
        }

        /// <summary>
        /// Creates a payload instance with event name and event data.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="eventName">Event name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsEventPayload CreateInstance (string eventName, IDictionary<string, object> eventData)
        {
            Type eventType = AnalyticsEvent.GetStandardEventType(eventName);

            if (!Equals(eventType, null))
            {
                return CreateInstance(eventType, eventData);
            }

            var instance = CreateInstance<AnalyticsEventPayload>();

            instance.eventName = eventName;
            instance.SetEventData(eventData);

            return instance;
        }

        /// <summary>
        /// Gets the enumerator.
        /// </summary>
        /// <returns>The enumerator.</returns>
        public IEnumerator<KeyValuePair<string, object>> GetEnumerator ()
        {
            return GetEventData().GetEnumerator();
        }

        /// <summary>
        /// Gets the event data.
        /// </summary>
        /// <returns>The event data.</returns>
        public Dictionary<string, object> GetEventData ()
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

            return m_EventData;
        }

        /// <summary>
        /// Sets the event data.
        /// </summary>
        /// <param name="eventData">Event data.</param>
        public void SetEventData (IDictionary<string, object> eventData)
        {
            if (Equals(eventData, null))
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
                return (T)m_EventDataValues[index];
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

            // TODO: Implement type validation.

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
            ValidatePayload();

            return Analytics.CustomEvent(string.Concat(k_StandardEventPrefix, eventName), GetEventData());
        }

        IEnumerator IEnumerable.GetEnumerator ()
        {
            return GetEnumerator();
        }
    }
}
