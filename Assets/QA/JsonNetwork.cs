﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using System.IO;
using System;
using UnityEngine.Networking;
using System.Globalization;

public class JsonNetwork : MonoBehaviour 
{
	public static JsonNetwork GetInstance()
	{
		return GameObject.FindObjectOfType<JsonNetwork>();
	}

	public void RunServerCommand(string methodName, Action<string> callback)
	{
		StartCoroutine(GetText(methodName, result => {
			callback(result);
		}));
	}

	public void PostServerCommand(string methodName, string Post, Action<string> callback)
	{
		StartCoroutine(PostText(methodName, Post, result => {
			callback(result);
		}));
	}

	private IEnumerator GetText(string methodName, Action<string> callback) 
	{	
		WWW www = new WWW("https://obscure-shelf-46410.herokuapp.com/events/" + methodName);
		yield return www;

        if (www.error == null || www.error.Length == 0)
        {
            callback(www.text);
        }
        else
        {
            callback(www.error);
        }
	}

	private IEnumerator PostText(string methodName, string POST, Action<string> callback) 
	{
		var headers = new Dictionary<string, string>();
		headers.Add("content-type", "text/plain");

		WWW www = new WWW("https://obscure-shelf-46410.herokuapp.com/events/" + methodName, System.Text.Encoding.UTF8.GetBytes(POST), headers);
		yield return www;

        if (www.error == null || www.error.Length == 0) 
		{
            callback(www.text);
		} 
		else 
		{
			callback(www.error);
		}
	}
	
	public void PushResultToServer(string BranchInfo, string guid, TestCase testCase) 
	{
        string systemTime = System.DateTime.Now.ToString ("MMM d, yyyy", new CultureInfo("en-US"));
		string unity = Application.unityVersion.Replace ('.', ' ');
		string testTitle = testCase.getDescitpion ();

		string result = testCase.getResult () == true ? "Pass" : "Fail";
		string unityVersions = Application.unityVersion;
		string failReason = testCase.getFailReason ();
		string testrailLink = testCase.getCaseLink ();
		string operatingSystem = Application.platform.ToString();

		string json = "{\"Result\": \"" + result + "\",\"UnityVersion\": \"" + unityVersions + "\", \"FailReason\": \"" + failReason + "\",\"TestrailLink\": \"" + testrailLink + "\",\"operatingSystem\": \"" + operatingSystem + "\"}";
		string url = "https://standard-event.firebaseio.com/QAReport/{0}/{1}/{2}/{3}/{4}.json";
		url = string.Format (url, WWW.EscapeURL(systemTime), WWW.EscapeURL(BranchInfo), WWW.EscapeURL(unity), WWW.EscapeURL(guid), WWW.EscapeURL(testTitle));

		StartCoroutine (PUT (url, json));

		GameObject TestResultTemplates = GameObject.Find ("Result").transform.Find ("Content").Find ("Text").gameObject;
		GameObject Instance = Instantiate (TestResultTemplates, GameObject.Find ("Result").transform.Find ("Content").transform).gameObject;
		Instance.transform.Find("Text").GetComponent<Text>().text = string.Format("{0}, {1}", testTitle, failReason);
		Instance.SetActive (true);

		if (result == "Pass")
		{
			Instance.GetComponent<Image> ().color = Color.green;
		}
		else
		{
			Instance.GetComponent<Image> ().color = Color.red;
		}
	}

	private IEnumerator PUT(string url, string content)
	{
		var headers = new Dictionary<string, string>();
		headers.Add("X-HTTP-Method-Override", "PUT");

		WWW www = new WWW(url, System.Text.Encoding.UTF8.GetBytes(content), headers);
		yield return www;
	}
}