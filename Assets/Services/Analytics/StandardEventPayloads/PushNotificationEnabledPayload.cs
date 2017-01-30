using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "PushNotificationEnabledPayload.asset", menuName = "Analytics Events/Push Notification Enabled")]
    public class PushNotificationEnabledPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "push_notification_enabled";

        public override string eventName
        {
            get { return standardEventName; }
        }
    }
}
