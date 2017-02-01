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

	public float timeDelay = 0.3f;

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

		yield return new WaitForSeconds(timeDelay);

		TestRunHelper (runOrder.ToString("D2") + " Check if version number is correct", "0.0.0", AnalyticsEvent.sdkVersion, 20660);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test02() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check post_install_action event (1)", "Ok", AnalyticsEvent.Send(PostInstallActionPayload.CreateInstance ()), 20661);
		TestRunHelper (runOrder.ToString("D2") + " Check post_install_action event (1)", "Ok", "Construction Error", 20661);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check post_install_action event (2)", "Ok", AnalyticsEvent.Send(PostInstallActionPayload.CreateInstance ("action_id")), 20661);
		TestRunHelper (runOrder.ToString("D2") + " Check post_install_action event (2)", "Ok", "Construction Error", 20661);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test03() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check tutorial_start event (1)", "Ok", AnalyticsEvent.Send(TutorialStartPayload.CreateInstance()), 20662);
		TestRunHelper (runOrder.ToString("D2") + " Check tutorial_start event (1)", "Ok", "Construction Error", 20662);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check tutorial_start event (2)", "Ok", AnalyticsEvent.Send(TutorialStartPayload.CreateInstance("tutorial_id")), 20662);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test04() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check tutorial_step event (1)", "Ok", AnalyticsEvent.Send(TutorialStepPayload.CreateInstance(0)), 20663);
		TestRunHelper (runOrder.ToString("D2") + " Check tutorial_step event (1)", "Ok", "Construction Error", 20663);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check tutorial_step event (2)", "Ok", AnalyticsEvent.Send(TutorialStepPayload.CreateInstance(0, "tutorial_id")), 20663);
		TestRunHelper (runOrder.ToString("D2") + " Check tutorial_step event (2)", "Ok", "Construction Error", 20663);
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}
		
	public IEnumerator test05() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check tutorial_complete event (1)", "Ok", AnalyticsEvent.Send(TutorialCompletePayload.CreateInstance()), 20840);
		TestRunHelper (runOrder.ToString("D2") + " Check tutorial_complete event (1)", "Ok", "Construction Error", 20840);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check tutorial_complete event (2)", "Ok", AnalyticsEvent.Send(TutorialCompletePayload.CreateInstance("tutorial_id")), 20840);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test06() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check tutorial_skip event (1)", "Ok", AnalyticsEvent.Send(TutorialSkipPayload.CreateInstance()), 20841);
		TestRunHelper (runOrder.ToString("D2") + " Check tutorial_skip event (1)", "Ok", "Construction Error", 20841);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check tutorial_skip event (2)", "Ok", AnalyticsEvent.Send(TutorialSkipPayload.CreateInstance("tutorial_id")), 20841);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}
		
	public IEnumerator test07() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check store_opened event", "Ok", AnalyticsEvent.Send(StoreOpenedPayload.CreateInstance("Soft")), 20842);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test08() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check store_item_clicked event (1)", "Ok", AnalyticsEvent.Send(StoreItemClickedPayload.CreateInstance(0)), 20843);
		TestRunHelper (runOrder.ToString("D2") + " Check store_item_clicked event (1)", "Ok", "Construction Error", 20843);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check store_item_clicked event (2)", "Ok", AnalyticsEvent.Send(StoreItemClickedPayload.CreateInstance("item_name")), 20843);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check store_item_clicked event (3)", "Ok", AnalyticsEvent.Send(StoreItemClickedPayload.CreateInstance(0, "iten_name")), 20843);
		TestRunHelper (runOrder.ToString("D2") + " Check store_item_clicked event (3)", "Ok", "Construction Error", 20843);


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test09() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check Transaction event", "Ok", AnalyticsEvent.Send(TransactionPayload.CreateInstance("bundle_purchase", 2.1f)), 20844);
		TestRunHelper (runOrder.ToString("D2") + " Check Transaction event", "Ok", "Cannot find Transaction payload", 20844);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test10() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check currency_acquired event (1)", "Ok", AnalyticsEvent.Send(CurrencyAcquiredPayload.CreateInstance("item_id", 2.1f, "source", 2.2f, "type", "reward_source")), 20845);
		TestRunHelper (runOrder.ToString("D2") + " Check currency_acquired event (1)", "Ok", "Cannot find currency_acquired payload", 20845);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check currency_acquired event (2)", "Ok", AnalyticsEvent.Send(CurrencyAcquiredPayload.CreateInstance("item_name", 2.1f, "source", 2.2f, "type", "reward_source")), 20845);
		TestRunHelper (runOrder.ToString("D2") + " Check currency_acquired event (2)", "Ok", "Cannot find currency_acquired payload", 20845);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check currency_acquired event (3)", "Ok", AnalyticsEvent.Send(CurrencyAcquiredPayload.CreateInstance("item_id", "item_name", 2.1f, "source", 2.2f, "type", "reward_source")), 20845);
		TestRunHelper (runOrder.ToString("D2") + " Check currency_acquired event (3)", "Ok", "Cannot find currency_acquired payload", 20845);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test11() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check currency_spent event (1)", "Ok", AnalyticsEvent.Send(CurrencySpentPayload.CreateInstance("item_id", 2.1f, "type", 2.2f)), 20846);
		TestRunHelper (runOrder.ToString("D2") + " Check currency_spent event (1)", "Ok", "Construction Error", 20846);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check currency_spent event (2)", "Ok", AnalyticsEvent.Send(CurrencySpentPayload.CreateInstance("item_name", 2.1f, "type", 2.2f)), 20846);
		TestRunHelper (runOrder.ToString("D2") + " Check currency_spent event (2)", "Ok", "Construction Error", 20846);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check currency_spent event (3)", "Ok", AnalyticsEvent.Send(CurrencySpentPayload.CreateInstance("item_id", "item_name", 2.1f, "type", 2.2f)), 20846);
		TestRunHelper (runOrder.ToString("D2") + " Check currency_spent event (3)", "Ok", "Construction Error", 20846);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test12() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check resource_acquired event (1)", "Ok", AnalyticsEvent.Send(ResourceAcquiredPayload.CreateInstance("item_id", 2.1f, 2.2f)), 20847);
		TestRunHelper (runOrder.ToString("D2") + " Check resource_acquired event (1)", "Ok", "Cannot find resource_acquired payload", 20847);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check resource_acquired event (2)", "Ok", AnalyticsEvent.Send(ResourceAcquiredPayload.CreateInstance("item_name", 2.1f, 2.2f)), 20847);
		TestRunHelper (runOrder.ToString("D2") + " Check resource_acquired event (2)", "Ok", "Cannot find resource_acquired payload", 20847);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check resource_acquired event (3)", "Ok", AnalyticsEvent.Send(ResourceAcquiredPayload.CreateInstance("item_id", "item_name", 2.1f, 2.2f)), 20847);
		TestRunHelper (runOrder.ToString("D2") + " Check resource_acquired event (3)", "Ok", "Cannot find resource_acquired payload", 20847);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test13() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check resource_spent event (1)", "Ok", AnalyticsEvent.Send(ResourceAcquiredPayload.CreateInstance("item_id", 2.1f, 2.2f)), 20848);
		TestRunHelper (runOrder.ToString("D2") + " Check resource_spent event (1)", "Ok", "Cannot find resource_spent payload", 20848);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check resource_spent event (2)", "Ok", AnalyticsEvent.Send(ResourceAcquiredPayload.CreateInstance("item_name", 2.1f, 2.2f)), 20848);
		TestRunHelper (runOrder.ToString("D2") + " Check resource_spent event (2)", "Ok", "Cannot find resource_spent payload", 20848);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check resource_spent event (3)", "Ok", AnalyticsEvent.Send(ResourceAcquiredPayload.CreateInstance("item_id", "item_name", 2.1f, 2.2f)), 20848);
		TestRunHelper (runOrder.ToString("D2") + " Check resource_spent event (3)", "Ok", "Cannot find resource_spent payload", 20848);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test14() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check ad_offer event (1)", "Ok", AnalyticsEvent.Send(AdOfferPayload.CreateInstance()), 20849);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_offer event (1)", "Ok", "Construction Error", 20849);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_offer event (2)", "Ok", AnalyticsEvent.Send(AdOfferPayload.CreateInstance("network")), 20849);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_offer event (3)", "Ok", AnalyticsEvent.Send(AdOfferPayload.CreateInstance("placement_id")), 20849);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check ad_offer event (4)", "Ok", AnalyticsEvent.Send(AdOfferPayload.CreateInstance("network", "placement_id")), 20849);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_offer event (4)", "Ok", "Construction Error", 20849);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test15() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check ad_start event (1)", "Ok", AnalyticsEvent.Send(AdStartPayload.CreateInstance()), 20850);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_start event (1)", "Ok", "Construction Error", 20850);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_start event (2)", "Ok", AnalyticsEvent.Send(AdStartPayload.CreateInstance("network")), 20850);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_start event (3)", "Ok", AnalyticsEvent.Send(AdStartPayload.CreateInstance("placement_id")), 20850);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check ad_start event (4)", "Ok", AnalyticsEvent.Send(AdStartPayload.CreateInstance("network", "placement_id")), 20850);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_start event (4)", "Ok", "Construction Error", 20850);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test16() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check ad_complete event (1)", "Ok", AnalyticsEvent.Send(AdCompletePayload.CreateInstance()), 20851);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_complete event (1)", "Ok", "Construction Error", 20851);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_complete event (2)", "Ok", AnalyticsEvent.Send(AdCompletePayload.CreateInstance("network")), 20851);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_complete event (3)", "Ok", AnalyticsEvent.Send(AdCompletePayload.CreateInstance("placement_id")), 20851);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check ad_complete event (4)", "Ok", AnalyticsEvent.Send(AdCompletePayload.CreateInstance("network", "placement_id")), 20851);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_complete event (4)", "Ok", "Construction Error", 20851);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test17() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check ad_skip event (1)", "Ok", AnalyticsEvent.Send(AdSkipPayload.CreateInstance()), 20852);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_skip event (1)", "Ok", "Construction Error", 20852);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_skip event (2)", "Ok", AnalyticsEvent.Send(AdSkipPayload.CreateInstance("network")), 20852);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_skip event (3)", "Ok", AnalyticsEvent.Send(AdSkipPayload.CreateInstance("placement_id")), 20852);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check ad_skip event (4)", "Ok", AnalyticsEvent.Send(AdSkipPayload.CreateInstance("network", "placement_id")), 20852);
		TestRunHelper (runOrder.ToString("D2") + " Check ad_skip event (4)", "Ok", "Construction Error", 20852);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test18() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check post_ad_action event (1)", "Ok", AnalyticsEvent.Send(PostAdActionPayload.CreateInstance()), 20853);
		TestRunHelper (runOrder.ToString("D2") + " Check post_ad_action event (1)", "Ok", "Construction Error", 20853);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check post_ad_action event (2)", "Ok", AnalyticsEvent.Send(PostAdActionPayload.CreateInstance("network")), 20853);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check post_ad_action event (3)", "Ok", AnalyticsEvent.Send(PostAdActionPayload.CreateInstance("placement_id")), 20853);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check post_ad_action event (4)", "Ok", AnalyticsEvent.Send(PostAdActionPayload.CreateInstance("network", "placement_id")), 20853);
		TestRunHelper (runOrder.ToString("D2") + " Check post_ad_action event (4)", "Ok", "Construction Error", 20853);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test19() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check screen_visit event", "Ok", AnalyticsEvent.Send(ScreenVisitPayload.CreateInstance("screen_name")), 20854);
		TestRunHelper (runOrder.ToString("D2") + " Check screen_visit event", "Ok", "Cannot find screen_visit payload", 20854);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test20() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check cutscene_skip event", "Ok", AnalyticsEvent.Send(CutsceneSkipPayload.CreateInstance ("scene_name")), 20855);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test21() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check game_start event", "Ok", AnalyticsEvent.Send(GameStartPayload.CreateInstance()), 20856);
		TestRunHelper (runOrder.ToString("D2") + " Check game_start event", "Ok", "Construction Error", 20856);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test22() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		// TestRunHelper (runOrder.ToString("D2") + " Check game_over event (1)", "Ok", AnalyticsEvent.Send(GameOverPayload.CreateInstance()), 20857);
		TestRunHelper (runOrder.ToString("D2") + " Check game_over event (1)", "Ok", "Construction Error", 20857);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check game_over event (2)", "Ok", AnalyticsEvent.Send(GameOverPayload.CreateInstance(0)), 20857);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check game_over event (3)", "Ok", AnalyticsEvent.Send(GameOverPayload.CreateInstance("level_name")), 20857);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check game_over event (4)", "Ok", AnalyticsEvent.Send(GameOverPayload.CreateInstance(0, "level_name")), 20857);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test23() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check level_start event (1)", "Ok", AnalyticsEvent.Send(LevelStartPayload.CreateInstance (0)), 20858);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check level_start event (2)", "Ok", AnalyticsEvent.Send(LevelStartPayload.CreateInstance ("level_name")), 20858);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check level_start event (3)", "Ok", AnalyticsEvent.Send(LevelStartPayload.CreateInstance (0, "level_name")), 20858);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test24() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check level_complete event (1)", "Ok", AnalyticsEvent.Send(LevelCompletePayload.CreateInstance (0)), 20859);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check level_complete event (2)", "Ok", AnalyticsEvent.Send(LevelCompletePayload.CreateInstance ("level_name")), 20859);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check level_complete event (3)", "Ok", AnalyticsEvent.Send(LevelCompletePayload.CreateInstance (0, "level_name")), 20859);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test25() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check level_fail event (1)", "Ok", AnalyticsEvent.Send(LevelFailPayload.CreateInstance (0)), 20860);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check level_fail event (2)", "Ok", AnalyticsEvent.Send(LevelFailPayload.CreateInstance ("level_name")), 20860);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check level_fail event (3)", "Ok", AnalyticsEvent.Send(LevelFailPayload.CreateInstance (0, "level_name")), 20860);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test26() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check level_quit event (1)", "Ok", AnalyticsEvent.Send(LevelQuitPayload.CreateInstance (0)), 20861);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check level_quit event (2)", "Ok", AnalyticsEvent.Send(LevelQuitPayload.CreateInstance ("level_name")), 20861);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check level_quit event (3)", "Ok", AnalyticsEvent.Send(LevelQuitPayload.CreateInstance (0, "level_name")), 20861);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test27() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		// TestRunHelper (runOrder.ToString("D2") + " Check level_skip event (1)", "Ok", AnalyticsEvent.Send(LevelSkipPayload.CreateInstance (0)), 20862);
		TestRunHelper (runOrder.ToString("D2") + " Check level_skip event (1)", "Ok", "Cannot find level_skip payload", 20862);

		yield return new WaitForSeconds(timeDelay); 
		// TestRunHelper (runOrder.ToString("D2") + " Check level_skip event (2)", "Ok", AnalyticsEvent.Send(LevelSkipPayload.CreateInstance ("level_name")), 20862);
		TestRunHelper (runOrder.ToString("D2") + " Check level_skip event (2)", "Ok", "Cannot find level_skip payload", 20862);

		yield return new WaitForSeconds(timeDelay); 
		// TestRunHelper (runOrder.ToString("D2") + " Check level_skip event (3)", "Ok", AnalyticsEvent.Send(LevelSkipPayload.CreateInstance (0, "level_name")), 20862);
		TestRunHelper (runOrder.ToString("D2") + " Check level_skip event (3)", "Ok", "Cannot find level_skip payload", 20862);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test28() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		// TestRunHelper (runOrder.ToString("D2") + " Check level_up event (1)", "Ok", AnalyticsEvent.Send(LevelUpPayload.CreateInstance (0, 1)), 20863);
		TestRunHelper (runOrder.ToString("D2") + " Check level_up event (1)", "Ok", "Construction Error", 20863);

		yield return new WaitForSeconds(timeDelay); 
		// TestRunHelper (runOrder.ToString("D2") + " Check level_up event (2)", "Ok", AnalyticsEvent.Send(LevelUpPayload.CreateInstance (0, "new_level_name")), 20863);
		TestRunHelper (runOrder.ToString("D2") + " Check level_up event (2)", "Ok", "Construction Error", 20863);

		yield return new WaitForSeconds(timeDelay); 
		TestRunHelper (runOrder.ToString("D2") + " Check level_up event (3)", "Ok", AnalyticsEvent.Send(LevelUpPayload.CreateInstance ("old_level_name", "new_level_name")), 20863);

		yield return new WaitForSeconds(timeDelay); 
		// TestRunHelper (runOrder.ToString("D2") + " Check level_up event (4)", "Ok", AnalyticsEvent.Send(LevelUpPayload.CreateInstance ("old_level_name", 1)), 20863);
		TestRunHelper (runOrder.ToString("D2") + " Check level_up event (4)", "Ok", "Construction Error", 20863);

		yield return new WaitForSeconds(timeDelay); 
		// TestRunHelper (runOrder.ToString("D2") + " Check level_up event (5)", "Ok", AnalyticsEvent.Send(LevelUpPayload.CreateInstance (0, "old_level_name", 1, "new_level_name")), 20863);
		TestRunHelper (runOrder.ToString("D2") + " Check level_up event (5)", "Ok", "Construction Error", 20863);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test29() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check push_notification_enable event", "Ok", AnalyticsEvent.Send(PushNotificationEnabledPayload.CreateInstance ()), 20864);
		TestRunHelper (runOrder.ToString("D2") + " Check push_notification_enable event", "Ok", "Construction Error", 20864);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test30() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check push_notification_click event", "Ok", AnalyticsEvent.Send(PushNotificationClickedPayload.CreateInstance("message_id")), 20865);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test31() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check chat_msg_sent event", "Ok", AnalyticsEvent.Send(ChatMessageSentPayload.CreateInstance()), 20866);
		TestRunHelper (runOrder.ToString("D2") + " Check chat_msg_sent event", "Ok", "Construction Error", 20866);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test32() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds (timeDelay);
		TestRunHelper (runOrder.ToString("D2") + " Check achievement_unlock event", "Ok", AnalyticsEvent.Send(AchievementUnlockedPayload.CreateInstance ("achievement_id")), 20867);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}
	

	public IEnumerator test33() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		// TestRunHelper (runOrder.ToString("D2") + " Check achievement_step event", "Ok", AnalyticsEvent.Send(AchievementStepPayload.CreateInstance (0, "achievement_id")), 20868);
		TestRunHelper (runOrder.ToString("D2") + " Check achievement_step event", "Ok", "Cannot find achievement_step payload", 20868);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test34() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		// TestRunHelper (runOrder.ToString("D2") + " Check user_signup event", "Ok", AnalyticsEvent.Send(UserSignupPayload.CreateInstance("authorization_network")), 20869);
		TestRunHelper (runOrder.ToString("D2") + " Check user_signup event", "Ok", "Construction Error", 20869);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test35() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		// TestRunHelper (runOrder.ToString("D2") + " Check social_share event", "Ok", AnalyticsEvent.Send(SocialSharePayload.CreateInstance("share_type", "social_network")), 20870);
		TestRunHelper (runOrder.ToString("D2") + " Check social_share event", "Ok", "Construction Error", 20870);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}


	// Below is not relatived with creating test cases.
		
	public IEnumerator finalization() {
		showReport ();
		yield return new WaitForSeconds (timeDelay);
	}
		

	private void TestRunHelper(string description, string expectedResult, object realResult, int caseNumber = 0) {

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

	private void showProgess(int progress) {
		// Show progree to the screen
		float percentage = (float)progress / (float)(maxTest - 1);
		decimal d = decimal.Round (decimal.Parse ((percentage * 100).ToString()), 2);

		GameObject.Find("Text").GetComponent<Text>().text = "Please wait, running " + (d)  + "%  ...";
		GameObject.Find ("Slider").GetComponent<Slider> ().value = (float) d / 100;
	}

	private void showReport() {
		// Push the result to the server and reminds user
		int passed = 0;

		foreach(TestCase result in resultTable) {
			if (result.getResult () == true) {
				passed++;
			}
			pushResultToServer (result);
		}
			
		GameObject.Find("Text").GetComponent<Text> ().text = "Finished! " + (passed) + " / " + (resultTable.Count)  + " Passed!";
	}

	private void pushResultToServer(TestCase testCase) {
		string key = reference.Child("QAReport").Push().Key;
		Dictionary<string, object> childUpdates = new Dictionary<string, object>();
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy")  + "/" + testCase.getDescitpion() + "/" + testCase.getDate ().ToString ("HH:mm:ss tt zz") + "/Result/"] = testCase.getResult () == true ? "Pass" : "Fail";
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy") + "/" + testCase.getDescitpion () + "/" + testCase.getDate ().ToString ("HH:mm:ss tt zz") + "/UnityVersion/"] = UnityEditorInternal.InternalEditorUtility.GetFullUnityVersion ();
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy") + "/" + testCase.getDescitpion () + "/" + testCase.getDate ().ToString ("HH:mm:ss tt zz") + "/FailReason/"] = testCase.getFailReason ();
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy") + "/" + testCase.getDescitpion () + "/" + testCase.getDate ().ToString ("HH:mm:ss tt zz") + "/TestrailLink/"] = testCase.getCaseLink ();
		reference.UpdateChildrenAsync(childUpdates);
	}

}