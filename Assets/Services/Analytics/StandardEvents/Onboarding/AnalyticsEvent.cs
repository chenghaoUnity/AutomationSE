using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    public static partial class AnalyticsEvent // Onboarding Events
    {
        /// <summary>
        /// Sends a <c>post_install_action</c> event using the PostInstallActionPayload.
        /// <remarks>
        /// Send this event with the first action the user takes after install. 
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into the amount of time it takes for players to engage with your game after install, 
        /// or if there is any interaction at all after install.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="actionId">The action ID or name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult PostInstallAction (string actionId = null, IDictionary<string, object> eventData = null)
        {
            return PostInstallActionPayload.CreateInstance(actionId, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>tutorial_complete</c> event using the TutorialCompletePayload.
        /// <remarks>
        /// Send this event when the player completes a tutorial.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into tutorial completion rates among players.
        /// The <c>tutorial_complete</c> event should be preceded by an <see cref="TutorialStartPayload"><c>tutorial_start</c></see> event,
        /// sent using AnalyticsEvent.TutorialStart or TutorialStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="tutorialId">The tutorial name or ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult TutorialComplete (string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return TutorialCompletePayload.CreateInstance(tutorialId, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>tutorial_skip</c> event using the TutorialSkipPayload.
        /// <remarks>
        /// Send this event when the player opts to skip a tutorial.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into tutorial progression rates among players.
        /// The <c>tutorial_complete</c> event should be preceded by an <see cref="TutorialStartPayload"><c>tutorial_start</c></see> event,
        /// sent using AnalyticsEvent.TutorialStart or TutorialStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="tutorialId">The tutorial name or ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult TutorialSkip (string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return TutorialSkipPayload.CreateInstance(tutorialId, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>tutorial_start</c> event using the TutorialStartPayload.
        /// <remarks>
        /// Send this event when the player starts a tutorial.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into tutorial progression rates among players.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="tutorialId">The tutorial name or ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult TutorialStart (string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return TutorialStartPayload.CreateInstance(tutorialId, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>tutorial_step</c> event using the TutorialStepPayload.
        /// <remarks>
        /// Send this event when the player completes a step or stage in a multi-part tutorial.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into tutorial progression rates among players.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="stepIndex">The step or stage completed in a multi-part tutorial.</param>
        /// <param name="tutorialId">The tutorial name or ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult TutorialStep (int stepIndex, string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return TutorialStepPayload.CreateInstance(stepIndex, tutorialId, eventData).Send();
        }
    }
}
