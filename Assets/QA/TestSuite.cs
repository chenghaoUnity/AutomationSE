﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.Analytics.Experimental;
using UnityEngine.Analytics;

public class TestSuite 
{
	[CDTest(Assert.AreEqual, "Verify SDK Version Number", "20660", "0.3.0")]
	public string VersionNumber()
	{
		return AnalyticsEvent.sdkVersion;
	}

	[CDTest(Assert.Less, "tesing", "20661", 1.2f, 3.4f)]
	public float[] testing()
	{
		return new float[]{1.1f, 3.2f};
	}

	[CDTest(Assert.AreEqual, "Verify first_interaction Event Status (Format 1)", "20661", "Ok")]
	public string first_interaction01()
	{
		var status = AnalyticsEvent.FirstInteraction ();
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify first_interaction Event Status (Format 2)", "20661", "Ok")]
	public string first_interaction02()
	{
		var status = AnalyticsEvent.FirstInteraction ("action_id_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify tutorial_start Event Status (Format 1)", "20662", "Ok")]
	public string tutorial_start01()
	{
		var status = AnalyticsEvent.TutorialStart();
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify tutorial_start Event Status (Format 2)", "20662", "Ok")]
	public string tutorial_start02()
	{
		var status = AnalyticsEvent.TutorialStart("tutorial_id_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify tutorial_step Event Status (Format 1)", "20663", "Ok")]
	public string tutorial_step01()
	{
		var status = AnalyticsEvent.TutorialStep(0);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify tutorial_step Event Status (Format 2)", "20663", "Ok")]
	public string tutorial_step02()
	{
		var status = AnalyticsEvent.TutorialStep(0, "tutorial_id_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify tutorial_complete Event Status (Format 1)", "20840", "Ok")]
	public string tutorial_complete01()
	{
		var status = AnalyticsEvent.TutorialComplete();
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify tutorial_complete Event Status (Format 2)", "20840", "Ok")]
	public string tutorial_complete02()
	{
		var status = AnalyticsEvent.TutorialComplete("tutorial_id_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify tutorial_skip Event Status (Format 1)", "20841", "Ok")]
	public string tutorial_skip01()
	{
		var status = AnalyticsEvent.TutorialSkip ();
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify tutorial_skip Event Status (Format 2)", "20841", "Ok")]
	public string tutorial_skip02()
	{
		var status = AnalyticsEvent.TutorialSkip ("tutorial_id_server");
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify store_opened Event Status", "20842", "Ok")]
	public string store_opened()
	{
		var status = AnalyticsEvent.StoreOpened(StoreType.Soft);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify store_item_click Event Status (Format 1)", "20843", "Ok")]
	public string store_item_click01()
	{
		var status = AnalyticsEvent.StoreItemClick(StoreType.Soft, "item_id_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify store_item_click Event Status (Format 2)", "20843", "Ok")]
	public string store_item_click02()
	{
		var status = AnalyticsEvent.StoreItemClick(StoreType.Soft, "item_id_server", "item_name_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify iap_transaction Event Status (Format 1)", "20845", "Ok")]
	public string iap_transaction01()
	{
		var status = AnalyticsEvent.IAPTransaction("transactionContext_server", 0.1f, "itemId_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify iap_transaction Event Status (Format 2)", "20845", "Ok")]
	public string iap_transaction02()
	{
		var status = AnalyticsEvent.IAPTransaction("transactionContext_server", 0.1f, "itemId_server", "itemType_server", "level_server", "transactionID_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify item_acquired Event Status (Format 1)", "20846", "Ok")]
	public string item_acquired01()
	{
		var status = AnalyticsEvent.ItemAcquired (AcquisitionType.Soft, "transactionContext_server", 0.1f, "itemId_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify item_acquired Event Status (Format 2)", "20846", "Ok")]
	public string item_acquired02()
	{
		var status = AnalyticsEvent.ItemAcquired (AcquisitionType.Soft, "transactionContext_server", 0.1f, "itemId_server", "itemType_server", "level_server", "transactionID_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify item_acquired Event Status (Format 3)", "20846", "Ok")]
	public string item_acquired03()
	{
		var status = AnalyticsEvent.ItemAcquired (AcquisitionType.Soft, "transactionContext_server", 0.1f, "itemId_server", 0.2f, "itemType_server", "level_server", "transactionID_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify item_spent Event Status (Format 1)", "20847", "Ok")]
	public string item_spent01()
	{
		var status = AnalyticsEvent.ItemSpent (AcquisitionType.Soft, "transactionContext_server", 0.1f, "itemId_server");
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify item_spent Event Status (Format 2)", "20847", "Ok")]
	public string item_spent02()
	{
		var status = AnalyticsEvent.ItemSpent (AcquisitionType.Soft, "transactionContext_server", 0.1f, "itemId_server", "itemType_server", "level_server", "transactionID_server");
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify item_spent Event Status (Format 3)", "20847", "Ok")]
	public string item_spent03()
	{
		var status = AnalyticsEvent.ItemSpent (AcquisitionType.Soft, "transactionContext_server", 0.1f, "itemId_server", 0.2f, "itemType_server", "level_server", "transactionID_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify ad_offer Event Status (Format 1)", "20849", "Ok")]
	public string ad_offer01()
	{
		var status = AnalyticsEvent.AdOffer (true);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify ad_offer Event Status (Format 2)", "20849", "Ok")]
	public string ad_offer02()
	{
		var status = AnalyticsEvent.AdOffer (true, AdvertisingNetwork.Aarki, "placementId_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify ad_offer Event Status (Format 1)", "20850", "Ok")]
	public string ad_start01()
	{
		var status = AnalyticsEvent.AdStart (true);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify ad_offer Event Status (Format 2)", "20850", "Ok")]
	public string ad_start02()
	{
		var status = AnalyticsEvent.AdStart (true, AdvertisingNetwork.AdAction, "placementId_server");
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify ad_complete Event Status (Format 1)", "20851", "Ok")]
	public string ad_complete01()
	{
		var status = AnalyticsEvent.AdComplete (true);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify ad_complete Event Status (Format 2)", "20851", "Ok")]
	public string ad_complete02()
	{
		var status = AnalyticsEvent.AdComplete(true, AdvertisingNetwork.AdapTv, "placementId_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify ad_skip Event Status (Format 1)", "20852", "Ok")]
	public string ad_skip01()
	{
		var status = AnalyticsEvent.AdSkip (true);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify ad_skip Event Status (Format 2)", "20852", "Ok")]
	public string ad_skip02()
	{
		var status = AnalyticsEvent.AdSkip(true, AdvertisingNetwork.UnityAds, "placementId_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify post_ad_action Event Status (Format 1)", "20853", "Ok")]
	public string post_ad_action01()
	{
		var status = AnalyticsEvent.PostAdAction (true);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName Achievements)", "20854", "Ok")]
	public string screen_visit01()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.Achievements);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName Credits)", "20854", "Ok")]
	public string screen_visit02()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.Credits);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName CrossPromo)", "20854", "Ok")]
	public string screen_visit03()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.CrossPromo);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName FeaturePromo)", "20854", "Ok")]
	public string screen_visit04()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.FeaturePromo);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName Hint)", "20854", "Ok")]
	public string screen_visit05()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.Hint);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName IAPPromo)", "20854", "Ok")]
	public string screen_visit06()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.IAPPromo);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName Inventory)", "20854", "Ok")]
	public string screen_visit07()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.Inventory);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName Leaderboard)", "20854", "Ok")]
	public string screen_visit08()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.Leaderboard);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName Lobby)", "20854", "Ok")]
	public string screen_visit09()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.Lobby);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName Lose)", "20854", "Ok")]
	public string screen_visit10()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.Lose);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName MainMenu)", "20854", "Ok")]
	public string screen_visit11()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.MainMenu);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName Map)", "20854", "Ok")]
	public string screen_visit12()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.Map);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName None)", "20854", "Ok")]
	public string screen_visit13()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.None);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName Pause)", "20854", "Ok")]
	public string screen_visit14()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.Pause);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName Settings)", "20854", "Ok")]
	public string screen_visit15()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.Settings);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName Title)", "20854", "Ok")]
	public string screen_visit16()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.Title);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify screen_visit Event Status (ScreenName Win)", "20854", "Ok")]
	public string screen_visit17()
	{
		var status = AnalyticsEvent.ScreenVisit(ScreenName.Win);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify cutscene_start Event Status", "20855", "Ok")]
	public string cutscene_start()
	{
		var status = AnalyticsEvent.CutsceneStart ("scene_name_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify cutscene_skip Event Status", "20855", "Ok")]
	public string cutscene_skip()
	{
		var status = AnalyticsEvent.CutsceneSkip("scene_name_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify game_start Event Status", "20856", "Ok")]
	public string game_start()
	{
		var status = AnalyticsEvent.GameStart();
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify game_over Event Status (Format 1)", "20857", "Ok")]
	public string game_over01()
	{
		var status = AnalyticsEvent.GameOver();
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify game_over Event Status (Format 2)", "20857", "Ok")]
	public string game_over02()
	{
		var status = AnalyticsEvent.GameOver(0);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify game_over Event Status (Format 3)", "20857", "Ok")]
	public string game_over03()
	{
		var status = AnalyticsEvent.GameOver("level_name_server");
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify game_over Event Status (Format 4)", "20857", "Ok")]
	public string game_over04()
	{
		var status = AnalyticsEvent.GameOver(0, "level_name_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify level_start Event Status (Format 1)", "20858", "Ok")]
	public string level_start01()
	{
		var status = AnalyticsEvent.LevelStart(0);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify level_start Event Status (Format 2)", "20858", "Ok")]
	public string level_start02()
	{
		var status = AnalyticsEvent.LevelStart ("level_name_server");
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify level_start Event Status (Format 3)", "20858", "Ok")]
	public string level_start03()
	{
		var status = AnalyticsEvent.LevelStart (0, "level_name_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify level_complete Event Status (Format 1)", "20859", "Ok")]
	public string level_complete01()
	{
		var status = AnalyticsEvent.LevelComplete (0);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify level_complete Event Status (Format 2)", "20859", "Ok")]
	public string level_complete02()
	{
		var status = AnalyticsEvent.LevelComplete ("level_name_server");
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify level_complete Event Status (Format 3)", "20859", "Ok")]
	public string level_complete03()
	{
		var status = AnalyticsEvent.LevelComplete (0, "level_name_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify level_fail Event Status (Format 1)", "20860", "Ok")]
	public string level_fail01()
	{
		var status = AnalyticsEvent.LevelFail (0);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify level_fail Event Status (Format 2)", "20860", "Ok")]
	public string level_fail02()
	{
		var status = AnalyticsEvent.LevelFail ("level_name_server");
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify level_fail Event Status (Format 3)", "20860", "Ok")]
	public string level_fail03()
	{
		var status = AnalyticsEvent.LevelFail (0, "level_name_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify level_quit Event Status (Format 1)", "20861", "Ok")]
	public string level_quit01()
	{
		var status = AnalyticsEvent.LevelQuit (0);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify level_quit Event Status (Format 2)", "20861", "Ok")]
	public string level_quit02()
	{
		var status = AnalyticsEvent.LevelQuit ("level_name_server");
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify level_quit Event Status (Format 3)", "20861", "Ok")]
	public string level_quit03()
	{
		var status = AnalyticsEvent.LevelQuit (0, "level_name_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify level_skip Event Status (Format 1)", "20862", "Ok")]
	public string level_skip01()
	{
		var status = AnalyticsEvent.LevelSkip (0);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify level_skip Event Status (Format 2)", "20862", "Ok")]
	public string level_skip02()
	{
		var status = AnalyticsEvent.LevelSkip ("level_name_server");
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify level_skip Event Status (Format 3)", "20862", "Ok")]
	public string level_skip03()
	{
		var status = AnalyticsEvent.LevelSkip (0, "level_name_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify level_up Event Status (Format 1)", "20863", "Ok")]
	public string level_up01()
	{
		var status = AnalyticsEvent.LevelUp ("new_level_name_server");
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify level_up Event Status (Format 2)", "20863", "Ok")]
	public string level_up02()
	{
		var status = AnalyticsEvent.LevelUp (1, "new_level_name_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify push_notification_enable Event Status", "20864", "Ok")]
	public string push_notification_enable()
	{
		var status = AnalyticsEvent.PushNotificationEnable ();
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify push_notification_click Event Status", "20865", "Ok")]
	public string push_notification_click()
	{
		var status = AnalyticsEvent.PushNotificationClick("message_id_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify chat_msg_sent Event Status", "20866", "Ok")]
	public string chat_msg_sent()
	{
		var status = AnalyticsEvent.ChatMessageSent();
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify achievement_unlocked Event Status", "20867", "Ok")]
	public string achievement_unlocked()
	{
		var status = AnalyticsEvent.AchievementUnlocked ("achievement_id_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify achievement_step Event Status", "20868", "Ok")]
	public string achievement_step()
	{
		var status = AnalyticsEvent.AchievementStep (0, "achievement_id_server");
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify user_signup Event Status (AuthorizationNetwork Facebook)", "20869", "Ok")]
	public string user_signup01()
	{
		var status = AnalyticsEvent.UserSignup (AuthorizationNetwork.Facebook);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify user_signup Event Status (AuthorizationNetwork GameCenter)", "20869", "Ok")]
	public string user_signup02()
	{
		var status = AnalyticsEvent.UserSignup (AuthorizationNetwork.GameCenter);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify user_signup Event Status (AuthorizationNetwork Google)", "20869", "Ok")]
	public string user_signup03()
	{
		var status = AnalyticsEvent.UserSignup (AuthorizationNetwork.Google);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify user_signup Event Status (AuthorizationNetwork Internal)", "20869", "Ok")]
	public string user_signup04()
	{
		var status = AnalyticsEvent.UserSignup (AuthorizationNetwork.Internal);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify user_signup Event Status (AuthorizationNetwork None)", "20869", "Ok")]
	public string user_signup05()
	{
		var status = AnalyticsEvent.UserSignup (AuthorizationNetwork.None);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify user_signup Event Status (AuthorizationNetwork Twitter)", "20869", "Ok")]
	public string user_signup06()
	{
		var status = AnalyticsEvent.UserSignup (AuthorizationNetwork.Twitter);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify social_share Event Status (ShareType Achievement)", "20870", "Ok")]
	public string social_share01()
	{
		var status = AnalyticsEvent.SocialShare (ShareType.Achievement, SocialNetwork.None);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify social_share Event Status (ShareType Image)", "20870", "Ok")]
	public string social_share02()
	{
		var status = AnalyticsEvent.SocialShare (ShareType.Image, SocialNetwork.None);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify social_share Event Status (ShareType Invite)", "20870", "Ok")]
	public string social_share03()
	{
		var status = AnalyticsEvent.SocialShare (ShareType.Invite, SocialNetwork.None);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify social_share Event Status (ShareType None)", "20870", "Ok")]
	public string social_share04()
	{
		var status = AnalyticsEvent.SocialShare (ShareType.None, SocialNetwork.None);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify social_share Event Status (ShareType TextOnly)", "20870", "Ok")]
	public string social_share05()
	{
		var status = AnalyticsEvent.SocialShare (ShareType.TextOnly, SocialNetwork.None);
		return status.ToString();
	}
	
	[CDTest(Assert.AreEqual, "Verify social_share Event Status (ShareType Video)", "20870", "Ok")]
	public string social_share06()
	{
		var status = AnalyticsEvent.SocialShare (ShareType.Video, SocialNetwork.None);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify social_share_accept Event Status (SocialNetwork Facebook)", "20871", "Ok")]
	public string social_share_accept01()
	{
		var status = AnalyticsEvent.SocialShareAccept (ShareType.Invite, SocialNetwork.Facebook);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify social_share_accept Event Status (SocialNetwork GooglePlus)", "20871", "Ok")]
	public string social_share_accept02()
	{
		var status = AnalyticsEvent.SocialShareAccept (ShareType.Invite, SocialNetwork.GooglePlus);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify social_share_accept Event Status (SocialNetwork Instagram)", "20871", "Ok")]
	public string social_share_accept03()
	{
		var status = AnalyticsEvent.SocialShareAccept (ShareType.Invite, SocialNetwork.Instagram);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify social_share_accept Event Status (SocialNetwork None)", "20871", "Ok")]
	public string social_share_accept04()
	{
		var status = AnalyticsEvent.SocialShareAccept (ShareType.Invite, SocialNetwork.None);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify social_share_accept Event Status (SocialNetwork OK_ru)", "20871", "Ok")]
	public string social_share_accept05()
	{
		var status = AnalyticsEvent.SocialShareAccept (ShareType.Invite, SocialNetwork.OK_ru);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify social_share_accept Event Status (SocialNetwork Pinterest)", "20871", "Ok")]
	public string social_share_accept06()
	{
		var status = AnalyticsEvent.SocialShareAccept (ShareType.Invite, SocialNetwork.Pinterest);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify social_share_accept Event Status (SocialNetwork QQ)", "20871", "Ok")]
	public string social_share_accept07()
	{
		var status = AnalyticsEvent.SocialShareAccept (ShareType.Invite, SocialNetwork.QQ);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify social_share_accept Event Status (SocialNetwork Twitter)", "20871", "Ok")]
	public string social_share_accept08()
	{
		var status = AnalyticsEvent.SocialShareAccept (ShareType.Invite, SocialNetwork.Twitter);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify social_share_accept Event Status (SocialNetwork VK)", "20871", "Ok")]
	public string social_share_accept09()
	{
		var status = AnalyticsEvent.SocialShareAccept (ShareType.Invite, SocialNetwork.VK);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify social_share_accept Event Status (SocialNetwork WeChat)", "20871", "Ok")]
	public string social_share_accept10()
	{
		var status = AnalyticsEvent.SocialShareAccept (ShareType.Invite, SocialNetwork.WeChat);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify social_share_accept Event Status (SocialNetwork Weibo)", "20871", "Ok")]
	public string social_share_accept11()
	{
		var status = AnalyticsEvent.SocialShareAccept (ShareType.Invite, SocialNetwork.Weibo);
		return status.ToString();
	}

	[CDTest(Assert.AreEqual, "Verify social_share_accept Event Status (SocialNetwork Zhihu)", "20871", "Ok")]
	public string social_share_accept12()
	{
		var status = AnalyticsEvent.SocialShareAccept (ShareType.Invite, SocialNetwork.Zhihu);
		return status.ToString();
	}
}
