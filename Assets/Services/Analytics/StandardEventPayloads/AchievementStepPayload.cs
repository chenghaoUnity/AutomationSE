using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "AchievementStepPayload.asset", menuName = "Analytics Events/User Engagement and Social/Achievement Step")]
    public class AchievementStepPayload : AchievementPayload
    {
        public static readonly string standardEventName = "achievement_step";

        protected static string k_ParamKey_StepIndex = "step_index";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public int stepIndex 
        {
            get { return GetParam<int>(k_ParamKey_StepIndex); }
            set { SetParam(k_ParamKey_StepIndex, value); }
        }

        protected override void ValidatePayload()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_StepIndex);
        }

        protected override void ValidateDataField(string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_StepIndex)
            {
                ValidateDataValueType<int>(key, value);
            }
        }

        public static AchievementStepPayload CreateInstance(int stepIndex, string achievementId, IDictionary<string, object> eventData)
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_StepIndex, stepIndex);

            return CreateInstance<AchievementStepPayload>(achievementId, eventData);
        }
    }
}