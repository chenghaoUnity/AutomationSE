using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Tutorial start payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "TutorialStartPayload.asset", menuName = "Analytics Events/First-Time User Experience/Tutorial Start")]
    public class TutorialStartPayload : TutorialPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "tutorial_start";

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
        /// <param name="tutorialId">Tutorial identifier.</param>
        /// <param name="eventData">Event data.</param>
        new public static TutorialStartPayload CreateInstance(string tutorialId, IDictionary<string, object> eventData)
        {
            return CreateInstance<TutorialStartPayload>(tutorialId, eventData);
        }
    }
}
