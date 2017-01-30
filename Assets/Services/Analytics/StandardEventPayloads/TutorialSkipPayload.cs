using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "TutorialSkippedPayload.asset", menuName = "Analytics Events/Tutorial Skipped")]
    public class TutorialSkipPayload : TutorialPayload
    {
        public static readonly string standardEventName = "tutorial_complete";

        public override string eventName
        {
            get { return standardEventName; }
        }

        new public static TutorialSkipPayload CreateInstance(string tutorialId)
        {
            return CreateInstance(tutorialId, new Dictionary<string, object>());
        }

        new public static TutorialSkipPayload CreateInstance(string tutorialId, IDictionary<string, object> eventParams)
        {
            return CreateInstance<TutorialSkipPayload>(tutorialId, eventParams);
        }
    }
}
