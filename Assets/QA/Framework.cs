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
using UnityEngine;
using UnityEngine.Analytics.Experimental;
using System;

public class Framework : MonoBehaviour {

	public List<TestCase> resultTable = new List<TestCase>();
	public List<IEnumerator> testSuite = new List<IEnumerator>();

	private int maxTest = 0;
	private int runOrder = 0;

	private DatabaseReference reference;


	void Awake () {
		FirebaseApp.DefaultInstance.SetEditorDatabaseUrl("https://standard-event.firebaseio.com/");
		reference = FirebaseDatabase.DefaultInstance.RootReference;
	}

	public void Start() {
		testRun ();
	}
		
	// Above is not relatived with creating test cases.

	// Please add test cases to the test suite
	public void testRun() {
		
		// Add test cases to test suite
		testSuite.Add (test01 ());
		testSuite.Add (test02 ());
		testSuite.Add (test03 ());
		testSuite.Add (test04 ());
		testSuite.Add (test05 ());
		testSuite.Add (test06 ());
		testSuite.Add (test07 ());
		testSuite.Add (test08 ());
		testSuite.Add (test09 ());
		testSuite.Add (test10 ());
		testSuite.Add (test11 ());
		testSuite.Add (test12 ());
		testSuite.Add (test13 ());
		testSuite.Add (test14 ());
		testSuite.Add (test15 ());
		testSuite.Add (test16 ());
		testSuite.Add (test17 ());
		testSuite.Add (test18 ());
		testSuite.Add (test19 ());
		testSuite.Add (test20 ());
		testSuite.Add (test21 ());
		testSuite.Add (test22 ());
		testSuite.Add (test23 ());
		testSuite.Add (test24 ());
		testSuite.Add (test25 ());
		testSuite.Add (test26 ());
		testSuite.Add (test27 ());
		testSuite.Add (test28 ());
		testSuite.Add (test29 ());
		testSuite.Add (test30 ());
		testSuite.Add (test31 ());
		testSuite.Add (test32 ());
		testSuite.Add (test33 ());
		testSuite.Add (test34 ());
		testSuite.Add (test35 ());


		testSuite.Add (finalization ());
		maxTest = testSuite.Count;

		// Start test run
		StartCoroutine(testSuite[runOrder]);

	}

