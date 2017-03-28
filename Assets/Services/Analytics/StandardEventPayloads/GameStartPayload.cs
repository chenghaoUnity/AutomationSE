using System;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Game Start standard event payload (<c>game_start</c>).
    /// <remarks>
    /// Send this event when gameplay starts.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can help provide insight to duration of gameplay and progression rates among players. 
    /// The <c>game_start</c> event should precede the <see cref="GameOverPayload"><c>game_over</c></see> event, 
    /// sent using AnalyticsEvent.GameOver or GameOverPayload.Send.
    /// This event is intended for use with games that do not utilize a traditional level structure, or for games that advance through 
    /// multiple levels over the course of a single gameplay while starting from a common entry level, such as 0 or 1.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "GameStartPayload.asset", menuName = "Analytics Events/Game Progression/Game Start")]
    public class GameStartPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "game_start";

        /// <summary>
        /// Gets the name of the standard event.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }
    }
}
