using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Analytics.Experimental;

public class VersionInfoText : MonoBehaviour 
{
    void Start ()
    {
        Text text = GetComponent<Text>();

        if (text) text.text = string.Format(
            "SDK Version: {0}\nUnity Version: {1}",
            AnalyticsEvent.sdkVersion,
            Application.unityVersion
        );
    }
}
