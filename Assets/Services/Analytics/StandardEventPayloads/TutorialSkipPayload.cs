using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Tutorial Skip standard event payload (<c>tutorial_skip</c>).
    /// <remarks>
    /// Send this event when the player opts to skip a tutorial.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into tutorial progression rates among players.
    /// The <c>tutorial_complete</c> event should be preceded by an <see cref="TutorialStartPayload"><c>tutorial_start</c></see> event,
    /// sent using AnalyticsEvent.TutorialStart or TutorialStartPayload.Send.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "TutorialSkipPayload.asset", menuName = "Analytics Events/First-Time User Experience/Tutorial Skip")]
    public class TutorialSkipPayload : TutorialPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "tutorial_skip";

        /// <summary>
        /// Gets the standard event name.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Creates a new instance of TutorialSkipPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="TutorialSkipPayload"/>.</returns>
        /// <param name="tutorialId">The tutorial name or ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        new public static TutorialSkipPayload CreateInstance(string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<TutorialSkipPayload>(tutorialId, eventData);
        }
    }
}
