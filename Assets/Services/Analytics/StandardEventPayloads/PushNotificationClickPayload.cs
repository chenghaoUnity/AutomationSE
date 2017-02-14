using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "PushNotificationClickPayload.asset", menuName = "Analytics Events/User Engagement and Social/Push Notification Click")]
    public class PushNotificationClickPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "push_notification_click";

        protected static string k_ParamKey_MessageId = "message_id";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public string messageId
        {
            get { return GetParam<string>(k_ParamKey_MessageId); }
            set { SetParam(k_ParamKey_MessageId, value); }
        }

        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_MessageId);
        }

        protected override void ValidateDataField (string key, object value)
        {
            if (key == k_ParamKey_MessageId)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        new public static PushNotificationClickPayload CreateInstance (string messageId, IDictionary<string, object> eventData)
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_MessageId, messageId);

            return CreateInstance<PushNotificationClickPayload>(eventData);
        }
    }
}
