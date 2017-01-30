using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.Analytics.Experimental;

public class SEDemo : MonoBehaviour 
{
    public void DebugSend<T> (AnalyticsEventPayload payload) where T : AnalyticsEventPayload
    {
        LogAnalyticsResult<T>(AnalyticsEvent.Send(payload));
    }

    public void LogAnalyticsResult<T> (AnalyticsResult result) where T : AnalyticsEventPayload
    {
        Debug.LogFormat(
            "Sent '{0}' with result '{1}'.",
            typeof(T).ToString(),
            result.ToString()
        );
    }
}
