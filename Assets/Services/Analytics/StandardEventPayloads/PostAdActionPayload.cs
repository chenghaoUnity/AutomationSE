using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "PostAdActionPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Post Ad Action")]
    public class PostAdActionPayload : AdPayload
    {
        public static readonly string standardEventName = "post_ad_action";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static PostAdActionPayload CreateInstance(bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<PostAdActionPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }

        public static PostAdActionPayload CreateInstance(bool rewarded, AdvertisingNetwork advertisingNetwork = AdvertisingNetwork.None, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<PostAdActionPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }
    }
}
