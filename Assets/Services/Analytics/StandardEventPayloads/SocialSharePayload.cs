using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Social Share standard event payload (<c>social_share</c>).
    /// <remarks>
    /// Send this event when the player posts a message about the game through social media.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into social engagement trends.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "SocialSharePayload.asset", menuName = "Analytics Events/User Engagement and Social/Social Share")]
    public class SocialSharePayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "social_share";

        static readonly string k_ParamKey_ShareType = "share_type";
        static readonly string k_ParamKey_SocialNetwork = "social_network";

        /// <summary>
        /// Gets the standard event name.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the mode of sharing, or media type used in the social engagment.
        /// </summary>
        /// <value>The mode of sharing, or media type shared.</value>
        public string shareType
        {
            get { return GetParam<string>(k_ParamKey_ShareType); }
            set { SetParam(k_ParamKey_ShareType, value); }
        }

        /// <summary>
        /// Gets or sets the network used in the social engagement.
        /// </summary>
        /// <value>The social network.</value>
        public string socialNetwork
        {
            get { return GetParam<string>(k_ParamKey_SocialNetwork); }
            set { SetParam(k_ParamKey_SocialNetwork, value); }
        }

        /// <summary>
        /// Sets the mode of sharing, or media type used in the social engagment.
        /// </summary>
        /// <param name="shareType">The mode of sharing, or media type shared.</param>
        public void SetShareType (ShareType shareType)
        {
            SetParam(k_ParamKey_ShareType, GetStandardParamValue(shareType));
        }

        /// <summary>
        /// Sets the network used in the social engagement.
        /// </summary>
        /// <param name="socialNetwork">The social network.</param>
        public void SetSocialNetwork (SocialNetwork socialNetwork)
        {
            SetParam(k_ParamKey_SocialNetwork, GetStandardParamValue(socialNetwork));
        }

        /// <summary>
        /// Verifies that any required event data parameters are set.
        /// <remarks>
        /// The <c>share_type</c> and <c>social_network</c> parameters must be set for the payload to be valid.
        /// </remarks>
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateAllDataKeysExist(k_ParamKey_ShareType, k_ParamKey_SocialNetwork);
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>share_type</c> and <c>social_network</c> parameter values must be of type <c>string</c> to be valid.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if ((key == k_ParamKey_ShareType && !(value is ShareType)) || (key == k_ParamKey_SocialNetwork && !(value is SocialNetwork)))
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates a new instance of SocialSharePayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="SocialSharePayload"/>.</returns>
        /// <param name="shareType">The mode of sharing, or media type used in the social engagment.</param>
        /// <param name="socialNetwork">The network used in the social engagement.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static SocialSharePayload CreateInstance (ShareType shareType, SocialNetwork socialNetwork, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(GetStandardParamValue(shareType), GetStandardParamValue(socialNetwork), eventData);
        }

        /// <summary>
        /// Creates a new instance of SocialSharePayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="SocialSharePayload"/>.</returns>
        /// <param name="shareType">The mode of sharing, or media type used in the social engagment.</param>
        /// <param name="socialNetwork">The network used in the social engagement.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static SocialSharePayload CreateInstance (ShareType shareType, string socialNetwork, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(GetStandardParamValue(shareType), socialNetwork, eventData);
        }

        /// <summary>
        /// Creates a new instance of SocialSharePayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="SocialSharePayload"/>.</returns>
        /// <param name="shareType">The mode of sharing, or media type used in the social engagment.</param>
        /// <param name="socialNetwork">The network used in the social engagement.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static SocialSharePayload CreateInstance (string shareType, SocialNetwork socialNetwork, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(shareType, GetStandardParamValue(socialNetwork), eventData);
        }

        /// <summary>
        /// Creates a new instance of SocialSharePayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="SocialSharePayload"/>.</returns>
        /// <param name="shareType">The mode of sharing, or media type used in the social engagment.</param>
        /// <param name="socialNetwork">The network used in the social engagement.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static SocialSharePayload CreateInstance (string shareType, string socialNetwork, IDictionary<string, object> eventData = null)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_ShareType, shareType);
            eventData.Add(k_ParamKey_SocialNetwork, socialNetwork);

            return CreateInstance<SocialSharePayload>(eventData);
        }
    }
}
