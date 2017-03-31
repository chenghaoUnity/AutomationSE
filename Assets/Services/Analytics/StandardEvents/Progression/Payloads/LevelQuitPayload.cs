using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Level Quit standard event payload (<c>level_quit</c>).
    /// <remarks>
    /// Send this event when the player opts to quit from a level before completing it.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can help provide insight into gameplay attrition rates by level, and potentially help predict when players may churn.
    /// The <c>level_quit</c> event should be preceded by a <see cref="LevelStartPayload"><c>level_start</c></see> event, 
    /// sent using AnalyticsEvent.LevelStart or LevelStartPayload.Send.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "LevelQuitPayload.asset", menuName = "Analytics Payloads/Progression/Level Quit")]
    public class LevelQuitPayload : LevelPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "level_quit";

        /// <summary>
        /// Gets the name of the standard event.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Creates a new instance of LevelQuitPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="LevelQuitPayload"/>.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        new public static LevelQuitPayload CreateInstance (string levelName, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<LevelQuitPayload>(levelName, eventData);
        }

        /// <summary>
        /// Creates a new instance of LevelQuitPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="LevelQuitPayload"/>.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static LevelQuitPayload CreateInstance (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<LevelQuitPayload>(levelIndex, levelName, eventData);
        }
    }
}
