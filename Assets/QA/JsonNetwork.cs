﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using System.IO;
using UnityEngine.Analytics.Experimental;
using System;
using UnityEngine.Networking;

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

		if (www.error == null) 
		{
			if (www.text == null) 
			{
				callback (null);
			} 
			else 
			{
				callback (www.text);
			}
		} 
		else 
		{
			callback(www.error);
		}
	}

	private IEnumerator PostText(string methodName, string POST, Action<string> callback) 
	{	
		WWW www = new WWW("https://obscure-shelf-46410.herokuapp.com/events/" + methodName, System.Text.Encoding.Default.GetBytes(POST));
		yield return www;
		
		if (www.error == null) 
		{
			if (www.text == null) 
			{
				callback (null);
			} 
			else 
			{
				callback (www.text);
			}
		} 
		else 
		{
			callback(www.error);
		}
	}
	
	public void PushResultToServer(string BranchInfo, TestCase testCase) 
	{
		string systemTime = System.DateTime.Now.ToString ("MMM d, yyyy");
		string unity = Application.unityVersion.Replace ('.', ' ');
		string systemInfo = SystemInfo.operatingSystem.Replace (".", " ").Replace ("/", " ");
		string testTitle = testCase.getDescitpion ();

		string result = testCase.getResult () == true ? "Pass" : "Fail";
		string unityVersions = Application.unityVersion;
		string failReason = testCase.getFailReason ();
		string testrailLink = testCase.getCaseLink ();
		string operatingSystem = SystemInfo.operatingSystem;

		string json = "{\"Result\": \"" + result + "\",\"UnityVersion\": \"" + unityVersions + "\", \"FailReason\": \"" + failReason + "\",\"TestrailLink\": \"" + testrailLink + "\",\"operatingSystem\": \"" + operatingSystem + "\"}";
		string url = "https://standard-event.firebaseio.com/QAReport/{0}/{1}/{2}/{3}/{4}.json";
		url = string.Format (url, WWW.EscapeURL(systemTime), WWW.EscapeURL(BranchInfo), WWW.EscapeURL(unity), WWW.EscapeURL(systemInfo), WWW.EscapeURL(testTitle));

		GameObject.Find ("Server").GetComponent<Text> ().text = url;

		StartCoroutine (PUT (url, json));
	}

	private IEnumerator PUT(string url, string content)
	{
		var headers = new Dictionary<string, string>();
		headers.Add("X-HTTP-Method-Override", "PUT");

		WWW www = new WWW(url, System.Text.Encoding.Default.GetBytes(content), headers);
		yield return www;
	}
}