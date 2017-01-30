using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "GameOverPayload.asset", menuName = "Analytics Events/Game Over")]
    public class GameOverPayload : GamePayload
    {
        public static readonly string standardEventName = "game_over";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public static GameOverPayload CreateInstance (int levelIndex)
        {
            return CreateInstance(levelIndex, new Dictionary<string, object>());
        }

        public static GameOverPayload CreateInstance (int levelIndex, IDictionary<string, object> eventData)
        {
            return CreateInstance<GameOverPayload>(levelIndex, eventData);
        }

        new public static GameOverPayload CreateInstance (string levelName)
        {
            return CreateInstance(levelName, new Dictionary<string, object>());
        }

        new public static GameOverPayload CreateInstance (string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<GameOverPayload>(levelName, eventData);
        }

        public static GameOverPayload CreateInstance (int levelIndex, string levelName)
        {
            return CreateInstance(levelIndex, levelName, new Dictionary<string, object>());
        }

        public static GameOverPayload CreateInstance (int levelIndex, string levelName, IDictionary<string, object> eventData)
        {
            return CreateInstance<GameOverPayload>(levelIndex, levelName, eventData);
        }
    }
}
