using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Post ad action payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "PostAdActionPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Post Ad Action")]
    public class PostAdActionPayload : AdPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "post_ad_action";

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
        public static PostAdActionPayload CreateInstance(bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<PostAdActionPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="rewarded">If set to <c>true</c> rewarded.</param>
        /// <param name="advertisingNetwork">Advertising network.</param>
        /// <param name="placementId">Placement identifier.</param>
        /// <param name="eventData">Event data.</param>
        public static PostAdActionPayload CreateInstance(bool rewarded, AdvertisingNetwork advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance<PostAdActionPayload>(rewarded, advertisingNetwork, placementId, eventData);
        }
    }
}
