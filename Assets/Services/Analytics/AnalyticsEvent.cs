using System;
using System.Collections.Generic;
using System.Linq;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// The main class of the Unity Analytics Standard Event SDK.
    /// <remarks>
    /// The event methods in this class provide "fire and forget" ease of use,
    /// allowing you to send a standard event with a single line of code.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// If you expect to be sending the same standard event with some amount of frequency,
    /// you may want to create an event payload and invoke the <c>Send</c> method when the event occurs.
    /// <para>
    /// Using a reference to a payload instance can provide improved efficiency by using the same payload 
    /// while updating the parameters of the payload prior to sending the payload with each reoccuring event.
    /// </para>
    /// </remarks>
    public static class AnalyticsEvent
    {
        static readonly string k_SdkVersion = "0.1.2";

        static readonly string k_ArgumentException_EmptyString = "String cannot be empty.";
        static readonly string k_ArgumentException_PayloadType = "Payload type must inherit from AnalyticsEventPayload.";

        static readonly Dictionary<string, Type> k_StandardEvents = new Dictionary<string, Type>
        {
            { AchievementStepPayload.standardEventName,             typeof(AchievementStepPayload) },
            { AchievementUnlockedPayload.standardEventName,         typeof(AchievementUnlockedPayload) },
            { AdCompletePayload.standardEventName,                  typeof(AdCompletePayload) },
            { AdOfferPayload.standardEventName,                     typeof(AdOfferPayload) },
            { AdSkipPayload.standardEventName,                      typeof(AdSkipPayload) },
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
            { TutorialSkipPayload.standardEventName,                typeof(TutorialSkipPayload) },
            { TutorialStartPayload.standardEventName,               typeof(TutorialStartPayload) },
            { TutorialStepPayload.standardEventName,                typeof(TutorialStepPayload) },
            { UserSignupPayload.standardEventName,                  typeof(UserSignupPayload) },
        };

        static string[] k_StandardEventNames;

        /// <summary>
        /// Gets the Unity Analytics Standard Event SDK version.
        /// </summary>
        /// <value>The SDK version in semantic versioning format.</value>
        public static string sdkVersion { get { return k_SdkVersion; } }

        /// <summary>
        /// Gets or sets a value indicating whether debug mode is enabled.
        /// <remarks>
        /// When debug mode is enabled, a debug log is generated for each event sent. If an error occurs when
        /// sending an event, an error log is generated regardless of whether debug mode is enabled.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// To view the event name and a listing of event data parameters within the debug log messages for each event, 
        /// add DEBUG_ANALYTICS_STANDARD_EVENTS to Scripting Define Symbols for the target platforms in Player Settings.
        /// </remarks>
        /// <value><c>true</c> if debug mode is enabled; otherwise, <c>false</c>.</value>
#if DEBUG_ANALYTICS_STANDARD_EVENTS
        public static bool debugMode { get { return true; }}
#else
        public static bool debugMode { get; set; }
#endif

        /// <summary>
        /// Gets an array of all standard event names.
        /// </summary>
        /// <value>An array of all standard event names.</value>
        public static string[] standardEventNames
        {
            get
            {
                if (k_StandardEventNames == null)
                {
                    k_StandardEventNames = new string[k_StandardEvents.Keys.Count];
                    k_StandardEvents.Keys.CopyTo(k_StandardEventNames, 0);
                }

                return k_StandardEventNames;
            }
        }

        /// <summary>
        /// Creates a new instance of payload type <c>T</c>, where <c>T</c> inherits from AnalyticsEventPayload.
        /// </summary>
        /// <returns>A new instance of payload type <c>T</c>, where <c>T</c> inherits from <see cref="AnalyticsEventPayload"/>.</returns>
        /// <param name="eventData">The event data (optional).</param>
        /// <typeparam name="T">The analytics event payload type.</typeparam>
        public static T Create<T> (IDictionary<string, object> eventData = null) where T : AnalyticsEventPayload
        {
            return AnalyticsEventPayload.CreateInstance<T>(eventData);
        }

        /// <summary>
        /// Creates a new instance of AnalyticsEventPayload with the specified <c>eventName</c>.
        /// </summary>
        /// <returns>A new instance of <see cref="AnalyticsEventPayload"/>.</returns>
        /// <param name="eventName">The name of the event.</param>
        /// <param name="eventData">The event data (optional).</param>
        public static AnalyticsEventPayload Create (string eventName, IDictionary<string, object> eventData = null)
        {
            if (eventName == null)
            {
                throw new ArgumentNullException("eventName");
            }

            if (eventName == string.Empty)
            {
                throw new ArgumentException(k_ArgumentException_EmptyString, "eventName");
            }

            return AnalyticsEventPayload.CreateInstance(eventName, eventData);
        }

        /// <summary>
        /// Creates a new instance of the specified <c>payloadType</c> as AnalyticsEventPayload.
        /// </summary>
        /// <returns>A new instance of <c>payloadType</c> as <see cref="AnalyticsEventPayload"/>.</returns>
        /// <param name="payloadType">The analytics event payload type.</param>
        /// <param name="eventData">The event data (optional).</param>
        public static AnalyticsEventPayload Create (Type payloadType, IDictionary<string, object> eventData = null)
        {
            if (payloadType == null)
            {
                throw new ArgumentNullException("payloadType");
            }

            if (!typeof(AnalyticsEventPayload).IsAssignableFrom(payloadType))
            {
                throw new ArgumentException(k_ArgumentException_PayloadType, "payloadType");
            }

            return AnalyticsEventPayload.CreateInstance(payloadType, eventData);
        }

        /// <summary>
        /// Sends an analytics event using the specified <c>eventName</c>.
        /// </summary>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="eventName">The name of the event.</param>
        /// <param name="eventData">The event data (optional).</param>
        public static AnalyticsResult Send (string eventName, IDictionary<string, object> eventData = null)
        {
            if (eventName == null)
            {
                throw new ArgumentNullException("eventName");
            }

            if (eventName == string.Empty)
            {
                throw new ArgumentException(k_ArgumentException_EmptyString, "eventName");
            }

            return Create(eventName, eventData).Send();
        }

#if UNITY_5_4_OR_NEWER
        /// <summary>
        /// Sends an analytics event using the specified <c>eventName</c> and <c>position</c>.
        /// </summary>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="eventName">The name of the event.</param>
        /// <param name="position">The position at which the event occured.</param>
        public static AnalyticsResult Send (string eventName, Vector3 position)
        {
            if (eventName == null)
            {
                throw new ArgumentNullException("eventName");
            }

            if (eventName == string.Empty)
            {
                throw new ArgumentException(k_ArgumentException_EmptyString, "eventName");
            }

            return Analytics.CustomEvent(eventName, position);
        }
#endif

        /// <summary>
        /// Deprecated. Please use event specific AnalyticsEvent methods instead.
        /// <para>
        /// Sends an analytics event using payload type <c>T</c>, where <c>T</c> inherits from AnalyticsEventPayload.
        /// </para>
        /// </summary>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="eventData">The event data (optional).</param>
        /// <typeparam name="T">Payload type that inherits from <see cref="AnalyticsEventPayload"/>.</typeparam>
        [Obsolete("Use the event specific AnalyticsEvent method instead.")]
        public static AnalyticsResult Send<T> (IDictionary<string, object> eventData = null) where T : AnalyticsEventPayload
        {
            return Create<T>(eventData).Send();
        }

        /// <summary>
        /// Deprecated. Please use event specific AnalyticsEvent methods instead.
        /// <para>
        /// Sends an analytics event using the specified <c>payloadType</c>.
        /// </para>
        /// </summary>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="payloadType">The analytics event payload type.</param>
        /// <param name="eventData">The event data (optional).</param>
        [Obsolete("Use the event specific AnalyticsEvent method instead.")]
        public static AnalyticsResult Send (Type payloadType, IDictionary<string, object> eventData = null)
        {
            if (payloadType == null)
            {
                throw new ArgumentNullException("payloadType");
            }

            if (!typeof(AnalyticsEventPayload).IsAssignableFrom(payloadType))
            {
                throw new ArgumentException(k_ArgumentException_PayloadType, "payloadType");
            }

            return Create(payloadType, eventData).Send();
        }

        /// <summary>
        /// Sends an analytics event using the specified <c>eventPayload</c>.
        /// </summary>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="eventPayload">The analytics event payload.</param>
        public static AnalyticsResult Send (AnalyticsEventPayload eventPayload)
        {
            if (eventPayload == null)
            {
                throw new ArgumentNullException("eventPayload");
            }

            return eventPayload.Send();
        }

        /// <summary>
        /// Gets the standard event name of the specified payload type <c>T</c>, where <c>T</c> inherits from AnalyticsEventPayload.
        /// </summary>
        /// <returns>The standard event name.</returns>
        /// <typeparam name="T">Payload type that inherits from <see cref="AnalyticsEventPayload"/>.</typeparam>
        public static string GetStandardEventName<T> () where T : AnalyticsEventPayload
        {
            return GetStandardEventName(typeof(T));
        }

        /// <summary>
        /// Gets the standard event name of the specified <c>payloadType</c>.
        /// </summary>
        /// <returns>The standard event name.</returns>
        /// <param name="payloadType">The standard event payload type.</param>
        public static string GetStandardEventName (Type payloadType)
        {
            if (payloadType == null) return null;

            if (!typeof(AnalyticsEventPayload).IsAssignableFrom(payloadType))
            {
                throw new ArgumentException(k_ArgumentException_PayloadType, "payloadType");
            }

            var value = k_StandardEvents.Where(p => p.Value.Equals(payloadType));

            return value.Count() == 0 ? null : value.First().Key;
        }

        /// <summary>
        /// Gets the standard event payload type for the specified <c>eventName</c>.
        /// </summary>
        /// <returns>The standard event payload type.</returns>
        /// <param name="eventName">The standard event name.</param>
        public static Type GetStandardEventType (string eventName)
        {
            if (eventName != null && k_StandardEvents.ContainsKey(eventName))
            {
                return k_StandardEvents[eventName];
            }

            return null;
        }

        /// <summary>
        /// Sends an <c>achievement_step</c> event using the AchievementStepPayload.
        /// <remarks>
        /// Send this event when a requirement or step toward completing a multi-part achievement is complete.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into achievement completion rates among players. 
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="stepIndex">Index of the step completed in a multi-part achievement.</param>
        /// <param name="achievementId">The achievement ID.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult AchievementStep (int stepIndex, string achievementId, IDictionary<string, object> eventData = null)
        {
            return AchievementStepPayload.CreateInstance(stepIndex, achievementId, eventData).Send();
        }

        /// <summary>
        /// Deprecated. Please use AnalyticsEvent.AchievementUnlocked instead.
        /// </summary>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="achievementId">The achievement ID.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        [Obsolete("Use AnalyticsEvent.AchievementUnlocked instead.")]
        public static AnalyticsResult AchievementUnlock (string achievementId, IDictionary<string, object> eventData = null)
        {
            return AchievementUnlockedPayload.CreateInstance(achievementId, eventData).Send();
        }

        /// <summary>
        /// Sends an <c>achievement_unlocked</c> event using the AchievementUnlockedPayload.
        /// <remarks>
        /// Send this event when all requirements to unlock an achievement have been met.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into achievement completion rates among players. 
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="achievementId">The achievement ID.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult AchievementUnlocked (string achievementId, IDictionary<string, object> eventData = null)
        {
            return AchievementUnlockedPayload.CreateInstance(achievementId, eventData).Send();
        }

        /// <summary>
        /// Sends an <c>ad_complete</c> event using the AdCompletePayload.
        /// <remarks>
        /// Send this event when an ad is successfully viewed and not skipped.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into ad completion rates among players, and may indicate the effectiveness of ads by placement in game.
        /// The <c>ad_complete</c> event should be preceded by an <c>ad_start</c> event, sent using AnalyticsEvent.AdStart or AdStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider (optional).</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult AdComplete (bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdCompletePayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Sends an <c>ad_complete</c> event using the AdCompletePayload.
        /// <remarks>
        /// Send this event when an ad is successfully viewed and not skipped.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into ad completion rates among players, and may indicate the effectiveness of ads by placement in game.
        /// The <c>ad_complete</c> event should be preceded by an <c>ad_start</c> event, sent using AnalyticsEvent.AdStart or AdStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider.</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult AdComplete (bool rewarded, AdvertisingNetwork advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdCompletePayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Sends an <c>ad_offer</c> event using the AdOfferPayload.
        /// <remarks>
        /// Send this event when the player is offered the opportunity to view an ad.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into how players respond to ad offers with regards to the placement in game. 
        /// Offers are typically provided prior to showing a rewarded ad, where players are granted a reward for viewing an ad without skipping it.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider (optional).</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult AdOffer (bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdOfferPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Sends an <c>ad_offer</c> event using the AdOfferPayload.
        /// <remarks>
        /// Send this event when the player is offered the opportunity to view an ad.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into how players respond to ad offers with regards to the placement in game. 
        /// Offers are typically provided prior to showing a rewarded ad, where players are granted a reward for viewing an ad without skipping it.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider.</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult AdOffer (bool rewarded, AdvertisingNetwork advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdOfferPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Sends an <c>ad_skip</c> event using the AdSkipPayload.
        /// <remarks>
        /// Send this event when the player opts to skip a video ad during video playback.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into video ad completion rates with regards to the placement in game.
        /// The <c>ad_skip</c> event should be preceded by an <c>ad_start</c> event, sent using AnalyticsEvent.AdStart or AdStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider (optional).</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult AdSkip (bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdSkipPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Sends an <c>ad_skip</c> event using the AdSkipPayload.
        /// <remarks>
        /// Send this event when the player opts to skip a video ad during video playback.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into video ad completion rates with regards to the placement in game.
        /// The <c>ad_skip</c> event should be preceded by an <c>ad_start</c> event, sent using AnalyticsEvent.AdStart or AdStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider.</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult AdSkip (bool rewarded, AdvertisingNetwork advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdSkipPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Sends an <c>ad_start</c> event using the AdStartPayload.
        /// <remarks>
        /// Send this event when an ad is shown.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into how players are actually choosing to start watching an ad.
        /// The <c>ad_start</c> event should precede <see cref="AdCompletePayload"><c>ad_complete</c></see>, 
        /// <see cref="AdSkipPayload"><c>ad_skip</c></see>, and <see cref="PostAdActionPayload"><c>post_ad_action</c></see> events.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider (optional).</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult AdStart (bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdStartPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Sends an <c>ad_start</c> event using the AdStartPayload.
        /// <remarks>
        /// Send this event when an ad is shown.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into how players are actually choosing to start watching an ad.
        /// The <c>ad_start</c> event should precede <see cref="AdCompletePayload"><c>ad_complete</c></see>, 
        /// <see cref="AdSkipPayload"><c>ad_skip</c></see>, and <see cref="PostAdActionPayload"><c>post_ad_action</c></see> events.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider.</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult AdStart (bool rewarded, AdvertisingNetwork advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return AdStartPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>chat_msg_sent</c> event using the ChatMessageSentPayload.
        /// <remarks>
        /// Send this event when the player sends a chat message in game. 
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into how often users are sending chat messages in your game.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult ChatMessageSent (IDictionary<string, object> eventData = null)
        {
            return AnalyticsEventPayload.CreateInstance<ChatMessageSentPayload>(eventData).Send();
        }

#if UNITY_5_5_OR_NEWER
        /// <summary>
        /// Sends a <c>consumable_acquired</c> event using the ConsumableAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, AcquisitionSource source, int amount, int balance, IDictionary<string, object> eventData = null)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>consumable_acquired</c> event using the ConsumableAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, string source, int amount, int balance, IDictionary<string, object> eventData = null)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, eventData).Send();
        }
