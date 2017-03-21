using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Tutorial Complete standard event payload (<c>tutorial_complete</c>).
    /// <remarks>
    /// Send this event when the player completes a tutorial.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into tutorial completion rates among players.
    /// The <c>tutorial_complete</c> event should be preceded by an <see cref="TutorialStartPayload"><c>tutorial_start</c></see> event,
    /// sent using AnalyticsEvent.TutorialStart or TutorialStartPayload.Send.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "TutorialCompletePayload.asset", menuName = "Analytics Events/First-Time User Experience/Tutorial Complete")]
    public class TutorialCompletePayload : TutorialPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "tutorial_complete";

        /// <summary>
        /// Gets the standard event name.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Creates a new instance of TutorialCompletePayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="TutorialCompletePayload"/>.</returns>
        /// <param name="tutorialId">The tutorial name or ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        new public static TutorialCompletePayload CreateInstance(string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<TutorialCompletePayload>(tutorialId, eventData);
        }
    }
}
