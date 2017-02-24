using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Level quit payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "LevelQuitPayload.asset", menuName = "Analytics Events/Game Progression/Level Quit")]
    public class LevelQuitPayload : LevelPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "level_quit";

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
        public static LevelQuitPayload CreateInstance (int levelIndex, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelQuitPayload>(levelIndex, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        new public static LevelQuitPayload CreateInstance (string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelQuitPayload>(levelName, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="levelIndex">Level index.</param>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static LevelQuitPayload CreateInstance (int levelIndex, string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelQuitPayload>(levelIndex, levelName, eventData);
        }
    }
}
