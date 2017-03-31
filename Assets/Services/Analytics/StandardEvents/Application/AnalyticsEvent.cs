using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    public static partial class AnalyticsEvent // Application Events
    {
        /// <summary>
        /// Sends a <c>cutscene_skip</c> event using the CutsceneSkipPayload.
        /// <remarks>
        /// Send this event when the player opts to skip a cutscene or cinematic screen.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into how cutscenes may affect player engagement.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="cutsceneName">The cutscene name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult CutsceneSkip (string cutsceneName, IDictionary<string, object> eventData = null)
        {
            return CutsceneSkipPayload.CreateInstance(cutsceneName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>screen_visit</c> event using the ScreenVisitPayload.
        /// <remarks>
        /// Send this event when the player opens a menu or visits a screen in the game.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into navigational flows, and may help predict when players may churn.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="screenName">The name of the screen or type of screen visited.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult ScreenVisit (ScreenName screenName, IDictionary<string, object> eventData = null)
        {
            return ScreenVisitPayload.CreateInstance(screenName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>screen_visit</c> event using the ScreenVisitPayload.
        /// <remarks>
        /// Send this event when the player opens a menu or visits a screen in the game.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into navigational flows, and may help predict when players may churn.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="screenName">The name of the screen or type of screen visited.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult ScreenVisit (string screenName, IDictionary<string, object> eventData = null)
        {
            return ScreenVisitPayload.CreateInstance(screenName, eventData).Send();
        }
    }
}
