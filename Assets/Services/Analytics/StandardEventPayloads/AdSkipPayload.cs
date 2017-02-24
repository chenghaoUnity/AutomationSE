using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Ad skip payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "AdSkipPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Ad Skip")]
    public class AdSkipPayload : AdPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "ad_skip";

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
        public static AdSkipPayload CreateInstance(bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdSkipPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="rewarded">If set to <c>true</c> rewarded.</param>
        /// <param name="advertisingNetwork">Advertising network.</param>
        /// <param name="placementId">Placement identifier.</param>
        /// <param name="eventData">Event data.</param>
        public static AdSkipPayload CreateInstance(bool rewarded, AdvertisingNetwork advertisingNetwork = AdvertisingNetwork.None, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdSkipPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }
    }
}
