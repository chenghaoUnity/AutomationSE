using System;
using System.Collections.Generic;
using System.Linq;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Analytics event.
    /// </summary>
    public static class AnalyticsEvent
    {
        static readonly string k_SdkVersion = "0.1.0";

        static readonly Dictionary<string, Type> k_StandardEvents = new Dictionary<string, Type>
        {
            { AchievementUnlockedPayload.standardEventName,         typeof(AchievementUnlockedPayload) },
            { AchievementStepPayload.standardEventName,             typeof(AchievementStepPayload) },
            { AdCompletePayload.standardEventName,                  typeof(AdCompletePayload) },
            { AdOfferPayload.standardEventName,                     typeof(AdOfferPayload) },
            { AdStartPayload.standardEventName,                     typeof(AdStartPayload) },
            { ChatMessageSentPayload.standardEventName,             typeof(ChatMessageSentPayload) },
            { ConsumableAcquiredPayload.standardEventName,          typeof(ConsumableAcquiredPayload) },
            { ConsumableSpentPayload.standardEventName,             typeof(ConsumableSpentPayload) },
            { CurrencyAcquiredPayload.standardEventName,            typeof(CurrencyAcquiredPayload) },
            { CutsceneSkipPayload.standardEventName,                typeof(CutsceneSkipPayload) },
            { GameOverPayload.standardEventName,                    typeof(GameOverPayload) },
            { GameStartPayload.standardEventName,                   typeof(GameStartPayload) },
            { ItemAcquiredPayload.standardEventName,                typeof(ItemAcquiredPayload) },
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
        /// <remarks>
        /// When debug mode is enabled, a debug log is generated for each event sent. If an error occurs when
        /// sending an event, an error log is generated whether or not debug mode is enabled.
        /// <para>
        /// To enable vebose logging, add DEBUG_ANALYTICS_STANDARD_EVENTS to Scripting Define Symbols 
        /// under Player Settings for each platform.
        /// </para>
        /// </remarks>
        /// <value><c>true</c> if debug mode is enabled; otherwise, <c>false</c>.</value>
        public static bool debugMode { get; set; }

        /// <summary>
        /// Create an instance of type <c>T</c>, where <c>T</c> inherits from <see cref="AnalyticsEventPayload"/>.
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
            var value = k_StandardEvents.Where(p => p.Value.Equals(payloadType));

            return value.Count() == 0 ? null : value.First().Key;
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

        /// <summary>
        /// Creates and sends an AchievementStepPayload.
        /// </summary>
        /// <param name="stepIndex">Identifier for the achievement step.</param>
        /// <param name="achievementId">Achievement ID.</param>
        /// <param name="eventData">Custom event data.</param>
        /// <returns>Analytics API result.</returns>
        public static AnalyticsResult AchievementStep (int stepIndex, string achievementId, IDictionary<string, object> eventData = null)
        {
            return AchievementStepPayload.CreateInstance(stepIndex, achievementId, eventData).Send();
        }

        /// <summary>
        /// Creates and sends an AchievementUnlockedPayload.
        /// </summary>
        /// <param name="achievementId">Achievement ID.</param>
        /// <param name="eventData">Custom event data.</param>
        /// <returns>Analytics API result.</returns>
        public static AnalyticsResult AchievementUnlock (string achievementId, IDictionary<string, object> eventData = null)
        {
            return AchievementUnlockedPayload.CreateInstance(achievementId, eventData).Send();
        }

        /// <summary>
        /// Creates and sends an AdCompletePayload.
        /// </summary>
        /// <param name="rewarded">Was this a rewarded ad?</param>
        /// <param name="advertisingNetwork">Ad network being used.</param>
        /// <param name="placementId">Ad placement ID.</param>
        /// <param name="eventData">Custom event data.</param>
        /// <returns>Analytics API result.</returns>
        public static AnalyticsResult AdComplete (bool rewarded, string advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdCompletePayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Creates and sends an AdCompletePayload.
        /// </summary>
        /// <param name="rewarded">Was this a rewarded ad?</param>
        /// <param name="advertisingNetwork">Ad network being used.</param>
        /// <param name="placementId">Ad placement ID.</param>
        /// <param name="eventData">Custom event data.</param>
        /// <returns>Analytics API result.</returns>
        public static AnalyticsResult AdComplete (bool rewarded, AdvertisingNetwork advertisingNetwork = AdvertisingNetwork.None, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdCompletePayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Creates and sends an AdOfferPayload.
        /// </summary>
        /// <param name="rewarded">Was this a rewarded ad?</param>
        /// <param name="advertisingNetwork">Ad network being used.</param>
        /// <param name="placementId">Ad placement ID.</param>
        /// <param name="eventData">Custom event data.</param>
        /// <returns>Analytics API result.</returns>
        public static AnalyticsResult AdOffer (bool rewarded, string advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdOfferPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Creates and sends an AdOfferPayload.
        /// </summary>
        /// <param name="rewarded">Was this a rewarded ad?</param>
        /// <param name="advertisingNetwork">Ad network being used.</param>
        /// <param name="placementId">Ad placement ID.</param>
        /// <param name="eventData">Custom event data.</param>
        /// <returns>Analytics API result.</returns>
        public static AnalyticsResult AdOffer (bool rewarded, AdvertisingNetwork advertisingNetwork = AdvertisingNetwork.None, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdOfferPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Creates and sends an AdSkipPayload.
        /// </summary>
        /// <param name="rewarded">Was this a rewarded ad?</param>
        /// <param name="advertisingNetwork">Ad network being used.</param>
        /// <param name="placementId">Ad placement ID.</param>
        /// <param name="eventData">Custom event data.</param>
        /// <returns>Analytics API result.</returns>
        public static AnalyticsResult AdSkip (bool rewarded, string advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdSkipPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Creates and sends an AdSkipPayload.
        /// </summary>
        /// <param name="rewarded">Was this a rewarded ad?</param>
        /// <param name="advertisingNetwork">Ad network being used.</param>
        /// <param name="placementId">Ad placement ID.</param>
        /// <param name="eventData">Custom event data.</param>
        /// <returns>Analytics API result.</returns>
        public static AnalyticsResult AdSkip (bool rewarded, AdvertisingNetwork advertisingNetwork = AdvertisingNetwork.None, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdSkipPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Creates and sends an AdStartPayload.
        /// </summary>
        /// <param name="rewarded">Was this a rewarded ad?</param>
        /// <param name="advertisingNetwork">Ad network being used.</param>
        /// <param name="placementId">Ad placement ID.</param>
        /// <param name="eventData">Custom event data.</param>
        /// <returns>Analytics API result.</returns>
        public static AnalyticsResult AdStart (bool rewarded, string advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdStartPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Creates and sends an AdStartPayload.
        /// </summary>
        /// <param name="rewarded">Was this a rewarded ad?</param>
        /// <param name="advertisingNetwork">Ad network being used.</param>
        /// <param name="placementId">Ad placement ID.</param>
        /// <param name="eventData">Custom event data.</param>
        /// <returns>Analytics API result.</returns>
        public static AnalyticsResult AdStart (bool rewarded, AdvertisingNetwork advertisingNetwork = AdvertisingNetwork.None, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdStartPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Creates and sends an ChatMessageSentPayload.
        /// </summary>
        /// <param name="eventData">Custom event data.</param>
        /// <returns>Analytics API result.</returns>
        public static AnalyticsResult ChatMessageSent (IDictionary<string, object> eventData = null)
        {
            return AnalyticsEventPayload.CreateInstance<ChatMessageSentPayload>(eventData).Send();
        }

        /// <summary>
        /// Consumables the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, AcquisitionSource source, int amount, int balance, IDictionary<string, object> eventData = null)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, eventData).Send();
        }

        /// <summary>
        /// Consumables the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, string source, int amount, int balance, IDictionary<string, object> eventData = null)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, eventData).Send();
        }

        /// <summary>
        /// Consumables the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, AcquisitionSource source, float amount, float balance, IDictionary<string, object> eventData = null)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, eventData).Send();
        }

        /// <summary>
        /// Consumables the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, string source, float amount, float balance, IDictionary<string, object> eventData = null)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, eventData).Send();
        }

        /// <summary>
        /// Consumables the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, AcquisitionSource source, decimal amount, decimal balance, IDictionary<string, object> eventData = null)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, eventData).Send();
        }

        /// <summary>
        /// Consumables the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, string source, decimal amount, decimal balance, IDictionary<string, object> eventData = null)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, eventData).Send();
        }

        /// <summary>
        /// Consumables the spent.
        /// </summary>
        /// <returns>The spent.</returns>
        /// <param name="name">Name.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="itemPurchased">Item purchased.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ConsumableSpent (string name, int amount, int balance, string itemPurchased = null, IDictionary<string, object> eventData = null)
        {
            return ConsumableSpentPayload.CreateInstance(name, amount, balance, itemPurchased, eventData).Send();
        }

        /// <summary>
        /// Consumables the spent.
        /// </summary>
        /// <returns>The spent.</returns>
        /// <param name="name">Name.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="itemPurchased">Item purchased.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ConsumableSpent (string name, float amount, float balance, string itemPurchased = null, IDictionary<string, object> eventData = null)
        {
            return ConsumableSpentPayload.CreateInstance(name, amount, balance, itemPurchased, eventData).Send();
        }

        /// <summary>
        /// Consumables the spent.
        /// </summary>
        /// <returns>The spent.</returns>
        /// <param name="name">Name.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="itemPurchased">Item purchased.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ConsumableSpent (string name, decimal amount, decimal balance, string itemPurchased = null, IDictionary<string, object> eventData = null)
        {
            return ConsumableSpentPayload.CreateInstance(name, amount, balance, itemPurchased, eventData).Send();
        }

        /// <summary>
        /// Currencies the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="purchaseId">Purchase identifier.</param>
        /// <param name="purchaseName">Purchase name.</param>
        /// <param name="purchaseQty">Purchase qty.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, AcquisitionSource source, int amount, int balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, eventData).Send();
        }

        /// <summary>
        /// Currencies the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="purchaseId">Purchase identifier.</param>
        /// <param name="purchaseName">Purchase name.</param>
        /// <param name="purchaseQty">Purchase qty.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, string source, int amount, int balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, eventData).Send();
        }

        /// <summary>
        /// Currencies the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="purchaseId">Purchase identifier.</param>
        /// <param name="purchaseName">Purchase name.</param>
        /// <param name="purchaseQty">Purchase qty.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, AcquisitionSource source, float amount, float balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, eventData).Send();
        }

        /// <summary>
        /// Currencies the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="purchaseId">Purchase identifier.</param>
        /// <param name="purchaseName">Purchase name.</param>
        /// <param name="purchaseQty">Purchase qty.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, string source, float amount, float balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, eventData).Send();
        }

        /// <summary>
        /// Currencies the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="purchaseId">Purchase identifier.</param>
        /// <param name="purchaseName">Purchase name.</param>
        /// <param name="purchaseQty">Purchase qty.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, AcquisitionSource source, decimal amount, decimal balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, eventData).Send();
        }

        /// <summary>
        /// Currencies the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="purchaseId">Purchase identifier.</param>
        /// <param name="purchaseName">Purchase name.</param>
        /// <param name="purchaseQty">Purchase qty.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, string source, decimal amount, decimal balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, eventData).Send();
        }

        /// <summary>
        /// Cutscenes the skip.
        /// </summary>
        /// <returns>The skip.</returns>
        /// <param name="sceneName">Scene name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult CutsceneSkip (string sceneName, IDictionary<string, object> eventData = null)
        {
            return CutsceneSkipPayload.CreateInstance(sceneName, eventData).Send();
        }

        /// <summary>
        /// Games the over.
        /// </summary>
        /// <returns>The over.</returns>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult GameOver (string levelName = null, IDictionary<string, object> eventData = null)
        {
            return GameOverPayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Games the over.
        /// </summary>
        /// <returns>The over.</returns>
        /// <param name="levelIndex">Level index.</param>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult GameOver (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return GameOverPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Games the start.
        /// </summary>
        /// <returns>The start.</returns>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult GameStart (IDictionary<string, object> eventData = null)
        {
            return AnalyticsEventPayload.CreateInstance<GameStartPayload>(eventData).Send();
        }

        /// <summary>
        /// Items the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="resourceType">Resource type.</param>
        /// <param name="resourceAmount">Resource amount.</param>
        /// <param name="resourceBalance">Resource balance.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ItemAcquired (string name, AcquisitionType type, AcquisitionSource source, string resourceType = null, int resourceAmount = 0, int resourceBalance = 0, IDictionary<string, object> eventData = null)
        {
            return ItemAcquiredPayload.CreateInstance(name, type, source, resourceType, resourceAmount, resourceBalance, eventData).Send();
        }

        /// <summary>
        /// Items the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="resourceType">Resource type.</param>
        /// <param name="resourceAmount">Resource amount.</param>
        /// <param name="resourceBalance">Resource balance.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ItemAcquired (string name, AcquisitionType type, string source, string resourceType = null, int resourceAmount = 0, int resourceBalance = 0, IDictionary<string, object> eventData = null)
        {
            return ItemAcquiredPayload.CreateInstance(name, type, source, resourceType, resourceAmount, resourceBalance, eventData).Send();
        }

        /// <summary>
        /// Items the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="resourceType">Resource type.</param>
        /// <param name="resourceAmount">Resource amount.</param>
        /// <param name="resourceBalance">Resource balance.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ItemAcquired (string name, AcquisitionType type, AcquisitionSource source, string resourceType = null, float resourceAmount = 0, float resourceBalance = 0, IDictionary<string, object> eventData = null)
        {
            return ItemAcquiredPayload.CreateInstance(name, type, source, resourceType, resourceAmount, resourceBalance, eventData).Send();
        }

        /// <summary>
        /// Items the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="resourceType">Resource type.</param>
        /// <param name="resourceAmount">Resource amount.</param>
        /// <param name="resourceBalance">Resource balance.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ItemAcquired (string name, AcquisitionType type, string source, string resourceType = null, float resourceAmount = 0, float resourceBalance = 0, IDictionary<string, object> eventData = null)
        {
            return ItemAcquiredPayload.CreateInstance(name, type, source, resourceType, resourceAmount, resourceBalance, eventData).Send();
        }

        /// <summary>
        /// Items the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="resourceType">Resource type.</param>
        /// <param name="resourceAmount">Resource amount.</param>
        /// <param name="resourceBalance">Resource balance.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ItemAcquired (string name, AcquisitionType type, AcquisitionSource source, string resourceType = null, decimal resourceAmount = 0, decimal resourceBalance = 0, IDictionary<string, object> eventData = null)
        {
            return ItemAcquiredPayload.CreateInstance(name, type, source, resourceType, resourceAmount, resourceBalance, eventData).Send();
        }

        /// <summary>
        /// Items the acquired.
        /// </summary>
        /// <returns>The acquired.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="resourceType">Resource type.</param>
        /// <param name="resourceAmount">Resource amount.</param>
        /// <param name="resourceBalance">Resource balance.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ItemAcquired (string name, AcquisitionType type, string source, string resourceType = null, decimal resourceAmount = 0, decimal resourceBalance = 0, IDictionary<string, object> eventData = null)
        {
            return ItemAcquiredPayload.CreateInstance(name, type, source, resourceType, resourceAmount, resourceBalance, eventData).Send();
        }

        /// <summary>
        /// Levels the complete.
        /// </summary>
        /// <returns>The complete.</returns>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult LevelComplete (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelCompletePayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Levels the complete.
        /// </summary>
        /// <returns>The complete.</returns>
        /// <param name="levelIndex">Level index.</param>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult LevelComplete (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelCompletePayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Levels the fail.
        /// </summary>
        /// <returns>The fail.</returns>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult LevelFail (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelFailPayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Levels the fail.
        /// </summary>
        /// <returns>The fail.</returns>
        /// <param name="levelIndex">Level index.</param>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult LevelFail (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelFailPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Levels the quit.
        /// </summary>
        /// <returns>The quit.</returns>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult LevelQuit (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelQuitPayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Levels the quit.
        /// </summary>
        /// <returns>The quit.</returns>
        /// <param name="levelIndex">Level index.</param>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult LevelQuit (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelQuitPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Levels the skip.
        /// </summary>
        /// <returns>The skip.</returns>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult LevelSkip (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelSkipPayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Levels the skip.
        /// </summary>
        /// <returns>The skip.</returns>
        /// <param name="levelIndex">Level index.</param>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult LevelSkip (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelSkipPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Levels the start.
        /// </summary>
        /// <returns>The start.</returns>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult LevelStart (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelStartPayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Levels the start.
        /// </summary>
        /// <returns>The start.</returns>
        /// <param name="levelIndex">Level index.</param>
        /// <param name="levelName">Level name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult LevelStart (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelStartPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Levels up.
        /// </summary>
        /// <returns>The up.</returns>
        /// <param name="oldLevelIndex">Old level index.</param>
        /// <param name="newLevelIndex">New level index.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult LevelUp (int oldLevelIndex, int newLevelIndex, IDictionary<string, object> eventData = null)
        {
            return LevelUpPayload.CreateInstance(oldLevelIndex, newLevelIndex, eventData).Send();
        }

        /// <summary>
        /// Levels up.
        /// </summary>
        /// <returns>The up.</returns>
        /// <param name="oldLevelName">Old level name.</param>
        /// <param name="newLevelName">New level name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult LevelUp (string oldLevelName, string newLevelName, IDictionary<string, object> eventData = null)
        {
            return LevelUpPayload.CreateInstance(oldLevelName, newLevelName, eventData).Send();
        }

        /// <summary>
        /// Levels up.
        /// </summary>
        /// <returns>The up.</returns>
        /// <param name="oldLevelIndex">Old level index.</param>
        /// <param name="oldLevelName">Old level name.</param>
        /// <param name="newLevelIndex">New level index.</param>
        /// <param name="newLevelName">New level name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult LevelUp (int oldLevelIndex, string oldLevelName, int newLevelIndex, string newLevelName, IDictionary<string, object> eventData = null)
        {
            return LevelUpPayload.CreateInstance(oldLevelIndex, oldLevelName, newLevelIndex, newLevelName, eventData).Send();
        }

        /// <summary>
        /// Posts the ad action.
        /// </summary>
        /// <returns>The ad action.</returns>
        /// <param name="rewarded">If set to <c>true</c> rewarded.</param>
        /// <param name="advertisingNetwork">Advertising network.</param>
        /// <param name="placementId">Placement identifier.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult PostAdAction (bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return PostAdActionPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Posts the ad action.
        /// </summary>
        /// <returns>The ad action.</returns>
        /// <param name="rewarded">If set to <c>true</c> rewarded.</param>
        /// <param name="advertisingNetwork">Advertising network.</param>
        /// <param name="placementId">Placement identifier.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult PostAdAction (bool rewarded, AdvertisingNetwork advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return PostAdActionPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Posts the install action.
        /// </summary>
        /// <returns>The install action.</returns>
        /// <param name="actionId">Action identifier.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult PostInstallAction (string actionId = null, IDictionary<string, object> eventData = null)
        {
            return PostInstallActionPayload.CreateInstance(actionId, eventData).Send();
        }

        /// <summary>
        /// Pushs the notification click.
        /// </summary>
        /// <returns>The notification click.</returns>
        /// <param name="messageId">Message identifier.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult PushNotificationClick (string messageId, IDictionary<string, object> eventData = null)
        {
            return PushNotificationClickPayload.CreateInstance(messageId, eventData).Send();
        }

        /// <summary>
        /// Pushs the notification enable.
        /// </summary>
        /// <returns>The notification enable.</returns>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult PushNotificationEnable (IDictionary<string, object> eventData = null)
        {
            return AnalyticsEventPayload.CreateInstance<PushNotificationEnablePayload>(eventData).Send();
        }

        /// <summary>
        /// Screens the visit.
        /// </summary>
        /// <returns>The visit.</returns>
        /// <param name="screenName">Screen name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ScreenVisit (ScreenName screenName, IDictionary<string, object> eventData = null)
        {
            return ScreenVisitPayload.CreateInstance(screenName, eventData).Send();
        }

        /// <summary>
        /// Screens the visit.
        /// </summary>
        /// <returns>The visit.</returns>
        /// <param name="screenName">Screen name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult ScreenVisit (string screenName, IDictionary<string, object> eventData = null)
        {
            return ScreenVisitPayload.CreateInstance(screenName, eventData).Send();
        }

        /// <summary>
        /// Socials the share.
        /// </summary>
        /// <returns>The share.</returns>
        /// <param name="shareType">Share type.</param>
        /// <param name="socialNetwork">Social network.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult SocialShare (ShareType shareType, SocialNetwork socialNetwork, IDictionary<string, object> eventData = null)
        {
            return SocialSharePayload.CreateInstance(shareType, socialNetwork, eventData).Send();
        }

        /// <summary>
        /// Socials the share.
        /// </summary>
        /// <returns>The share.</returns>
        /// <param name="shareType">Share type.</param>
        /// <param name="socialNetwork">Social network.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult SocialShare (ShareType shareType, string socialNetwork, IDictionary<string, object> eventData = null)
        {
            return SocialSharePayload.CreateInstance(shareType, socialNetwork, eventData).Send();
        }

        /// <summary>
        /// Socials the share.
        /// </summary>
        /// <returns>The share.</returns>
        /// <param name="shareType">Share type.</param>
        /// <param name="socialNetwork">Social network.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult SocialShare (string shareType, SocialNetwork socialNetwork, IDictionary<string, object> eventData = null)
        {
            return SocialSharePayload.CreateInstance(shareType, socialNetwork, eventData).Send();
        }

        /// <summary>
        /// Socials the share.
        /// </summary>
        /// <returns>The share.</returns>
        /// <param name="shareType">Share type.</param>
        /// <param name="socialNetwork">Social network.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult SocialShare (string shareType, string socialNetwork, IDictionary<string, object> eventData = null)
        {
            return SocialSharePayload.CreateInstance(shareType, socialNetwork, eventData).Send();
        }

        /// <summary>
        /// Stores the item click.
        /// </summary>
        /// <returns>The item click.</returns>
        /// <param name="storeType">Store type.</param>
        /// <param name="itemId">Item identifier.</param>
        /// <param name="itemName">Item name.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult StoreItemClick (StoreType storeType, string itemId, string itemName = null, Dictionary<string, object> eventData = null)
        {
            return StoreItemClickPayload.CreateInstance(storeType, itemId, itemName, eventData).Send();
        }

        /// <summary>
        /// Stores the opened.
        /// </summary>
        /// <returns>The opened.</returns>
        /// <param name="storeType">Store type.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult StoreOpened (StoreType storeType, IDictionary<string, object> eventData = null)
        {
            return StoreOpenedPayload.CreateInstance(storeType, eventData).Send();
        }

        /// <summary>
        /// Tutorials the complete.
        /// </summary>
        /// <returns>The complete.</returns>
        /// <param name="tutorialId">Tutorial identifier.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult TutorialComplete (string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return TutorialCompletePayload.CreateInstance(tutorialId, eventData).Send();
        }

        /// <summary>
        /// Tutorials the skip.
        /// </summary>
        /// <returns>The skip.</returns>
        /// <param name="tutorialId">Tutorial identifier.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult TutorialSkip (string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return TutorialSkipPayload.CreateInstance(tutorialId, eventData).Send();
        }

        /// <summary>
        /// Tutorials the start.
        /// </summary>
        /// <returns>The start.</returns>
        /// <param name="tutorialId">Tutorial identifier.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult TutorialStart (string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return TutorialStartPayload.CreateInstance(tutorialId, eventData).Send();
        }

        /// <summary>
        /// Tutorials the step.
        /// </summary>
        /// <returns>The step.</returns>
        /// <param name="stepIndex">Step index.</param>
        /// <param name="tutorialId">Tutorial identifier.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult TutorialStep (int stepIndex, string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return TutorialStepPayload.CreateInstance(stepIndex, tutorialId, eventData).Send();
        }

        /// <summary>
        /// Users the signup.
        /// </summary>
        /// <returns>The signup.</returns>
        /// <param name="authorizationNetwork">Authorization network.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult UserSignup (string authorizationNetwork, IDictionary<string, object> eventData = null)
        {
            return UserSignupPayload.CreateInstance(authorizationNetwork, eventData).Send();
        }

        /// <summary>
        /// Users the signup.
        /// </summary>
        /// <returns>The signup.</returns>
        /// <param name="authorizationNetwork">Authorization network.</param>
        /// <param name="eventData">Event data.</param>
        public static AnalyticsResult UserSignup (AuthorizationNetwork authorizationNetwork, IDictionary<string, object> eventData = null)
        {
            return UserSignupPayload.CreateInstance(authorizationNetwork, eventData).Send();
        }
    }
}
