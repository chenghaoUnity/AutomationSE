using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "ResourceSpentPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Resource Spent")]
    public class ResourceSpentPayload : ResourcePayload
    {
        public static readonly string standardEventName = "resource_spent";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static ResourceSpentPayload CreateInstance (int amount, int newBalance, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            return CreateInstance<ResourceSpentPayload>(amount, newBalance, itemId, itemName, eventData);
        }

        public static ResourceSpentPayload CreateInstance (float amount, float newBalance, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            return CreateInstance<ResourceSpentPayload>(amount, newBalance, itemId, itemName, eventData);
        }

        public static ResourceSpentPayload CreateInstance (decimal amount, decimal newBalance, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            return CreateInstance<ResourceSpentPayload>(amount, newBalance, itemId, itemName, eventData);
        }
    }
}
