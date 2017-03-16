using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Firebase;
using Firebase.Database;
using Firebase.Unity.Editor;
using UnityEngine.Events;
using UnityEngine.SceneManagement;
using System.IO;
using UnityEngine.Analytics.Experimental;
using System;
using UnityEngine.Networking;
using LitJson;

public class UIHelper : MonoBehaviour {

	private Framework framework;

	public void Awake() {
		framework = GameObject.Find ("Main Camera").GetComponent<Framework> ();
	}
		
	public void SendEvent() {
		framework.verifyMode = false;
		framework.testRun ();
	}

	public void VerifyEvent() {
		StartCoroutine (GetText ("check", (result) => {
			if (result == "Ready") {
				framework.verifyMode = true;
				framework.testRun ();
			} else {
				GameObject.Find("Text").GetComponent<Text>().text = "Not getting enough data, please run sending first.";
			}
		}));
	}
		
	IEnumerator GetText(string methodName, Action<string> callback) {

		UnityWebRequest www = UnityWebRequest.Get("https://obscure-shelf-46410.herokuapp.com/events/" + methodName);
		yield return www.Send();

		if (www.isError) {
			callback (www.error);
		} else {
			if (callback != null)
				callback(www.downloadHandler.text);
		}
	}

}
