using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "MainMenuPayload.asset", menuName = "Analytics Events/Main Menu")]
    public class MainMenuPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "main_menu";

        public override string eventName
        {
            get { return standardEventName; }
		}
    }
}
