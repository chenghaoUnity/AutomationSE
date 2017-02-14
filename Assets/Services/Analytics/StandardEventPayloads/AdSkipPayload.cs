using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "AdSkipPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Ad Skip")]
    public class AdSkipPayload : AdPayload
    {
        public static readonly string standardEventName = "ad_skip";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static AdSkipPayload CreateInstance(bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdSkipPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }

        public static AdSkipPayload CreateInstance(bool rewarded, AdvertisingNetwork advertisingNetwork = AdvertisingNetwork.None, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdSkipPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }
    }
}
