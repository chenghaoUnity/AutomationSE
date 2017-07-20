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

public class Framework : MonoBehaviour 
{
	public List<TestCase> resultTable = new List<TestCase>();
	public List<IEnumerator> testSuite = new List<IEnumerator>();

	public string branchInfo;

	private int maxTest;
	private int runOrder;

	public float timeDelay = 0.3f;

	private DatabaseReference reference;
	public bool verifyMode;

	void Awake () 
	{
		//FirebaseApp.DefaultInstance.SetEditorDatabaseUrl ("https://standard-event.firebaseio.com/");
		//reference = FirebaseDatabase.DefaultInstance.RootReference;
	}

	public void Start() 
	{
		FirebaseApp.DefaultInstance.SetEditorDatabaseUrl ("https://standard-event.firebaseio.com/");
		reference = FirebaseDatabase.DefaultInstance.RootReference;

		branchInfo = Resources.Load ("branchInfo").ToString ().Trim ().Replace ("/", " ").Replace(".", " ");
		pushLog (branchInfo);

		verifyMode = false;
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
		TestRunHelper ("version_number", "0.1.0", AnalyticsEvent.sdkVersion, 20660);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test02() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "first_interaction";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.FirstInteraction (), 20661, null);

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.FirstInteraction("action_id_server"), 20661, "action_id_server");
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test03() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "tutorial_start";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.TutorialStart(), 20662, null);

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.TutorialStart("tutorial_id_server"), 20662, "tutorial_id_server");
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test04() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "tutorial_step";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.TutorialStep(0), 20663, "0");
			
		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.TutorialStep(0, "tutorial_id_server"), 20663, "0", "tutorial_id_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}
		
	public IEnumerator test05() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "tutorial_complete";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.TutorialComplete(), 20840, null);
			
		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.TutorialComplete("tutorial_id_server"), 20840, "tutorial_id_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test06() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "tutorial_skip";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.TutorialSkip(), 20841, null);
			
		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.TutorialSkip("tutorial_id_server"), 20841, "tutorial_id_server");
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}
		
	public IEnumerator test07() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "store_opened";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.StoreOpened(StoreType.Soft), 20842, "soft");
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}
		
	public IEnumerator test08() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "store_item_click";
	
		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.StoreItemClick(StoreType.Premium,"item_id_server"), 20843, "premium", "item_id_server");
			
		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.StoreItemClick(StoreType.Premium, "item_id_server", "item_name_server"), 20843, "premium", "item_id_server", "item_name_server");
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}
		
	public IEnumerator test10() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "iap_transaction";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.IAPTransaction("transactionContext_server", 0.1f, "itemId_server"), 20845, "transactionContext_server", "0.1", "itemId_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.IAPTransaction("transactionContext_server", 0.1f, "itemId_server", "itemType_server", "level_server", "transactionID_server"), 20845, "transactionContext_server", "0.1", "itemId_server", "itemType_server", "level_server", "transactionID_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test11() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "item_acquired";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ItemAcquired (AcquisitionType.Soft, "transactionContext_server", 0.1f, "itemId_server"), 20846, "soft", "transactionContext_server", "0.1", "itemId_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ItemAcquired (AcquisitionType.Soft, "transactionContext_server", 0.1f, "itemId_server", "itemType_server", "level_server", "transactionID_server"), 20846, "soft", "transactionContext_server", "0.1", "itemId_server", "itemType_server", "level_server", "transactionID_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ItemAcquired (AcquisitionType.Soft, "transactionContext_server", 0.1f, "itemId_server", 0.2f, "itemType_server", "level_server", "transactionID_server"), 20846, "soft", "transactionContext_server", "0.1", "itemId_server", "0.2","itemType_server", "level_server", "transactionID_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test12() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "item_spent";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ItemSpent (AcquisitionType.Soft, "transactionContext_server", 0.1f, "itemId_server"), 20846, "soft", "transactionContext_server", "0.1", "itemId_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ItemSpent (AcquisitionType.Soft, "transactionContext_server", 0.1f, "itemId_server", "itemType_server", "level_server", "transactionID_server"), 20846, "soft", "transactionContext_server", "0.1", "itemId_server", "itemType_server", "level_server", "transactionID_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ItemSpent (AcquisitionType.Soft, "transactionContext_server", 0.1f, "itemId_server", 0.2f, "itemType_server", "level_server", "transactionID_server"), 20846, "soft", "transactionContext_server", "0.1", "itemId_server", "0.2","itemType_server", "level_server", "transactionID_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test14() {
		runOrder++;
		showProgess (runOrder);
	
		int number = 0;
		string eventName = "ad_offer";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.AdOffer(true), 20849, "True");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++,AnalyticsEvent.AdOffer(true, AdvertisingNetwork.Aarki, "placementId_server"), 20849, "True", "aarki", "placementId_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test15() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "ad_start";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.AdStart(true), 20850, "True");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++,  AnalyticsEvent.AdStart(true, AdvertisingNetwork.AdAction, "placementId_server"), 20850, "True", "adaction", "placementId_server");
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test16() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "ad_complete";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.AdComplete(true), 20851, "True");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.AdComplete(true, AdvertisingNetwork.AdapTv, "placementId_server"), 20851, "True", "adaptv", "placementId_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test17() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "ad_skip";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.AdSkip(true), 20852, "True");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.AdSkip(true, AdvertisingNetwork.UnityAds, "placementId_server"), 20852, "True", "unityads", "placementId_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test18() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "post_ad_action";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.PostAdAction(true), 20853, "True");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.PostAdAction(true, AdvertisingNetwork.Twitter, "placementId_server"), 20853, "True", "twitter", "placementId_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test19() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "screen_visit";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.None), 20854, "none");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.MainMenu), 20854, "main_menu");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.Settings), 20854, "settings");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.Map), 20854, "map");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.Lose), 20854, "lose");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.Win), 20854, "win");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.Credits), 20854, "credits");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.Title), 20854, "title");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.IAPPromo), 20854, "iap_promo");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.CrossPromo), 20854, "cross_promo");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.FeaturePromo), 20854, "feature_promo");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.Hint), 20854, "hint");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.Pause), 20854, "pause");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.Inventory), 20854, "inventory");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.Leaderboard), 20854, "leaderboard");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.Achievements), 20854, "achievements");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ScreenVisit(ScreenName.Lobby), 20854, "lobby");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test20() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "cutscene_start";

		yield return new WaitForSeconds(timeDelay); 
		TestRunner (eventName, number++, AnalyticsEvent.CutsceneStart("scene_name_server"), 20855, "scene_name_server");
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test21() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "cutscene_skip";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.CutsceneSkip("scene_name_server"), 20855, "scene_name_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test22() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "game_start";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.GameStart(), 20856, null);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test23() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "game_over";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.GameOver(), 20857, null);

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.GameOver(0), 20857, "0");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.GameOver("level_name_server"), 20857, "level_name_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.GameOver(0, "level_name_server"), 20857, "0", "level_name_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test24() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "level_start";

		yield return new WaitForSeconds(timeDelay); 
		TestRunner (eventName, number++, AnalyticsEvent.LevelStart(0), 20858, "0");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.LevelStart ("level_name_server"), 20858, "level_name_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.LevelStart (0, "level_name_server"), 20858, "0", "level_name_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test25() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "level_complete";

		yield return new WaitForSeconds(timeDelay); 
		TestRunner (eventName, number++, AnalyticsEvent.LevelComplete(0), 20859, "0");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.LevelComplete("level_name_server"), 20859, "level_name_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.LevelComplete(0, "level_name_server"), 20859, "0", "level_name_server");
	
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test26() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "level_fail";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.LevelFail(0), 20860, "0");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.LevelFail("level_name_server"), 20860, "level_name_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.LevelFail (0, "level_name_server"), 20860, "0", "level_name_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test27() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "level_quit";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.LevelQuit(0), 20861, "0");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.LevelQuit ("level_name_server"), 20861, "level_name_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.LevelQuit (0, "level_name_server"), 20861, "0", "level_name_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test28() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "level_skip";

		yield return new WaitForSeconds(timeDelay); 
		TestRunner (eventName, number++, AnalyticsEvent.LevelSkip (0), 20862, "0");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.LevelSkip ("level_name_server"), 20862, "level_name_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.LevelSkip (0, "level_name_server"), 20862, "0", "level_name_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test29() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "level_up";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.LevelUp  ("new_level_name_server"), 20863, "new_level_name_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.LevelUp(1 ,"new_level_name_server"), 20863, "1", "new_level_name_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test30() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "push_notification_enable";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.PushNotificationEnable(), 20864, null);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}
		
	public IEnumerator test32() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "push_notification_click";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.PushNotificationClick("message_id_server"), 20865, "message_id_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test33() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "chat_msg_sent";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.ChatMessageSent(), 20866, null);

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test34() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "achievement_unlocked";

		yield return new WaitForSeconds (timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.AchievementUnlocked("achievement_id_server"), 20867, "achievement_id_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}
	

	public IEnumerator test35() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "achievement_step";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.AchievementStep(0, "achievement_id_server"), 20868, "0", "achievement_id_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test36() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "user_signup";

		yield return new WaitForSeconds(timeDelay); 
		TestRunner (eventName, number++, AnalyticsEvent.UserSignup (AuthorizationNetwork.Facebook), 20869, "facebook");

		yield return new WaitForSeconds(timeDelay); 
		TestRunner (eventName, number++, AnalyticsEvent.UserSignup (AuthorizationNetwork.GameCenter), 20869, "gamecenter");

		yield return new WaitForSeconds(timeDelay); 
		TestRunner (eventName, number++, AnalyticsEvent.UserSignup (AuthorizationNetwork.Google), 20869, "google");

		yield return new WaitForSeconds(timeDelay); 
		TestRunner (eventName, number++, AnalyticsEvent.UserSignup (AuthorizationNetwork.Internal), 20869, "internal");

		yield return new WaitForSeconds(timeDelay); 
		TestRunner (eventName, number++, AnalyticsEvent.UserSignup (AuthorizationNetwork.None), 20869, "none");

		yield return new WaitForSeconds(timeDelay); 
		TestRunner (eventName, number++, AnalyticsEvent.UserSignup (AuthorizationNetwork.Twitter), 20869, "twitter");


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test37() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "social_share";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.SocialShare (ShareType.Achievement, SocialNetwork.Facebook), 20870, "achievement", "facebook");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.SocialShare (ShareType.Image, SocialNetwork.GooglePlus, "sender_id_server", "recipient_id_server"), 20870, "image", "googleplus", "sender_id_server", "recipient_id_server");
			
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test38() {
		runOrder++;
		showProgess (runOrder);

		int number = 0;
		string eventName = "social_share_accept";

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.SocialShareAccept (ShareType.Invite, SocialNetwork.Instagram), 20870, "invite", "instagram");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.SocialShareAccept (ShareType.None, SocialNetwork.None, "sender_id_server", "recipient_id_server"), 20870, "none", "none", "sender_id_server", "recipient_id_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.SocialShareAccept (ShareType.TextOnly, SocialNetwork.OK_ru, "sender_id_server", "recipient_id_server"), 20870, "text_only", "ok_ru", "sender_id_server", "recipient_id_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.SocialShareAccept (ShareType.Video, SocialNetwork.Pinterest, "sender_id_server", "recipient_id_server"), 20870, "video", "pinterest", "sender_id_server", "recipient_id_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.SocialShareAccept (ShareType.Video, SocialNetwork.QQ, "sender_id_server", "recipient_id_server"), 20870, "video", "qq", "sender_id_server", "recipient_id_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.SocialShareAccept (ShareType.Video, SocialNetwork.Twitter, "sender_id_server", "recipient_id_server"), 20870, "video", "twitter", "sender_id_server", "recipient_id_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.SocialShareAccept (ShareType.Video, SocialNetwork.VK, "sender_id_server", "recipient_id_server"), 20870, "video", "vk", "sender_id_server", "recipient_id_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.SocialShareAccept (ShareType.Video, SocialNetwork.WeChat, "sender_id_server", "recipient_id_server"), 20870, "video", "wechat", "sender_id_server", "recipient_id_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.SocialShareAccept (ShareType.Video, SocialNetwork.Weibo, "sender_id_server", "recipient_id_server"), 20870, "video", "weibo", "sender_id_server", "recipient_id_server");

		yield return new WaitForSeconds(timeDelay);
		TestRunner (eventName, number++, AnalyticsEvent.SocialShareAccept (ShareType.Video, SocialNetwork.Zhihu, "sender_id_server", "recipient_id_server"), 20870, "video", "zhihu", "sender_id_server", "recipient_id_server");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}


	// Below is not relatived with creating test cases.
		
	public IEnumerator finalization() {
		yield return new WaitForSeconds (timeDelay);
		showReport ();

		yield return new WaitForSeconds (10f);
		if (!GameObject.Find ("Toggle").GetComponent<Toggle> ().isOn) 
		{
			Application.Quit ();
		}
	}

	private void TestRunner(string eventName, int order, object payload, int caseNumber, params string[] parameter)
	{
		string description = eventName + " (" + order.ToString ("D2") + ") ";

		try {
			TestRunHelper (description, "Ok", payload, caseNumber);
			TestRunJsonVerify(eventName, order, description, caseNumber, parameter);
		} catch (Exception e) {
			TestRunException (description, "Ok", e, caseNumber);
		}
	}

	// For checking status
	private void TestRunHelper(string description, string expectedResult, object realResult, int caseNumber = 0) {

		if (verifyMode == true) {
			return;
		}

		description = " Check " + description + " event ";
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
	private void TestRunJsonVerify(string methodName, int order, string description, int caseNumber, params string[] parameter) {

		if (verifyMode == false) {
			return;
		}

		methodName = methodName + "/" + order.ToString ();
		description = " Check " + description + " event (server)";

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

		GameObject.Find("Canvas").transform.Find("Text").GetComponent<Text>().text = "Please wait, running " + (d)  + "%  ..." ;
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

		GameObject.Find("Canvas").transform.Find("Text").GetComponent<Text> ().text = "Finished! " + (passed) + " / " + (resultTable.Count)  + " Passed!";
	}

	private void pushResultToServer(TestCase testCase) {
		string key = reference.Child("QAReport").Push().Key;
		Dictionary<string, object> childUpdates = new Dictionary<string, object>();
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy")  + "/" + branchInfo + "/" + Application.unityVersion.Replace('.', ' ') + "/" + SystemInfo.operatingSystem.Replace('.', ' ') + "/" + testCase.getDescitpion () + "/Result/"] = testCase.getResult () == true ? "Pass" : "Fail";
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy") +  "/" + branchInfo + "/" + Application.unityVersion.Replace('.', ' ') + "/" + SystemInfo.operatingSystem.Replace('.', ' ') + "/" + testCase.getDescitpion () + "/UnityVersion/"] = Application.unityVersion;
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy") +  "/" + branchInfo + "/" + Application.unityVersion.Replace('.', ' ') + "/" + SystemInfo.operatingSystem.Replace('.', ' ') + "/" + testCase.getDescitpion () + "/FailReason/"] = testCase.getFailReason ();
		childUpdates ["/QAReport/" + System.DateTime.Now.ToString ("MMM d, yyyy") +  "/" + branchInfo + "/" + Application.unityVersion.Replace('.', ' ') + "/" + SystemInfo.operatingSystem.Replace('.', ' ') + "/" + testCase.getDescitpion () + "/TestrailLink/"] = testCase.getCaseLink ();
		reference.UpdateChildrenAsync(childUpdates);
	}

	private void pushLog(string log) {
		GameObject.Find ("LOG").GetComponent<Text> ().text = string.Format("|{0}|", log);
	}
}