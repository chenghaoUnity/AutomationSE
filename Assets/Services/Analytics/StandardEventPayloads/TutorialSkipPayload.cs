using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "TutorialSkipPayload.asset", menuName = "Analytics Events/First-Time User Experience/Tutorial Skip")]
    public class TutorialSkipPayload : TutorialPayload
    {
        public static readonly string standardEventName = "tutorial_skip";

        public override string eventName
        {
            get { return standardEventName; }
        }

        new public static TutorialSkipPayload CreateInstance(string tutorialId, IDictionary<string, object> eventData)
        {
            return CreateInstance<TutorialSkipPayload>(tutorialId, eventData);
        }
    }
}
