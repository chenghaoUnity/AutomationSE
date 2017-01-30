using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "PostInstallActionPayload.asset", menuName = "Analytics Events/Post Install Action")]
    public class PostInstallActionPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "post_install_action";

        public override string eventName
        {
            get { return standardEventName; }
        }
    }
}
