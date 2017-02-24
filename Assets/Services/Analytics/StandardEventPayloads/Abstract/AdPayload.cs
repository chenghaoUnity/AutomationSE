using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Base class for all ad payloads.
    /// </summary>
    public abstract class AdPayload : AnalyticsEventPayload
    {
        private static string k_ParamKey_PlacementId = "placement_id";
        private static string k_ParamKey_Network = "network";
        private static string k_ParamKey_Rewarded = "rewarded";

        /// <summary>
        /// Gets or sets the placement ID for the ad.
        /// </summary>
        /// <value>The achievement ID.</value>
        public string placementId
        {
            get { return GetParam<string>(k_ParamKey_PlacementId); }
            set { SetParam(k_ParamKey_PlacementId, value); }
        }

        /// <summary>
        /// Gets or sets the ad network being used.
        /// </summary>
        /// <value>The ad network.</value>
        public string network
        {
            get { return GetParam<string>(k_ParamKey_Network); }
            set { SetParam(k_ParamKey_Network, value); }
        }

        /// <summary>
        /// Gets or sets whether this is a rewarded ad or not.
        /// </summary>
        /// <value>Boolean value representing whether or not the ad is rewarded.</value>
        public string rewarded
        {
            get { return GetParam<string>(k_ParamKey_Rewarded); }
            set { SetParam(k_ParamKey_Rewarded, value); }
        }

        /// <summary>
        /// Validates the payload, ensuring rewarded has been set.
        /// </summary>
        protected override void ValidatePayload()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_Rewarded);
        }

        /// <summary>
        /// Validates that placement ID and network are set with <c>string</c> values, and rewarded is set with a <c>bool</c> value.
        /// </summary>
        /// <param name="key">The key for the parameter being tested</param>
        /// <param name="value">The value of the parameter being tested</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_PlacementId || key == k_ParamKey_Network)
            {
                ValidateDataValueType<string>(key, value);
            }
            else if (key == k_ParamKey_Rewarded)
            {
                ValidateDataValueType<bool>(key, value);
            }
        }

        /// <summary>
        /// Creates an instance of the base AdPayload class, adding rewarded, ad network, and placementId to eventData. If eventData is null, creates the dictionary.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="rewarded">Boolean value representing whether or not the ad is rewarded.</param>
        /// <param name="advertisingNetwork">Ad network being used.</param>
        /// <param name="placementId">Placement ID for the ad.</param>
        /// <param name="eventData">Dictionary with any custom parameters.</param>
        /// <typeparam name="T">The payload type that inherits from AdPayload.</typeparam>
        protected static T CreateInstance<T> (bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null) where T : AdPayload
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_PlacementId, placementId);
            eventData.Add(k_ParamKey_Network, advertisingNetwork);
            eventData.Add(k_ParamKey_Rewarded, rewarded);

            return CreateInstance<T>(eventData);
        }

        /// <summary>
        /// Creates an instance of the base AdPayload class, adding rewarded, ad network, and placementId to eventData. If eventData is null, creates the dictionary.
        /// <para>
        /// This version of the method uses the AdvertisingNetwork enum, and converts the enum value to a string before adding it to eventData.
        /// </para>
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="rewarded">Boolean value representing whether or not the ad is rewarded.</param>
        /// <param name="advertisingNetwork">Ad network being used.</param>
        /// <param name="placementId">Placement ID for the ad.</param>
        /// <param name="eventData">Dictionary with any custom parameters.</param>
        /// <typeparam name="T">The payload type that inherits from AdPayload.</typeparam>
        protected static T CreateInstance<T>(bool rewarded, AdvertisingNetwork advertisingNetwork = AdvertisingNetwork.None, string placementId = null, IDictionary<string, object> eventData = null) where T : AdPayload
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_PlacementId, placementId);
            eventData.Add(k_ParamKey_Network, GetStandardParamValue(advertisingNetwork));
            eventData.Add(k_ParamKey_Rewarded, rewarded);

            return CreateInstance<T>(eventData);
        }
    }
}
