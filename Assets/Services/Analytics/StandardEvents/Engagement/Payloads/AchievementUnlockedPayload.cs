using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Achievement Unlocked standard event payload (<c>achievement_unlocked</c>).
    /// <remarks>
    /// Send this event when all requirements to unlock an achievement have been met.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can help provide insight to achievement completion rates among players. 
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "AchievementUnlockedPayload.asset", menuName = "Analytics Payloads/Engagement/Achievement Unlocked")]
    public class AchievementUnlockedPayload : AchievementPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "achievement_unlocked";

        /// <summary>
        /// Gets the name of the standard event.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Creates a new instance of AchievementUnlockedPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="AchievementUnlockedPayload"/>.</returns>
        /// <param name="achievementId">The achievement ID.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        new public static AchievementUnlockedPayload CreateInstance (string achievementId, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AchievementUnlockedPayload>(achievementId, eventData);
        }
    }
}
