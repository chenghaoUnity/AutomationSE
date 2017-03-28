using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Base standard event class from which level progression payload classes derive.
    /// </summary>
    public abstract class LevelPayload : AnalyticsEventPayload
    {
        static readonly string k_ParamKey_LevelIndex = "level_index";
        static readonly string k_ParamKey_LevelName = "level_name";

        /// <summary>
        /// Gets or sets the level index or number.
        /// </summary>
        /// <value>The level index or number.</value>
        public int levelIndex
        {
            get { return GetParam<int>(k_ParamKey_LevelIndex); }
            set { SetParam(k_ParamKey_LevelIndex, value); }
        }

        /// <summary>
        /// Gets or sets the level name.
        /// </summary>
        /// <value>The level name.</value>
        public string levelName
        {
            get { return GetParam<string>(k_ParamKey_LevelName); }
            set { SetParam(k_ParamKey_LevelName, value); }
        }

        /// <summary>
        /// Verifies that any required event data parameters are set.
        /// <remarks>
        /// Either the <c>level_index</c> or <c>level_name</c> parameter must be set for the payload to be valid.
        /// </remarks>
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateAtLeastOneDataKeyExists(k_ParamKey_LevelIndex, k_ParamKey_LevelName);
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>level_index</c> parameter value must be of type <c>int</c>, and <c>level_name</c> must be of type <c>string</c> to be valid.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
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
        /// Creates a new instance of payload type <c>T</c> and adds parameters to event data.
        /// </summary>
        /// <returns>The new instance of payload type <c>T</c>, where <c>T</c> inherits from <see cref="LevelPayload"/>.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        /// <typeparam name="T">Payload type that inherits from <see cref="LevelPayload"/>.</typeparam>
        protected static T CreateInstance<T> (string levelName, IDictionary<string, object> eventData = null) where T : LevelPayload
        {
            var instance = CreateInstance<T>(eventData);

            instance.SetParam(k_ParamKey_LevelName, levelName);

            return instance;
        }

        /// <summary>
        /// Creates a new instance of payload type <c>T</c> and adds parameters to event data.
        /// </summary>
        /// <returns>The new instance of payload type <c>T</c>, where <c>T</c> inherits from <see cref="LevelPayload"/>.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        /// <typeparam name="T">Payload type that inherits from <see cref="LevelPayload"/>.</typeparam>
        protected static T CreateInstance<T> (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null) where T : LevelPayload
        {
            var instance = CreateInstance<T>(eventData);

            instance.SetParam(k_ParamKey_LevelIndex, levelIndex);
            instance.SetParam(k_ParamKey_LevelName, levelName);

            return instance;
        }
    }
}