#else
        /// <summary>
        /// Sends a <c>consumable_acquired</c> event using the ConsumableAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, AcquisitionSource source, int amount, int balance)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, null).Send();
        }

        /// <summary>
        /// Sends a <c>consumable_acquired</c> event using the ConsumableAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        /// <param name="eventData">Custom event data.</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, AcquisitionSource source, int amount, int balance, IDictionary<string, object> eventData)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>consumable_acquired</c> event using the ConsumableAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, string source, int amount, int balance)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, null).Send();
        }

        /// <summary>
        /// Sends a <c>consumable_acquired</c> event using the ConsumableAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        /// <param name="eventData">Custom event data.</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, string source, int amount, int balance, IDictionary<string, object> eventData)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, eventData).Send();
        }
#endif

        /// <summary>
        /// Sends a <c>consumable_acquired</c> event using the ConsumableAcquiredPayload with <c>float</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, AcquisitionSource source, float amount, float balance, IDictionary<string, object> eventData = null)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>consumable_acquired</c> event using the ConsumableAcquiredPayload with <c>float</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, string source, float amount, float balance, IDictionary<string, object> eventData = null)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, eventData).Send();
        }

#if UNITY_5_5_OR_NEWER
        /// <summary>
        /// Sends a <c>consumable_acquired</c> event using the ConsumableAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, AcquisitionSource source, decimal amount, decimal balance, IDictionary<string, object> eventData = null)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>consumable_acquired</c> event using the ConsumableAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, string source, decimal amount, decimal balance, IDictionary<string, object> eventData = null)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, eventData).Send();
        }