	public IEnumerator test01() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check if version number is correct", "0.0.0", AnalyticsEvent.sdkVersion);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test02() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check post_install_action event", "Ok", "post_install_action should optional take string");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test03() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check tutorial_start event", "Ok", AnalyticsEvent.Send(TutorialStartPayload.CreateInstance("ID")));

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test04() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check tutorial_step event", "Ok", "step_index should be Int");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test05() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check tutorial_complete event", "Ok", AnalyticsEvent.Send(TutorialCompletePayload.CreateInstance("ID")));

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test06() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check tutorial_skip event", "Ok", AnalyticsEvent.Send(TutorialSkipPayload.CreateInstance("ID")));

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test07() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check store_opened event", "Ok", AnalyticsEvent.Send(StoreOpenedPayload.CreateInstance("Soft")));

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test08() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check store_item_clicked event", "Ok", AnalyticsEvent.Send(StoreItemClickedPayload.CreateInstance("01")));

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test09() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check Transaction event", "Ok", "Cannot find Transaction payload");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test10() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check currency_acquired event", "Ok", "Cannot find currency_acquired payload");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test11() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check currency_spent event", "Ok", "Parameter invalid");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test12() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check resource_acquired event", "Ok", "Cannot find resource_acquired payload");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test13() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check resource_spent event", "Ok", "Cannot find resource_spent payload");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test14() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_offer event", "Ok", "Parameter invalid");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test15() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_start event", "Ok", "Parameter invalid");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test16() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_complete event", "Ok", "Parameter invalid");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test17() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_skip event", "Ok", "Parameter invalid");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test18() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check post_ad_action event", "Ok", "Parameter invalid");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test19() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f); 
		TestRunHelper (runOrder.ToString("D2") + " Check screen_visit event", "Ok", "Cannot find screen_visit payload");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test20() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f); 
		TestRunHelper (runOrder.ToString("D2") + " Check cutscene_skip event", "Ok", AnalyticsEvent.Send(CutsceneSkipPayload.CreateInstance ("Main")));

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test21() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f); 
		TestRunHelper (runOrder.ToString("D2") + " Check game_start event", "Ok", "Parameter invalid");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test22() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f); 
		TestRunHelper (runOrder.ToString("D2") + " Check game_over event", "Ok", AnalyticsEvent.Send(GameOverPayload.CreateInstance(0, "Main")));

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test23() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f); 
		TestRunHelper (runOrder.ToString("D2") + " Check level_start event", "Ok", AnalyticsEvent.Send(LevelStartPayload.CreateInstance ("Main")));

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test24() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check level_complete event", "Ok", AnalyticsEvent.Send(LevelCompletePayload.CreateInstance ("Main")));

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test25() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check level_fail event", "Ok", AnalyticsEvent.Send(LevelFailPayload.CreateInstance ("Main")));

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test26() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check level_quit event", "Ok",  AnalyticsEvent.Send(LevelQuitPayload.CreateInstance ("Main")));

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test27() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check level_skip event", "Ok",  "Cannot find level_skip payload");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test28() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f); 
		TestRunHelper (runOrder.ToString("D2") + " Check level_up event", "Ok", AnalyticsEvent.Send(LevelUpPayload.CreateInstance ("Menu", "Main")));

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test29() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check push_notification_enable event", "Ok", "Parameter invalid");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test30() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check push_notification_click event", "Ok", AnalyticsEvent.Send(PushNotificationClickedPayload.CreateInstance("MessageID")));

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test31() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check chat_msg_sent event", "Ok", "Parameter invalid");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test32() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds (0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check achievement_unlock event", "Ok", AnalyticsEvent.Send(AchievementUnlockedPayload.CreateInstance ("01")));

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}
	

	public IEnumerator test33() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f); 
		TestRunHelper (runOrder.ToString("D2") + " Check achievement_step event", "Ok", "Cannot find achievement_step payload");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test34() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f); 
		TestRunHelper (runOrder.ToString("D2") + " Check user_signup event", "Ok", "Parameter invalid");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test35() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		TestRunHelper (runOrder.ToString("D2") + " Check social_share event", "Ok", "Parameter invalid");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}


	// Below is not relatived with creating test cases.
		
	public IEnumerator finalization() {
		showReport ();
		yield return new WaitForSeconds (0.3f);
	}
		

	private void TestRunHelper(string description, string expectedResult, object realResult) {

		bool compare = expectedResult == realResult.ToString ();
		string failReason = null;

		if (compare == false) {
			failReason = realResult.ToString ();
		}
	
		resultTable.Add(new TestCase(
			description,
			compare,
			failReason,
			System.DateTime.Now));
	}

	private void showProgess(int progress) {
		// Show progree to the screen
		GameObject.Find("Text").GetComponent<Text>().text = "Please wait, running " + progress + " / " + (maxTest - 1) + "...";
	}

	private void showReport() {
		// Push the result to the server and reminds user
		int failed = 0;

		foreach(TestCase result in resultTable) {
			if (result.getResult () == false) {
				failed++;
			}
			pushResultToServer (result);
		}
			
		GameObject.Find("Text").GetComponent<Text> ().text = "Finished! " + (maxTest - failed - 1) + " / " + (maxTest - 1)  + " Passed!";
	}

	private void pushResultToServer(TestCase testCase) {
		string key = reference.Child("QAReport").Push().Key;
		Dictionary<string, object> childUpdates = new Dictionary<string, object>();
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString("MMM d, yyyy") + "/" + testCase.getDescitpion()  + "/" + testCase.getDate().ToString("HH:mm:ss tt zz") + "/Result/"] = testCase.getResult () == true ? "Pass" : "Fail";
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy") + "/" + testCase.getDescitpion () + "/" + testCase.getDate ().ToString ("HH:mm:ss tt zz") + "/UnityVersion/"] = UnityEditorInternal.InternalEditorUtility.GetFullUnityVersion ();
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy") + "/" + testCase.getDescitpion () + "/" + testCase.getDate ().ToString ("HH:mm:ss tt zz") + "/FailReason/"] = testCase.getFailReason ();
		reference.UpdateChildrenAsync(childUpdates);
	}

}