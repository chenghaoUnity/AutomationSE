using System;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Push notification enable payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "PushNotificationEnablePayload.asset", menuName = "Analytics Events/User Engagement and Social/Push Notification Enable")]
    public class PushNotificationEnablePayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "push_notification_enable";

        /// <summary>
        /// Gets the name of the event.
        /// </summary>
        /// <value>The name of the event.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }
    }
}