#else
        /// <summary>
        /// Sends a <c>consumable_acquired</c> event using the ConsumableAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, AcquisitionSource source, decimal amount, decimal balance)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, null).Send();
        }

        /// <summary>
        /// Sends a <c>consumable_acquired</c> event using the ConsumableAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        /// <param name="eventData">Custom event data.</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, AcquisitionSource source, decimal amount, decimal balance, IDictionary<string, object> eventData)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>consumable_acquired</c> event using the ConsumableAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, string source, decimal amount, decimal balance)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, null).Send();
        }

        /// <summary>
        /// Sends a <c>consumable_acquired</c> event using the ConsumableAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        /// <param name="eventData">Custom event data.</param>
        public static AnalyticsResult ConsumableAcquired (string name, AcquisitionType type, string source, decimal amount, decimal balance, IDictionary<string, object> eventData)
        {
            return ConsumableAcquiredPayload.CreateInstance(name, type, source, amount, balance, eventData).Send();
        }
#endif

#if UNITY_5_5_OR_NEWER
        /// <summary>
        /// Sends a <c>consumable_spent</c> event using the ConsumableSpentPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player spends a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource spend rates.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource spent.</param>
        /// <param name="amount">The number of consumable resources spent.</param>
        /// <param name="balance">The new total balance, minus the consumable resource spent.</param>
        /// <param name="itemPurchased">The item purchased with the consumable resource (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult ConsumableSpent (string name, int amount, int balance, string itemPurchased = null, IDictionary<string, object> eventData = null)
        {
            return ConsumableSpentPayload.CreateInstance(name, amount, balance, itemPurchased, eventData).Send();
        }
