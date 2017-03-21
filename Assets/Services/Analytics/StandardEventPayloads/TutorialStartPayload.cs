using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Tutorial Start standard event payload (<c>tutorial_start</c>).
    /// <remarks>
    /// Send this event when the player starts a tutorial.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into tutorial progression rates among players.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "TutorialStartPayload.asset", menuName = "Analytics Events/First-Time User Experience/Tutorial Start")]
    public class TutorialStartPayload : TutorialPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "tutorial_start";

        /// <summary>
        /// Gets the standard event name.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
		}

        /// <summary>
        /// Creates a new instance of TutorialStartPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="TutorialStartPayload"/>.</returns>
        /// <param name="tutorialId">The tutorial name or ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        new public static TutorialStartPayload CreateInstance(string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<TutorialStartPayload>(tutorialId, eventData);
        }
    }
}
