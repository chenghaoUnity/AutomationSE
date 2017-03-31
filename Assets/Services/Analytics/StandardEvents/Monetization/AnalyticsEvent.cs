using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    public static partial class AnalyticsEvent // Monetization Events
    {
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
#endif

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
#endif

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
    }
}
