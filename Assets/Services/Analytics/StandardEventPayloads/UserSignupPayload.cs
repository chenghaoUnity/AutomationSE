using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "UserSignupPayload.asset", menuName = "Analytics Events/User Engagement and Social/User Signup")]
    public class UserSignupPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "user_signup";

        protected static readonly string k_ParamKey_AuthorizationNetwork = "authorization_network";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public string authorizationNetwork
        {
            get { return GetParam<string>(k_ParamKey_AuthorizationNetwork); }
            set { SetParam(k_ParamKey_AuthorizationNetwork, value); }
        }

        public void SetAuthorizationNetwork (AuthorizationNetwork authorizationNetwork)
        {
            SetParam(k_ParamKey_AuthorizationNetwork, GetStandardParamValue(authorizationNetwork));
        }

        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_AuthorizationNetwork);
        }

        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_AuthorizationNetwork)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        public static UserSignupPayload CreateInstance (AuthorizationNetwork authorizationNetwork, IDictionary<string, object> eventData)
        {
            return CreateInstance(GetStandardParamValue(authorizationNetwork), eventData);
        }

        new public static UserSignupPayload CreateInstance (string authorizationNetwork, IDictionary<string, object> eventData)
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_AuthorizationNetwork, authorizationNetwork);

            return CreateInstance<UserSignupPayload>(eventData);
        }
    }
}
