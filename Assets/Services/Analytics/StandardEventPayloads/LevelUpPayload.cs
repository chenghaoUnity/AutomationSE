using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "LevelUpPayload.asset", menuName = "Analytics Events/Game Progression/Level Up")]
    public class LevelUpPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "level_up";

        protected static string k_ParamKey_OldLevelIndex = "old_level_index";
        protected static string k_ParamKey_NewLevelIndex = "new_level_index";
        protected static string k_ParamKey_OldLevelName = "old_level_name";
        protected static string k_ParamKey_NewLevelName = "new_level_name";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public string oldLevelIndex
        {
            get { return GetParam<string>(k_ParamKey_OldLevelIndex); }
            set { SetParam(k_ParamKey_OldLevelIndex, value); }
        }

        public string newLevelIndex
        {
            get { return GetParam<string>(k_ParamKey_NewLevelIndex); }
            set { SetParam(k_ParamKey_NewLevelIndex, value); }
        }

        public string oldLevelName
        {
            get { return GetParam<string>(k_ParamKey_OldLevelName); }
            set { SetParam(k_ParamKey_OldLevelName, value); }
        }

        public string newLevelName
        {
            get { return GetParam<string>(k_ParamKey_NewLevelName); }
            set { SetParam(k_ParamKey_NewLevelName, value); }
        }

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

        public static LevelUpPayload CreateInstance (int oldLevelIndex, int newLevelIndex, IDictionary<string, object> eventData)
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_OldLevelIndex, oldLevelIndex);
            eventData.Add(k_ParamKey_NewLevelIndex, newLevelIndex);

            return CreateInstance<LevelUpPayload>(eventData);
        }

        public static LevelUpPayload CreateInstance (string oldLevelName, string newLevelName, IDictionary<string, object> eventData)
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_OldLevelName, oldLevelName);
            eventData.Add(k_ParamKey_NewLevelName, newLevelName);

            return CreateInstance<LevelUpPayload>(eventData);
        }

        public static LevelUpPayload CreateInstance (int oldLevelIndex, string oldLevelName, int newLevelIndex, string newLevelName, IDictionary<string, object> eventData)
        {
            if (Equals(eventData, null))
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
