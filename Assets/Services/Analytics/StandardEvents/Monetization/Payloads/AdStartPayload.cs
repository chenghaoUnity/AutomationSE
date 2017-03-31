using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Ad Start standard event payload (<c>ad_start</c>).
    /// <remarks>
    /// Send this event when an ad is shown.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into how players are actually choosing to start watching an ad.
    /// The <c>ad_start</c> event should precede <see cref="AdCompletePayload"><c>ad_complete</c></see>, 
    /// <see cref="AdSkipPayload"><c>ad_skip</c></see>, and <see cref="PostAdActionPayload"><c>post_ad_action</c></see> events.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "AdStartPayload.asset", menuName = "Analytics Payloads/Monetization/Ad Start")]
    public class AdStartPayload : AdPayload
    {
        /// <summary>
        /// The name of the standard event (<c>ad_start</c>).
        /// </summary>
        public static readonly string standardEventName = "ad_start";

        /// <summary>
        /// Gets the name of the event (<c>ad_start</c>).
        /// </summary>
        /// <value>The name of the event (<c>ad_start</c>).</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Creates a new instance of AdStartPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="AdStartPayload"/>.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider (optional).</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AdStartPayload CreateInstance(bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdStartPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }

        /// <summary>
        /// Creates a new instance of AdStartPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="AdStartPayload"/>.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider.</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AdStartPayload CreateInstance(bool rewarded, AdvertisingNetwork advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdStartPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }
    }
}
