using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "LevelSkipPayload.asset", menuName = "Analytics Events/Game Progression/Level Skip")]
    public class LevelSkipPayload : LevelPayload
    {
        public static readonly string standardEventName = "level_skip";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static LevelSkipPayload CreateInstance (int levelIndex, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelSkipPayload>(levelIndex, eventData);
        }

        new public static LevelSkipPayload CreateInstance (string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelSkipPayload>(levelName, eventData);
        }

        public static LevelSkipPayload CreateInstance (int levelIndex, string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelSkipPayload>(levelIndex, levelName, eventData);
        }
    }
}
