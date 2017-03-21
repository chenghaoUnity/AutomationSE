using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Level Complete standard event payload (<c>level_complete</c>).
    /// <remarks>
    /// Send this event when the player sucessfully completes a level.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can help provide insight into level progression rates among players.
    /// The <c>level_complete</c> event should be preceded by a <see cref="LevelStartPayload"><c>level_start</c></see> event, 
    /// sent using AnalyticsEvent.LevelStart or LevelStartPayload.Send.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "LevelCompletePayload.asset", menuName = "Analytics Events/Game Progression/Level Complete")]
    public class LevelCompletePayload : LevelPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "level_complete";

        /// <summary>
        /// Gets the name of the standard event.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Creates a new instance of LevelCompletePayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="LevelCompletePayload"/>.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        new public static LevelCompletePayload CreateInstance (string levelName, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<LevelCompletePayload>(levelName, eventData);
        }

        /// <summary>
        /// Creates a new instance of LevelCompletePayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="LevelCompletePayload"/>.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static LevelCompletePayload CreateInstance (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<LevelCompletePayload>(levelIndex, levelName, eventData);
        }
    }
}