using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "TutorialStepPayload.asset", menuName = "Analytics Events/First-Time User Experience/Tutorial Step")]
    public class TutorialStepPayload : TutorialPayload
    {
        public static readonly string standardEventName = "tutorial_step";

        static readonly string k_ParamKey_StepIndex = "step_index";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public int stepId
        {
            get { return GetParam<int>(k_ParamKey_StepIndex); }
            set { SetParam(k_ParamKey_StepIndex, value); }
        }

        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_StepIndex);
        }

        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_StepIndex)
            {
                ValidateDataValueType<int>(key, value);
            }
        }

        public static TutorialStepPayload CreateInstance (int stepIndex, string tutorialId, IDictionary<string, object> eventData)
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_StepIndex, stepIndex);

            return CreateInstance<TutorialStepPayload>(tutorialId, eventData);
        }
    }
}
