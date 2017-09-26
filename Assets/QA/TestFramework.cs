using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Reflection;
using UnityEngine.UI;

public enum Assert 
{
	AreEquals,
	AreNotEquals,
	Less,
	LessOREquals,
	Greater,
	GreaterOrEquals,
	DoThrowException,
	DoNotThrowException,
	EventPayload
}

public enum UnityVersion
{
	Defalut,
	Unity52_above,
	Unity53_above,
	Unity54_above,
	Unity55_above,
	Unity56_above,
}

[AttributeUsage(AttributeTargets.Method, AllowMultiple = true)]
public class CDTest : Attribute   
{
	public Assert compareType;
	public string title;
	public List<object> expectedResult = new List<object> ();
	public string testrail_CaseNumber;
	public UnityVersion unityVersion;

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
	public CDTest(Assert compareType, UnityVersion unityVersion, string title, string testrail_CaseNumber, params string[] Result)  
	{
		this.compareType = compareType;
		this.title = title;
		this.testrail_CaseNumber = testrail_CaseNumber;
		this.unityVersion = unityVersion;

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
	public CDTest(Assert compareType, UnityVersion unityVersion, string title, string testrail_CaseNumber, params int[] Result)  
	{
		this.compareType = compareType;
		this.title = title;
		this.testrail_CaseNumber = testrail_CaseNumber;
		this.unityVersion = unityVersion;
		
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
	public CDTest(Assert compareType, UnityVersion unityVersion, string title, string testrail_CaseNumber, params float[] Result)  
	{
		this.compareType = compareType;
		this.title = title;
		this.testrail_CaseNumber = testrail_CaseNumber;
		this.unityVersion = unityVersion;
		
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
	public CDTest(Assert compareType, UnityVersion unityVersion, string title, string testrail_CaseNumber, params bool[] Result)  
	{
		this.compareType = compareType;
		this.title = title;
		this.testrail_CaseNumber = testrail_CaseNumber;
		this.unityVersion = unityVersion;
		
		foreach (bool value in Result) 
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
	public CDTest(Assert compareType, UnityVersion unityVersion, string title, string testrail_CaseNumber, params Type[] Result)  
	{
		this.compareType = Assert.DoThrowException;
		this.title = title;
		this.testrail_CaseNumber = testrail_CaseNumber;
		this.unityVersion = unityVersion;
		
		foreach (Type value in Result) 
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
		string branchInfo = Resources.Load<TextAsset> ("branchInfo").ToString();
		string ClientID = Resources.Load<TextAsset> ("ClientID").ToString();

		branchInfo = branchInfo.Trim ().Replace ("/", " ").Replace(".", " ");
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

		string serverResult = "deny";
		while (serverResult == "deny")
		{
			bool callbackCompleted = false;
			
			JsonNetwork.GetInstance ().PostServerCommand ("request", ClientID, callback => {
				serverResult = callback;
				callbackCompleted = true;
			});
			
			while (!callbackCompleted)
			{
				yield return new WaitForSeconds (0.1f);
			}

			if (serverResult == "deny")
			{
				yield return new WaitForSeconds (3f);
				PushScreen("Server is busy, waiting");
			}
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
					// Check if user enter the min version of unity, 
					// and see if the cur unity meets it, if not, skip this method
					if (attr.unityVersion != UnityVersion.Defalut && !isCurrentUnityVersionSupported (attr.unityVersion)) {
						break;
					}

					// If the type if eventPayload, save it later
					if (attr.compareType == Assert.EventPayload) 
					{
						EventPayloadList.Add (attr);
						continue;
					}

					// Define all the varibles
					bool IfPass = false;
					bool HasException = false;
					object Result;

					// Showing progress on the screen.
					PushScreen(string.Format("Running Test {0} '{1}'", TestResultTable.Count + 1, attr.title));

					try
					{
						Result = mInfo.Invoke(testSuite, null);
					}
					catch (Exception e)
					{
						HasException = true;
						Result = e;

						if (attr.compareType == Assert.DoThrowException)
						{
							IfPass = true;

							for (int i = 0; i < (attr.expectedResult).Count; i++)
							{
								IfPass = e.InnerException.GetType().Equals(attr.expectedResult[i]);
								if (IfPass) break;
							}
						}

						if (attr.compareType == Assert.DoNotThrowException)
						{
							IfPass = false;

							for (int i = 0; i < (attr.expectedResult).Count; i++)
							{
								IfPass = !e.InnerException.GetType().Equals(attr.expectedResult[i]);
								if (!IfPass) break;
							}
						}
					}

					if (!HasException)
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
								if (!IfPass) break;
							}
							else if (attr.compareType == Assert.Less)
							{
								IfPass = (float)(Result) < (float) attr.expectedResult[i];
								if (!IfPass) break;
							}
							else if (attr.compareType == Assert.LessOREquals)
							{
								IfPass = (float)(Result) <= (float) attr.expectedResult[i];
								if (!IfPass) break;
							}
							else if (attr.compareType == Assert.Greater)
							{
								IfPass = (float)(Result) > (float) attr.expectedResult[i];
								if (!IfPass) break;
							}
							else if (attr.compareType == Assert.GreaterOrEquals)
							{
								IfPass = (float)(Result) >= (float) attr.expectedResult[i];
								if (!IfPass) break;
							}
						}
					}

					Debug.Log(string.Format("{0}, status is [{1}] with exception {2}", attr.title, IfPass, HasException));

					string FailedReason = IfPass == true ? null : string.Format("Expected result is {0} while real result is {1}. The compare type is {2}", ConvertToString(attr.expectedResult), Result, attr.compareType);
					TestResultTable.Add(IfPass);
					TestCase testResult = new TestCase(attr.title, IfPass, FailedReason, DateTime.Now, attr.testrail_CaseNumber);
					JsonNetwork.GetInstance ().PushResultToServer(branchInfo, ClientID, testResult);
				}
			}
		}

