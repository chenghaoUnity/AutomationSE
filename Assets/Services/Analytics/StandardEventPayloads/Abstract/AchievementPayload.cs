using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Base class for all achievement payloads.
    /// </summary>
    public abstract class AchievementPayload : AnalyticsEventPayload
    {
        private static string k_ParamKey_AchievementId = "achievement_id";

        /// <summary>
        /// Gets or sets the ID for the achievement.
        /// </summary>
        /// <value>The achievement ID.</value>
        public string achievementId
        {
            get { return GetParam<string>(k_ParamKey_AchievementId); }
            set { SetParam(k_ParamKey_AchievementId, value); }
        }

        /// <summary>
        /// Validates the payload, ensuring the achievement ID has been set.
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_AchievementId);
        }

        /// <summary>
        /// Validates that the achievement ID is set with a <c>string</c> value.
        /// </summary>
        /// <param name="key">The key for the parameter being tested</param>
        /// <param name="value">The value of the parameter being tested</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_AchievementId)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates an instance of the base AchievementPayload class, adding achievementId to eventData. If eventData is null, creates the dictionary.
        /// </summary>
        /// <returns>The instance of AchievementPayload.</returns>
        /// <param name="achievementId">ID for the achievement.</param>
        /// <param name="eventData">Dictionary with any custom parameters.</param>
        /// <typeparam name="T">The payload type that inherits from AchievementPayload.</typeparam>
        protected static T CreateInstance<T> (string achievementId, IDictionary<string, object> eventData) where T : AchievementPayload
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
