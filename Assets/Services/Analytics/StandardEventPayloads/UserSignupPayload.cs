using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// User Signup standard event payload (<c>user_signup</c>).
    /// <remarks>
    /// Send this event when the player registers for an account or logs in for the first time in game.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into login acceptance rates among players.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "UserSignupPayload.asset", menuName = "Analytics Events/User Engagement and Social/User Signup")]
    public class UserSignupPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "user_signup";

        static readonly string k_ParamKey_AuthorizationNetwork = "authorization_network";

        /// <summary>
        /// Gets the standard event name.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the authorization network or login service provider used to signup.
        /// </summary>
        /// <value>The authorization network or login service provider.</value>
        public string authorizationNetwork
        {
            get { return GetParam<string>(k_ParamKey_AuthorizationNetwork); }
            set { SetParam(k_ParamKey_AuthorizationNetwork, value); }
        }

        /// <summary>
        /// Sets the authorization network or login service provider used to signup.
        /// </summary>
        /// <param name="authorizationNetwork">The authorization network or login service provider.</param>
        public void SetAuthorizationNetwork (AuthorizationNetwork authorizationNetwork)
        {
            SetParam(k_ParamKey_AuthorizationNetwork, GetStandardParamValue(authorizationNetwork));
        }

        /// <summary>
        /// Verifies that any required event data parameters are set.
        /// <remarks>
        /// The <c>authorization_network</c> parameter must be set for the payload to be valid.
        /// </remarks>
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_AuthorizationNetwork);
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>authorization_network</c> parameter value must be of type <c>string</c> to be valid.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_AuthorizationNetwork && !(value is AuthorizationNetwork))
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates a new instance of UserSignupPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="UserSignupPayload"/>.</returns>
        /// <param name="authorizationNetwork">The authorization network or login service provider.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static UserSignupPayload CreateInstance (AuthorizationNetwork authorizationNetwork, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(GetStandardParamValue(authorizationNetwork), eventData);
        }

        /// <summary>
        /// Creates a new instance of UserSignupPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="UserSignupPayload"/>.</returns>
        /// <param name="authorizationNetwork">The authorization network or login service provider.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        new public static UserSignupPayload CreateInstance (string authorizationNetwork, IDictionary<string, object> eventData = null)
        {
            var instance = CreateInstance<UserSignupPayload>(eventData);

            instance.SetParam(k_ParamKey_AuthorizationNetwork, authorizationNetwork);

            return instance;
        }
    }
}
