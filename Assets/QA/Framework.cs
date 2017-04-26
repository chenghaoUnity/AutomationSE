﻿using System.Collections;
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
using LitJson;
using UnityEngine.Networking;

public class Framework : MonoBehaviour {

	public List<TestCase> resultTable = new List<TestCase>();
	public List<IEnumerator> testSuite = new List<IEnumerator>();

	public string branchInfo;

	private int maxTest;
	private int runOrder;

	public float timeDelay = 0.3f;

	private DatabaseReference reference;
	public bool verifyMode;

	void Awake () {

		if (Resources.Load ("branchInfo").ToString ().Contains ("v01")) {
			branchInfo = "v01";
		}

		if (Resources.Load ("branchInfo").ToString ().Contains ("v02")) {
			branchInfo = "v02";
		}

		if (Resources.Load ("branchInfo").ToString ().Contains ("master")) {
			branchInfo = "master";
		}
			
		FirebaseApp.DefaultInstance.SetEditorDatabaseUrl ("https://standard-event.firebaseio.com/");
		reference = FirebaseDatabase.DefaultInstance.RootReference;
	}

	public void Start() {
		//verifyMode = false;
		// testRun ();
		#if UNITY_5_5_OR_NEWER
			// StartCoroutine(automationTestRun());
		#endif
	}
		
	public IEnumerator automationTestRun() {

		string status = "Not Ready";

		while (status != "Ready") {
			yield return new WaitForSeconds (5);
			StartCoroutine (GetText ("check", (result) => {
				Debug.Log(result);
				status = result;
			}));
		}

		while (GameObject.Find ("Text").GetComponent<Text> ().text.Contains ("Please wait")) {
			yield return new WaitForSeconds (1);
		}

		verifyMode = true;
		testRun ();
	}

	// Above is not relatived with creating test cases.

	// Please add test cases to the test suite
	public void testRun() {

		testSuite.Clear ();
		resultTable.Clear ();
		maxTest = 0;
		runOrder = 0;

		// Add test cases to test suite
		testSuite.Add (test01 ());
		testSuite.Add (test02 ());
		testSuite.Add (test03 ());
		testSuite.Add (test04 ());
		testSuite.Add (test05 ());
		testSuite.Add (test06 ());
		testSuite.Add (test07 ());
		testSuite.Add (test08 ());
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
		testSuite.Add (test32 ());
		testSuite.Add (test33 ());
		testSuite.Add (test34 ());
		testSuite.Add (test35 ());
		testSuite.Add (test36 ());
		testSuite.Add (test37 ());
		testSuite.Add (test38 ());

		testSuite.Add (finalization ());
		maxTest = testSuite.Count;

		// Start test run

		// When sending mode enable
		// Reset all previous content from the server
		if (verifyMode == false) {
			StartCoroutine (GetText ("reset", null));
		}
			
		// When verify mode enable
		StartCoroutine(testSuite[runOrder]);
	}

