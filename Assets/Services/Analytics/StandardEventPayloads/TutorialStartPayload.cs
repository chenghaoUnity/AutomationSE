using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "TutorialStartPayload.asset", menuName = "Analytics Events/First-Time User Experience/Tutorial Start")]
    public class TutorialStartPayload : TutorialPayload
    {
        public static readonly string standardEventName = "tutorial_start";

        public override string eventName
        {
            get { return standardEventName; }
		}

        new public static TutorialStartPayload CreateInstance(string tutorialId, IDictionary<string, object> eventData)
        {
            return CreateInstance<TutorialStartPayload>(tutorialId, eventData);
        }
    }
}
