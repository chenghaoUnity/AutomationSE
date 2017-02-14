using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "TutorialCompletePayload.asset", menuName = "Analytics Events/First-Time User Experience/Tutorial Complete")]
    public class TutorialCompletePayload : TutorialPayload
    {
        public static readonly string standardEventName = "tutorial_complete";

        public override string eventName
        {
            get { return standardEventName; }
        }

        new public static TutorialCompletePayload CreateInstance(string tutorialId, IDictionary<string, object> eventData)
        {
            return CreateInstance<TutorialCompletePayload>(tutorialId, eventData);
        }
    }
}
