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
    public static partial class AnalyticsEvent
    {
        static readonly string k_SdkVersion = "0.1.3";

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
    }
}
