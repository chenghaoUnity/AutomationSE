using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Level Start standard event payload (<c>level_start</c>).
    /// <remarks>
    /// Send this event when the player enters into or begins a level.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can help provide insight into level progression rates among players.
    /// The <c>level_start</c> event should precede most other level specific events, including <see cref="LevelCompletePayload">
    /// <c>level_complete</c></see>, <see cref="LevelFailPayload"><c>level_fail</c></see>, and <see cref="LevelQuitPayload"><c>level_quit</c></see>. 
    /// The <see cref="LevelSkipPayload"><c>level_skip</c></see> event does not need to be preceded by <c>level_start</c> 
    /// if the level is skipped without having to enter into the level.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "LevelStartPayload.asset", menuName = "Analytics Events/Game Progression/Level Start")]
    public class LevelStartPayload : LevelPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "level_start";

        /// <summary>
        /// Gets the name of the standard event.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Creates a new instance of LevelStartPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="LevelStartPayload"/>.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        new public static LevelStartPayload CreateInstance (string levelName, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<LevelStartPayload>(levelName, eventData);
        }

        /// <summary>
        /// Creates a new instance of LevelStartPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="LevelStartPayload"/>.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static LevelStartPayload CreateInstance (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<LevelStartPayload>(levelIndex, levelName, eventData);
        }
    }
}
