using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Post Ad Action standard event payload (<c>post_ad_action</c>).
    /// <remarks>
    /// Send this event with the first action a player takes after an ad is shown, or after an ad is offered but not shown. 
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can help provide insight into how players might be responding to ads depending on placement. 
    /// A lack of <c>post_ad_action</c> events may help in identifying player churn.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "PostAdActionPayload.asset", menuName = "Analytics Payloads/Monetization/Post Ad Action")]
    public class PostAdActionPayload : AdPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "post_ad_action";

        /// <summary>
        /// Gets the name of the standard event.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Creates a new instance of PostAdActionPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="PostAdActionPayload"/>.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider (optional).</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static PostAdActionPayload CreateInstance(bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<PostAdActionPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }

        /// <summary>
        /// Creates a new instance of PostAdActionPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="PostAdActionPayload"/>.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider.</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static PostAdActionPayload CreateInstance(bool rewarded, AdvertisingNetwork advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<PostAdActionPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }
    }
}