	public IEnumerator test01() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check if version number is correct", "0.1.0", AnalyticsEvent.sdkVersion, 20660);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test02() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check first_interaction event (1)", "Ok", AnalyticsEvent.FirstInteraction(), 20661);
			TestRunJsonVerify("first_interaction/0", runOrder.ToString("D2") + " Check first_interaction event (Server) (1)", 20661, null);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check first_interaction event (1)", "Ok", e, 20661);
		}

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check first_interaction event (2)", "Ok", AnalyticsEvent.FirstInteraction("action_id_server"), 20661);
			TestRunJsonVerify("first_interaction/1", runOrder.ToString("D2") + " Check first_interaction event (Server) (2)", 20661, "action_id_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check first_interaction event (2)", "Ok", e, 20661);
		}
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test03() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check tutorial_start event (1)", "Ok", AnalyticsEvent.TutorialStart(), 20662);
			TestRunJsonVerify("tutorial_start/0", runOrder.ToString("D2") + " Check tutorial_start event (Server) (1)", 20662, null);
		} catch (Exception e) {
			TestRunException (runOrder.ToString ("D2") + " Check tutorial_start event (1)", "Ok", e, 20662);
		}

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check tutorial_start event (2)", "Ok", AnalyticsEvent.TutorialStart("tutorial_id_server"), 20662);
			TestRunJsonVerify("tutorial_start/1", runOrder.ToString("D2") + " Check tutorial_start event (Server) (2)", 20662, "tutorial_id_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check tutorial_start event (2)", "Ok", e, 20662);
		}
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test04() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check tutorial_step event (1)", "Ok", AnalyticsEvent.TutorialStep(0), 20663);
			TestRunJsonVerify("tutorial_step/0", runOrder.ToString("D2") + " Check tutorial_step event (Server) (1)", 20663, "0");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check tutorial_step event (1)", "Ok", e, 20663);
		}
			
		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check tutorial_step event (2)", "Ok", AnalyticsEvent.TutorialStep(0, "tutorial_id_server"), 20663);
			TestRunJsonVerify("tutorial_step/1", runOrder.ToString("D2") + " Check tutorial_step event (Server) (2)", 20663, "0", "tutorial_id_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check tutorial_step event (2)", "Ok", e, 20663);
		}

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}
		
	public IEnumerator test05() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check tutorial_complete event (1)", "Ok", AnalyticsEvent.TutorialComplete(), 20840);
			TestRunJsonVerify("tutorial_complete/0", runOrder.ToString("D2") + " Check tutorial_complete event (Server) (1)", 20840, null);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check tutorial_complete event (1)", "Ok", e, 20840);
		}
			
		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check tutorial_complete event (2)", "Ok", AnalyticsEvent.TutorialComplete("tutorial_id_server"), 20840);
			TestRunJsonVerify("tutorial_complete/1", runOrder.ToString("D2") + " Check tutorial_complete event (Server) (2)", 20840, "tutorial_id_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check tutorial_complete event (2)", "Ok", e, 20840);
		}
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test06() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check tutorial_skip event (1)", "Ok", AnalyticsEvent.TutorialSkip(), 20841);
			TestRunJsonVerify("tutorial_skip/0", runOrder.ToString("D2") + " Check tutorial_skip event (Server) (1)", 20841, null);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check tutorial_skip event (1)", "Ok", e, 20841);
		}
			
		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check tutorial_skip event (2)", "Ok", AnalyticsEvent.TutorialSkip("tutorial_id_server"), 20841);
			TestRunJsonVerify("tutorial_skip/1", runOrder.ToString("D2") + " Check tutorial_skip event (Server) (2)", 20841, "tutorial_id_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check tutorial_skip event (2)", "Ok", e, 20841);
		}
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}
		
	public IEnumerator test07() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check store_opened event", "Ok", AnalyticsEvent.StoreOpened(StoreType.Soft), 20842);
			TestRunJsonVerify("store_opened/0", runOrder.ToString("D2") + " Check store_opened event (Server)", 20842, "soft");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check store_opened event", "Ok", e, 20842);
		}
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	// ????
	public IEnumerator test08() {
		runOrder++;
		showProgess (runOrder);

	
		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check store_item_click event (1)", "Ok", AnalyticsEvent.StoreItemClick(StoreType.Soft,"item_id_server"), 20843);
			TestRunJsonVerify("store_item_click/0", runOrder.ToString("D2") + " Check store_item_click event (Server) (1)", 20843, "soft", "item_id_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check store_item_click event (1)", "Ok", e, 20843);
		}
			
		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check store_item_click event (2)", "Ok", AnalyticsEvent.StoreItemClick(StoreType.Soft, "item_id_server", "item_name_server"), 20843);
			TestRunJsonVerify("store_item_click/1", runOrder.ToString("D2") + " Check store_item_click event (Server) (2)", 20843, "soft", "item_id_server", "item_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check store_item_click event (2)", "Ok", e, 20843);
		}
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}
		
	public IEnumerator test10() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check currency_acquired event (1)", "Ok", AnalyticsEvent.CurrencyAcquired("currency_name_server", AcquisitionType.Soft, AcquisitionSource.Earned, 1, 2), 20845);
			TestRunJsonVerify("currency_acquired/0", runOrder.ToString("D2") + " Check currency_acquired event (Server) (1)", 20845, "currency_name_server", "soft", "earned", "1", "2");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check currency_acquired event (1)", "Ok", e, 20845);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check currency_acquired event (2)", "Ok", AnalyticsEvent.CurrencyAcquired("currency_name_server", AcquisitionType.Soft, AcquisitionSource.Earned, 1, 2, "purchaseID_server", "purchaseName_server", 1), 20845);
			TestRunJsonVerify("currency_acquired/1", runOrder.ToString("D2") + " Check currency_acquired event (Server) (2)", 20845, "currency_name_server", "soft", "earned", "1", "2", "purchaseID_server", "purchaseName_server", "1");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check currency_acquired event (2)", "Ok", e, 20845);
		}
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test11() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check consumable_acquired event", "Ok", AnalyticsEvent.ConsumableAcquired("cpnsumable_name_server", AcquisitionType.Soft, AcquisitionSource.Earned, 1, 2), 20846);
			TestRunJsonVerify("consumable_acquired/0", runOrder.ToString("D2") + " Check consumable_acquired event (Server)", 20846, "1", "2", "soft", "earned", "cpnsumable_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check consumable_acquired event (1)", "Ok", e, 20846);
		}
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test12() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check consumable_spent event (1)", "Ok", AnalyticsEvent.ConsumableSpent("consumable_name_server", 1, 2), 20847);
			TestRunJsonVerify("consumable_spent/0", runOrder.ToString("D2") + " Check consumable_spent event (Server) (1)", 20847, "1", "2", "consumable_name_server");
		
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check consumable_spent event (1)", "Ok", e, 20847);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check consumable_spent event (2)", "Ok", AnalyticsEvent.ConsumableSpent("consumable_name_server", 1, 2, "itemPurchased_server"), 20847);
			TestRunJsonVerify("consumable_spent/1", runOrder.ToString("D2") + " Check consumable_spent event (Server) (2)", 20847, "1", "2", "consumable_name_server", "itemPurchased_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check consumable_spent event (2)", "Ok", e, 20847);
		}
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test13() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check item_acquired event (1)", "Ok", AnalyticsEvent.ItemAcquired("item_name_server", AcquisitionType.Soft, AcquisitionSource.Earned), 20848);
			TestRunJsonVerify("item_acquired/0", runOrder.ToString("D2") + " Check item_acquired event (Server) (1)", 20848, "soft", "earned", "item_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check item_acquired event (1)", "Ok", e, 20848);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check item_acquired event (2)", "Ok", AnalyticsEvent.ItemAcquired("item_name_server", AcquisitionType.Soft, AcquisitionSource.Earned, "resourceType_server"), 20848);
			TestRunJsonVerify("item_acquired/1", runOrder.ToString("D2") + " Check item_acquired event (Server) (2)", 20848, "soft", "earned", "item_name_server", "resourceType_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check item_acquired event (2)", "Ok", e, 20848);
		}
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test14() {
		runOrder++;
		showProgess (runOrder);
	

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_offer event (1)", "Ok", AnalyticsEvent.AdOffer(true), 20849);
			TestRunJsonVerify("ad_offer/0", runOrder.ToString("D2") + " Check ad_offer event (Server) (1)", 20849, "True");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_offer event (1)", "Ok", e, 20849);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_offer event (2)", "Ok", AnalyticsEvent.AdOffer(true, "network_server", "placementId_server"), 20849);
			TestRunJsonVerify("ad_offer/1", runOrder.ToString("D2") + " Check ad_offer event (Server) (2)", 20849, "True", "network_server", "placementId_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_offer event (2)", "Ok", e, 20849);
		}
			

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test15() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_start event (1)", "Ok", AnalyticsEvent.AdStart(true), 20850);
			TestRunJsonVerify("ad_start/0", runOrder.ToString("D2") + " Check ad_start event (Server) (1)", 20850, "True");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_start event (1)", "Ok", e, 20850);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_start event (2)", "Ok", AnalyticsEvent.AdStart(true, "network_server", "placementId_server"), 20850);
			TestRunJsonVerify("ad_start/1", runOrder.ToString("D2") + " Check ad_start event (Server) (2)", 20850, "True", "network_server", "placementId_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_start event (2)", "Ok", e, 20850);
		}
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test16() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_complete event (1)", "Ok", AnalyticsEvent.AdComplete(true), 20851);
			TestRunJsonVerify("ad_complete/0", runOrder.ToString("D2") + " Check ad_complete event (Server) (1)", 20851, "True");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_complete event (1)", "Ok", e, 20851);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_complete event (2)", "Ok", AnalyticsEvent.AdComplete(true, "network_server", "placementId_server"), 20851);
			TestRunJsonVerify("ad_complete/1", runOrder.ToString("D2") + " Check ad_complete event (Server) (2)", 20851, "True", "network_server", "placementId_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_complete event (2)", "Ok", e, 20851);
		}
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test17() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_skip event (1)", "Ok", AnalyticsEvent.AdSkip(true), 20852);
			TestRunJsonVerify("ad_skip/0", runOrder.ToString("D2") + " Check ad_skip event (Server) (1)", 20852, "True");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_skip event (1)", "Ok", e, 20852);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_skip event (2)", "Ok", AnalyticsEvent.AdSkip(true, "network_server", "placementId_server"), 20852);
			TestRunJsonVerify("ad_skip/1", runOrder.ToString("D2") + " Check ad_skip event (Server) (2)", 20852, "True", "network_server", "placementId_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_skip event (2)", "Ok", e, 20852);
		}

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test18() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check post_ad_action event (1)", "Ok", AnalyticsEvent.PostAdAction(true), 20853);
			TestRunJsonVerify("post_ad_action/0", runOrder.ToString("D2") + " Check post_ad_action event (Server) (1)", 20853, "True");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check post_ad_action event (1)", "Ok", e, 20853);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check post_ad_action event (2)", "Ok", AnalyticsEvent.PostAdAction(true, "network_server", "placementId_server"), 20853);
			TestRunJsonVerify("post_ad_action/1", runOrder.ToString("D2") + " Check post_ad_action event (Server) (2)", 20853, "True", "network_server", "placementId_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check post_ad_action event (2)", "Ok", e, 20853);
		}

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test19() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check screen_visit event", "Ok", AnalyticsEvent.ScreenVisit(ScreenName.Achievements), 20854);
			TestRunJsonVerify("screen_visit/0", runOrder.ToString("D2") + " Check screen_visit event (Server)", 20854, "achievements");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check screen_visit event", "Ok", e, 20854);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test20() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check cutscene_start event", "Ok", AnalyticsEvent.CutsceneStart("scene_name_server"), 20855);
			TestRunJsonVerify("cutscene_start/0", runOrder.ToString("D2") + " Check cutscene_start event (Server)", 20855, "scene_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check cutscene_start event", "Ok", e, 20855);
		}
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test21() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check cutscene_skip event", "Ok", AnalyticsEvent.CutsceneSkip("scene_name_server"), 20855);
			TestRunJsonVerify("cutscene_skip/0", runOrder.ToString("D2") + " Check cutscene_skip event (Server)", 20855, "scene_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check cutscene_skip event", "Ok", e, 20855);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test22() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check game_start event", "Ok", AnalyticsEvent.GameStart(), 20856);
			TestRunJsonVerify("game_start/0", runOrder.ToString("D2") + " Check game_start event (Server)", 20856, null);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check game_start event", "Ok", e, 20856);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test23() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check game_over event (1)", "Ok", AnalyticsEvent.GameOver(), 20857);
			TestRunJsonVerify("game_over/0", runOrder.ToString("D2") + " Check game_over event (Server) (1)", 20857, null);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check game_over event (1)", "Ok", e, 20857);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check game_over event (2)", "Ok", AnalyticsEvent.GameOver(0), 20857);
			TestRunJsonVerify("game_over/1", runOrder.ToString("D2") + " Check game_over event (Server) (2)", 20857, "0");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check game_over event (2)", "Ok", e, 20857);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check game_over event (3)", "Ok", AnalyticsEvent.GameOver("level_name_server"), 20857);
			TestRunJsonVerify("game_over/2", runOrder.ToString("D2") + " Check game_over event (Server) (3)", 20857, "level_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check game_over event (3)", "Ok", e, 20857);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check game_over event (4)", "Ok", AnalyticsEvent.GameOver(0, "level_name_server"), 20857);
			TestRunJsonVerify("game_over/3", runOrder.ToString("D2") + " Check game_over event (Server) (4)", 20857, "0", "level_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check game_over event (4)", "Ok", e, 20857);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test24() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_start event (1)", "Ok", AnalyticsEvent.LevelStart(0), 20858);
			TestRunJsonVerify("level_start/0", runOrder.ToString("D2") + " Check level_start event (Server) (1)", 20858, "0");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_start event (1)", "Ok", e, 20858);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_start event (2)", "Ok", AnalyticsEvent.LevelStart ("level_name_server"), 20858);
			TestRunJsonVerify("level_start/1", runOrder.ToString("D2") + " Check level_start event (Server) (2)", 20858, "level_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_start event (2)", "Ok", e, 20858);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_start event (3)", "Ok", AnalyticsEvent.LevelStart (0, "level_name_server"), 20858);
			TestRunJsonVerify("level_start/2", runOrder.ToString("D2") + " Check level_start event (Server) (3)", 20858, "0", "level_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_start event (3)", "Ok", e, 20858);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test25() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_complete event (1)", "Ok", AnalyticsEvent.LevelComplete(0), 20859);
			TestRunJsonVerify("level_complete/0", runOrder.ToString("D2") + " Check level_complete event (Server) (1)", 20859, "0");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_complete event (1)", "Ok", e, 20859);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_complete event (2)", "Ok", AnalyticsEvent.LevelComplete ("level_name_server"), 20859);
			TestRunJsonVerify("level_complete/1", runOrder.ToString("D2") + " Check level_complete event (Server) (2)", 20859, "level_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_complete event (2)", "Ok", e, 20859);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_complete event (3)", "Ok", AnalyticsEvent.LevelComplete (0, "level_name_server"), 20859);
			TestRunJsonVerify("level_complete/2", runOrder.ToString("D2") + "Check level_complete event (Server) (3)", 20859, "0", "level_name_server");
		} catch (Exception e) { 
			TestRunException (runOrder.ToString("D2") + " Check level_complete event (3)", "Ok", e, 20859);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test26() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_fail event (1)", "Ok", AnalyticsEvent.LevelFail (0), 20860);
			TestRunJsonVerify("level_fail/0", runOrder.ToString("D2") + " Check level_fail event (Server) (1)", 20860, "0");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_fail event (1)", "Ok", e, 20860);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_fail event (2)", "Ok", AnalyticsEvent.LevelFail ("level_name_server"), 20860);
			TestRunJsonVerify("level_fail/1", runOrder.ToString("D2") + " Check level_fail event (Server) (2)", 20860, "level_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_fail event (2)", "Ok", e, 20860);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_fail event (3)", "Ok", AnalyticsEvent.LevelFail (0, "level_name_server"), 20860);
			TestRunJsonVerify("level_fail/2", runOrder.ToString("D2") + " Check level_fail event (Server) (3)", 20860, "0", "level_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_fail event (3)", "Ok", e, 20860);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test27() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_quit event (1)", "Ok", AnalyticsEvent.LevelQuit (0), 20861);
			TestRunJsonVerify("level_quit/0", runOrder.ToString("D2") + " Check level_quit event (Server) (1)", 20861, "0");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_quit event (1)", "Ok", e, 20861);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_quit event (2)", "Ok", AnalyticsEvent.LevelQuit ("level_name_server"), 20861);
			TestRunJsonVerify("level_quit/1", runOrder.ToString("D2") + " Check level_quit event (Server) (2)", 20861, "level_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_quit event (2)", "Ok", e, 20861);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_quit event (3)", "Ok", AnalyticsEvent.LevelQuit (0, "level_name_server"), 20861);
			TestRunJsonVerify("level_quit/2", runOrder.ToString("D2") + " Check level_quit event (Server) (3)", 20861, "0", "level_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_quit event (3)", "Ok", e, 20861);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test28() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_skip event (1)", "Ok", AnalyticsEvent.LevelSkip (0), 20862);
			TestRunJsonVerify("level_skip/0", runOrder.ToString("D2") + " Check level_skip event (Server) (1)", 20862, "0");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_skip event (1)", "Ok", e, 20862);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_skip event (2)", "Ok", AnalyticsEvent.LevelSkip ("level_name_server"), 20862);
			TestRunJsonVerify("level_skip/1", runOrder.ToString("D2") + " Check level_skip event (Server) (2)", 20862, "level_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_skip event (2)", "Ok", e, 20862);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_skip event (3)", "Ok", AnalyticsEvent.LevelSkip (0, "level_name_server"), 20862);
			TestRunJsonVerify("level_skip/2", runOrder.ToString("D2") + " Check level_skip event (Server) (3)", 20862, "0", "level_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_skip event (3)", "Ok", e, 20862);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test29() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_up event (1)", "Ok", AnalyticsEvent.LevelUp (0, 1), 20863);
			TestRunJsonVerify("level_up/0", runOrder.ToString("D2") + " Check level_up event (Server) (1)", 20863, "0", "1");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_up event (1)", "Ok", e, 20863);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_up event (2)", "Ok", AnalyticsEvent.LevelUp  ("old_level_name_server", "new_level_name_server"), 20863);
			TestRunJsonVerify("level_up/1", runOrder.ToString("D2") + " Check level_up event (Server) (2)", 20863,  "old_level_name_server", "new_level_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_up event (2)", "Ok", e, 20863);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_up event (3)", "Ok", AnalyticsEvent.LevelUp(0, 1, "old_level_name_server" ,"new_level_name_server"), 20863);
			TestRunJsonVerify("level_up/2", runOrder.ToString("D2") + " Check level_up event (Server) (3)", 20863, "0", "1", "old_level_name_server", "new_level_name_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_up event (3)", "Ok", e, 20863);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test30() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check push_notification_enable event", "Ok", AnalyticsEvent.PushNotificationEnable(), 20864);
			TestRunJsonVerify("push_notification_enable/0", runOrder.ToString("D2") + " Check push_notification_enable event (Server)", 20864, null);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check push_notification_enable event", "Ok", e, 20864);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}
		
	public IEnumerator test32() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check push_notification_click event", "Ok", AnalyticsEvent.PushNotificationClick("message_id_server"), 20865);
			TestRunJsonVerify("push_notification_click/0", runOrder.ToString("D2") + " Check push_notification_click event (Server)", 20865, "message_id_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check push_notification_click event", "Ok", e, 20865);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test33() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check chat_msg_sent event", "Ok", AnalyticsEvent.ChatMessageSent(), 20866);
			TestRunJsonVerify("chat_msg_sent/0", runOrder.ToString("D2") + " Check chat_msg_sent event (Server)", 20866, null);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check chat_msg_sent event", "Ok", e, 20866);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test34() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds (timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check achievement_unlocked event", "Ok", AnalyticsEvent.AchievementUnlocked("achievement_id_server"), 20867);
			TestRunJsonVerify("achievement_unlocked/0", runOrder.ToString("D2") + " Check achievement_unlocked event (Server)", 20867, "achievement_id_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check achievement_unlocked event", "Ok", e, 20867);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}
	

	public IEnumerator test35() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check achievement_step event", "Ok", AnalyticsEvent.AchievementStep(0, "achievement_id_server"), 20868);
			TestRunJsonVerify("achievement_step/0", runOrder.ToString("D2") + " Check achievement_step event (Server)", 20868, "0", "achievement_id_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check achievement_step event", "Ok", e, 20868);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test36() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check user_signup event", "Ok", AnalyticsEvent.UserSignup(AuthorizationNetwork.Facebook), 20869);
			TestRunJsonVerify("user_signup/0", runOrder.ToString("D2") + " Check user_signup event (Server)", 20869, "facebook");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check user_signup event", "Ok", e, 20869);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test37() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check social_share event (1)", "Ok", AnalyticsEvent.SocialShare (ShareType.Achievement, SocialNetwork.Facebook), 20870);
			TestRunJsonVerify("social_share/0", runOrder.ToString("D2") + " Check social_share event (Server) (1)", 20870, "achievement", "facebook");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check social_share event (1)", "Ok", e, 20870);
		}

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check social_share event (2)", "Ok", AnalyticsEvent.SocialShare (ShareType.Achievement, SocialNetwork.Facebook, "sender_id_server", "recipient_id_server"), 20870);
			TestRunJsonVerify("social_share/1", runOrder.ToString("D2") + " Check social_share event (Server) (2)", 20870, "achievement", "facebook", "sender_id_server", "recipient_id_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check social_share event (2)", "Ok", e, 20870);
		}
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test38() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check social_share_accept event (1)", "Ok", AnalyticsEvent.SocialShareAccept (ShareType.Achievement, SocialNetwork.Facebook), 20870);
			TestRunJsonVerify("social_share_accept/0", runOrder.ToString("D2") + " Check social_share_accept event (Server) (1)", 20870, "achievement", "facebook");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check social_share_accept event (1)", "Ok", e, 20870);
		}

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check social_share_accept event (2)", "Ok", AnalyticsEvent.SocialShareAccept (ShareType.Achievement, SocialNetwork.Facebook, "sender_id_server", "recipient_id_server"), 20870);
			TestRunJsonVerify("social_share_accept/1", runOrder.ToString("D2") + " Check social_share_accept event (Server) (2)", 20870, "achievement", "facebook", "sender_id_server", "recipient_id_server");
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check social_share_accept event (2)", "Ok", e, 20870);
		}

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}


	// Below is not relatived with creating test cases.
		
	public IEnumerator finalization() {
		yield return new WaitForSeconds (timeDelay);
		showReport ();
	}

	// For checking status
	private void TestRunHelper(string description, string expectedResult, object realResult, int caseNumber = 0) {

		if (verifyMode == true) {
			return;
		}

		bool compare = expectedResult == realResult.ToString ();
		string failReason = null;

		if (compare == false) {
			failReason = realResult.ToString ();
		}
	
		resultTable.Add(new TestCase(
			description,
			compare,
			failReason,
			System.DateTime.Now,
			"http://qatestrail.hq.unity3d.com/index.php?/cases/view/" + caseNumber.ToString()));
	}

	// For finding any exception
	private void TestRunException(string description, string expectedResult, Exception e, int caseNumber = 0) {

		resultTable.Add(new TestCase(
			description,
			false,
			e.GetBaseException().ToString(),
			System.DateTime.Now,
			"http://qatestrail.hq.unity3d.com/index.php?/cases/view/" + caseNumber.ToString()));
	}
		

	// For verifying json
	private void TestRunJsonVerify(string methodName, string description, int caseNumber, params string[] parameter) {

		if (verifyMode == false) {
			return;
		}

		StartCoroutine(GetText(methodName, (parameterJson) =>
			{
				HandleJson(parameterJson, methodName, description, caseNumber, parameter);
			}));
	}

	private void HandleJson(string parameterJson, string methodName, string description, int caseNumber, params string[] parameter) {

		// Check if the expected result is null
		if (parameterJson.Length == 0 && parameter == null) {
			resultTable.Add (new TestCase (
				description,
				true,
				null,
				System.DateTime.Now,
				"http://qatestrail.hq.unity3d.com/index.php?/cases/view/" + caseNumber.ToString ()));
			return;
		}

		// Check when the result and expected result is not null
		if (parameterJson.Length != 0 && parameter != null) {

			JsonData jsonvale = JsonMapper.ToObject (parameterJson);
			List<string> list = new List<string> (parameter);

			// When the size of parameters is not matched, fail
			if (jsonvale.Count != list.Count) {
				resultTable.Add (new TestCase (
					description,
					false,
					"Server recived " + parameterJson,
					System.DateTime.Now,
					"http://qatestrail.hq.unity3d.com/index.php?/cases/view/" + caseNumber.ToString ()));
				return;
			}

			// Traverse the expected result and real result, see if they can be matched
			for (int i = 0; i < jsonvale.Count; i++) {
				for (int j = 0; j < list.Count; j++) {
					if (list [j].Equals(jsonvale [i].ToString ())) {
						list.RemoveAt (j);
						break;
					}
				}
			}

			// If not, fail
			if (list.Count != 0) {
				resultTable.Add (new TestCase (
					description,
					false,
					"Server recived " + parameterJson,
					System.DateTime.Now,
					"http://qatestrail.hq.unity3d.com/index.php?/cases/view/" + caseNumber.ToString ()));
			} 
			// If so, pass
			else {
				resultTable.Add (new TestCase (
					description,
					true,
					null,
					System.DateTime.Now,
					"http://qatestrail.hq.unity3d.com/index.php?/cases/view/" + caseNumber.ToString ()));
			}
		} else {

			// Other case is fail
			resultTable.Add (new TestCase (
				description,
				false,
				"Server recived " + parameterJson,
				System.DateTime.Now,
				"http://qatestrail.hq.unity3d.com/index.php?/cases/view/" + caseNumber.ToString ()));
		}
	}

	IEnumerator GetText(string methodName, Action<string> callback) {
		
		WWW www = new WWW("https://obscure-shelf-46410.herokuapp.com/events/" + methodName);
		yield return www;

		if (www.error == null) {
			if (www.text == null) {
				callback (null);
			} else {
				callback (www.text);
			}
		} else {
			callback(www.error);
		}
	}

	private void showProgess(int progress) {
		// Show progree to the screen
		float percentage = (float)progress / (float)(maxTest - 1);
		decimal d = decimal.Round (decimal.Parse ((percentage * 100).ToString()), 2);

		GameObject.Find("Text").GetComponent<Text>().text = "Please wait, running " + (d)  + "%  ..." ;
		GameObject.Find ("Slider").GetComponent<Slider> ().value = (float) d / 100;
	}

	private void showReport() {
		// Push the result to the server and reminds user
		int passed = 0;

		foreach(TestCase result in resultTable) {

			if (result.getResult () == true) {
				passed++;
			}
			try {
				pushResultToServer (result);
			} catch (NullReferenceException e) {
				print (e);
			}
		}
			
		#if UNITY_5_5_OR_NEWER
		UnityEngine.Analytics.Analytics.FlushEvents ();
		#endif

		GameObject.Find("Text").GetComponent<Text> ().text = "Finished! " + (passed) + " / " + (resultTable.Count)  + " Passed!";
	}

	private void pushResultToServer(TestCase testCase) {
		string key = reference.Child("QAReport").Push().Key;
		Dictionary<string, object> childUpdates = new Dictionary<string, object>();
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy")  + "/" + branchInfo + "/" + Application.unityVersion.Replace('.', ' ') + "/" + testCase.getDescitpion() +  "/Result/"] = testCase.getResult () == true ? "Pass" : "Fail";
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy") +  "/" + branchInfo + "/" + Application.unityVersion.Replace('.', ' ') + "/" + testCase.getDescitpion () + "/UnityVersion/"] = Application.unityVersion;
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy") +  "/" + branchInfo + "/" + Application.unityVersion.Replace('.', ' ') + "/" + testCase.getDescitpion () +  "/FailReason/"] = testCase.getFailReason ();
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy") +  "/" + branchInfo + "/" + Application.unityVersion.Replace('.', ' ') + "/" + testCase.getDescitpion () +  "/TestrailLink/"] = testCase.getCaseLink ();
		reference.UpdateChildrenAsync(childUpdates);
	}

}