		// If there are test regarding Payload verify
		if (EventPayloadList.Count != 0) 
		{
			// Force to send the events
			#if UNITY_5_5_OR_NEWER
			UnityEngine.Analytics.Analytics.FlushEvents ();

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

				// Start the timeout timer
				float timer = 0f;
				StartCoroutine(TimedoutTimer(timer_ => {
					timer = timer_;
				}));

				// Check if the server is ready for this event
				serverResult = "none";

				while (serverResult == "none")
				{
					bool callbackCompleted = false;

					JsonNetwork.GetInstance ().RunServerCommand (string.Format ("{0}/{1}", attr.title, Payloads [attr.title]), callback => {
						serverResult = callback;
						callbackCompleted = true;
					});

					while (!callbackCompleted)
					{
						yield return new WaitForSeconds (0.1f);
					}

					if (serverResult == "none")
					{
						yield return new WaitForSeconds (2f);
					}

					if (timer > 5f)
					{
						break;
					}
				}

				bool IfPass = false;
				if (timer < 5f)
				{
					IfPass = VerifyServerPayload(serverResult, attr.expectedResult);
				}

				string FailedReason = IfPass == true ? null : string.Format("Expected result is {0} while real result is {1}. The compare type is {2}", ConvertToString(attr.expectedResult), serverResult, attr.compareType);
				TestResultTable.Add(IfPass);
				TestCase testResult = new TestCase(string.Format("|EventPayload| Verify {0}|{1}", attr.title, Payloads [attr.title]), IfPass, FailedReason, DateTime.Now, attr.testrail_CaseNumber);
				JsonNetwork.GetInstance ().PushResultToServer(branchInfo, ClientID, testResult);
			}

			#endif
		}

		PushScreen ("Finish sending test result");
		yield return new WaitForSeconds (20f);

		// Remove all history from the server
		JsonNetwork.GetInstance ().PostServerCommand ("finish", ClientID, isDone => {Debug.Log(isDone);});
			
		// Shut down in 5 seconds after test run.
		for (int i = 5; i > 0; i--) 
		{
			PushScreen(string.Format("Completed, {0}/{1} Passed. Shut down in {2} seconds", TestResultTable.FindAll(PassTest).Count, TestResultTable.Count, i));
			yield return new WaitForSeconds (1f);
		}
		
		if (!GameObject.Find("TurnOff").GetComponent<Toggle>().isOn)
			Application.Quit ();
	}

	private IEnumerator TimedoutTimer(Action<float> callback)
	{
		float timer = 0;

		while (true) 
		{
			yield return new WaitForSeconds(1f);
			timer += 1f;
			callback(timer);
		}
	}

	/// <summary>
	/// Convert List to String
	/// </summary>
	private string ConvertToString(List<object> Result)
	{
		string converted = null;

		foreach (object o in Result) 
		{
			converted += o.ToString () + ",";
		}

		return converted;
	}

	/// <summary>
	/// Check if the current system is supported
	/// </summary>
	private bool isCurrentUnityVersionSupported (UnityVersion version)
	{
		if (version == UnityVersion.Defalut) 
		{
			return true;
		}

		if (version == UnityVersion.Unity52_above) 
		{
			#if UNITY_5_2_OR_NEWER
			return true;
			#else
			return false;
			#endif
		}

		if (version == UnityVersion.Unity53_above) 
		{
			#if UNITY_5_3_OR_NEWER
			return true;
			#else
			return false;
			#endif
		}

		if (version == UnityVersion.Unity54_above) 
		{
			#if UNITY_5_4_OR_NEWER
			return true;
			#else
			return false;
			#endif
		}

		if (version == UnityVersion.Unity55_above) 
		{
			#if UNITY_5_5_OR_NEWER
			return true;
			#else
			return false;
			#endif
		}

		if (version == UnityVersion.Unity56_above) 
		{
			#if UNITY_5_6_OR_NEWER
			return true;
			#else
			return false;
			#endif
		}

		return false;
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

		Dictionary<string, object> Json = MiniJSON.Json.Deserialize (JsonString) as Dictionary<string, object>;

		for (int i = 0; i < expectedResult.Count; i++)
		{
			string key = expectedResult[i].ToString();

			if (!Json.ContainsKey(key))
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