using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Level complete payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "LevelCompletePayload.asset", menuName = "Analytics Events/Game Progression/Level Complete")]
    public class LevelCompletePayload : LevelPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "level_complete";

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
        public static LevelCompletePayload CreateInstance (int levelIndex, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelCompletePayload>(levelIndex, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        new public static LevelCompletePayload CreateInstance (string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelCompletePayload>(levelName, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="levelIndex">Level index.</param>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static LevelCompletePayload CreateInstance (int levelIndex, string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelCompletePayload>(levelIndex, levelName, eventData);
        }
    }
}
