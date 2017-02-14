using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "CurrencySpentPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Currency Spent")]
    public class CurrencySpentPayload : CurrencyPayload
    {
        public static readonly string standardEventName = "currency_spent";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static CurrencySpentPayload CreateInstance (int amount, int balance, ItemType type, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            return CreateInstance<CurrencySpentPayload>(amount, balance, type, itemId, itemName, eventData);
        }

        public static CurrencySpentPayload CreateInstance (float amount, float balance, ItemType type, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            return CreateInstance<CurrencySpentPayload>(amount, balance, type, itemId, itemName, eventData);
        }

        public static CurrencySpentPayload CreateInstance (decimal amount, decimal balance, ItemType type, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            return CreateInstance<CurrencySpentPayload>(amount, balance, type, itemId, itemName, eventData);
        }
    }
}
