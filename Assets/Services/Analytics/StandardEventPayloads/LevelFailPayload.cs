using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "LevelFailPayload.asset", menuName = "Analytics Events/Level Fail")]
    public class LevelFailPayload : LevelPayload
    {
        public static readonly string standardEventName = "level_fail";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static LevelFailPayload CreateInstance (int levelIndex)
        {
            return CreateInstance(levelIndex, new Dictionary<string, object>());
        }

        public static LevelFailPayload CreateInstance (int levelIndex, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelFailPayload>(levelIndex, eventData);
        }

        new public static LevelFailPayload CreateInstance (string levelName)
        {
            return CreateInstance(levelName, new Dictionary<string, object>());
        }

        new public static LevelFailPayload CreateInstance (string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelFailPayload>(levelName, eventData);
        }

        public static LevelFailPayload CreateInstance (int levelIndex, string levelName)
        {
            return CreateInstance(levelIndex, levelName, new Dictionary<string, object>());
        }

        public static LevelFailPayload CreateInstance (int levelIndex, string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelFailPayload>(levelIndex, levelName, eventData);
        }
    }
}
