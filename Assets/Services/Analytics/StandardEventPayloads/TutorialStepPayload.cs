using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "TutorialStepPayload.asset", menuName = "Analytics Events/Tutorial Step")]
    public class TutorialStepPayload : TutorialPayload
    {
        public static readonly string standardEventName = "tutorial_step";

        static readonly string k_ParamKey_StepId = "step_id";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public string stepId
        {
            get { return GetParam<string>(k_ParamKey_StepId); }
            set { SetParam(k_ParamKey_StepId, value); }
        }

        protected override void ValidatePayload ()
        {
            if (!HasParam(k_ParamKey_StepId))
            {
                OnValidationFailed(
                    string.Format(
                        k_ErrorFormat_RequiredParamNotSet,
                        k_ParamKey_StepId
                    )
                );
            }
        }

        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_StepId)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        new public static TutorialStepPayload CreateInstance (string stepId)
        {
            return CreateInstance(stepId, new Dictionary<string, object>());
        }

        new public static TutorialStepPayload CreateInstance (string stepId, IDictionary<string, object> eventParams)
        {
            eventParams.Add(k_ParamKey_StepId, stepId);
            return CreateInstance<TutorialStepPayload>(eventParams);
        }

        public static TutorialStepPayload CreateInstance (string stepId, string tutorialId)
        {
            return CreateInstance(stepId, tutorialId, new Dictionary<string, object>());
        }

        public static TutorialStepPayload CreateInstance (string stepId, string tutorialId, IDictionary<string, object> eventParams)
        {
            eventParams.Add(k_ParamKey_StepId, stepId);
            return CreateInstance<TutorialStepPayload>(tutorialId, eventParams);
        }
    }
}
