using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "AdOfferPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Ad Offer")]
    public class AdOfferPayload : AdPayload
    {
        public static readonly string standardEventName = "ad_offer";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static AdOfferPayload CreateInstance(bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdOfferPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }

        public static AdOfferPayload CreateInstance(bool rewarded, AdvertisingNetwork advertisingNetwork = AdvertisingNetwork.None, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdOfferPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }
    }
}
