using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Ad Complete standard event payload (<c>ad_complete</c>).
    /// <remarks>
    /// Send this event when an ad is successfully viewed and not skipped.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into ad completion rates among players, and may indicate the effectiveness of ads by placement in game.
    /// The <c>ad_complete</c> event should be preceded by an <see cref="AdStartPayload"><c>ad_start</c></see> event,
    /// sent using AnalyticsEvent.AdStart or AdStartPayload.Send.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "AdCompletePayload.asset", menuName = "Analytics Payloads/Monetization/Ad Complete")]
    public class AdCompletePayload : AdPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "ad_complete";

        /// <summary>
        /// Gets the name of the standard event.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Creates a new instance of AdCompletePayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="AdCompletePayload"/> .</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider (optional).</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AdCompletePayload CreateInstance (bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdCompletePayload>(rewarded, advertisingNetwork, placementId, eventData);
        }

        /// <summary>
        /// Creates a new instance of AdCompletePayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="AdCompletePayload"/> .</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider.</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AdCompletePayload CreateInstance(bool rewarded, AdvertisingNetwork advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdCompletePayload>(rewarded, advertisingNetwork, placementId, eventData);
        }
    }
}
