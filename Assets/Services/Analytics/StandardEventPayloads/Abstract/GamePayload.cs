using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    public abstract class GamePayload : AnalyticsEventPayload
    {
        protected static string k_ParamKey_LevelIndex = "level_index";
        protected static string k_ParamKey_LevelName = "level_name";

        public int levelIndex
        {
            get { return GetParam<int>(k_ParamKey_LevelIndex); }
            set { SetParam(k_ParamKey_LevelIndex, value); }
        }

        public string levelName
        {
            get { return GetParam<string>(k_ParamKey_LevelName); }
            set { SetParam(k_ParamKey_LevelName, value); }
        }

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

        public static T CreateInstance<T> (int levelIndex, IDictionary<string, object> eventData) where T : GamePayload
        {
            eventData.Add(k_ParamKey_LevelIndex, levelIndex);
            return CreateInstance<T>(eventData);
        }

        public static T CreateInstance<T> (string levelName, IDictionary<string, object> eventData) where T : GamePayload
        {
            eventData.Add(k_ParamKey_LevelName, levelName);
            return CreateInstance<T>(eventData);
        }

        public static T CreateInstance<T> (int levelIndex, string levelName, IDictionary<string, object> eventData) where T : GamePayload
        {
            eventData.Add(k_ParamKey_LevelIndex, levelIndex);
            eventData.Add(k_ParamKey_LevelName, levelName);
            return CreateInstance<T>(eventData);
        }
    }
}
