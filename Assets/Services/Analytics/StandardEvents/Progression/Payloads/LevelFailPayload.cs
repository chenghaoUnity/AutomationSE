using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Level Fail standard event payload (<c>level_fail</c>).
    /// <remarks>
    /// Send this event when the player fails to successfully complete a level.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can help provide insight into level progression rates among players, and potentially help predict when players may churn.
    /// The <c>level_fail</c> event should be preceded by a <see cref="LevelStartPayload"><c>level_start</c></see> event, 
    /// sent using AnalyticsEvent.LevelStart or LevelStartPayload.Send.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "LevelFailPayload.asset", menuName = "Analytics Payloads/Progression/Level Fail")]
    public class LevelFailPayload : LevelPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "level_fail";

        /// <summary>
        /// Gets the name of the standard event.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Creates a new instance of LevelFailPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="LevelFailPayload"/>.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        new public static LevelFailPayload CreateInstance (string levelName, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<LevelFailPayload>(levelName, eventData);
        }

        /// <summary>
        /// Creates a new instance of LevelFailPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="LevelFailPayload"/>.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static LevelFailPayload CreateInstance (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<LevelFailPayload>(levelIndex, levelName, eventData);
        }
    }
}
