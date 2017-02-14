using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "AdCompletePayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Ad Complete")]
    public class AdCompletePayload : AdPayload
    {
        public static readonly string standardEventName = "ad_complete";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static AdCompletePayload CreateInstance (bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdCompletePayload>(rewarded, advertisingNetwork, placementId, eventData);
        }

        public static AdCompletePayload CreateInstance(bool rewarded, AdvertisingNetwork advertisingNetwork = AdvertisingNetwork.None, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdCompletePayload>(rewarded, advertisingNetwork, placementId, eventData);
        }
    }
}
