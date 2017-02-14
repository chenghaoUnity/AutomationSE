using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "GameStartPayload.asset", menuName = "Analytics Events/Game Progression/Game Start")]
    public class GameStartPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "game_start";

        public override string eventName
        {
            get { return standardEventName; }
        }
    }
}
