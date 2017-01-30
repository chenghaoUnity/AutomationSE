using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "CurrencySpentPayload.asset", menuName = "Analytics Events/Currency Spent")]
    public class CurrencySpentPayload : CurrencyPayload
    {
        public static readonly string standardEventName = "currency_spent";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static CurrencySpentPayload CreateInstance (string itemId, int amount, int balance, string source, string type)
        {
            return CreateInstance(itemId, amount, balance, source, type, new Dictionary<string, object>());
        }

        public static CurrencySpentPayload CreateInstance (string itemId, int amount, int balance, string source, string type, IDictionary<string, object> eventData)
        {
            return CreateInstance<CurrencySpentPayload>(itemId, amount, balance, source, type, eventData);
        }
    }
}
