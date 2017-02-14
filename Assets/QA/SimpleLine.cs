using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics.Experimental;

public class SimpleLine : MonoBehaviour {

	// Use this for initialization
	void Start () {
		AnalyticsEvent.PostInstallAction ();
		// AnalyticsEvent.PostInstallAction ("ad");
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
