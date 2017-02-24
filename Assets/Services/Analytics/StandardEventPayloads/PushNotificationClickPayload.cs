using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Push notification click payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "PushNotificationClickPayload.asset", menuName = "Analytics Events/User Engagement and Social/Push Notification Click")]
    public class PushNotificationClickPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "push_notification_click";

        static string k_ParamKey_MessageId = "message_id";

        /// <summary>
        /// Gets the name of the event.
        /// </summary>
        /// <value>The name of the event.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the message identifier.
        /// </summary>
        /// <value>The message identifier.</value>
        public string messageId
        {
            get { return GetParam<string>(k_ParamKey_MessageId); }
            set { SetParam(k_ParamKey_MessageId, value); }
        }

        /// <summary>
        /// Validates the payload.
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_MessageId);
        }

        /// <summary>
        /// Validates the data field.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            if (key == k_ParamKey_MessageId)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="messageId">Message identifier.</param>
        /// <param name="eventData">Event data.</param>
        new public static PushNotificationClickPayload CreateInstance (string messageId, IDictionary<string, object> eventData)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_MessageId, messageId);

            return CreateInstance<PushNotificationClickPayload>(eventData);
        }
    }
}
