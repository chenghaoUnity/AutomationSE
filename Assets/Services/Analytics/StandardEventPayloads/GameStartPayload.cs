using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "GameStartPayload.asset", menuName = "Analytics Events/Game Start")]
    public class GameStartPayload : GamePayload
    {
        public static readonly string standardEventName = "game_start";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static GameStartPayload CreateInstance (int levelIndex)
        {
            return CreateInstance(levelIndex, new Dictionary<string, object>());
        }

        public static GameStartPayload CreateInstance (int levelIndex, IDictionary<string, object> eventData)
        {
            return CreateInstance<GameStartPayload>(levelIndex, eventData);
        }

        new public static GameStartPayload CreateInstance (string levelName)
        {
            return CreateInstance(levelName, new Dictionary<string, object>());
        }

        new public static GameStartPayload CreateInstance (string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<GameStartPayload>(levelName, eventData);
        }

        public static GameStartPayload CreateInstance (int levelIndex, string levelName)
        {
            return CreateInstance(levelIndex, levelName, new Dictionary<string, object>());
        }

        public static GameStartPayload CreateInstance (int levelIndex, string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<GameStartPayload>(levelIndex, levelName, eventData);
        }
    }
}
