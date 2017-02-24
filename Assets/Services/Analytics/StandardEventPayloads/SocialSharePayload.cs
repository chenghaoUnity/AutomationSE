using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Social share payload.
    /// </summary>
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
        /// Gets the name of the event.
        /// </summary>
        /// <value>The name of the event.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the type of the share.
        /// </summary>
        /// <value>The type of the share.</value>
        public string shareType
        {
            get { return GetParam<string>(k_ParamKey_ShareType); }
            set { SetParam(k_ParamKey_ShareType, value); }
        }

        /// <summary>
        /// Gets or sets the social network.
        /// </summary>
        /// <value>The social network.</value>
        public string socialNetwork
        {
            get { return GetParam<string>(k_ParamKey_SocialNetwork); }
            set { SetParam(k_ParamKey_SocialNetwork, value); }
        }

        /// <summary>
        /// Sets the type of the share.
        /// </summary>
        /// <param name="shareType">Share type.</param>
        public void SetShareType (ShareType shareType)
        {
            SetParam(k_ParamKey_ShareType, GetStandardParamValue(shareType));
        }

        /// <summary>
        /// Sets the social network.
        /// </summary>
        /// <param name="socialNetwork">Social network.</param>
        public void SetSocialNetwork (SocialNetwork socialNetwork)
        {
            SetParam(k_ParamKey_SocialNetwork, GetStandardParamValue(socialNetwork));
        }

        /// <summary>
        /// Validates the payload.
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateAllDataKeysExist(k_ParamKey_ShareType, k_ParamKey_SocialNetwork);
        }

        /// <summary>
        /// Validates the data field.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_ShareType || key == k_ParamKey_SocialNetwork)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="shareType">Share type.</param>
        /// <param name="socialNetwork">Social network.</param>
        /// <param name="eventData">Event data.</param>
        public static SocialSharePayload CreateInstance (ShareType shareType, SocialNetwork socialNetwork, IDictionary<string, object> eventData)
        {
            return CreateInstance(GetStandardParamValue(shareType), GetStandardParamValue(socialNetwork), eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="shareType">Share type.</param>
        /// <param name="socialNetwork">Social network.</param>
        /// <param name="eventData">Event data.</param>
        public static SocialSharePayload CreateInstance (ShareType shareType, string socialNetwork, IDictionary<string, object> eventData)
        {
            return CreateInstance(GetStandardParamValue(shareType), socialNetwork, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="shareType">Share type.</param>
        /// <param name="socialNetwork">Social network.</param>
        /// <param name="eventData">Event data.</param>
        public static SocialSharePayload CreateInstance (string shareType, SocialNetwork socialNetwork, IDictionary<string, object> eventData)
        {
            return CreateInstance(shareType, GetStandardParamValue(socialNetwork), eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="shareType">Share type.</param>
        /// <param name="socialNetwork">Social network.</param>
        /// <param name="eventData">Event data.</param>
        public static SocialSharePayload CreateInstance (string shareType, string socialNetwork, IDictionary<string, object> eventData)
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
