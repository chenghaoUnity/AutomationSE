using System;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Game start payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "GameStartPayload.asset", menuName = "Analytics Events/Game Progression/Game Start")]
    public class GameStartPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "game_start";

        /// <summary>
        /// Gets the name of the event.
        /// </summary>
        /// <value>The name of the event.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }
    }
}
