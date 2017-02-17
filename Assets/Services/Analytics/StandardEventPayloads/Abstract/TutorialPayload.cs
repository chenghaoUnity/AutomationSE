using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    public abstract class TutorialPayload : AnalyticsEventPayload
    {
        protected static readonly string k_ParamKey_TutorialId = "tutorial_id";

        public string tutorialId
        {
            get { return GetParam<string>(k_ParamKey_TutorialId); }
            set { SetParam(k_ParamKey_TutorialId, value); }
        }

        protected override void ValidateDataField(string key, object value)
        {
            if (key == k_ParamKey_TutorialId && value != null)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        public static T CreateInstance<T> (string tutorialId, IDictionary<string, object> eventData) where T : TutorialPayload
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_TutorialId, tutorialId);

            return CreateInstance<T>(eventData);
        }
    }
}