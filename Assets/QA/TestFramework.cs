using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Reflection;
using UnityEngine.UI;
using LitJson;

public enum Assert 
{
	AreEquals,
	AreNotEquals,
	Less,
	Greater,
	EventPayload
}

public class KeyValue
{
	public string Key;
	public string Value;
	public KeyValue (string Key, string Value)
	{
		this.Key = Key;
		this.Value = Value;
	}
}

[AttributeUsage(AttributeTargets.Method, AllowMultiple = true)]
public class CDTest : Attribute   
{
	public Assert compareType;
	public string title;
	public List<object> expectedResult = new List<object> ();
	public string testrail_CaseNumber;

	/// <summary>
	/// CDTest custom attribute. 
	/// </summary>
	/// <remarks>
	/// Any questions please slack @Chenghao
	/// </remarks>
	/// <param name="CompareType">The method of comparing expected value with true value.</param>
	/// <param name="Title">The title of the test.</param>
	/// <param name="Testrail_CaseNumber">The case number in the http://qatestrail.hq.unity3d.com/</param>
	/// <param name="Expected_Result">Expected return value(s), which are used for comparing with the true return value(s).</param>
	public CDTest(Assert compareType, string title, string testrail_CaseNumber, params string[] Result)  
	{
		this.compareType = compareType;
		this.title = title;
		this.testrail_CaseNumber = testrail_CaseNumber;

		foreach (string value in Result) 
		{
			this.expectedResult.Add(value);
		}
	}

	/// <summary>
	/// CDTest custom attribute. 
	/// </summary>
	/// <remarks>
	/// Any questions please slack @Chenghao
	/// </remarks>
	/// <param name="CompareType">The method of comparing expected value with true value.</param>
	/// <param name="Title">The title of the test.</param>
	/// <param name="Testrail_CaseNumber">The case number in the http://qatestrail.hq.unity3d.com/</param>
	/// <param name="Expected_Result">Expected return value(s), which are used for comparing with the true return value(s).</param>
	public CDTest(Assert compareType, string title, string testrail_CaseNumber, params int[] Result)  
	{
		this.compareType = compareType;
		this.title = title;
		this.testrail_CaseNumber = testrail_CaseNumber;
		
		foreach (int value in Result) 
		{
			this.expectedResult.Add(value);
		}
	}

	/// <summary>
	/// CDTest custom attribute. 
	/// </summary>
	/// <remarks>
	/// Any questions please slack @Chenghao
	/// </remarks>
	/// <param name="CompareType">The method of comparing expected value with true value.</param>
	/// <param name="Title">The title of the test.</param>
	/// <param name="Testrail_CaseNumber">The case number in the http://qatestrail.hq.unity3d.com/</param>
	/// <param name="Expected_Result">Expected return value(s), which are used for comparing with the true return value(s).</param>
	public CDTest(Assert compareType, string title, string testrail_CaseNumber, params float[] Result)  
	{
		this.compareType = compareType;
		this.title = title;
		this.testrail_CaseNumber = testrail_CaseNumber;
		
		foreach (float value in Result) 
		{
			this.expectedResult.Add(value);
		}
	}

	/// <summary>
	/// CDTest custom attribute. 
	/// </summary>
	/// <remarks>
	/// Any questions please slack @Chenghao
	/// </remarks>
	/// <param name="CompareType">The method of comparing expected value with true value.</param>
	/// <param name="Title">The title of the test.</param>
	/// <param name="Testrail_CaseNumber">The case number in the http://qatestrail.hq.unity3d.com/</param>
	/// <param name="Expected_Result">Expected return value(s), which are used for comparing with the true return value(s).</param>
	public CDTest(Assert compareType, string title, string testrail_CaseNumber, params bool[] Result)  
	{
		this.compareType = compareType;
		this.title = title;
		this.testrail_CaseNumber = testrail_CaseNumber;
		
		foreach (bool value in Result) 
		{
			this.expectedResult.Add(value);
		}
	}
}

public class TestFramework : MonoBehaviour
{
	public void Start()
	{
		StartCoroutine(StartTest());
	}

