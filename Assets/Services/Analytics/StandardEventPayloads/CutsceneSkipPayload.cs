using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "CutsceneSkipPayload.asset", menuName = "Analytics Events/App Navigation/Cutscene Skip")]
    public class CutsceneSkipPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "cutscene_skip";

        static readonly string k_ParamKey_SceneName = "scene_name";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public string sceneName 
        { 
            get { return GetParam<string>(k_ParamKey_SceneName); } 
            set { SetParam(k_ParamKey_SceneName, value); } 
        }

        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_SceneName);
        }

        protected override void ValidateDataField(string key, object value)
        {
            if (key == k_ParamKey_SceneName)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        new public static CutsceneSkipPayload CreateInstance(string sceneName, IDictionary<string, object> eventData)
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_SceneName, sceneName);

            return CreateInstance<CutsceneSkipPayload>(eventData);
        }
    }
}
