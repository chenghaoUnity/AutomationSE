using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "SocialSharePayload.asset", menuName = "Analytics Events/User Engagement and Social/Social Share")]
    public class SocialSharePayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "social_share";

        static readonly string k_ParamKey_ShareType = "share_type";
        static readonly string k_ParamKey_SocialNetwork = "social_network";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public string shareType
        {
            get { return GetParam<string>(k_ParamKey_ShareType); }
            set { SetParam(k_ParamKey_ShareType, value); }
        }

        public string socialNetwork
        {
            get { return GetParam<string>(k_ParamKey_SocialNetwork); }
            set { SetParam(k_ParamKey_SocialNetwork, value); }
        }

        public void SetShareType (ShareType shareType)
        {
            SetParam(k_ParamKey_ShareType, GetStandardParamValue(shareType));
        }

        public void SetSocialNetwork (SocialNetwork socialNetwork)
        {
            SetParam(k_ParamKey_SocialNetwork, GetStandardParamValue(socialNetwork));
        }

        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateAllDataKeysExist(k_ParamKey_ShareType, k_ParamKey_SocialNetwork);
        }

        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_ShareType || key == k_ParamKey_SocialNetwork)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        public static SocialSharePayload CreateInstance (ShareType shareType, SocialNetwork socialNetwork, IDictionary<string, object> eventData)
        {
            return CreateInstance(GetStandardParamValue(shareType), GetStandardParamValue(socialNetwork), eventData);
        }

        public static SocialSharePayload CreateInstance (ShareType shareType, string socialNetwork, IDictionary<string, object> eventData)
        {
            return CreateInstance(GetStandardParamValue(shareType), socialNetwork, eventData);
        }

        public static SocialSharePayload CreateInstance (string shareType, SocialNetwork socialNetwork, IDictionary<string, object> eventData)
        {
            return CreateInstance(shareType, GetStandardParamValue(socialNetwork), eventData);
        }

        public static SocialSharePayload CreateInstance (string shareType, string socialNetwork, IDictionary<string, object> eventData)
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_ShareType, shareType);
            eventData.Add(k_ParamKey_SocialNetwork, socialNetwork);

            return CreateInstance<SocialSharePayload>(eventData);
        }
    }
}
