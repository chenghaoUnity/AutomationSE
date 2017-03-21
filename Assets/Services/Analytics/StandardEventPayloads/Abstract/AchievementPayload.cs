using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Base standard event class from which achievement payload classes derive.
    /// </summary>
    public abstract class AchievementPayload : AnalyticsEventPayload
    {
        static readonly string k_ParamKey_AchievementId = "achievement_id";

        /// <summary>
        /// Gets or sets the ID of the achievement.
        /// </summary>
        /// <value>The achievement ID.</value>
        public string achievementId
        {
            get { return GetParam<string>(k_ParamKey_AchievementId); }
            set { SetParam(k_ParamKey_AchievementId, value); }
        }

        /// <summary>
        /// Verifies that any required event data parameters are set.
        /// <remarks>
        /// The <c>achievement_id</c> parameter must be set for the payload to be valid.
        /// </remarks>
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_AchievementId);
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>achievement_id</c> parameter value must be of type <c>string</c> to be valid.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_AchievementId)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates a new instance of payload type <c>T</c>, where <c>T</c> inherits from AchievementPayload.
        /// </summary>
        /// <returns>A new instance of payload type <c>T</c>, where <c>T</c> inherits from <see cref="AchievementPayload"/>.</returns>
        /// <param name="achievementId">The achievement ID.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        /// <typeparam name="T">Payload type that inherits from <see cref="AchievementPayload"/>.</typeparam>
        protected static T CreateInstance<T> (string achievementId, IDictionary<string, object> eventData = null) where T : AchievementPayload
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_AchievementId, achievementId);

            return CreateInstance<T>(eventData);
        }
    }
}
