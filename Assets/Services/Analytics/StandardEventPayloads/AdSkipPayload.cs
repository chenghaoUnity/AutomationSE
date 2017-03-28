using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Ad Skip standard event payload (<c>ad_skip</c>).
    /// <remarks>
    /// Send this event when the player opts to skip a video ad during video playback.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into video ad completion rates with regards to the placement in game.
    /// The <c>ad_skip</c> event should be preceded by an <see cref="AdStartPayload"><c>ad_start</c></see> event,
    /// sent using AnalyticsEvent.AdStart or AdStartPayload.Send.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "AdSkipPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Ad Skip")]
    public class AdSkipPayload : AdPayload
    {
        /// <summary>
        /// The name of the standard event (<c>ad_skip</c>).
        /// </summary>
        public static readonly string standardEventName = "ad_skip";

        /// <summary>
        /// Gets the name of the event (<c>ad_skip</c>).
        /// </summary>
        /// <value>The name of the event (<c>ad_skip</c>).</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Creates a new instance of AdSkipPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="AdSkipPayload"/>.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider (optional).</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AdSkipPayload CreateInstance(bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdSkipPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }

        /// <summary>
        /// Creates a new instance of AdSkipPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="AdSkipPayload"/>.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider.</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AdSkipPayload CreateInstance(bool rewarded, AdvertisingNetwork advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<AdSkipPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }
    }
}
