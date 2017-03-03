using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Ad offer payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "AdOfferPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Ad Offer")]
    public class AdOfferPayload : AdPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "ad_offer";

        /// <summary>
        /// Gets the name of the event.
        /// </summary>
        /// <value>The name of the event.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="rewarded">If set to <c>true</c> rewarded.</param>
        /// <param name="advertisingNetwork">Advertising network.</param>
        /// <param name="placementId">Placement identifier.</param>
        /// <param name="eventData">Event data.</param>
        public static AdOfferPayload CreateInstance(bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdOfferPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="rewarded">If set to <c>true</c> rewarded.</param>
        /// <param name="advertisingNetwork">Advertising network.</param>
        /// <param name="placementId">Placement identifier.</param>
        /// <param name="eventData">Event data.</param>
        public static AdOfferPayload CreateInstance(bool rewarded, AdvertisingNetwork advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdOfferPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }
    }
}
