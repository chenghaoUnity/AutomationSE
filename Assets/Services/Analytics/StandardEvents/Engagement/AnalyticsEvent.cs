using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    public static partial class AnalyticsEvent // Engagement Events
    {
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
