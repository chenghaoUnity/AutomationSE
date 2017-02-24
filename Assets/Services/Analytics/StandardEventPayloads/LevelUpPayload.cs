using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Level up payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "LevelUpPayload.asset", menuName = "Analytics Events/Game Progression/Level Up")]
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
        /// Gets the name of the event.
        /// </summary>
        /// <value>The name of the event.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the old index of the level.
        /// </summary>
        /// <value>The old index of the level.</value>
        public string oldLevelIndex
        {
            get { return GetParam<string>(k_ParamKey_OldLevelIndex); }
            set { SetParam(k_ParamKey_OldLevelIndex, value); }
        }

        /// <summary>
        /// Gets or sets the new index of the level.
        /// </summary>
        /// <value>The new index of the level.</value>
        public string newLevelIndex
        {
            get { return GetParam<string>(k_ParamKey_NewLevelIndex); }
            set { SetParam(k_ParamKey_NewLevelIndex, value); }
        }

        /// <summary>
        /// Gets or sets the old name of the level.
        /// </summary>
        /// <value>The old name of the level.</value>
        public string oldLevelName
        {
            get { return GetParam<string>(k_ParamKey_OldLevelName); }
            set { SetParam(k_ParamKey_OldLevelName, value); }
        }

        /// <summary>
        /// Gets or sets the new name of the level.
        /// </summary>
        /// <value>The new name of the level.</value>
        public string newLevelName
        {
            get { return GetParam<string>(k_ParamKey_NewLevelName); }
            set { SetParam(k_ParamKey_NewLevelName, value); }
        }

        /// <summary>
        /// Validates the payload.
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
        }

        /// <summary>
        /// Validates the data field.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
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
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="oldLevelIndex">Old level index.</param>
        /// <param name="newLevelIndex">New level index.</param>
        /// <param name="eventData">Event data.</param>
        public static LevelUpPayload CreateInstance (int oldLevelIndex, int newLevelIndex, IDictionary<string, object> eventData)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_OldLevelIndex, oldLevelIndex);
            eventData.Add(k_ParamKey_NewLevelIndex, newLevelIndex);

            return CreateInstance<LevelUpPayload>(eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="oldLevelName">Old level name.</param>
        /// <param name="newLevelName">New level name.</param>
        /// <param name="eventData">Event data.</param>
        public static LevelUpPayload CreateInstance (string oldLevelName, string newLevelName, IDictionary<string, object> eventData)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_OldLevelName, oldLevelName);
            eventData.Add(k_ParamKey_NewLevelName, newLevelName);

            return CreateInstance<LevelUpPayload>(eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="oldLevelIndex">Old level index.</param>
        /// <param name="oldLevelName">Old level name.</param>
        /// <param name="newLevelIndex">New level index.</param>
        /// <param name="newLevelName">New level name.</param>
        /// <param name="eventData">Event data.</param>
        public static LevelUpPayload CreateInstance (int oldLevelIndex, string oldLevelName, int newLevelIndex, string newLevelName, IDictionary<string, object> eventData)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_OldLevelIndex, oldLevelIndex);
            eventData.Add(k_ParamKey_NewLevelIndex, newLevelIndex);
            eventData.Add(k_ParamKey_OldLevelName, oldLevelName);
            eventData.Add(k_ParamKey_NewLevelName, newLevelName);

            return CreateInstance<LevelUpPayload>(eventData);
        }
    }
}
