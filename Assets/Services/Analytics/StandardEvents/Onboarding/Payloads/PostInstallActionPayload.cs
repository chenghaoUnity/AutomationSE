using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Post Install Action standard event payload (<c>post_install_action</c>).
    /// <remarks>
    /// Send this event with the first action the user takes after install. 
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into the amount of time it takes for players to engage with your game after install, 
    /// or if there is any interaction at all after install.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "PostInstallActionPayload.asset", menuName = "Analytics Payloads/Onboarding/Post Install Action")]
    public class PostInstallActionPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "post_install_action";

        static readonly string k_ParamKey_ActionId = "action_id";

        /// <summary>
        /// Gets the standard event name.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets an the ID or name of the first action taken by the user after install.
        /// </summary>
        /// <value>The action ID or name.</value>
        public string actionId 
        {
            get { return GetParam<string>(k_ParamKey_ActionId); }
            set { SetParam(k_ParamKey_ActionId, value); }
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>action_id</c> parameter value must be of type <c>string</c> to be valid.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_ActionId)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates a new instance of PostInstallActionPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="PostInstallActionPayload"/>.</returns>
        /// <param name="actionId">The action ID or name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        new public static PostInstallActionPayload CreateInstance (string actionId = null, IDictionary<string, object> eventData = null)
        {
            var instance = CreateInstance<PostInstallActionPayload>(eventData);

            instance.SetParam(k_ParamKey_ActionId, actionId);

            return instance;
        }
    }
}
