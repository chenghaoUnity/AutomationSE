using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Achievement unlocked payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "AchievementUnlockedPayload.asset", menuName = "Analytics Events/User Engagement and Social/Achievement Unlocked")]
    public class AchievementUnlockedPayload : AchievementPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "achievement_unlocked";

        /// <summary>
        /// Gets the name of the event.
        /// </summary>
        /// <value>The name of the event.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="achievementId">Achievement identifier.</param>
        /// <param name="eventData">Event data.</param>
        new public static AchievementUnlockedPayload CreateInstance (string achievementId, IDictionary<string, object> eventData)
        {
            return CreateInstance<AchievementUnlockedPayload>(achievementId, eventData);
        }
    }
}
