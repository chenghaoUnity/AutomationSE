using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Push Notification Click standard event payload (<c>push_notification_click</c>).
    /// <remarks>
    /// Send this event when the player clicks on a push notification.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into the level of player engagement with push notificaitons.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "PushNotificationClickPayload.asset", menuName = "Analytics Payloads/Engagement/Push Notification Click")]
    public class PushNotificationClickPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "push_notification_click";

        static string k_ParamKey_MessageId = "message_id";

        /// <summary>
        /// Gets the standard event name.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the message ID.
        /// </summary>
        /// <value>The message ID.</value>
        public string messageId
        {
            get { return GetParam<string>(k_ParamKey_MessageId); }
            set { SetParam(k_ParamKey_MessageId, value); }
        }

        /// <summary>
        /// Verifies that any required event data parameters are set.
        /// <remarks>
        /// The <c>message_id</c> parameter must be set for the payload to be valid.
        /// </remarks>
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_MessageId);
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>message_id</c> parameter value must be of type <c>string</c> to be valid.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            if (key == k_ParamKey_MessageId)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates a new instance of PushNotificationClickPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="PushNotificationClickPayload"/>.</returns>
        /// <param name="messageId">The message name or ID.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        new public static PushNotificationClickPayload CreateInstance (string messageId, IDictionary<string, object> eventData = null)
        {
            var instance = CreateInstance<PushNotificationClickPayload>(eventData);

            instance.SetParam(k_ParamKey_MessageId, messageId);

            return instance;
        }
    }
}
