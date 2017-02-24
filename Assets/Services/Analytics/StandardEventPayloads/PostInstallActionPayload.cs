using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Post Install Action (<c>post_install_action</c>) standard event payload.
    /// <remarks>
    /// Send this event with the first action the user takes after install. This event can provide 
    /// insight into how long it may be taking users to engage with your game for the first time, 
    /// and what that first interaction is; or if they intereacted at all after install.
    /// </remarks>
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "PostInstallActionPayload.asset", menuName = "Analytics Events/First-Time User Experience/Post Install Action")]
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
        /// Gets or sets an identifier for the action taken by the user. (Optional)
        /// </summary>
        /// <value>The action identifier.</value>
        public string actionId 
        {
            get { return GetParam<string>(k_ParamKey_ActionId); }
            set { SetParam(k_ParamKey_ActionId, value); }
        }

        /// <summary>
        /// Validates the data field.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_ActionId)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="actionId">Action identifier.</param>
        /// <param name="eventData">Event data.</param>
        new public static PostInstallActionPayload CreateInstance (string actionId, IDictionary<string, object> eventData)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_ActionId, actionId);

            return CreateInstance<PostInstallActionPayload>(eventData);
        }
    }
}
