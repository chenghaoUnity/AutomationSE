using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "PostInstallActionPayload.asset", menuName = "Analytics Events/First-Time User Experience/Post Install Action")]
    public class PostInstallActionPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "post_install_action";

        static readonly string k_ParamKey_ActionId = "action_id";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public string actionId 
        {
            get { return GetParam<string>(k_ParamKey_ActionId); }
            set { SetParam(k_ParamKey_ActionId, value); }
        }

        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);
            if (key == k_ParamKey_ActionId && value != null)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        new public static PostInstallActionPayload CreateInstance (string actionId, IDictionary<string, object> eventData)
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_ActionId, actionId);

            return CreateInstance<PostInstallActionPayload>(eventData);
        }
    }
}
