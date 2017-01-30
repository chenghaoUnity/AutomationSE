using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "LevelCompletePayload.asset", menuName = "Analytics Events/Level Complete")]
    public class LevelCompletePayload : LevelPayload
    {
        public static readonly string standardEventName = "level_complete";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static LevelCompletePayload CreateInstance (int levelIndex)
        {
            return CreateInstance(levelIndex, new Dictionary<string, object>());
        }

        public static LevelCompletePayload CreateInstance (int levelIndex, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelCompletePayload>(levelIndex, eventData);
        }

        new public static LevelCompletePayload CreateInstance (string levelName)
        {
            return CreateInstance(levelName, new Dictionary<string, object>());
        }

        new public static LevelCompletePayload CreateInstance (string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelCompletePayload>(levelName, eventData);
        }

        public static LevelCompletePayload CreateInstance (int levelIndex, string levelName)
        {
            return CreateInstance(levelIndex, levelName, new Dictionary<string, object>());
        }

        public static LevelCompletePayload CreateInstance (int levelIndex, string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelCompletePayload>(levelIndex, levelName, eventData);
        }
    }
}
