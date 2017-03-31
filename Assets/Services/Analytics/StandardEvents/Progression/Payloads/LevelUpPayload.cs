using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Level Up standard event payload (<c>level_up</c>).
    /// <remarks>
    /// Send this event when the player rank increases, or when the accumulated experience reaches the next level tier.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can help provide insight into gameplay progression rates among players.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "LevelUpPayload.asset", menuName = "Analytics Payloads/Progression/Level Up")]
    public class LevelUpPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "level_up";

        static string k_ParamKey_OldLevelIndex = "old_level_index";
        static string k_ParamKey_NewLevelIndex = "new_level_index";
        static string k_ParamKey_OldLevelName = "old_level_name";
        static string k_ParamKey_NewLevelName = "new_level_name";

        /// <summary>
        /// Gets the name of the standard event.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the old rank or experience level.
        /// </summary>
        /// <value>The old rank or experience level.</value>
        public int oldLevelIndex
        {
            get { return GetParam<int>(k_ParamKey_OldLevelIndex); }
            set { SetParam(k_ParamKey_OldLevelIndex, value); }
        }

        /// <summary>
        /// Gets or sets the new rank or experience level.
        /// </summary>
        /// <value>The new rank or experience level.</value>
        public int newLevelIndex
        {
            get { return GetParam<int>(k_ParamKey_NewLevelIndex); }
            set { SetParam(k_ParamKey_NewLevelIndex, value); }
        }

        /// <summary>
        /// Gets or sets the name of the old rank or experience level.
        /// </summary>
        /// <value>The old rank or experience level.</value>
        public string oldLevelName
        {
            get { return GetParam<string>(k_ParamKey_OldLevelName); }
            set { SetParam(k_ParamKey_OldLevelName, value); }
        }

        /// <summary>
        /// Gets or sets the name of the new rank or experience level.
        /// </summary>
        /// <value>The old rank or experience level.</value>
        public string newLevelName
        {
            get { return GetParam<string>(k_ParamKey_NewLevelName); }
            set { SetParam(k_ParamKey_NewLevelName, value); }
        }

        /// <summary>
        /// Verifies that any required event data parameters are set.
        /// <remarks>
        /// Either <c>old_level_index</c> and <c>new_level_index</c>, or <c>old_level_name</c> and <c>new_level_name</c>, 
        /// must be set for the payload to be valid.
        /// If the <c>old_level_index</c> or <c>new_level_index</c> parameter is set, then both must be set for the payload to be valid.
        /// The same applies for <c>old_level_name</c> and <c>new_level_name</c>.
        /// </remarks>
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            if (HasParam(k_ParamKey_OldLevelIndex) || HasParam(k_ParamKey_NewLevelIndex))
            {
                ValidateAllDataKeysExist(k_ParamKey_OldLevelIndex, k_ParamKey_NewLevelIndex);
            }

            if (HasParam(k_ParamKey_OldLevelName) || HasParam(k_ParamKey_NewLevelName))
            {
                ValidateAllDataKeysExist(k_ParamKey_OldLevelName, k_ParamKey_NewLevelName);
            }

            ValidateAtLeastOneDataKeyExists(k_ParamKey_OldLevelIndex, k_ParamKey_OldLevelName);
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>old_level_index</c> and <c>new_level_index</c> parameter values must be of type <c>int</c> to be valid, 
        /// while <c>old_level_name</c> and <c>new_level_name</c> must be of type <c>string</c>.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_OldLevelIndex || key == k_ParamKey_NewLevelIndex)
            {
                ValidateDataValueType<int>(key, value);
            }
            else if (key == k_ParamKey_OldLevelName || key == k_ParamKey_NewLevelName)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates a new instance of LevelUpPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="LevelUpPayload"/>.</returns>
        /// <param name="oldLevelName">The old rank or level name.</param>
        /// <param name="newLevelName">The new rank or level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static LevelUpPayload CreateInstance (string oldLevelName, string newLevelName, IDictionary<string, object> eventData = null)
        {
            var instance = CreateInstance<LevelUpPayload>(eventData);

            instance.SetParam(k_ParamKey_OldLevelName, oldLevelName);
            instance.SetParam(k_ParamKey_NewLevelName, newLevelName);

            return instance;
        }

        /// <summary>
        /// Creates a new instance of LevelUpPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="LevelUpPayload"/>.</returns>
        /// <param name="oldLevelIndex">The level index or number.</param>
        /// <param name="newLevelIndex">The level index or number.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static LevelUpPayload CreateInstance (int oldLevelIndex, int newLevelIndex, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(oldLevelIndex, newLevelIndex, null, null, eventData);
        }

        /// <summary>
        /// Creates a new instance of LevelUpPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="LevelUpPayload"/>.</returns>
        /// <param name="oldLevelIndex">The level index or number.</param>
        /// <param name="newLevelIndex">The level index or number.</param>
        /// <param name="oldLevelName">The old rank or level name.</param>
        /// <param name="newLevelName">The new rank or level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static LevelUpPayload CreateInstance (int oldLevelIndex, int newLevelIndex, string oldLevelName, string newLevelName, IDictionary<string, object> eventData = null)
        {
            var instance = CreateInstance<LevelUpPayload>(eventData);

            instance.SetParam(k_ParamKey_OldLevelIndex, oldLevelIndex);
            instance.SetParam(k_ParamKey_NewLevelIndex, newLevelIndex);
            instance.SetParam(k_ParamKey_OldLevelName, oldLevelName);
            instance.SetParam(k_ParamKey_NewLevelName, newLevelName);

            return instance;
        }
    }
}
