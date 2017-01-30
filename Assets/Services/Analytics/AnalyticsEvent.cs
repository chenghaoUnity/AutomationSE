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
            { AchievementSharedPayload.standardEventName,           typeof(AchievementSharedPayload) },
            { AchievementUnlockedPayload.standardEventName,         typeof(AchievementUnlockedPayload) },
            { AdCompletePayload.standardEventName,                  typeof(AdCompletePayload) },
            { AdOfferPayload.standardEventName,                     typeof(AdOfferPayload) },
            { AdStartPayload.standardEventName,                     typeof(AdStartPayload) },
            { ChatMessageSentPayload.standardEventName,             typeof(ChatMessageSentPayload) },
            { CurrencyPurchasedPayload.standardEventName,           typeof(CurrencyPurchasedPayload) },
            { CurrencySpentPayload.standardEventName,               typeof(CurrencySpentPayload) },
            { CutsceneSkipPayload.standardEventName,                typeof(CutsceneSkipPayload) },
            { GameOverPayload.standardEventName,                    typeof(GameOverPayload) },
            { GameStartPayload.standardEventName,                   typeof(GameStartPayload) },
            { LevelCompletePayload.standardEventName,               typeof(LevelCompletePayload) },
            { LevelFailPayload.standardEventName,                   typeof(LevelFailPayload) },
            { LevelQuitPayload.standardEventName,                   typeof(LevelQuitPayload) },
            { LevelStartPayload.standardEventName,                  typeof(LevelStartPayload) },
            { LevelUpPayload.standardEventName,                     typeof(LevelUpPayload) },
            { MainMenuPayload.standardEventName,                    typeof(MainMenuPayload) },
            { PostAdActionPayload.standardEventName,                typeof(PostAdActionPayload) },
            { PostInstallActionPayload.standardEventName,           typeof(PostInstallActionPayload) },
            { PushNotificationClickedPayload.standardEventName,     typeof(PushNotificationClickedPayload) },
            { PushNotificationEnabledPayload.standardEventName,     typeof(PushNotificationEnabledPayload) },
            { SocialSharePayload.standardEventName,                 typeof(SocialSharePayload) },
            { StateNodePayload.standardEventName,                   typeof(StateNodePayload) },
            { StoreItemClickedPayload.standardEventName,            typeof(StoreItemClickedPayload) },
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
    }
}
