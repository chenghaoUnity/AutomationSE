using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "AdStartPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Ad Start")]
    public class AdStartPayload : AdPayload
    {
        public static readonly string standardEventName = "ad_start";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static AdStartPayload CreateInstance(bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdStartPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }

        public static AdStartPayload CreateInstance(bool rewarded, AdvertisingNetwork advertisingNetwork = AdvertisingNetwork.None, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdStartPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }
    }
}
