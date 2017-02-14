using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "CurrencyAcquiredPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Currency Acquired")]
    public class CurrencyAcquiredPayload : CurrencyPayload
    {
        public static readonly string standardEventName = "currency_acquired";

        static readonly string k_ParamKey_Source = "source";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public string source 
        {
            get { return GetParam<string>(k_ParamKey_Source); }
            set { SetParam(k_ParamKey_Source, value); }
        }

        public void SetSource (ItemSource source)
        {
            SetParam(k_ParamKey_Source, GetStandardParamValue(source));
        }

        public static CurrencyAcquiredPayload CreateInstance (int amount, int newBalance, ItemType type, ItemSource source, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            return CreateInstance((object)amount, (object)newBalance, type, GetStandardParamValue(source), itemId, itemName, eventData);
        }

        public static CurrencyAcquiredPayload CreateInstance (int amount, int newBalance, ItemType type, string source, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            return CreateInstance((object)amount, (object)newBalance, type, source, itemId, itemName, eventData);
        }

        public static CurrencyAcquiredPayload CreateInstance (float amount, float newBalance, ItemType type, ItemSource source, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            return CreateInstance((object)amount, (object)newBalance, type, GetStandardParamValue(source), itemId, itemName, eventData);
        }

        public static CurrencyAcquiredPayload CreateInstance (float amount, float newBalance, ItemType type, string source, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            return CreateInstance((object)amount, (object)newBalance, type, source, itemId, itemName, eventData);
        }

        public static CurrencyAcquiredPayload CreateInstance (decimal amount, decimal newBalance, ItemType type, ItemSource source, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            return CreateInstance((object)amount, (object)newBalance, type, GetStandardParamValue(source), itemId, itemName, eventData);
        }

        public static CurrencyAcquiredPayload CreateInstance (decimal amount, decimal newBalance, ItemType type, string source, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            return CreateInstance((object)amount, (object)newBalance, type, source, itemId, itemName, eventData);
        }

        static CurrencyAcquiredPayload CreateInstance (object amount, object newBalance, ItemType type, string source, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_Source, source);

            return CreateInstance<CurrencyAcquiredPayload>(amount, newBalance, type, itemId, itemName, eventData);
        }
    }
}
