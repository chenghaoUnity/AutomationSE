using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Level Skip standard event payload (<c>level_skip</c>).
    /// <remarks>
    /// Send this event when the player opts to skip a level in order to contiue onto the next without having to completing it.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can help provide insight into level progression rates among players, and potentially help predict when players may churn.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "LevelSkipPayload.asset", menuName = "Analytics Events/Game Progression/Level Skip")]
    public class LevelSkipPayload : LevelPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "level_skip";

        /// <summary>
        /// Gets the name of the standard event.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Creates a new instance of LevelSkipPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="LevelSkipPayload"/>.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        new public static LevelSkipPayload CreateInstance (string levelName, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<LevelSkipPayload>(levelName, eventData);
        }

        /// <summary>
        /// Creates a new instance of LevelSkipPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="LevelSkipPayload"/>.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static LevelSkipPayload CreateInstance (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<LevelSkipPayload>(levelIndex, levelName, eventData);
        }
    }
}
