using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "PushNotificationClickedPayload.asset", menuName = "Analytics Events/Push Notification Clicked")]
    public class PushNotificationClickedPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "push_notification_clicked";

        public override string eventName
        {
            get { return standardEventName; }
        }

        protected static string k_ParamKey_MessageId = "message_id";

        public string messageId
        {
            get { return GetParam<string>(k_ParamKey_MessageId); }
            set { SetParam(k_ParamKey_MessageId, value); }
        }

        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            if (!HasParam(k_ParamKey_MessageId))
            {
                OnValidationFailed(
                    string.Format(
                        k_ErrorFormat_RequiredParamNotSet,
                        k_ParamKey_MessageId
                    )
                );
            }
        }

        protected override void ValidateDataField (string key, object value)
        {
            if (key == k_ParamKey_MessageId)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        new public static PushNotificationClickedPayload CreateInstance (string messageId)
        {
            return CreateInstance(messageId, new Dictionary<string, object>());
        }

        new public static PushNotificationClickedPayload CreateInstance (string messageId, IDictionary<string, object> eventParams)
        {
            eventParams.Add(k_ParamKey_MessageId, messageId);
            return CreateInstance<PushNotificationClickedPayload>(eventParams);
        }
    }
}
