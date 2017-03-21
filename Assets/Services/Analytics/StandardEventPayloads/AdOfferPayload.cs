using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Ad Offer standard event payload (<c>ad_offer</c>).
    /// <remarks>
    /// Send this event when the player is offered the opportunity to view an ad.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into how players respond to ad offers with regards to the placement in game. 
    /// Offers are typically provided prior to showing a rewarded ad, where players are granted a reward for viewing an ad without skipping it.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "AdOfferPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Ad Offer")]
    public class AdOfferPayload : AdPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "ad_offer";

        /// <summary>
        /// Gets the name of the event (<c>ad_offer</c>).
        /// </summary>
        /// <value>The name of the event (<c>ad_offer</c>).</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Creates a new instance of AdOfferPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="AdOfferPayload"/>.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider (optional).</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AdOfferPayload CreateInstance(bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdOfferPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }

        /// <summary>
        /// Creates a new instance of AdOfferPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="AdOfferPayload"/>.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider.</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AdOfferPayload CreateInstance(bool rewarded, AdvertisingNetwork advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdOfferPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }
    }
}
