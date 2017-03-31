using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Game Over standard event payload (<c>game_over</c>).
    /// <remarks>
    /// Send this event when gameplay ends.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can help provide insight to duration of gameplay and progression rates among players. 
    /// The <c>game_over</c> event should be preceded by a <see cref="GameStartPayload"><c>game_start</c></see> event, 
    /// sent using AnalyticsEvent.GameStart or GameStartPayload.Send.
    /// This event is intended for use with games that do not utilize a traditional level structure, or for games that advance through 
    /// multiple levels over the course of a single gameplay while starting from a common entry level, such as 0 or 1.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "GameOverPayload.asset", menuName = "Analytics Payloads/Progression/Game Over")]
    public class GameOverPayload : GamePayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "game_over";

        /// <summary>
        /// Gets the name of the standard event.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Creates a new instance of GameOverPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="GameOverPayload"/>.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        new public static GameOverPayload CreateInstance (string levelName, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<GameOverPayload>(levelName, eventData);
        }

        /// <summary>
        /// Creates a new instance of GameOverPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="GameOverPayload"/>.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static GameOverPayload CreateInstance (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<GameOverPayload>(levelIndex, levelName, eventData);
        }
    }
}
