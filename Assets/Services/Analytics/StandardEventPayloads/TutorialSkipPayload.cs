using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Tutorial skip payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "TutorialSkipPayload.asset", menuName = "Analytics Events/First-Time User Experience/Tutorial Skip")]
    public class TutorialSkipPayload : TutorialPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "tutorial_skip";

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
        new public static TutorialSkipPayload CreateInstance(string tutorialId, IDictionary<string, object> eventData)
        {
            return CreateInstance<TutorialSkipPayload>(tutorialId, eventData);
        }
    }
}
