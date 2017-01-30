using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "AdStartPayload.asset", menuName = "Analytics Events/Ad Start")]
    public class AdStartPayload : AdPayload
    {
        public static readonly string standardEventName = "ad_start";

        public override string eventName
        {
            get { return standardEventName; }
        }

        new public static AdStartPayload CreateInstance (string placementId)
        {
            return CreateInstance(placementId, new Dictionary<string, object>());
        }

        new public static AdStartPayload CreateInstance (string placementId, IDictionary<string, object> eventData)
        {
            return CreateInstance<AdStartPayload>(placementId, eventData);
        }
    }
}