#else
        /// <summary>
        /// Sends a <c>consumable_spent</c> event using the ConsumableSpentPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player spends a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource spend rates.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource spent.</param>
        /// <param name="amount">The number of consumable resources spent.</param>
        /// <param name="balance">The new total balance, minus the consumable resource spent.</param>
        public static AnalyticsResult ConsumableSpent (string name, int amount, int balance)
        {
            return ConsumableSpentPayload.CreateInstance(name, amount, balance, null, null).Send();
        }

        /// <summary>
        /// Sends a <c>consumable_spent</c> event using the ConsumableSpentPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player spends a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource spend rates.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource spent.</param>
        /// <param name="amount">The number of consumable resources spent.</param>
        /// <param name="balance">The new total balance, minus the consumable resource spent.</param>
        /// <param name="itemPurchased">The item purchased with the consumable resource.</param>
        public static AnalyticsResult ConsumableSpent (string name, int amount, int balance, string itemPurchased)
        {
            return ConsumableSpentPayload.CreateInstance(name, amount, balance, itemPurchased).Send();
        }

        /// <summary>
        /// Sends a <c>consumable_spent</c> event using the ConsumableSpentPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player spends a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource spend rates.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource spent.</param>
        /// <param name="amount">The number of consumable resources spent.</param>
        /// <param name="balance">The new total balance, minus the consumable resource spent.</param>
        /// <param name="itemPurchased">The item purchased with the consumable resource.</param>
        /// <param name="eventData">Custom event data.</param>
        public static AnalyticsResult ConsumableSpent (string name, int amount, int balance, string itemPurchased, IDictionary<string, object> eventData)
        {
            return ConsumableSpentPayload.CreateInstance(name, amount, balance, itemPurchased, eventData).Send();
        }
#endif

        /// <summary>
        /// Sends a <c>consumable_spent</c> event using the ConsumableSpentPayload with <c>float</c> values.
        /// <remarks>
        /// Send this event when the player spends a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource spend rates.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource spent.</param>
        /// <param name="amount">The number of consumable resources spent.</param>
        /// <param name="balance">The new total balance, minus the consumable resource spent.</param>
        /// <param name="itemPurchased">The item purchased with the consumable resource (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult ConsumableSpent (string name, float amount, float balance, string itemPurchased = null, IDictionary<string, object> eventData = null)
        {
            return ConsumableSpentPayload.CreateInstance(name, amount, balance, itemPurchased, eventData).Send();
        }

#if UNITY_5_5_OR_NEWER
        /// <summary>
        /// Sends a <c>consumable_spent</c> event using the ConsumableSpentPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player spends a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource spend rates.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource spent.</param>
        /// <param name="amount">The number of consumable resources spent.</param>
        /// <param name="balance">The new total balance, minus the consumable resource spent.</param>
        /// <param name="itemPurchased">The item purchased with the consumable resource (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult ConsumableSpent (string name, decimal amount, decimal balance, string itemPurchased = null, IDictionary<string, object> eventData = null)
        {
            return ConsumableSpentPayload.CreateInstance(name, amount, balance, itemPurchased, eventData).Send();
        }
#else
        /// <summary>
        /// Sends a <c>consumable_spent</c> event using the ConsumableSpentPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player spends a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource spend rates.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource spent.</param>
        /// <param name="amount">The number of consumable resources spent.</param>
        /// <param name="balance">The new total balance, minus the consumable resource spent.</param>
        public static AnalyticsResult ConsumableSpent (string name, decimal amount, decimal balance)
        {
            return ConsumableSpentPayload.CreateInstance(name, amount, balance, null, null).Send();
        }

        /// <summary>
        /// Sends a <c>consumable_spent</c> event using the ConsumableSpentPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player spends a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource spend rates.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource spent.</param>
        /// <param name="amount">The number of consumable resources spent.</param>
        /// <param name="balance">The new total balance, minus the consumable resource spent.</param>
        /// <param name="itemPurchased">The item purchased with the consumable resource.</param>
        public static AnalyticsResult ConsumableSpent (string name, decimal amount, decimal balance, string itemPurchased)
        {
            return ConsumableSpentPayload.CreateInstance(name, amount, balance, itemPurchased, null).Send();
        }

        /// <summary>
        /// Sends a <c>consumable_spent</c> event using the ConsumableSpentPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player spends a consumable resource.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into consumable resource spend rates.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the consumable resource spent.</param>
        /// <param name="amount">The number of consumable resources spent.</param>
        /// <param name="balance">The new total balance, minus the consumable resource spent.</param>
        /// <param name="itemPurchased">The item purchased with the consumable resource.</param>
        /// <param name="eventData">Custom event data.</param>
        public static AnalyticsResult ConsumableSpent (string name, decimal amount, decimal balance, string itemPurchased, IDictionary<string, object> eventData)
        {
            return ConsumableSpentPayload.CreateInstance(name, amount, balance, itemPurchased, eventData).Send();
        }
