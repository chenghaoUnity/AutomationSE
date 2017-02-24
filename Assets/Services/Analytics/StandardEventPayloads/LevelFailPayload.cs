using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Level fail payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "LevelFailPayload.asset", menuName = "Analytics Events/Game Progression/Level Fail")]
    public class LevelFailPayload : LevelPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "level_fail";

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
        public static LevelFailPayload CreateInstance (int levelIndex, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelFailPayload>(levelIndex, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        new public static LevelFailPayload CreateInstance (string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelFailPayload>(levelName, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="levelIndex">Level index.</param>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static LevelFailPayload CreateInstance (int levelIndex, string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelFailPayload>(levelIndex, levelName, eventData);
        }
    }
}
