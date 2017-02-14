using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "LevelStartPayload.asset", menuName = "Analytics Events/Game Progression/Level Start")]
    public class LevelStartPayload : LevelPayload
    {
        public static readonly string standardEventName = "level_start";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static LevelStartPayload CreateInstance (int levelIndex, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelStartPayload>(levelIndex, eventData);
        }

        new public static LevelStartPayload CreateInstance (string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelStartPayload>(levelName, eventData);
        }

        public static LevelStartPayload CreateInstance (int levelIndex, string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<LevelStartPayload>(levelIndex, levelName, eventData);
        }
    }
}
