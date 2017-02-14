using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    public abstract class AchievementPayload : AnalyticsEventPayload
    {
        protected static string k_ParamKey_AchievementId = "achievement_id";

        public string achievementId
        {
            get { return GetParam<string>(k_ParamKey_AchievementId); }
            set { SetParam(k_ParamKey_AchievementId, value); }
        }

        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_AchievementId);
        }

        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_AchievementId)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        public static T CreateInstance<T> (string achievementId, IDictionary<string, object> eventData) where T : AchievementPayload
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_AchievementId, achievementId);

            return CreateInstance<T>(eventData);
        }
    }
}
