using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    public static partial class AnalyticsEvent
    {
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
    }
}