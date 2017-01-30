using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "TutorialStartPayload.asset", menuName = "Analytics Events/Tutorial Start")]
    public class TutorialStartPayload : TutorialPayload
    {
        public static readonly string standardEventName = "tutorial_start";

        public override string eventName
        {
            get { return standardEventName; }
		}

        new public static TutorialStartPayload CreateInstance(string tutorialId)
        {
            return CreateInstance(tutorialId, new Dictionary<string, object>());
        }

        new public static TutorialStartPayload CreateInstance(string tutorialId, IDictionary<string, object> eventParams)
        {
            return CreateInstance<TutorialStartPayload>(tutorialId, eventParams);
        }
    }
}
