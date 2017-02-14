using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "ResourceAcquiredPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Resource Acquired")]
    public class ResourceAcquiredPayload : ResourcePayload
    {
        public static readonly string standardEventName = "resource_acquired";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static ResourceAcquiredPayload CreateInstance (int amount, int newBalance, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            return CreateInstance<ResourceAcquiredPayload>(amount, newBalance, itemId, itemName, eventData);
        }

        public static ResourceAcquiredPayload CreateInstance (float amount, float newBalance, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            return CreateInstance<ResourceAcquiredPayload>(amount, newBalance, itemId, itemName, eventData);
        }

        public static ResourceAcquiredPayload CreateInstance (decimal amount, decimal newBalance, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            return CreateInstance<ResourceAcquiredPayload>(amount, newBalance, itemId, itemName, eventData);
        }
    }
}
