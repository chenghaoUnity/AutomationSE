using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "TutorialCompletePayload.asset", menuName = "Analytics Events/Tutorial Complete")]
    public class TutorialCompletePayload : TutorialPayload
    {
        public static readonly string standardEventName = "tutorial_complete";

        public override string eventName
        {
            get { return standardEventName; }
        }

        new public static TutorialCompletePayload CreateInstance(string tutorialId)
        {
            return CreateInstance(tutorialId, new Dictionary<string, object>());
        }

        new public static TutorialCompletePayload CreateInstance(string tutorialId, IDictionary<string, object> eventParams)
        {
            return CreateInstance<TutorialCompletePayload>(tutorialId, eventParams);
        }
    }
}
