using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "AdSkipPayload.asset", menuName = "Analytics Events/Ad Skip")]
    public class AdSkipPayload : AdPayload
    {
        public static readonly string standardEventName = "ad_skip";

        public override string eventName
        {
            get { return standardEventName; }
        }

        new public static AdSkipPayload CreateInstance (string placementId)
        {
            return CreateInstance(placementId, new Dictionary<string, object>());
        }

        new public static AdSkipPayload CreateInstance (string placementId, IDictionary<string, object> eventData)
        {
            return CreateInstance<AdSkipPayload>(placementId, eventData);
        }
    }
}
