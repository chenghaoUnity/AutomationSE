using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Level skip payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "LevelSkipPayload.asset", menuName = "Analytics Events/Game Progression/Level Skip")]
    public class LevelSkipPayload : LevelPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "level_skip";

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
        /// <param name="levelIndex">Level index.</param>
        /// <param name="eventData">Event data.</param>
        public static LevelSkipPayload CreateInstance (int levelIndex, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelSkipPayload>(levelIndex, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        new public static LevelSkipPayload CreateInstance (string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelSkipPayload>(levelName, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="levelIndex">Level index.</param>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static LevelSkipPayload CreateInstance (int levelIndex, string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelSkipPayload>(levelIndex, levelName, eventData);
        }
    }
}
