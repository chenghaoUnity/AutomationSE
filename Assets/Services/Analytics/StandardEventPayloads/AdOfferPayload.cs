using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "AdOfferPayload.asset", menuName = "Analytics Events/Ad Offer")]
    public class AdOfferPayload : AdPayload
    {
        public static readonly string standardEventName = "ad_offer";

        public override string eventName
        {
            get { return standardEventName; }
        }

        new public static AdOfferPayload CreateInstance (string placementId)
        {
            return CreateInstance(placementId, new Dictionary<string, object>());
        }

        new public static AdOfferPayload CreateInstance (string placementId, IDictionary<string, object> eventData)
        {
            return CreateInstance<AdOfferPayload>(placementId, eventData);
        }
    }
}
