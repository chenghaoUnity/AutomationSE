using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Reflection;
using UnityEngine.UI;
using System.Threading;
// using System.Diagnostics.Contracts;

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

[AttributeUsage(AttributeTargets.Method, AllowMultiple = true)]
public class CDTest : Attribute
{
    public Assert compareType;
    public string title;
    public List<object> expectedResult = new List<object>();
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
    public CDTest(Assert compareType, string title, string testrail_CaseNumber, params Type[] Result)
    {
        this.compareType = compareType;
        this.title = title;
        this.testrail_CaseNumber = testrail_CaseNumber;

        foreach (Type value in Result)
        {
            this.expectedResult.Add(value);
        }
    }
}

[AttributeUsage(AttributeTargets.Method, AllowMultiple = false)]
public class RemoteSettingsPreSet : Attribute
{
    public RemoteSettingsPreSet() { }
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
        // Force to send all reminding/ old events
#if UNITY_5_5_OR_NEWER
        UnityEngine.Analytics.Analytics.FlushEvents();
#endif

        // Get the branch information.
        string branchInfo = Resources.Load<TextAsset>("branchInfo").ToString();
        string ClientID = Resources.Load<TextAsset>("ClientID").ToString();

        branchInfo = branchInfo.Trim().Replace("/", " ").Replace(".", " ");
        ClientID = ClientID.Trim();

        GameObject.Find("Server").GetComponent<Text>().text = string.Format("guid:|{0}|", ClientID);

        PushBranch(branchInfo);

        // Create an instance of the TestSuite class.
        TestSuite testSuite = new TestSuite();
        Type type = testSuite.GetType();

        // Create a result table.
        List<bool> TestResultTable = new List<bool>();

        // Create Dictionary for storing the payload info
        Dictionary<string, int> Payloads = new Dictionary<string, int>();

		PushScreen("Initializing...");
		yield return new WaitForSeconds (5f);

        // Request server, wait if server is busy
        bool isServerReady = false;
        PushScreen("Requesting access to the server");

        string serverResult = "deny";
        while (serverResult == "deny")
        {
            bool callbackCompleted = false;

            JsonNetwork.GetInstance().PostServerCommand("request", ClientID, callback =>
            {
                serverResult = callback;
                callbackCompleted = true;
            });

            while (!callbackCompleted)
            {
                yield return new WaitForSeconds(0.1f);
            }

            if (serverResult == "deny")
            {
                yield return new WaitForSeconds(3f);
                PushScreen("Server is busy, waiting");
            }
        }

        // Reflection to get all methods.
        foreach (MethodInfo mInfo in type.GetMethods())
        {
            yield return new WaitForSeconds(0.1f);

#if UNITY_2017_1_OR_NEWER
            while (!RemoteSettingsFake.GetInstance().Ready())
            {
                yield return new WaitForSeconds(0.5f);
            }
#endif

            // Define all the common varibles.
            bool HasException = false;
            object Result;
            Exception Exception = new KeyNotFoundException();

            // Run the method once.
            try
            {
                Result = mInfo.Invoke(testSuite, null);
#if UNITY_5_5_OR_NEWER
                UnityEngine.Analytics.Analytics.FlushEvents();
#endif
            }
            catch (Exception e)
            {
                Exception = e;
                HasException = true;
                Result = e.GetBaseException().Message;
            }

            // Get custom attribute from each method.
            object[] attrs = mInfo.GetCustomAttributes(false);

            foreach (object attrubution in attrs)
            {
                if (attrubution != null)
                {
                    if (attrubution.GetType() != typeof(CDTest))
                    {
                        continue;
                    }

                    // Define local result varible.
                    CDTest attr = (CDTest)attrubution;
                    bool IfPass = true;

                    // Showing progress on the screen.
                    PushScreen(string.Format("Running Test {0} '{1}'", TestResultTable.Count + 1, attr.title));

                    // If the type is eventPayload...
                    if (attr.compareType == Assert.EventPayload)
                    {
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
                        PushScreen(string.Format("Running Test {0} '{1}'", TestResultTable.Count + 1, string.Format("|EventPayload| Verify {0}|{1}", attr.title, Payloads[attr.title])));

                        // Start the timeout timer
                        float timer = 0f;
                        StartCoroutine(TimedoutTimer(timer_ =>
                        {
                            // Debug.Log("timer: " + timer);
                            timer = timer_;
                        }));

                        // Check if the server is ready for this event
                        serverResult = "none";

                        while (serverResult == "none")
                        {
                            bool callbackCompleted = false;

                            JsonNetwork.GetInstance().RunServerCommand(string.Format("{0}/{1}", attr.title, Payloads[attr.title]), callback =>
                            {
                                serverResult = callback;
                                callbackCompleted = true;
                            });

                            while (!callbackCompleted)
                            {
                                yield return new WaitForSeconds(0.1f);
                            }

                            if (serverResult == "none")
                            {
                                yield return new WaitForSeconds(2f);
                            }

                            if (timer > 10f)
                            {
                                break;
                            }
                        }

                        IfPass = false;
                        if (timer < 10f)
                        {
                            IfPass = VerifyServerPayload(serverResult, attr.expectedResult);
                        }

                        Debug.Log(string.Format("[{0}], status is [{1}]", attr.title, IfPass));

                        string _FailedReason = IfPass == true ? null : string.Format("Expected result is {0} while real result is {1}. The compare type is {2}", ConvertToString(attr.expectedResult), ConverJsonToString(serverResult), attr.compareType);
                        TestResultTable.Add(IfPass);
                        TestCase _testResult = new TestCase(string.Format("|EventPayload| Verify {0}|{1}", attr.title, Payloads[attr.title]), IfPass, _FailedReason, DateTime.Now, attr.testrail_CaseNumber);
                        JsonNetwork.GetInstance().PushResultToServer(branchInfo, ClientID, _testResult);
                        continue;
                    }

                    if (attr.compareType == Assert.DoThrowException)
                    {
                        IfPass = true;

                        for (int i = 0; i < (attr.expectedResult).Count; i++)
                        {
                            IfPass = Exception.InnerException.GetType().Equals(attr.expectedResult[i]);
                            if (IfPass) break;
                        }
                    }
                    else if (attr.compareType == Assert.DoNotThrowException)
                    {
                        IfPass = false;

                        for (int i = 0; i < (attr.expectedResult).Count; i++)
                        {
                            IfPass = !Exception.InnerException.GetType().Equals(attr.expectedResult[i]);
                            if (!IfPass) break;
                        }
                    }
                    else if (!HasException && attr.compareType == Assert.DoThrowException)
                    {
                        IfPass = false;
                    }
                    else if (!HasException && attr.compareType == Assert.DoNotThrowException)
                    {
                        IfPass = true;
                    }
                    else if (!HasException && attr.compareType != Assert.DoThrowException && attr.compareType != Assert.DoNotThrowException)
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
                                IfPass = (float)(Result) < (float)attr.expectedResult[i];
                                if (!IfPass) break;
                            }
                            else if (attr.compareType == Assert.LessOREquals)
                            {
                                IfPass = (float)(Result) <= (float)attr.expectedResult[i];
                                if (!IfPass) break;
                            }
                            else if (attr.compareType == Assert.Greater)
                            {
                                IfPass = (float)(Result) > (float)attr.expectedResult[i];
                                if (!IfPass) break;
                            }
                            else if (attr.compareType == Assert.GreaterOrEquals)
                            {
                                IfPass = (float)(Result) >= (float)attr.expectedResult[i];
                                if (!IfPass) break;
                            }
                        }
                    }

