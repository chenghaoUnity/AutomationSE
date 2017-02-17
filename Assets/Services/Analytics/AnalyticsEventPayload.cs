using System;
using System.Linq;
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
        /// Validates that the key exists in payload data.
        /// </summary>
        /// <param name="key">Key.</param>
        protected void ValidateDataKeyExists (string key)
        {
            if (!HasParam(key))
            {
                OnValidationFailed(string.Format(k_ErrorFormat_RequiredParamNotSet, key));
            }
        }

        /// <summary>
        /// Validates that at least one key exists payload data.
        /// </summary>
        /// <param name="keys">Keys.</param>
        protected void ValidateAtLeastOneDataKeyExists (params string[] keys)
        {
            bool keyExists = false;

            for (int i = 0; i < keys.Length; i++)
            {
                keyExists |= HasParam(keys[i]);
            }

            if (!keyExists)
            {
                string message = "";

                for (int i = 0; i < keys.Length; i++)
                {
                    if (i > 0 && keys.Length > 1)
                    {
                        message += (keys.Length > 2) ? ", " : " ";

                        if (i == keys.Length - 1)
                        {
                            message += "or ";
                        }
                    }

                    message += keys[i];
                }

                OnValidationFailed(string.Format(k_ErrorFormat_RequiredParamNotSet, message));
            }
        }

        /// <summary>
        /// Validates all data keys exist in payload data.
        /// </summary>
        /// <param name="keys">Keys.</param>
        protected void ValidateAllDataKeysExist (params string[] keys)
        {
            int missingKeyCount = 0;

            for (int i = 0; i < keys.Length; i++)
            {
                if (!HasParam(keys[i])) missingKeyCount++;
            }

            if (missingKeyCount > 0)
            {
                string message = "";
                int msgKeyCount = 0;

                for (int i = 0; i < keys.Length; i++)
                {
                    if (HasParam(keys[i])) continue;

                    message += keys[i];
                    msgKeyCount++;

                    if (missingKeyCount > 1)
                    {
                        message += (missingKeyCount > 2) ? ", " : " ";

                        if (msgKeyCount == missingKeyCount - 1)
                        {
                            message += "and ";
                        }
                    }
                }

                OnValidationFailed(string.Format(k_ErrorFormat_RequiredParamNotSet, message));
            }
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

        protected void ValidateDataValueTypeIsNumeric (string key, object value)
        {
            if (value is int || value is float || value is decimal) return;

            OnValidationFailed(string.Format(k_ErrorFormat_InvalidType, key, "int, float, or decimal"));
        }

        /// <summary>
        /// Validates the value of the store type.
        /// </summary>
        /// <param name="storeType">Store type value.</param>
        protected void ValidateStoreType (string storeType)
        {
            if (storeType != "premium" && storeType != "soft")
            {
                OnValidationFailed("Store type must be either 'premium' or 'soft'.");
            }
        }

        /// <summary>
        /// Validates the value of the item type.
        /// </summary>
        /// <param name="itemType">Item type value.</param>
        protected void ValidateItemType (string itemType)
        {
            if (itemType != "premium" && itemType != "soft")
            {
                OnValidationFailed("Item type must be either 'premium' or 'soft'.");
            }
        }

        /// <summary>
        /// Gets the standard parameter string value.
        /// </summary>
        /// <returns>The standard parameter string value.</returns>
        /// <param name="type">Type.</param>
        protected static string GetStandardParamValue (StoreType type)
        {
            return type.ToString().ToLower();
        }

        /// <summary>
        /// Gets the standard parameter string value.
        /// </summary>
        /// <returns>The standard parameter string value.</returns>
        /// <param name="type">Type.</param>
        protected static string GetStandardParamValue (ItemType type)
        {
            return type.ToString().ToLower();
        }

        /// <summary>
        /// Gets the standard parameter string value.
        /// </summary>
        /// <returns>The standard parameter string value.</returns>
        /// <param name="itemSource">Item source.</param>
        protected static string GetStandardParamValue (ItemSource itemSource)
        {
            switch (itemSource)
            {
                case ItemSource.None:               return null;
                case ItemSource.RewardedAd:         return "rewarded_ad";
                case ItemSource.TimedReward:        return "timed_reward";
                case ItemSource.SocialReward:       return "social_reward";
                default: return itemSource.ToString().ToLower();
            }
        }

        /// <summary>
        /// Gets the standard parameter string value.
        /// </summary>
        /// <returns>The standard parameter string value.</returns>
        /// <param name="authorizationNetwork">Authorization network.</param>
        protected static string GetStandardParamValue (AuthorizationNetwork authorizationNetwork)
        {
            switch (authorizationNetwork)
            {
                case AuthorizationNetwork.None:     return null;
                default: return authorizationNetwork.ToString().ToLower();
            }
        }

        /// <summary>
        /// Gets the standard parameter string value.
        /// </summary>
        /// <returns>The standard parameter string value.</returns>
        /// <param name="socialNetwork">Social network.</param>
        protected static string GetStandardParamValue (SocialNetwork socialNetwork)
        {
            switch (socialNetwork)
            {
                case SocialNetwork.None:            return null;
                case SocialNetwork.GooglePlus:      return "google_plus";
                default: return socialNetwork.ToString().ToLower();
            }
        }

        /// <summary>
        /// Gets the standard parameter string value.
        /// </summary>
        /// <returns>The standard parameter string value.</returns>
        /// <param name="shareType">Share type.</param>
        protected static string GetStandardParamValue (ShareType shareType)
        {
            switch (shareType)
            {
                case ShareType.None:                return null;
                case ShareType.Text:                return "text_only";
                default: return shareType.ToString().ToLower();
            }
        }

        /// <summary>
        /// Gets the standard parameter string value.
        /// </summary>
        /// <returns>The standard parameter string value.</returns>
        /// <param name="screenType">Screen type.</param>
        protected static string GetStandardParamValue (ScreenName screenType)
        {
            switch (screenType)
            {
                case ScreenName.None:               return null;
                case ScreenName.MainMenu:           return "main_menu";
                case ScreenName.IAPPromo:           return "iap_promo";
                case ScreenName.CrossPromo:         return "cross_promo";
                case ScreenName.FeaturePromo:       return "feature_promo";
                default: return screenType.ToString().ToLower();
            }
        }

        /// <summary>
        /// Gets the standard parameter string value.
        /// </summary>
        /// <returns>The standard parameter string value.</returns>
        /// <param name="advertisingNetwork">Advertising Network type.</param>
        protected static string GetStandardParamValue(AdvertisingNetwork advertisingNetwork)
        {
            switch (advertisingNetwork)
            {
                case AdvertisingNetwork.None: return null;
                default: return advertisingNetwork.ToString().ToLower();
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

            if (Equals(value, null) || (value is string && Equals((string)value, string.Empty)))
            {
                //if string is empty, don't add it to the dictionary - treat it as null
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
            var eventData = GetEventData();
            for (int i = eventData.Count - 1; i >= 0; i--)
            {
                var field = eventData.ElementAt(i);
                if(Equals(field.Value, null) || (field.Value is string && (string)field.Value == string.Empty))
                {
                    eventData.Remove(field.Key);
                }
            }

            ValidatePayload();

            var result = Analytics.CustomEvent(string.Concat(k_StandardEventPrefix, eventName), eventData);

            if (result == AnalyticsResult.Ok)
            {
                if(AnalyticsEvent.debugMode)
                {
                    Debug.LogFormat("Successfully sent '{0}' (Result: {1}).", GetType(), result);
                }
            }
            else
            {
                Debug.LogErrorFormat("Failed to send '{0}' (Result: {1}).", GetType(), result);
            }

            return result;
        }

        IEnumerator IEnumerable.GetEnumerator ()
        {
            return GetEnumerator();
        }
    }
}
