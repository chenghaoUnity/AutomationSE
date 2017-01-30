using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "CutsceneSkipPayload.asset", menuName = "Analytics Events/Cutscene Skip")]
    public class CutsceneSkipPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "cutscene_skip";

        static readonly string k_ParamKey_ElementId = "element_id";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public string elementId 
        { 
            get { return GetParam<string>(k_ParamKey_ElementId); } 
            set { SetParam(k_ParamKey_ElementId, value); } 
        }

        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            if (!HasParam(k_ParamKey_ElementId))
            {
                OnValidationFailed(
                    string.Format(
                        k_ErrorFormat_RequiredParamNotSet,
                        k_ParamKey_ElementId
                    )
                );
            }
        }

        protected override void ValidateDataField(string key, object value)
        {
            if (key == k_ParamKey_ElementId)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        new public static CutsceneSkipPayload CreateInstance(string elementId)
        {
            return CreateInstance(elementId, new Dictionary<string, object>());
        }

        new public static CutsceneSkipPayload CreateInstance(string elementId, IDictionary<string, object> eventParams)
        {
            eventParams.Add(k_ParamKey_ElementId, elementId);
            return CreateInstance<CutsceneSkipPayload>(eventParams);
        }
    }
}
