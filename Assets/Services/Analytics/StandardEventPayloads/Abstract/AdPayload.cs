using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Base standard event class from which advertising payload classes derive.
    /// </summary>
    public abstract class AdPayload : AnalyticsEventPayload
    {
        static readonly string k_ParamKey_PlacementId = "placement_id";
        static readonly string k_ParamKey_Network = "network";
        static readonly string k_ParamKey_Rewarded = "rewarded";

        /// <summary>
        /// Gets or sets the ID of the ad placement.
        /// </summary>
        /// <value>The ad placement ID.</value>
        public string placementId
        {
            get { return GetParam<string>(k_ParamKey_PlacementId); }
            set { SetParam(k_ParamKey_PlacementId, value); }
        }

        /// <summary>
        /// Gets or sets the ad or mediation network provider.
        /// </summary>
        /// <value>The ad or mediation network.</value>
        public string network
        {
            get { return GetParam<string>(k_ParamKey_Network); }
            set { SetParam(k_ParamKey_Network, value); }
        }

        /// <summary>
        /// Gets or sets whether the ad placement is rewarded.
        /// </summary>
        /// <value><c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</value>
        public string rewarded
        {
            get { return GetParam<string>(k_ParamKey_Rewarded); }
            set { SetParam(k_ParamKey_Rewarded, value); }
        }

        /// <summary>
        /// Verifies that any required event data parameters are set.
        /// <remarks>
        /// The <c>rewarded</c> parameter must be set for the payload to be valid.
        /// </remarks>
        /// </summary>
        protected override void ValidatePayload()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_Rewarded);
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>placement_id</c> and <c>network</c> parameter values must be of type <c>string</c>, 
        /// and the <c>rewarded</c> parameter value must be of type <c>bool</c> to be valid.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_PlacementId || (key == k_ParamKey_Network && !(value is AdvertisingNetwork)))
            {
                ValidateDataValueType<string>(key, value);
            }
            else if (key == k_ParamKey_Rewarded)
            {
                ValidateDataValueType<bool>(key, value);
            }
        }

        /// <summary>
        /// Creates a new instance of payload type <c>T</c> and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of payload type <c>T</c>, where <c>T</c> inherits from <see cref="AdPayload"/>.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider.</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        /// <typeparam name="T">Payload type that inherits from <see cref="AdPayload"/>.</typeparam>
        protected static T CreateInstance<T> (bool rewarded, AdvertisingNetwork advertisingNetwork, string placementId = null, IDictionary<string, object> eventData = null) where T : AdPayload
        {
            return CreateInstance<T>(rewarded, GetStandardParamValue(advertisingNetwork), placementId, eventData);
        }

        /// <summary>
        /// Creates a new instance of payload type <c>T</c> and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of payload type <c>T</c>, where <c>T</c> inherits from <see cref="AdPayload"/>.</returns>
        /// <param name="rewarded">Set to <c>true</c> if a reward was offered for viewing the ad; otherwise, <c>false</c>.</param>
        /// <param name="advertisingNetwork">The ad or mediation network provider (optional).</param>
        /// <param name="placementId">The ad placement or configuration ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        /// <typeparam name="T">Payload type that inherits from <see cref="AdPayload"/>.</typeparam>
        protected static T CreateInstance<T> (bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null) where T : AdPayload
        {
            var instance = CreateInstance<T>(eventData);

            instance.SetParam(k_ParamKey_PlacementId, placementId);
            instance.SetParam(k_ParamKey_Network, advertisingNetwork);
            instance.SetParam(k_ParamKey_Rewarded, rewarded);

            return instance;
        }
    }
}
