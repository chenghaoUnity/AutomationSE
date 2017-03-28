using System;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Push Notification Enable standard event payload (<c>push_notification_enable</c>).
    /// <remarks>
    /// Send this event when the player enables or grants permission for the game to use push notifications.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into player acceptance rates for push notificaitons.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "PushNotificationEnablePayload.asset", menuName = "Analytics Events/User Engagement and Social/Push Notification Enable")]
    public class PushNotificationEnablePayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "push_notification_enable";

        /// <summary>
        /// Gets the standard event name.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }
    }
}
