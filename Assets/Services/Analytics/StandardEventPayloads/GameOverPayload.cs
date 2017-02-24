using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Game over payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "GameOverPayload.asset", menuName = "Analytics Events/Game Progression/Game Over")]
    public class GameOverPayload : GamePayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "game_over";

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
        public static GameOverPayload CreateInstance (int levelIndex, IDictionary<string, object> eventData)
        {
            return CreateInstance<GameOverPayload>(levelIndex, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        new public static GameOverPayload CreateInstance (string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<GameOverPayload>(levelName, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="levelIndex">Level index.</param>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static GameOverPayload CreateInstance (int levelIndex, string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<GameOverPayload>(levelIndex, levelName, eventData);
        }
    }
}
