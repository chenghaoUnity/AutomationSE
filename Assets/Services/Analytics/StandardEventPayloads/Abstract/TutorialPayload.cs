using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Base standard event class from which tutorial payload classes derive.
    /// </summary>
    public abstract class TutorialPayload : AnalyticsEventPayload
    {
        static readonly string k_ParamKey_TutorialId = "tutorial_id";

        /// <summary>
        /// Gets or sets the ID or name of the tutorial.
        /// </summary>
        /// <value>The tutorial ID or name.</value>
        public string tutorialId
        {
            get { return GetParam<string>(k_ParamKey_TutorialId); }
            set { SetParam(k_ParamKey_TutorialId, value); }
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>tutorial_id</c> parameter values must be of type <c>string</c> to be valid.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField(string key, object value)
        {
            if (key == k_ParamKey_TutorialId)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates a new instance of payload type <c>T</c> and adds parameters to event data.
        /// </summary>
        /// <returns>The new instance of payload type <c>T</c>, where <c>T</c> inherits from <see cref="AdPayload"/>.</returns>
        /// <param name="tutorialId">The tutorial ID or name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        /// <typeparam name="T">Payload type that inherits from <see cref="AdPayload"/>.</typeparam>
        protected static T CreateInstance<T> (string tutorialId = null, IDictionary<string, object> eventData = null) where T : TutorialPayload
        {
            var instance = CreateInstance<T>(eventData);

            instance.SetParam(k_ParamKey_TutorialId, tutorialId);

            return instance;
        }
    }
}