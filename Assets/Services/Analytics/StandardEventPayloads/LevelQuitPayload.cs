using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "LevelQuitPayload.asset", menuName = "Analytics Events/Level Quit")]
    public class LevelQuitPayload : LevelPayload
    {
        public static readonly string standardEventName = "level_quit";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static LevelQuitPayload CreateInstance (int levelIndex)
        {
            return CreateInstance(levelIndex, new Dictionary<string, object>());
        }

        public static LevelQuitPayload CreateInstance (int levelIndex, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelQuitPayload>(levelIndex, eventData);
        }

        new public static LevelQuitPayload CreateInstance (string levelName)
        {
            return CreateInstance(levelName, new Dictionary<string, object>());
        }

        new public static LevelQuitPayload CreateInstance (string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelQuitPayload>(levelName, eventData);
        }

        public static LevelQuitPayload CreateInstance (int levelIndex, string levelName)
        {
            return CreateInstance(levelIndex, levelName, new Dictionary<string, object>());
        }

        public static LevelQuitPayload CreateInstance (int levelIndex, string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelQuitPayload>(levelIndex, levelName, eventData);
        }
    }
}
