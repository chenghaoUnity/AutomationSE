using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "CurrencyPurchasedPayload.asset", menuName = "Analytics Events/Currency Purchased")]
    public class CurrencyPurchasedPayload : CurrencyPayload
    {
        public static readonly string standardEventName = "currency_purchased";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static CurrencyPurchasedPayload CreateInstance (string itemId, int amount, int balance, string source, string type)
        {
            return CreateInstance(itemId, amount, balance, source, type, new Dictionary<string, object>());
        }

        public static CurrencyPurchasedPayload CreateInstance (string itemId, int amount, int balance, string source, string type, IDictionary<string, object> eventData)
        {
            return CreateInstance<CurrencyPurchasedPayload>(itemId, amount, balance, source, type, eventData);
        }
    }
}
