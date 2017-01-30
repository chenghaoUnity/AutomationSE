using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "PostAdActionPayload.asset", menuName = "Analytics Events/Post Ad Action")]
    public class PostAdActionPayload : AdPayload
    {
        public static readonly string standardEventName = "post_ad_action";

        public override string eventName
        {
            get { return standardEventName; }
        }

        new public static PostAdActionPayload CreateInstance (string placementId)
        {
            return CreateInstance(placementId, new Dictionary<string, object>());
        }

        new public static PostAdActionPayload CreateInstance (string placementId, IDictionary<string, object> eventData)
        {
            return CreateInstance<PostAdActionPayload>(placementId, eventData);
        }

    }
}
