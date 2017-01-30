using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "AchievementSharedPayload.asset", menuName = "Analytics Events/Achievement Shared")]
    public class AchievementSharedPayload : AchievementPayload
    {
        public static readonly string standardEventName = "achievement_shared";

        public override string eventName
        {
            get { return standardEventName; }
        }

        new public static AchievementSharedPayload CreateInstance (string achievementId)
        {
            return CreateInstance(achievementId, new Dictionary<string, object>());
        }

        new public static AchievementSharedPayload CreateInstance (string achievementId, IDictionary<string, object> eventData)
        {
            return CreateInstance<AchievementSharedPayload>(achievementId, eventData);
        }
    }
}
