using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Base class for all level payloads.
    /// </summary>
    public abstract class LevelPayload : AnalyticsEventPayload
    {
        private static string k_ParamKey_LevelIndex = "level_index";
        private static string k_ParamKey_LevelName = "level_name";

        /// <summary>
        /// Gets or sets the index of the level.
        /// </summary>
        /// <value>The index of the level.</value>
        public int levelIndex
        {
            get { return GetParam<int>(k_ParamKey_LevelIndex); }
            set { SetParam(k_ParamKey_LevelIndex, value); }
        }

        /// <summary>
        /// Gets or sets the name of the level.
        /// </summary>
        /// <value>The name of the level.</value>
        public string levelName
        {
            get { return GetParam<string>(k_ParamKey_LevelName); }
            set { SetParam(k_ParamKey_LevelName, value); }
        }

        /// <summary>
        /// Validates the payload, ensuring at least either level index or level name.
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateAtLeastOneDataKeyExists(k_ParamKey_LevelIndex, k_ParamKey_LevelName);
        }

        /// <summary>
        /// Validates that the level name is set with a <c>string</c> value and level index is set with a <c>int</c> value.
        /// </summary>
        /// <param name="key">The key for the parameter being tested</param>
        /// <param name="value">The value of the parameter being tested</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_LevelIndex)
            {
                ValidateDataValueType<int>(key, value);
            }
            else if (key == k_ParamKey_LevelName)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates an instance of the base LevelPayload class, adding levelIndex to eventData. If eventData is null, creates the dictionary.
        /// </summary>
        /// <returns>The instance of LevelPayload.</returns>
        /// <param name="levelIndex">The index of the level.</param>
        /// <param name="eventData">Dictionary with any custom parameters.</param>
        /// <typeparam name="T">The payload type that inherits from LevelPayload.</typeparam>
        protected static T CreateInstance<T> (int levelIndex, IDictionary<string, object> eventData) where T : LevelPayload
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_LevelIndex, levelIndex);

            return CreateInstance<T>(eventData);
        }

        /// <summary>
        /// Creates an instance of the base LevelPayload class, adding levelName to eventData. If eventData is null, creates the dictionary.
        /// </summary>
        /// <returns>The instance of LevelPayload.</returns>
        /// <param name="levelName">The name of the level.</param>
        /// <param name="eventData">Dictionary with any custom parameters.</param>
        /// <typeparam name="T">The payload type that inherits from LevelPayload.</typeparam>
        protected static T CreateInstance<T> (string levelName, IDictionary<string, object> eventData) where T : LevelPayload
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_LevelName, levelName);

            return CreateInstance<T>(eventData);
        }

        /// <summary>
        /// Creates an instance of the base LevelPayload class, adding levelName and levelIndex to eventData. If eventData is null, creates the dictionary.
        /// </summary>
        /// <returns>The instance of LevelPayload.</returns>
        /// <param name="levelIndex">The index of the level.</param>
        /// <param name="levelName">The name of the level.</param>
        /// <param name="eventData">Dictionary with any custom parameters.</param>
        /// <typeparam name="T">The payload type that inherits from LevelPayload.</typeparam>
        protected static T CreateInstance<T> (int levelIndex, string levelName, IDictionary<string, object> eventData) where T : LevelPayload
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_LevelIndex, levelIndex);
            eventData.Add(k_ParamKey_LevelName, levelName);

            return CreateInstance<T>(eventData);
        }
    }
}
