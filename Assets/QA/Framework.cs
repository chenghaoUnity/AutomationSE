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

		TestRunHelper (runOrder.ToString("D2") + " Check if version number is correct", "0.0.0", AnalyticsEvent.sdkVersion, 20660);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test02() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check post_install_action event (1)", "Ok", AnalyticsEvent.PostInstallAction(), 20661);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check post_install_action event (1)", "Ok", e, 20661);
		}

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check post_install_action event (2)", "Ok", AnalyticsEvent.PostInstallAction("action_id"), 20661);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check post_install_action event (2)", "Ok", e, 20661);
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
		} catch (Exception e) {
			TestRunException (runOrder.ToString ("D2") + " Check tutorial_start event (1)", "Ok", e, 20662);
		}

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check tutorial_start event (2)", "Ok", AnalyticsEvent.TutorialStart("tutorial_id"), 20662);
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
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check tutorial_step event (1)", "Ok", e, 20663);
		}
			
		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check tutorial_step event (2)", "Ok", AnalyticsEvent.TutorialStep(0, "tutorial_id"), 20663);
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
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check tutorial_complete event (1)", "Ok", e, 20840);
		}
			
		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check tutorial_complete event (2)", "Ok", AnalyticsEvent.TutorialComplete("tutorial_id"), 20840);
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
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check tutorial_skip event (1)", "Ok", e, 20841);
		}
			
		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check tutorial_skip event (2)", "Ok", AnalyticsEvent.TutorialSkip("tutorial_id"), 20841);
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
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check store_opened event", "Ok", e, 20842);
		}
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test08() {
		runOrder++;
		showProgess (runOrder);

	
		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check store_item_clicked event (1)", "Ok", AnalyticsEvent.StoreItemClick(StoreType.Soft,"item_id"), 20843);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check store_item_clicked event (1)", "Ok", e, 20843);
		}
			
		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check store_item_clicked event (2)", "Ok", AnalyticsEvent.StoreItemClick(StoreType.Soft, "item_id", "iten_name"), 20843);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check store_item_clicked event (2)", "Ok", e, 20843);
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
			TestRunHelper (runOrder.ToString("D2") + " Check currency_acquired event (1)", "Ok", AnalyticsEvent.CurrencyAcquired(1, 2, ItemType.Soft, ItemSource.Earned, "item_id"), 20845);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check currency_acquired event (1)", "Ok", e, 20845);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check currency_acquired event (2)", "Ok", AnalyticsEvent.CurrencyAcquired(1, 2, ItemType.Soft, ItemSource.Earned, "item_id", "item_name"), 20845);
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
			TestRunHelper (runOrder.ToString("D2") + " Check currency_spent event (1)", "Ok", AnalyticsEvent.CurrencySpent(1, 2, ItemType.Soft, "item_id"), 20846);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check currency_spent event (1)", "Ok", e, 20846);
		}
			
		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check currency_spent event (2)", "Ok", AnalyticsEvent.CurrencySpent(1, 2, ItemType.Soft, "item_id", "item_name"), 20846);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check currency_spent event (2)", "Ok", e, 20846);
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
			TestRunHelper (runOrder.ToString("D2") + " Check resource_acquired event (1)", "Ok", AnalyticsEvent.ResourceAcquired(1, 2, "item_id"), 20847);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check resource_acquired event (1)", "Ok", e, 20847);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check resource_acquired event (2)", "Ok", AnalyticsEvent.ResourceAcquired(1, 2, "item_id", "item_name"), 20847);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check resource_acquired event (2)", "Ok", e, 20847);
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
			TestRunHelper (runOrder.ToString("D2") + " Check resource_spent event (1)", "Ok", AnalyticsEvent.ResourceSpent(1, 2, "item_id"), 20848);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check resource_spent event (1)", "Ok", e, 20848);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check resource_spent event (2)", "Ok", AnalyticsEvent.ResourceSpent(1, 2, "item_id", "item_name"), 20848);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check resource_spent event (2)", "Ok", e, 20848);
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
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_offer event (1)", "Ok", e, 20849);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_offer event (2)", "Ok", AnalyticsEvent.AdOffer(true, "network"), 20849);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_offer event (2)", "Ok", e, 20849);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_offer event (3)", "Ok", AnalyticsEvent.AdOffer(true, "network", "placementID"), 20849);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_offer event (3)", "Ok", e, 20849);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_offer event (4)", "Ok", AnalyticsEvent.AdOffer(true, null, "placementID"), 20849);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_offer event (4)", "Ok", e, 20849);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test15() {
		runOrder++;
		showProgess (runOrder);

		AnalyticsEvent.AdStart (true);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_start event (1)", "Ok", AnalyticsEvent.AdStart(true), 20850);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_start event (1)", "Ok", e, 20850);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_start event (2)", "Ok", AnalyticsEvent.AdStart(true, "network"), 20850);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_start event (2)", "Ok", e, 20850);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_start event (3)", "Ok", AnalyticsEvent.AdStart(true, "network", "placementID"), 20850);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_start event (3)", "Ok", e, 20850);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_start event (4)", "Ok", AnalyticsEvent.AdStart(true, null, "placementID"), 20850);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_start event (4)", "Ok", e, 20850);
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
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_complete event (1)", "Ok", e, 20851);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_complete event (2)", "Ok", AnalyticsEvent.AdComplete(true, "network"), 20851);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_complete event (2)", "Ok", e, 20851);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_complete event (3)", "Ok", AnalyticsEvent.AdComplete(true, "network", "placementID"), 20851);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_complete event (3)", "Ok", e, 20851);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_complete event (4)", "Ok", AnalyticsEvent.AdComplete(true, null, "placementID"), 20851);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_complete event (4)", "Ok", e, 20851);
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
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_skip event (1)", "Ok", e, 20852);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_skip event (2)", "Ok", AnalyticsEvent.AdSkip(true, "network"), 20852);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_skip event (2)", "Ok", e, 20852);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_skip event (3)", "Ok", AnalyticsEvent.AdSkip(true, "network", "placementID"), 20852);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_skip event (3)", "Ok", e, 20852);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check ad_skip event (4)", "Ok", AnalyticsEvent.AdSkip(true, null, "placementID"), 20852);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check ad_skip event (4)", "Ok", e, 20852);
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
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check post_ad_action event (1)", "Ok", e, 20853);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check post_ad_action event (2)", "Ok", AnalyticsEvent.PostAdAction(true, "network"), 20853);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check post_ad_action event (2)", "Ok", e, 20853);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check post_ad_action event (3)", "Ok", AnalyticsEvent.PostAdAction(true, "network", "placementID"), 20853);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check post_ad_action event (3)", "Ok", e, 20853);
		}


		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check post_ad_action event (4)", "Ok", AnalyticsEvent.PostAdAction(true, null, "placementID"), 20853);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check post_ad_action event (4)", "Ok", e, 20853);
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
			TestRunHelper (runOrder.ToString("D2") + " Check cutscene_skip event", "Ok", AnalyticsEvent.CutsceneSkip("scene_name"), 20855);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check cutscene_skip event", "Ok", e, 20855);
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
			TestRunHelper (runOrder.ToString("D2") + " Check game_start event", "Ok", AnalyticsEvent.GameStart(), 20856);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check game_start event", "Ok", e, 20856);
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
			TestRunHelper (runOrder.ToString("D2") + " Check game_over event (1)", "Ok", AnalyticsEvent.GameOver(), 20857);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check game_over event (1)", "Ok", e, 20857);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check game_over event (2)", "Ok", AnalyticsEvent.GameOver(0), 20857);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check game_over event (2)", "Ok", e, 20857);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check game_over event (3)", "Ok", AnalyticsEvent.GameOver("level_name"), 20857);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check game_over event (3)", "Ok", e, 20857);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check game_over event (4)", "Ok", AnalyticsEvent.GameOver(0, "level_name"), 20857);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check game_over event (4)", "Ok", e, 20857);
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
			TestRunHelper (runOrder.ToString("D2") + " Check level_start event (1)", "Ok", AnalyticsEvent.LevelStart(0), 20858);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_start event (1)", "Ok", e, 20858);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_start event (2)", "Ok", AnalyticsEvent.LevelStart ("level_name"), 20858);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_start event (2)", "Ok", e, 20858);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_start event (3)", "Ok", AnalyticsEvent.LevelStart (0, "level_name"), 20858);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_start event (3)", "Ok", e, 20858);
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
			TestRunHelper (runOrder.ToString("D2") + " Check level_complete event (1)", "Ok", AnalyticsEvent.LevelComplete(0), 20859);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_complete event (1)", "Ok", e, 20859);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_complete event (2)", "Ok", AnalyticsEvent.LevelComplete ("level_name"), 20859);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_complete event (2)", "Ok", e, 20859);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_complete event (3)", "Ok", AnalyticsEvent.LevelComplete (0, "level_name"), 20859);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_complete event (3)", "Ok", e, 20859);
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
			TestRunHelper (runOrder.ToString("D2") + " Check level_fail event (1)", "Ok", AnalyticsEvent.LevelFail (0), 20860);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_fail event (1)", "Ok", e, 20860);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_fail event (2)", "Ok", AnalyticsEvent.LevelFail ("level_name"), 20860);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_fail event (2)", "Ok", e, 20860);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_fail event (3)", "Ok", AnalyticsEvent.LevelFail (0, "level_name"), 20860);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_fail event (3)", "Ok", e, 20860);
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
			TestRunHelper (runOrder.ToString("D2") + " Check level_quit event (1)", "Ok", AnalyticsEvent.LevelQuit (0), 20861);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_quit event (1)", "Ok", e, 20861);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_quit event (2)", "Ok", AnalyticsEvent.LevelQuit ("level_name"), 20861);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_quit event (2)", "Ok", e, 20861);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_quit event (3)", "Ok", AnalyticsEvent.LevelQuit (0, "level_name"), 20861);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_quit event (3)", "Ok", e, 20861);
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
			TestRunHelper (runOrder.ToString("D2") + " Check level_skip event (1)", "Ok", AnalyticsEvent.LevelSkip (0), 20862);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_skip event (1)", "Ok", e, 20862);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_skip event (2)", "Ok", AnalyticsEvent.LevelSkip ("level_name"), 20862);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_skip event (2)", "Ok", e, 20862);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_skip event (3)", "Ok", AnalyticsEvent.LevelSkip (0, "level_name"), 20862);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_skip event (3)", "Ok", e, 20862);
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
			TestRunHelper (runOrder.ToString("D2") + " Check level_up event (1)", "Ok", AnalyticsEvent.LevelUp (0, 1), 20863);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_up event (1)", "Ok", e, 20863);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_up event (2)", "Ok", AnalyticsEvent.LevelUp  ("old_level_name", "new_level_name"), 20863);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_up event (2)", "Ok", e, 20863);
		}


		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check level_up event (3)", "Ok", AnalyticsEvent.LevelUp(0, "old_level_name", 1, "new_level_name"), 20863);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check level_up event (3)", "Ok", e, 20863);
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
			TestRunHelper (runOrder.ToString("D2") + " Check push_notification_enable event", "Ok", AnalyticsEvent.PushNotificationEnable(), 20864);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check push_notification_enable event", "Ok", e, 20864);
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
			TestRunHelper (runOrder.ToString("D2") + " Check push_notification_click event", "Ok", AnalyticsEvent.PushNotificationClick("message_id"), 20865);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check push_notification_click event", "Ok", e, 20865);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test31() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check chat_msg_sent event", "Ok", AnalyticsEvent.ChatMessageSent(), 20866);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check chat_msg_sent event", "Ok", e, 20866);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test32() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds (timeDelay);
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check achievement_unlock event", "Ok", AnalyticsEvent.AchievementUnlock("achievement_id"), 20867);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check achievement_unlock event", "Ok", e, 20867);
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
			TestRunHelper (runOrder.ToString("D2") + " Check achievement_step event", "Ok", AnalyticsEvent.AchievementStep(0, "achievement_id"), 20868);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check achievement_step event", "Ok", e, 20868);
		}


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test34() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(timeDelay); 
		try {
			TestRunHelper (runOrder.ToString("D2") + " Check user_signup event", "Ok", AnalyticsEvent.UserSignup(AuthorizationNetwork.Facebook), 20869);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check user_signup event", "Ok", e, 20869);
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
			TestRunHelper (runOrder.ToString("D2") + " Check social_share event", "Ok", AnalyticsEvent.SocialShare (ShareType.Achievement, SocialNetwork.Facebook), 20870);
		} catch (Exception e) {
			TestRunException (runOrder.ToString("D2") + " Check social_share event", "Ok", e, 20870);
		}
			
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

	private void TestRunException(string description, string expectedResult, Exception e, int caseNumber = 0) {

		resultTable.Add(new TestCase(
			description,
			false,
			e.GetBaseException().ToString(),
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