#endif

#if UNITY_5_5_OR_NEWER
        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased (optional).</param>
        /// <param name="purchaseName">The name of the store item purchased (optional).</param>
        /// <param name="purchaseQty">The quantity of store items purchased (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, AcquisitionSource source, int amount, int balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased (optional).</param>
        /// <param name="purchaseName">The name of the store item purchased (optional).</param>
        /// <param name="purchaseQty">The quantity of store items purchased (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, string source, int amount, int balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, eventData).Send();
        }
#else
        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, AcquisitionSource source, int amount, int balance)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, null, null, 1, null).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, AcquisitionSource source, int amount, int balance, string purchaseId)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, null, 1, null).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        /// <param name="purchaseName">The name of the store item purchased.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, AcquisitionSource source, int amount, int balance, string purchaseId, string purchaseName)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, 1, null).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        /// <param name="purchaseName">The name of the store item purchased.</param>
        /// <param name="purchaseQty">The quantity of store items purchased.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, AcquisitionSource source, int amount, int balance, string purchaseId, string purchaseName, int purchaseQty)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, null).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        /// <param name="purchaseName">The name of the store item purchased.</param>
        /// <param name="purchaseQty">The quantity of store items purchased.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, AcquisitionSource source, int amount, int balance, string purchaseId, string purchaseName, int purchaseQty, IDictionary<string, object> eventData)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, eventData).Send();
        }



        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, string source, int amount, int balance)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, null, null, 1, null).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, string source, int amount, int balance, string purchaseId)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, null, 1, null).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        /// <param name="purchaseName">The name of the store item purchased.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, string source, int amount, int balance, string purchaseId, string purchaseName)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, 1, null).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        /// <param name="purchaseName">The name of the store item purchased.</param>
        /// <param name="purchaseQty">The quantity of store items purchased.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, string source, int amount, int balance, string purchaseId, string purchaseName, int purchaseQty)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, null).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>int</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        /// <param name="purchaseName">The name of the store item purchased.</param>
        /// <param name="purchaseQty">The quantity of store items purchased.</param>
        /// <param name="eventData">Custom event data.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, string source, int amount, int balance, string purchaseId, string purchaseName, int purchaseQty, IDictionary<string, object> eventData)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, eventData).Send();
        }
#endif

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>float</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased (optional).</param>
        /// <param name="purchaseName">The name of the store item purchased (optional).</param>
        /// <param name="purchaseQty">The quantity of store items purchased (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, AcquisitionSource source, float amount, float balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>float</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased (optional).</param>
        /// <param name="purchaseName">The name of the store item purchased (optional).</param>
        /// <param name="purchaseQty">The quantity of store items purchased (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, string source, float amount, float balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, eventData).Send();
        }

#if UNITY_5_5_OR_NEWER
        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased (optional).</param>
        /// <param name="purchaseName">The name of the store item purchased (optional).</param>
        /// <param name="purchaseQty">The quantity of store items purchased (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, AcquisitionSource source, decimal amount, decimal balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased (optional).</param>
        /// <param name="purchaseName">The name of the store item purchased (optional).</param>
        /// <param name="purchaseQty">The quantity of store items purchased (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, string source, decimal amount, decimal balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, eventData).Send();
        }
#else
        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, AcquisitionSource source, decimal amount, decimal balance)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, null, null, 1, null).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, AcquisitionSource source, decimal amount, decimal balance, string purchaseId)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, null, 1, null).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        /// <param name="purchaseName">The name of the store item purchased.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, AcquisitionSource source, decimal amount, decimal balance, string purchaseId, string purchaseName)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, 1, null).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        /// <param name="purchaseName">The name of the store item purchased.</param>
        /// <param name="purchaseQty">The quantity of store items purchased.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, AcquisitionSource source, decimal amount, decimal balance, string purchaseId, string purchaseName, int purchaseQty)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, null).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        /// <param name="purchaseName">The name of the store item purchased.</param>
        /// <param name="purchaseQty">The quantity of store items purchased.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, AcquisitionSource source, decimal amount, decimal balance, string purchaseId, string purchaseName, int purchaseQty, IDictionary<string, object> eventData)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, eventData).Send();
        }



        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, string source, decimal amount, decimal balance)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, null, null, 1, null).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, string source, decimal amount, decimal balance, string purchaseId)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, null, 1, null).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        /// <param name="purchaseName">The name of the store item purchased.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, string source, decimal amount, decimal balance, string purchaseId, string purchaseName)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, 1, null).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        /// <param name="purchaseName">The name of the store item purchased.</param>
        /// <param name="purchaseQty">The quantity of store items purchased.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, string source, decimal amount, decimal balance, string purchaseId, string purchaseName, int purchaseQty)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, null).Send();
        }

        /// <summary>
        /// Sends a <c>currency_acquired</c> event using the CurrencyAcquiredPayload with <c>decimal</c> values.
        /// <remarks>
        /// Send this event when the player purchases or earns in-game currency.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        /// <param name="purchaseName">The name of the store item purchased.</param>
        /// <param name="purchaseQty">The quantity of store items purchased.</param>
        /// <param name="eventData">Custom event data.</param>
        public static AnalyticsResult CurrencyAcquired (string name, AcquisitionType type, string source, decimal amount, decimal balance, string purchaseId, string purchaseName, int purchaseQty, IDictionary<string, object> eventData)
        {
            return CurrencyAcquiredPayload.CreateInstance(name, type, source, amount, balance, purchaseId, purchaseName, purchaseQty, eventData).Send();
        }
