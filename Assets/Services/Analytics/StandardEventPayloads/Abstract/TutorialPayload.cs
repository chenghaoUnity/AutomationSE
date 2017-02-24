using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Base class for all tutorial payloads.
    /// </summary>
    public abstract class TutorialPayload : AnalyticsEventPayload
    {
        private static readonly string k_ParamKey_TutorialId = "tutorial_id";

        /// <summary>
        /// Gets or sets the ID for the tutorial.
        /// </summary>
        /// <value>The tutorial ID.</value>
        public string tutorialId
        {
            get { return GetParam<string>(k_ParamKey_TutorialId); }
            set { SetParam(k_ParamKey_TutorialId, value); }
        }

        /// <summary>
        /// Validates that the tutorial ID is set with a <c>string</c> value.
        /// </summary>
        /// <param name="key">The key for the parameter being tested</param>
        /// <param name="value">The value of the parameter being tested</param>
        protected override void ValidateDataField(string key, object value)
        {
            if (key == k_ParamKey_TutorialId)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates an instance of the base TutorialPayload class, adding tutorialId to eventData. If eventData is null, creates the dictionary.
        /// </summary>
        /// <returns>The instance of TutorialPayload.</returns>
        /// <param name="achievementId">ID for the achievement.</param>
        /// <param name="eventData">Dictionary with any custom parameters.</param>
        /// <typeparam name="T">The payload type that inherits from TutorialPayload.</typeparam>
        protected static T CreateInstance<T> (string tutorialId, IDictionary<string, object> eventData) where T : TutorialPayload
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_TutorialId, tutorialId);

            return CreateInstance<T>(eventData);
        }
    }
}