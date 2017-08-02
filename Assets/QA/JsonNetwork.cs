using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Firebase;
using Firebase.Database;
using Firebase.Unity.Editor;
using UnityEngine.Events;
using System.IO;
using UnityEngine.Analytics.Experimental;
using System;
using LitJson;
using UnityEngine.Networking;

public class JsonNetwork : MonoBehaviour 
{
	private DatabaseReference reference;

	void Awake () 
	{
		FirebaseApp.DefaultInstance.SetEditorDatabaseUrl ("https://standard-event.firebaseio.com/");
		reference = FirebaseDatabase.DefaultInstance.RootReference;
	}

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
		string key = reference.Child("QAReport").Push().Key;
		Dictionary<string, object> childUpdates = new Dictionary<string, object>();
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy")  + "/" + BranchInfo + "/" + Application.unityVersion.Replace('.', ' ') + "/" + SystemInfo.operatingSystem.Replace(".", " ").Replace("/", " ") + "/" + testCase.getDescitpion () + "/Result/"] = testCase.getResult () == true ? "Pass" : "Fail";
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy") +  "/" + BranchInfo + "/" + Application.unityVersion.Replace('.', ' ') + "/" + SystemInfo.operatingSystem.Replace(".", " ").Replace("/", " ") + "/" + testCase.getDescitpion () + "/UnityVersion/"] = Application.unityVersion;
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy") +  "/" + BranchInfo + "/" + Application.unityVersion.Replace('.', ' ') + "/" + SystemInfo.operatingSystem.Replace(".", " ").Replace("/", " ") + "/" + testCase.getDescitpion () + "/FailReason/"] = testCase.getFailReason ();
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy") +  "/" + BranchInfo + "/" + Application.unityVersion.Replace('.', ' ') + "/" + SystemInfo.operatingSystem.Replace(".", " ").Replace("/", " ") + "/" + testCase.getDescitpion () + "/TestrailLink/"] = testCase.getCaseLink ();
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy") + "/" + BranchInfo + "/" + Application.unityVersion.Replace ('.', ' ') + "/" + SystemInfo.operatingSystem.Replace(".", " ").Replace("/", " ") + "/" + testCase.getDescitpion () + "/operatingSystem/"] = SystemInfo.operatingSystem;
		reference.UpdateChildrenAsync(childUpdates);
	}
}