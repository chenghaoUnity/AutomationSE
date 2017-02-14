using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "PushNotificationEnablePayload.asset", menuName = "Analytics Events/User Engagement and Social/Push Notification Enable")]
    public class PushNotificationEnablePayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "push_notification_enable";

        public override string eventName
        {
            get { return standardEventName; }
        }
    }
}
