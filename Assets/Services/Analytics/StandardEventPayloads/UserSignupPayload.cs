using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// User signup payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "UserSignupPayload.asset", menuName = "Analytics Events/User Engagement and Social/User Signup")]
    public class UserSignupPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "user_signup";

        static readonly string k_ParamKey_AuthorizationNetwork = "authorization_network";

        /// <summary>
        /// Gets the name of the event.
        /// </summary>
        /// <value>The name of the event.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the authorization network.
        /// </summary>
        /// <value>The authorization network.</value>
        public string authorizationNetwork
        {
            get { return GetParam<string>(k_ParamKey_AuthorizationNetwork); }
            set { SetParam(k_ParamKey_AuthorizationNetwork, value); }
        }

        /// <summary>
        /// Sets the authorization network.
        /// </summary>
        /// <param name="authorizationNetwork">Authorization network.</param>
        public void SetAuthorizationNetwork (AuthorizationNetwork authorizationNetwork)
        {
            SetParam(k_ParamKey_AuthorizationNetwork, GetStandardParamValue(authorizationNetwork));
        }

        /// <summary>
        /// Validates the payload.
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_AuthorizationNetwork);
        }

        /// <summary>
        /// Validates the data field.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_AuthorizationNetwork)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="authorizationNetwork">Authorization network.</param>
        /// <param name="eventData">Event data.</param>
        public static UserSignupPayload CreateInstance (AuthorizationNetwork authorizationNetwork, IDictionary<string, object> eventData)
        {
            return CreateInstance(GetStandardParamValue(authorizationNetwork), eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="authorizationNetwork">Authorization network.</param>
        /// <param name="eventData">Event data.</param>
        new public static UserSignupPayload CreateInstance (string authorizationNetwork, IDictionary<string, object> eventData)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_AuthorizationNetwork, authorizationNetwork);

            return CreateInstance<UserSignupPayload>(eventData);
        }
    }
}