#endif


        /// <summary>
        /// Sends a <c>cutscene_skip</c> event using the CutsceneSkipPayload.
        /// <remarks>
        /// Send this event when the player opts to skip a cutscene or cinematic screen.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into how cutscenes may affect player engagement.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="cutsceneName">The cutscene name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult CutsceneSkip (string cutsceneName, IDictionary<string, object> eventData = null)
        {
            return CutsceneSkipPayload.CreateInstance(cutsceneName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>game_over</c> event using the GameOverPayload.
        /// <remarks>
        /// Send this event when gameplay ends.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight to duration of gameplay and progression rates among players. 
        /// The <c>game_over</c> event should be preceded by a <see cref="GameStartPayload"><c>game_start</c></see> event, 
        /// sent using AnalyticsEvent.GameStart or GameStartPayload.Send.
        /// This event is intended for use with games that do not utilize a traditional level structure, or for games that advance through 
        /// multiple levels over the course of a single gameplay while starting from a common entry level, such as 0 or 1.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult GameOver (string levelName = null, IDictionary<string, object> eventData = null)
        {
            return GameOverPayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>game_over</c> event using the GameOverPayload.
        /// <remarks>
        /// Send this event when gameplay ends.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight to duration of gameplay and progression rates among players. 
        /// The <c>game_start</c> event should precede the <see cref="GameOverPayload"><c>game_over</c></see> event, 
        /// sent using AnalyticsEvent.GameOver or GameOverPayload.Send.
        /// This event is intended for use with games that do not utilize a traditional level structure, or for games that advance through 
        /// multiple levels over the course of a single gameplay while starting from a common entry level, such as 0 or 1.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult GameOver (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return GameOverPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>game_start</c> event using the GameStartPayload.
        /// <remarks>
        /// Send this event when gameplay starts.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight to duration of gameplay and progression rates among players. 
        /// The <c>game_start</c> event should precede the <see cref="GameOverPayload"><c>game_over</c></see> event, 
        /// sent using AnalyticsEvent.GameOver or GameOverPayload.Send.
        /// This event is intended for use with games that do not utilize a traditional level structure, or for games that advance through 
        /// multiple levels over the course of a single gameplay while starting from a common entry level, such as 0 or 1.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult GameStart (IDictionary<string, object> eventData = null)
        {
            return AnalyticsEventPayload.CreateInstance<GameStartPayload>(eventData).Send();
        }

        /// <summary>
        /// Sends an <c>item_acquired</c> event using the ItemAcquiredPayload.
        /// <remarks>
        /// Send this event when the player purchases or earns a non-consumable item.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into item accumulation rates between players, 
        /// and the effect non-consumable items might have on in-game economies.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the item acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the item was acquired.</param>
        /// <param name="resourceType">The resource used to acquire the item (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult ItemAcquired (string name, AcquisitionType type, AcquisitionSource source, string resourceType = null, IDictionary<string, object> eventData = null)
        {
            return ItemAcquiredPayload.CreateInstance(name, type, source, resourceType, eventData).Send();
        }

        /// <summary>
        /// Sends an <c>item_acquired</c> event using the ItemAcquiredPayload.
        /// <remarks>
        /// Send this event when the player purchases or earns a non-consumable item.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into item accumulation rates between players, 
        /// and the effect non-consumable items might have on in-game economies.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="name">The name of the item acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the item was acquired.</param>
        /// <param name="resourceType">The type of resource used to acquire the item (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult ItemAcquired (string name, AcquisitionType type, string source, string resourceType = null, IDictionary<string, object> eventData = null)
        {
            return ItemAcquiredPayload.CreateInstance(name, type, source, resourceType, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_complete</c> event using the LevelCompletePayload.
        /// <remarks>
        /// Send this event when the player sucessfully completes a level.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into level progression rates among players.
        /// The <c>level_complete</c> event should be preceded by a <see cref="LevelStartPayload"><c>level_start</c></see> event, 
        /// sent using AnalyticsEvent.LevelStart or LevelStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelComplete (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelCompletePayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_complete</c> event using the LevelCompletePayload.
        /// <remarks>
        /// Send this event when the player sucessfully completes a level.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into level progression rates among players.
        /// The <c>level_complete</c> event should be preceded by a <see cref="LevelStartPayload"><c>level_start</c></see> event, 
        /// sent using AnalyticsEvent.LevelStart or LevelStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelComplete (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelCompletePayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_fail</c> event using the LevelFailPayload.
        /// <remarks>
        /// Send this event when the player fails to successfully complete a level.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into level progression rates among players, and potentially help predict when players may churn.
        /// The <c>level_fail</c> event should be preceded by a <see cref="LevelStartPayload"><c>level_start</c></see> event, 
        /// sent using AnalyticsEvent.LevelStart or LevelStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelFail (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelFailPayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_fail</c> event using the LevelFailPayload.
        /// <remarks>
        /// Send this event when the player fails to successfully complete a level.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into level progression rates among players, and potentially help predict when players may churn.
        /// The <c>level_fail</c> event should be preceded by a <see cref="LevelStartPayload"><c>level_start</c></see> event, 
        /// sent using AnalyticsEvent.LevelStart or LevelStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelFail (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelFailPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_quit</c> event using the LevelQuitPayload.
        /// <remarks>
        /// Send this event when the player opts to quit from a level before completing it.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into gameplay attrition rates by level, and potentially help predict when players may churn.
        /// The <c>level_quit</c> event should be preceded by a <see cref="LevelStartPayload"><c>level_start</c></see> event, 
        /// sent using AnalyticsEvent.LevelStart or LevelStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelQuit (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelQuitPayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_quit</c> event using the LevelQuitPayload.
        /// <remarks>
        /// Send this event when the player opts to quit from a level before completing it.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into gameplay attrition rates by level, and potentially help predict when players may churn.
        /// The <c>level_quit</c> event should be preceded by a <see cref="LevelStartPayload"><c>level_start</c></see> event, 
        /// sent using AnalyticsEvent.LevelStart or LevelStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelQuit (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelQuitPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_skip</c> event using the LevelSkipPayload.
        /// <remarks>
        /// Send this event when the player opts to skip a level in order to contiue onto the next without having to completing it first.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into level progression rates among players, and potentially help predict when players may churn.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelSkip (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelSkipPayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_skip</c> event using the LevelSkipPayload.
        /// <remarks>
        /// Send this event when the player opts to skip a level in order to contiue onto the next without having to completing it.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into level progression rates among players, and potentially help predict when players may churn.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelSkip (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelSkipPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_start</c> event using the LevelStartPayload.
        /// <remarks>
        /// Send this event when the player enters into a level.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into level progression rates among players.
        /// The <c>level_start</c> event should precede most other level specific events, including <see cref="LevelCompletePayload">
        /// <c>level_complete</c></see>, <see cref="LevelFailPayload"><c>level_fail</c></see>, and <see cref="LevelQuitPayload"><c>level_quit</c></see>. 
        /// The <see cref="LevelSkipPayload"><c>level_skip</c></see> event does not need to be preceded by <c>level_start</c> 
        /// if the level is skipped without having to enter into the level.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelStart (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelStartPayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_start</c> event using the LevelStartPayload.
        /// <remarks>
        /// Send this event when the player enters into a level.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into level progression rates among players.
        /// The <c>level_start</c> event should precede most other level specific events, including <see cref="LevelCompletePayload">
        /// <c>level_complete</c></see>, <see cref="LevelFailPayload"><c>level_fail</c></see>, and <see cref="LevelQuitPayload"><c>level_quit</c></see>. 
        /// The <see cref="LevelSkipPayload"><c>level_skip</c></see> event does not need to be preceded by <c>level_start</c> 
        /// if the level is skipped without having to enter into the level.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelStart (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelStartPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_up</c> event using the LevelUpPayload.
        /// <remarks>
        /// Send this event when the player rank increases, or when the accumulated experience reaches the next level tier.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into gameplay progression rates among players.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="oldLevelName">The old rank or level name.</param>
        /// <param name="newLevelName">The new rank or level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelUp (string oldLevelName, string newLevelName, IDictionary<string, object> eventData = null)
        {
            return LevelUpPayload.CreateInstance(oldLevelName, newLevelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_up</c> event using the LevelUpPayload.
        /// <remarks>
        /// Send this event when the player rank increases, or when the accumulated experience reaches the next level tier.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into gameplay progression rates among players.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="oldLevelIndex">The level index or number.</param>
        /// <param name="newLevelIndex">The level index or number.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelUp (int oldLevelIndex, int newLevelIndex, IDictionary<string, object> eventData = null)
        {
            return LevelUpPayload.CreateInstance(oldLevelIndex, newLevelIndex, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_up</c> event using the LevelUpPayload.
        /// <remarks>
        /// Send this event when the player rank increases, or when the accumulated experience reaches the next level tier.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into gameplay progression rates among players.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="oldLevelIndex">The level index or number.</param>
        /// <param name="newLevelIndex">The level index or number.</param>
        /// <param name="oldLevelName">The old rank or level name.</param>
        /// <param name="newLevelName">The new rank or level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelUp (int oldLevelIndex, int newLevelIndex, string oldLevelName, string newLevelName, IDictionary<string, object> eventData = null)
        {
            return LevelUpPayload.CreateInstance(oldLevelIndex, newLevelIndex, oldLevelName, newLevelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>post_ad_action</c> event using the PostAdActionPayload.
        /// <remarks>
        /// Send this event with the first action a player takes after an ad is shown, or after an ad is offered but not shown. 
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into how players might be responding to ads depending on placement. 
        /// A lack of <c>post_ad_action</c> events may help in identifying player churn.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider.</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult PostAdAction (bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return PostAdActionPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>post_ad_action</c> event using the PostAdActionPayload.
        /// <remarks>
        /// Send this event with the first action a player takes after an ad is shown, or after an ad is offered but not shown. 
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into how players might be responding to ads depending on placement. 
        /// A lack of <c>post_ad_action</c> events may help in identifying player churn.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider.</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult PostAdAction (bool rewarded, AdvertisingNetwork advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return PostAdActionPayload.CreateInstance(rewarded, advertisingNetwork, placementId, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>post_install_action</c> event using the PostInstallActionPayload.
        /// <remarks>
        /// Send this event with the first action the user takes after install. 
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into the amount of time it takes for players to engage with your game after install, 
        /// or if there is any interaction at all after install.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="actionId">The action ID or name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult PostInstallAction (string actionId = null, IDictionary<string, object> eventData = null)
        {
            return PostInstallActionPayload.CreateInstance(actionId, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>push_notification_click</c> event using the PushNotificationClickPayload.
        /// <remarks>
        /// Send this event when the player clicks on a push notification.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into the level of player engagement with push notificaitons.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="messageId">The message name or ID.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult PushNotificationClick (string messageId, IDictionary<string, object> eventData = null)
        {
            return PushNotificationClickPayload.CreateInstance(messageId, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>push_notification_enable</c> event using the PushNotificationEnablePayload.
        /// <remarks>
        /// Send this event when the player enables or grants permission for the game to use push notifications.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into player acceptance rates for push notificaitons.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult PushNotificationEnable (IDictionary<string, object> eventData = null)
        {
            return AnalyticsEventPayload.CreateInstance<PushNotificationEnablePayload>(eventData).Send();
        }

        /// <summary>
        /// Sends a <c>screen_visit</c> event using the ScreenVisitPayload.
        /// <remarks>
        /// Send this event when the player opens a menu or visits a screen in the game.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into navigational flows, and may help predict when players may churn.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="screenName">The name of the screen or type of screen visited.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult ScreenVisit (ScreenName screenName, IDictionary<string, object> eventData = null)
        {
            return ScreenVisitPayload.CreateInstance(screenName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>screen_visit</c> event using the ScreenVisitPayload.
        /// <remarks>
        /// Send this event when the player opens a menu or visits a screen in the game.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into navigational flows, and may help predict when players may churn.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="screenName">The name of the screen or type of screen visited.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult ScreenVisit (string screenName, IDictionary<string, object> eventData = null)
        {
            return ScreenVisitPayload.CreateInstance(screenName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>social_share</c> event using the SocialSharePayload.
        /// <remarks>
        /// Send this event when the player posts a message about the game through social media.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into social engagement trends.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="shareType">The mode of sharing, or media type used in the social engagment.</param>
        /// <param name="socialNetwork">The network used in the social engagement.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult SocialShare (ShareType shareType, SocialNetwork socialNetwork, IDictionary<string, object> eventData = null)
        {
            return SocialSharePayload.CreateInstance(shareType, socialNetwork, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>social_share</c> event using the SocialSharePayload.
        /// <remarks>
        /// Send this event when the player posts a message about the game through social media.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into social engagement trends.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="shareType">The mode of sharing, or media type used in the social engagment.</param>
        /// <param name="socialNetwork">The network used in the social engagement.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult SocialShare (ShareType shareType, string socialNetwork, IDictionary<string, object> eventData = null)
        {
            return SocialSharePayload.CreateInstance(shareType, socialNetwork, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>social_share</c> event using the SocialSharePayload.
        /// <remarks>
        /// Send this event when the player posts a message about the game through social media.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into social engagement trends.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="shareType">The mode of sharing, or media type used in the social engagment.</param>
        /// <param name="socialNetwork">The network used in the social engagement.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult SocialShare (string shareType, SocialNetwork socialNetwork, IDictionary<string, object> eventData = null)
        {
            return SocialSharePayload.CreateInstance(shareType, socialNetwork, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>social_share</c> event using the SocialSharePayload.
        /// <remarks>
        /// Send this event when the player posts a message about the game through social media.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into social engagement trends.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="shareType">The mode of sharing, or media type used in the social engagment.</param>
        /// <param name="socialNetwork">The network used in the social engagement.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult SocialShare (string shareType, string socialNetwork, IDictionary<string, object> eventData = null)
        {
            return SocialSharePayload.CreateInstance(shareType, socialNetwork, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>store_item_click</c> event using the StoreItemClickPayload.
        /// <remarks>
        /// Send this event when the player clicks on an item in the store.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into player engagment with store inventory.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="storeType">Set to StoreType.Premium if purchases use real-world money; otherwise, StoreType.Soft</param>
        /// <param name="itemId">The item ID.</param>
        /// <param name="itemName">The item name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult StoreItemClick (StoreType storeType, string itemId, string itemName = null, Dictionary<string, object> eventData = null)
        {
            return StoreItemClickPayload.CreateInstance(storeType, itemId, itemName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>store_opened</c> event using the StoreOpenedPayload.
        /// <remarks>
        /// Send this event when the player opens a store in game.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into potential player engagment with store inventory.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="storeType">Set to StoreType.Premium if purchases use real-world money; otherwise, StoreType.Soft</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult StoreOpened (StoreType storeType, IDictionary<string, object> eventData = null)
        {
            return StoreOpenedPayload.CreateInstance(storeType, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>tutorial_complete</c> event using the TutorialCompletePayload.
        /// <remarks>
        /// Send this event when the player completes a tutorial.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into tutorial completion rates among players.
        /// The <c>tutorial_complete</c> event should be preceded by an <see cref="TutorialStartPayload"><c>tutorial_start</c></see> event,
        /// sent using AnalyticsEvent.TutorialStart or TutorialStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="tutorialId">The tutorial name or ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult TutorialComplete (string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return TutorialCompletePayload.CreateInstance(tutorialId, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>tutorial_skip</c> event using the TutorialSkipPayload.
        /// <remarks>
        /// Send this event when the player opts to skip a tutorial.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into tutorial progression rates among players.
        /// The <c>tutorial_complete</c> event should be preceded by an <see cref="TutorialStartPayload"><c>tutorial_start</c></see> event,
        /// sent using AnalyticsEvent.TutorialStart or TutorialStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="tutorialId">The tutorial name or ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult TutorialSkip (string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return TutorialSkipPayload.CreateInstance(tutorialId, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>tutorial_start</c> event using the TutorialStartPayload.
        /// <remarks>
        /// Send this event when the player starts a tutorial.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into tutorial progression rates among players.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="tutorialId">The tutorial name or ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult TutorialStart (string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return TutorialStartPayload.CreateInstance(tutorialId, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>tutorial_step</c> event using the TutorialStepPayload.
        /// <remarks>
        /// Send this event when the player completes a step or stage in a multi-part tutorial.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into tutorial progression rates among players.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="stepIndex">The step or stage completed in a multi-part tutorial.</param>
        /// <param name="tutorialId">The tutorial name or ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult TutorialStep (int stepIndex, string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            return TutorialStepPayload.CreateInstance(stepIndex, tutorialId, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>user_signup</c> event using the UserSignupPayload.
        /// <remarks>
        /// Send this event when the player registers for an account or logs in for the first time in game.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into login acceptance rates among players.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="authorizationNetwork">The authorization network or login service provider.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult UserSignup (string authorizationNetwork, IDictionary<string, object> eventData = null)
        {
            return UserSignupPayload.CreateInstance(authorizationNetwork, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>user_signup</c> event using the UserSignupPayload.
        /// <remarks>
        /// Send this event when the player registers for an account or logs in for the first time in game.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can provide insight into login acceptance rates among players.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="authorizationNetwork">The authorization or login service provider.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult UserSignup (AuthorizationNetwork authorizationNetwork, IDictionary<string, object> eventData = null)
        {
            return UserSignupPayload.CreateInstance(authorizationNetwork, eventData).Send();
        }
    }
}
