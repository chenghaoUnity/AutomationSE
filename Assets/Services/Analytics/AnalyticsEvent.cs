using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    public static class AnalyticsEvent
    {
        static readonly string k_SdkVersion = "0.0.0";

        static readonly Dictionary<string, Type> k_StandardEvents = new Dictionary<string, Type>()
        {
            { AchievementUnlockedPayload.standardEventName,         typeof(AchievementUnlockedPayload) },
            { AchievementStepPayload.standardEventName,             typeof(AchievementStepPayload) },
            { AdCompletePayload.standardEventName,                  typeof(AdCompletePayload) },
            { AdOfferPayload.standardEventName,                     typeof(AdOfferPayload) },
            { AdStartPayload.standardEventName,                     typeof(AdStartPayload) },
            { ChatMessageSentPayload.standardEventName,             typeof(ChatMessageSentPayload) },
            { CurrencyAcquiredPayload.standardEventName,            typeof(CurrencyAcquiredPayload) },
            { CurrencySpentPayload.standardEventName,               typeof(CurrencySpentPayload) },
            { CutsceneSkipPayload.standardEventName,                typeof(CutsceneSkipPayload) },
            { GameOverPayload.standardEventName,                    typeof(GameOverPayload) },
            { GameStartPayload.standardEventName,                   typeof(GameStartPayload) },
            { LevelCompletePayload.standardEventName,               typeof(LevelCompletePayload) },
            { LevelFailPayload.standardEventName,                   typeof(LevelFailPayload) },
            { LevelQuitPayload.standardEventName,                   typeof(LevelQuitPayload) },
            { LevelSkipPayload.standardEventName,                   typeof(LevelSkipPayload) },
            { LevelStartPayload.standardEventName,                  typeof(LevelStartPayload) },
            { LevelUpPayload.standardEventName,                     typeof(LevelUpPayload) },
            { PostAdActionPayload.standardEventName,                typeof(PostAdActionPayload) },
            { PostInstallActionPayload.standardEventName,           typeof(PostInstallActionPayload) },
            { PushNotificationClickPayload.standardEventName,       typeof(PushNotificationClickPayload) },
            { PushNotificationEnablePayload.standardEventName,      typeof(PushNotificationEnablePayload) },
            { ResourceAcquiredPayload.standardEventName,            typeof(ResourceAcquiredPayload) },
            { ResourceSpentPayload.standardEventName,               typeof(ResourceSpentPayload) },
            { ScreenVisitPayload.standardEventName,                 typeof(ScreenVisitPayload) },
            { SocialSharePayload.standardEventName,                 typeof(SocialSharePayload) },
            { StoreItemClickPayload.standardEventName,              typeof(StoreItemClickPayload) },
            { StoreOpenedPayload.standardEventName,                 typeof(StoreOpenedPayload) },
            { TutorialCompletePayload.standardEventName,            typeof(TutorialCompletePayload) },
            { TutorialStartPayload.standardEventName,               typeof(TutorialStartPayload) },
            { TutorialStepPayload.standardEventName,                typeof(TutorialStepPayload) },
            { UserSignupPayload.standardEventName,                  typeof(UserSignupPayload) },
        };

        /// <summary>
        /// Gets the SDK version.
        /// </summary>
        /// <value>The SDK version.</value>
        public static string sdkVersion { get { return k_SdkVersion; } }

        /// <summary>
        /// Gets or sets a value indicating whether debug mode is enabled.
        /// </summary>
        /// <value><c>true</c> if debug mode is enabled; otherwise, <c>false</c>.</value>
        public static bool debugMode { get; set; }

        /// <summary>
        /// Create an instance of type <c>T</c>.
        /// </summary>
        /// <typeparam name="T">The 1st type parameter.</typeparam>
        public static T Create<T> () where T : AnalyticsEventPayload
        {
            return Create<T>(null);
        }

        /// <summary>
        /// Create an instance of type <c>T</c>.
        /// </summary>
        /// <param name="eventData">Event data.</param>
        /// <typeparam name="T">The 1st type parameter.</typeparam>
        public static T Create<T> (IDictionary<string, object> eventData) where T : AnalyticsEventPayload
        {
            return AnalyticsEventPayload.CreateInstance<T>(eventData);
        }

        /// <summary>
        /// Create an AnalyticsEventPayload instance with the specified eventName.
        /// </summary>
        /// <param name="eventName">Event name.</param>
        public static AnalyticsEventPayload Create (string eventName)
        {
            return Create(eventName, null);
        }

        /// <summary>
        /// Create an AnalyticsEventPayload instance with the specified eventName.
        /// </summary>
        /// <param name="eventName">Event name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsEventPayload Create (string eventName, IDictionary<string, object> eventData)
        {
            return AnalyticsEventPayload.CreateInstance(eventName, eventData);
        }

        /// <summary>
        /// Create an instance of the specified payloadType.
        /// </summary>
        /// <param name="payloadType">Payload type.</param>
        public static AnalyticsEventPayload Create (Type payloadType)
        {
            return Create(payloadType, null);
        }

        /// <summary>
        /// Create an instance of the specified payloadType.
        /// </summary>
        /// <param name="payloadType">Payload type.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsEventPayload Create (Type payloadType, IDictionary<string, object> eventData)
        {
            return AnalyticsEventPayload.CreateInstance(payloadType, eventData);
        }

        /// <summary>
        /// Send the specified eventName.
        /// </summary>
        /// <param name="eventName">Event name.</param>
        public static AnalyticsResult Send (string eventName)
        {
            return Send(eventName, null);
        }

        /// <summary>
        /// Send the specified eventName and eventData.
        /// </summary>
        /// <param name="eventName">Event name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult Send (string eventName, IDictionary<string, object> eventData)
        {
            return Create(eventName, eventData).Send();
        }

        /// <summary>
        /// Send the specified eventName and position.
        /// </summary>
        /// <param name="eventName">Event name.</param>
        /// <param name="position">Position.</param>
        public static AnalyticsResult Send (string eventName, Vector3 position)
        {
            return Analytics.CustomEvent(eventName, position);
        }

        /// <summary>
        /// Send an instance of type <c>T</c>.
        /// </summary>
        /// <typeparam name="T">The 1st type parameter.</typeparam>
        public static AnalyticsResult Send<T> () where T : AnalyticsEventPayload
        {
            return Send<T>(null);
        }

        /// <summary>
        /// Send an instance of type <c>T</c> and eventData.
        /// </summary>
        /// <param name="eventData">Event data.</param>
        /// <typeparam name="T">The 1st type parameter.</typeparam>
        public static AnalyticsResult Send<T> (IDictionary<string, object> eventData) where T : AnalyticsEventPayload
        {
            return Create<T>(eventData).Send();
        }

        /// <summary>
        /// Send an instance of the specified payloadType.
        /// </summary>
        /// <param name="payloadType">Payload type.</param>
        public static AnalyticsResult Send (Type payloadType)
        {
            return Send(payloadType, null);
        }

        /// <summary>
        /// Send an instance of the specified payloadType and eventData.
        /// </summary>
        /// <param name="payloadType">Payload type.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult Send (Type payloadType, IDictionary<string, object> eventData)
        {
            return Create(payloadType, eventData).Send();
        }

        public static AnalyticsResult Send (AnalyticsEventPayload eventPayload)
        {
            return eventPayload.Send();
        }

        /// <summary>
        /// Gets the name of the standard event.
        /// </summary>
        /// <returns>The standard event name.</returns>
        /// <typeparam name="T">The 1st type parameter.</typeparam>
        public static string GetStandardEventName<T> ()
        {
            return GetStandardEventName(typeof(T));
        }

        /// <summary>
        /// Gets the name of the standard event.
        /// </summary>
        /// <returns>The standard event name.</returns>
        /// <param name="payloadType">Payload type.</param>
        public static string GetStandardEventName (Type payloadType)
        {
            foreach (KeyValuePair<string, Type> standardEvent in k_StandardEvents)
            {
                if (Equals(payloadType, standardEvent.Value))
                {
                    return standardEvent.Key;
                }
            }

            return null;
        }

        /// <summary>
        /// Gets the type of the standard event.
        /// </summary>
        /// <returns>The standard event type.</returns>
        /// <param name="eventName">Event name.</param>
        public static Type GetStandardEventType (string eventName)
        {
            if (k_StandardEvents.ContainsKey(eventName))
            {
                return k_StandardEvents[eventName];
            }

            return null;
        }

        //----[ AchievementStep ]-------------------------------------------------------------------------------------//

        public static AnalyticsResult AchievementStep (int stepIndex, string achievementId, IDictionary<string, object> eventData = null)
        {
            return AchievementStepPayload.CreateInstance(stepIndex, achievementId, eventData).Send();
        }

        //----[ AchievementUnlock ]-----------------------------------------------------------------------------------//

        public static AnalyticsResult AchievementUnlock (string achievementId, IDictionary<string, object> eventData = null)
        {
            return AchievementUnlockedPayload.CreateInstance(achievementId, eventData).Send();
        }

        //----[ AdComplete ]------------------------------------------------------------------------------------------//

        public static AnalyticsResult AdComplete (bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdCompletePayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send(); ;
        }

        public static AnalyticsResult AdComplete (bool rewarded, AdvertisingNetwork advertisingNetwork = AdvertisingNetwork.None, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdCompletePayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send(); ;
        }

        //----[ AdOffer ]---------------------------------------------------------------------------------------------//

        public static AnalyticsResult AdOffer (bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdOfferPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send(); ;
        }

        public static AnalyticsResult AdOffer (bool rewarded, AdvertisingNetwork advertisingNetwork = AdvertisingNetwork.None, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdOfferPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send(); ;
        }

        //----[ AdSkip ]----------------------------------------------------------------------------------------------//

        public static AnalyticsResult AdSkip (bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdSkipPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        public static AnalyticsResult AdSkip (bool rewarded, AdvertisingNetwork advertisingNetwork = AdvertisingNetwork.None, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdSkipPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        //----[ AdStart ]---------------------------------------------------------------------------------------------//

        public static AnalyticsResult AdStart (bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdStartPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        public static AnalyticsResult AdStart (bool rewarded, AdvertisingNetwork advertisingNetwork = AdvertisingNetwork.None, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdStartPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        //----[ ChatMessageSent ]-------------------------------------------------------------------------------------//

        public static AnalyticsResult ChatMessageSent ()
        {
            return ScriptableObject.CreateInstance<ChatMessageSentPayload>().Send();
        }

        public static AnalyticsResult ChatMessageSent (IDictionary<string, object> eventData)
        {
            return AnalyticsEventPayload.CreateInstance<ChatMessageSentPayload>(eventData).Send();
        }

        //----[ CurrencyAcquired ]------------------------------------------------------------------------------------//

        public static AnalyticsResult CurrencyAcquired (int amount, int newBalance, ItemType type, ItemSource source, string itemId, string itemName = null, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(amount, newBalance, type, source, itemId, itemName, eventData).Send();
        }

        public static AnalyticsResult CurrencyAcquired (int amount, int newBalance, ItemType type, string source, string itemId, string itemName = null, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(amount, newBalance, type, source, itemId, itemName, eventData).Send();
        }

        public static AnalyticsResult CurrencyAcquired (float amount, float newBalance, ItemType type, ItemSource source, string itemId, string itemName = null, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(amount, newBalance, type, source, itemId, itemName, eventData).Send();
        }

        public static AnalyticsResult CurrencyAcquired (float amount, float newBalance, ItemType type, string source, string itemId, string itemName = null, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(amount, newBalance, type, source, itemId, itemName, eventData).Send();
        }

        public static AnalyticsResult CurrencyAcquired (decimal amount, decimal newBalance, ItemType type, ItemSource source, string itemId, string itemName = null, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(amount, newBalance, type, source, itemId, itemName, eventData).Send();
        }

        public static AnalyticsResult CurrencyAcquired (decimal amount, decimal newBalance, ItemType type, string source, string itemId, string itemName = null, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(amount, newBalance, type, source, itemId, itemName, eventData).Send();
        }

        //----[ CurrencySpent ]---------------------------------------------------------------------------------------//

        public static AnalyticsResult CurrencySpent (int amount, int newBalance, ItemType type, string itemId, string itemName = null, IDictionary<string, object> eventData = null)
        {
            return CurrencySpentPayload.CreateInstance(amount, newBalance, type, itemId, itemName, eventData).Send();
        }

        public static AnalyticsResult CurrencySpent (float amount, float newBalance, ItemType type, string itemId, string itemName = null, IDictionary<string, object> eventData = null)
        {
            return CurrencySpentPayload.CreateInstance(amount, newBalance, type, itemId, itemName, eventData).Send();
        }

        public static AnalyticsResult CurrencySpent (decimal amount, decimal newBalance, ItemType type, string itemId, string itemName = null, IDictionary<string, object> eventData = null)
        {
            return CurrencySpentPayload.CreateInstance(amount, newBalance, type, itemId, itemName, eventData).Send();
        }

        //----[ CutsceneSkip ]----------------------------------------------------------------------------------------//

        public static AnalyticsResult CutsceneSkip (string sceneName, IDictionary<string, object> eventData = null)
        {
            return CutsceneSkipPayload.CreateInstance(sceneName, eventData).Send();
        }

        //----[ GameOver ]--------------------------------------------------------------------------------------------//

        public static AnalyticsResult GameOver (string levelName = null, IDictionary<string, object> eventData = null)
        {
            return GameOverPayload.CreateInstance(levelName, eventData).Send();
        }

        public static AnalyticsResult GameOver (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return GameOverPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        //----[ GameStart ]-------------------------------------------------------------------------------------------//

        public static AnalyticsResult GameStart ()
        {
            return GameStartPayload.CreateInstance<GameStartPayload>().Send();
        }

        public static AnalyticsResult GameStart (IDictionary<string, object> eventData)
        {
            return AnalyticsEventPayload.CreateInstance<GameStartPayload>(eventData).Send();
        }

        //----[ LevelComplete ]---------------------------------------------------------------------------------------//

        public static AnalyticsResult LevelComplete (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelCompletePayload.CreateInstance(levelName, eventData).Send();
        }

        public static AnalyticsResult LevelComplete (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelCompletePayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        //----[ LevelFail ]-------------------------------------------------------------------------------------------//

        public static AnalyticsResult LevelFail (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelFailPayload.CreateInstance(levelName, eventData).Send();
        }

        public static AnalyticsResult LevelFail (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelFailPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        //----[ LevelQuit ]-------------------------------------------------------------------------------------------//

        public static AnalyticsResult LevelQuit (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelQuitPayload.CreateInstance(levelName, eventData).Send();
        }

        public static AnalyticsResult LevelQuit (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelQuitPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        //----[ LevelSkip ]-------------------------------------------------------------------------------------------//

        public static AnalyticsResult LevelSkip (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelSkipPayload.CreateInstance(levelName, eventData).Send();
        }

        public static AnalyticsResult LevelSkip (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelSkipPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        //----[ LevelStart ]------------------------------------------------------------------------------------------//

        public static AnalyticsResult LevelStart (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelStartPayload.CreateInstance(levelName, eventData).Send();
        }

        public static AnalyticsResult LevelStart (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelStartPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        //----[ LevelUp ]---------------------------------------------------------------------------------------------//

        public static AnalyticsResult LevelUp (int oldLevelIndex, int newLevelIndex, IDictionary<string, object> eventData = null)
        {
            return LevelUpPayload.CreateInstance(oldLevelIndex, newLevelIndex, eventData).Send();
        }

        public static AnalyticsResult LevelUp (string oldLevelName, string newLevelName, IDictionary<string, object> eventData = null)
        {
            return LevelUpPayload.CreateInstance(oldLevelName, newLevelName, eventData).Send();
        }

        public static AnalyticsResult LevelUp (int oldLevelIndex, string oldLevelName, int newLevelIndex, string newLevelName, IDictionary<string, object> eventData = null)
        {
            return LevelUpPayload.CreateInstance(oldLevelIndex, oldLevelName, newLevelIndex, newLevelName, eventData).Send();
        }

        //----[ PostAdAction ]----------------------------------------------------------------------------------------//

        public static AnalyticsResult PostAdAction (bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return PostAdActionPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        public static AnalyticsResult PostAdAction (bool rewarded, AdvertisingNetwork advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return PostAdActionPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        //----[ PostInstallAction ]-----------------------------------------------------------------------------------//

        public static AnalyticsResult PostInstallAction (string actionId = null, IDictionary<string, object> eventData = null)
        {
            return PostInstallActionPayload.CreateInstance(actionId, eventData).Send();
        }

        //----[ PushNotificationClick ]-------------------------------------------------------------------------------//

        public static AnalyticsResult PushNotificationClick (string messageId, IDictionary<string, object> eventData = null)
        {
            return PushNotificationClickPayload.CreateInstance(messageId, eventData).Send();
        }

        //----[ PushNotificationEnable ]------------------------------------------------------------------------------//

        public static AnalyticsResult PushNotificationEnable ()
        {
            return ScriptableObject.CreateInstance<PushNotificationEnablePayload>().Send();
        }

        public static AnalyticsResult PushNotificationEnable (IDictionary<string, object> eventData)
        {
            return AnalyticsEventPayload.CreateInstance<PushNotificationEnablePayload>(eventData).Send();
        }

        //----[ ResourceAcquired ]------------------------------------------------------------------------------------//

        public static AnalyticsResult ResourceAcquired (int amount, int newBalance, string itemId, string itemName = null, IDictionary<string, object> eventData = null)
        {
            return ResourceAcquiredPayload.CreateInstance(amount, newBalance, itemId, itemName, eventData).Send();
        }

        public static AnalyticsResult ResourceAcquired (float amount, float newBalance, string itemId, string itemName = null, IDictionary<string, object> eventData = null)
        {
            return ResourceAcquiredPayload.CreateInstance(amount, newBalance, itemId, itemName, eventData).Send();
        }

        public static AnalyticsResult ResourceAcquired (decimal amount, decimal newBalance, string itemId, string itemName = null, IDictionary<string, object> eventData = null)
        {
            return ResourceAcquiredPayload.CreateInstance(amount, newBalance, itemId, itemName, eventData).Send();
        }

        //----[ ResourceSpent ]---------------------------------------------------------------------------------------//

        public static AnalyticsResult ResourceSpent (int amount, int newBalance, string itemId, string itemName = null, IDictionary<string, object> eventData = null)
        {
            return ResourceSpentPayload.CreateInstance(amount, newBalance, itemId, itemName, eventData).Send();
        }

        public static AnalyticsResult ResourceSpent (float amount, float newBalance, string itemId, string itemName = null, IDictionary<string, object> eventData = null)
        {
            return ResourceSpentPayload.CreateInstance(amount, newBalance, itemId, itemName, eventData).Send();
        }

        public static AnalyticsResult ResourceSpent (decimal amount, decimal newBalance, string itemId, string itemName = null, IDictionary<string, object> eventData = null)
        {
            return ResourceSpentPayload.CreateInstance(amount, newBalance, itemId, itemName, eventData).Send();
        }

        //----[ ScreenVisit ]-----------------------------------------------------------------------------------------//

        public static AnalyticsResult ScreenVisit (ScreenName screenName, IDictionary<string, object> eventData = null)
        {
            return ScreenVisitPayload.CreateInstance(screenName, eventData).Send();
        }

        public static AnalyticsResult ScreenVisit (string screenName, IDictionary<string, object> eventData = null)
        {
            return ScreenVisitPayload.CreateInstance(screenName, eventData).Send();
        }

        //----[ SocialShare ]-----------------------------------------------------------------------------------------//

        public static AnalyticsResult SocialShare (ShareType shareType, SocialNetwork socialNetwork, IDictionary<string, object> eventData = null)
        {
            return SocialSharePayload.CreateInstance(shareType, socialNetwork, eventData).Send();
        }

        public static AnalyticsResult SocialShare (ShareType shareType, string socialNetwork, IDictionary<string, object> eventData = null)
        {
            return SocialSharePayload.CreateInstance(shareType, socialNetwork, eventData).Send();
        }

        public static AnalyticsResult SocialShare (string shareType, SocialNetwork socialNetwork, IDictionary<string, object> eventData = null)
        {
            return SocialSharePayload.CreateInstance(shareType, socialNetwork, eventData).Send();
        }

        public static AnalyticsResult SocialShare (string shareType, string socialNetwork, IDictionary<string, object> eventData = null)
        {
            return SocialSharePayload.CreateInstance(shareType, socialNetwork, eventData).Send();
        }

        //----[ StoreItemClick ]--------------------------------------------------------------------------------------//

        public static AnalyticsResult StoreItemClick (string itemId, string itemName = null, Dictionary<string, object> eventData = null)
        {
            return StoreItemClickPayload.CreateInstance(itemId, itemName, eventData).Send();
        }

        //----[ StoreOpened ]-----------------------------------------------------------------------------------------//

        public static AnalyticsResult StoreOpened (StoreType storeType, IDictionary<string, object> eventData = null)
        {
            return StoreOpenedPayload.CreateInstance(storeType, eventData).Send();
        }

        //----[ TutorialComplete ]------------------------------------------------------------------------------------//

        public static AnalyticsResult TutorialComplete (string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return TutorialCompletePayload.CreateInstance(tutorialId, eventData).Send();
        }

        //----[ TutorialSkip ]----------------------------------------------------------------------------------------//

        public static AnalyticsResult TutorialSkip (string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return TutorialSkipPayload.CreateInstance(tutorialId, eventData).Send();
        }

        //----[ TutorialStart ]---------------------------------------------------------------------------------------//

        public static AnalyticsResult TutorialStart (string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return TutorialStartPayload.CreateInstance(tutorialId, eventData).Send();
        }

        //----[ TutorialStep ]----------------------------------------------------------------------------------------//

        public static AnalyticsResult TutorialStep (int stepIndex, string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return TutorialStepPayload.CreateInstance(stepIndex, tutorialId, eventData).Send();
        }

        //----[ UserSignup ]------------------------------------------------------------------------------------------//

        public static AnalyticsResult UserSignup (string authorizationNetwork, IDictionary<string, object> eventData = null)
        {
            return UserSignupPayload.CreateInstance(authorizationNetwork, eventData).Send();
        }

        public static AnalyticsResult UserSignup (AuthorizationNetwork authorizationNetwork, IDictionary<string, object> eventData = null)
        {
            return UserSignupPayload.CreateInstance(authorizationNetwork, eventData).Send();
        }
    }
}
