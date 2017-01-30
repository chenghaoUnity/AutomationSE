using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "UserSignupPayload.asset", menuName = "Analytics Events/User Signup")]
    public class UserSignupPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "user_signup";

        public override string eventName
        {
            get { return standardEventName; }
        }
    }
}