                    Debug.Log(string.Format("[{0}] status is [{1}] has exception [{2}] with Assert [{3}]", attr.title, IfPass, HasException, attr.compareType));

                    string FailedReason = IfPass == true ? null : string.Format("Expected result is {0} while real result is {1}. The compare type is {2}", ConvertToString(attr.expectedResult), Result, attr.compareType);
                    TestResultTable.Add(IfPass);
                    TestCase testResult = new TestCase(attr.title, IfPass, FailedReason, DateTime.Now, attr.testrail_CaseNumber);
                    JsonNetwork.GetInstance().PushResultToServer(branchInfo, ClientID, testResult);
                }
            }
        }

        PushScreen("Finish sending test result");
        yield return new WaitForSeconds(10f);

        // Remove all history from the server
        JsonNetwork.GetInstance().PostServerCommand("finish", string.Format("{0}:{1}:{2}", ClientID, TestResultTable.FindAll(PassTest).Count, TestResultTable.Count), isDone => { Debug.Log(isDone); });

        // Shut down in 5 seconds after test run.
        for (int i = 5; i > 0; i--)
        {
            PushScreen(string.Format("Completed, {0}/{1} Passed. Shut down in {2} seconds", TestResultTable.FindAll(PassTest).Count, TestResultTable.Count, i));
            yield return new WaitForSeconds(1f);
        }

        if (!GameObject.Find("TurnOff").GetComponent<Toggle>().isOn)
            Application.Quit();
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
        if (Result == null || Result.Count == 0)
        {
            return "";
        }

        string converted = null;
        int index = 1;

        foreach (object o in Result)
        {
            converted += o.ToString();

            if (index % 2 == 0)
            {
                converted += ";";
            }
            else
            {
                converted += ",";
            }

            index++;
        }

        return converted;
    }

    /// <summary>
    /// Show branchInfo to the UI.
    /// </summary>
    private void PushBranch(string BranchInfo)
    {
        GameObject.Find("LOG").GetComponent<Text>().text = string.Format("|{0}|", BranchInfo);
    }

    /// <summary>
    /// Show progress info to the UI.
    /// </summary>
    private void PushScreen(string Content)
    {
        GameObject.Find("Canvas").transform.Find("Text").GetComponent<Text>().text = Content;
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

        Dictionary<string, object> Json = MiniJSON.Json.Deserialize(JsonString) as Dictionary<string, object>;

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

    /// <summary>
    /// Conver json to normal string
    /// </summary>
    private string ConverJsonToString(string JsonString)
    {
        if (JsonString == null || JsonString.Length == 0 || JsonString.Equals("none"))
        {
            return "";
        }

        Dictionary<string, object> Json = MiniJSON.Json.Deserialize(JsonString) as Dictionary<string, object>;
        string result = "";

        foreach (string str in Json.Keys)
        {
            result += str + "," + Json[str] + ";";
        }

        return result;
    }
}