	/// <summary>
	/// Start test main method.
	/// </summary>
	private IEnumerator StartTest()
	{
		// Get the branch information.
		string branchInfo = Resources.Load ("branchInfo").ToString ().Trim ().Replace ("/", " ").Replace(".", " ");
		PushBranch (branchInfo);

		// Create an instance of the TestSuite class.
		TestSuite testSuite = new TestSuite();
		Type type = testSuite.GetType();

		// Create a result table.
		List<bool> TestResultTable = new List<bool> ();

		// Create Dictionary for storing the payload info
		Dictionary<string, int> Payloads = new Dictionary<string, int> ();

		// Create List for storing the Assert.EventPayload
		List<CDTest> EventPayloadList = new List<CDTest>();

		// Request server, wait if server is busy
		bool isServerReady = false;
		PushScreen("Requesting access to the server");
		while (!isServerReady)
		{
			yield return new WaitForSeconds (1f);
			PushScreen("Server is busy, waiting");

			JsonNetwork.GetInstance ().PostServerCommand ("request", System.Guid.NewGuid().ToString(), callback => {
				if (callback == "ok")
					isServerReady = true;
			});
		}

		// Reflection to get all methods.
		foreach (MethodInfo mInfo in type.GetMethods()) 
		{
			yield return new WaitForSeconds (0.1f);
			
			// Get custom attribute from each method.
			CDTest[] attrs = mInfo.GetCustomAttributes(typeof(CDTest), false) as CDTest[];

			foreach (CDTest attr in attrs)
			{
				if (attr != null)
				{
					bool IfPass = false;

					// Showing progress on the screen.
					PushScreen(string.Format("Running Test {0} '{1}'", TestResultTable.Count + 1, attr.title));
					// Trigger the method.
					object Result = mInfo.Invoke(testSuite, null);

					// Force to send the events
					#if UNITY_5_5_OR_NEWER
					UnityEngine.Analytics.Analytics.FlushEvents ();
					#endif

					// If the type if eventPayload, save it later
					if (attr.compareType == Assert.EventPayload)
					{
						//#if UNITY_5_5_OR_NEWER
						EventPayloadList.Add (attr);
						//#endif
						continue;
					}
					else
					{
						for (int i = 0; i < (attr.expectedResult).Count; i++)
						{
							if (attr.compareType == Assert.AreEquals)
							{
								IfPass = Result.Equals(attr.expectedResult[i]);
								if (IfPass) break;
							}
							else if (attr.compareType == Assert.AreNotEquals)
							{
								IfPass = !Result.Equals(attr.expectedResult[i]);
								if (IfPass) continue;
							}
							else if (attr.compareType == Assert.Less)
							{
								IfPass = (float)(Result) < (float) attr.expectedResult[i];
								if (!IfPass) break;
							}
							else if (attr.compareType == Assert.Greater)
							{
								IfPass = (float)(Result) > (float) attr.expectedResult[i];
								if (!IfPass) break;
							}
						}
					}

					Debug.Log(attr.title + ":" + IfPass);

					string FailedReason = IfPass == true ? null : string.Format("Expected result is {0} while real result is {1}. The compare type is {2}", JsonMapper.ToJson(attr.expectedResult), Result, attr.compareType);
					TestResultTable.Add(IfPass);
					TestCase testResult = new TestCase(attr.title, IfPass, FailedReason, DateTime.Now, attr.testrail_CaseNumber);
					JsonNetwork.GetInstance ().PushResultToServer(branchInfo, testResult);
				}
			}
		}

		// If there are test regarding Payload verify
		if (EventPayloadList.Count != 0) 
		{
			// Run through all Assert.EventPayload methods
			foreach (CDTest attr in EventPayloadList)
			{
				yield return new WaitForSeconds (0.1f);

				// Add count to the Dictionary
				if (!Payloads.ContainsKey(attr.title))
				{
					Payloads.Add(attr.title, 0);
				}
				else
				{
					Payloads[attr.title] = Payloads[attr.title] + 1;
				}

				// Show progress on the screen.
				PushScreen(string.Format("Running Test {0} '{1}'", TestResultTable.Count + 1, string.Format("|EventPayload| Verify {0}|{1}", attr.title, Payloads [attr.title])));

				// Check if the server is ready for this event
				string serverResult = "none";

				while (serverResult == "none")
				{
					yield return new WaitForSeconds (2f);

					bool callbackCompleted = false;

					JsonNetwork.GetInstance ().RunServerCommand (string.Format ("{0}/{1}", attr.title, Payloads [attr.title]), callback => {
						serverResult = callback;
						callbackCompleted = true;
					});

					while (!callbackCompleted)
					{
						yield return new WaitForSeconds (1f);
					}
				}

				bool IfPass = VerifyServerPayload(serverResult, attr.expectedResult);

				string FailedReason = IfPass == true ? null : string.Format("Expected result is {0} while real result is {1}. The compare type is {2}", JsonMapper.ToJson(attr.expectedResult), serverResult, attr.compareType);
				TestResultTable.Add(IfPass);
				TestCase testResult = new TestCase(string.Format("|EventPayload| Verify {0}|{1}", attr.title, Payloads [attr.title]), IfPass, FailedReason, DateTime.Now, attr.testrail_CaseNumber);
				JsonNetwork.GetInstance ().PushResultToServer(branchInfo, testResult);
			}
		}

		// Remove all history from the server
		JsonNetwork.GetInstance ().RunServerCommand ("reset", isDone =>{});
			
		// Shut down in 5 seconds after test run.
		for (int i = 5; i > 0; i--) 
		{
			PushScreen(string.Format("Completed, {0}/{1} Passed. Shut down in {2} seconds", TestResultTable.FindAll(PassTest).Count, TestResultTable.Count, i));
			yield return new WaitForSeconds (1f);
		}
		
		if (!GameObject.Find("TurnOff").GetComponent<Toggle>().isOn)
			Application.Quit ();
	}

	/// <summary>
	/// Show branchInfo to the UI.
	/// </summary>
	private void PushBranch(string BranchInfo)
	{
		GameObject.Find ("LOG").GetComponent<Text> ().text = string.Format("|{0}|", BranchInfo);
	}

	/// <summary>
	/// Show progress info to the UI.
	/// </summary>
	private void PushScreen(string Content)
	{
		GameObject.Find ("Canvas").transform.Find ("Text").GetComponent<Text> ().text = Content;
	}

	/// <summary>
	/// FindAll() helper method.
	/// </summary>
	private bool PassTest(bool Test)
	{
		return Test;
	}

	/// <summary>
	/// Compare expected result with real server payloads
	/// </summary>
	private bool VerifyServerPayload(string JsonString, List<object> expectedResult)
	{
		if (expectedResult.Count == 0 && JsonString.Length == 0)
			return true;

		JsonData Json = JsonMapper.ToObject (JsonString);

		for (int i = 0; i < expectedResult.Count; i++)
		{
			string key = expectedResult[i].ToString();

			if (!Json.Keys.Contains(key))
			{
				return false;
			}

			if (!Json[key].ToString().Equals(expectedResult[i + 1]))
			{
				return false;
			}

			i++;
		}

		return true;
	}
}