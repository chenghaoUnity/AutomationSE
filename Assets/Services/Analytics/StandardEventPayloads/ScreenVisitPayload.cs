using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "ScreenVisitPayload.asset", menuName = "Analytics Events/User Engagement and Social/Screen Visit")]
    public class ScreenVisitPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "screen_visit";

        static readonly string k_ParamKey_ScreenType = "screen_name";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public string screenType
        {
            get { return GetParam<string>(k_ParamKey_ScreenType); }
            set { SetParam(k_ParamKey_ScreenType, value); }
        }

        public void SetScreenType (ScreenName screenType)
        {
            SetParam(k_ParamKey_ScreenType, screenType);
        }

        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_ScreenType);
        }

        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_ScreenType)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        public static ScreenVisitPayload CreateInstance (ScreenName screenType, IDictionary<string, object> eventData)
        {
            return CreateInstance(GetStandardParamValue(screenType), eventData);
        }

        new public static ScreenVisitPayload CreateInstance (string screenType, IDictionary<string, object> eventData)
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_ScreenType, screenType);

            return CreateInstance<ScreenVisitPayload>(eventData);
        }
    }
}
