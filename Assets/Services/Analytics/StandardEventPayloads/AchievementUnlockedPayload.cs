using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "AchievementUnlockedPayload.asset", menuName = "Analytics Events/User Engagement and Social/Achievement Unlocked")]
    public class AchievementUnlockedPayload : AchievementPayload
    {
        public static readonly string standardEventName = "achievement_unlocked";

        public override string eventName
        {
            get { return standardEventName; }
        }

        new public static AchievementUnlockedPayload CreateInstance (string achievementId, IDictionary<string, object> eventData)
        {
            return CreateInstance<AchievementUnlockedPayload>(achievementId, eventData);
        }
    }
}
