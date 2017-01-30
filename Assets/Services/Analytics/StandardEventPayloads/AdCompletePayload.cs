using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "AdCompletePayload.asset", menuName = "Analytics Events/Ad Complete")]
    public class AdCompletePayload : AdPayload
    {
        public static readonly string standardEventName = "ad_complete";

        public override string eventName
        {
            get { return standardEventName; }
        }

        new public static AdCompletePayload CreateInstance (string placementId)
        {
            return CreateInstance(placementId, new Dictionary<string, object>());
        }

        new public static AdCompletePayload CreateInstance (string placementId, IDictionary<string, object> eventData)
        {
            return CreateInstance<AdCompletePayload>(placementId, eventData);
        }
    }
}
