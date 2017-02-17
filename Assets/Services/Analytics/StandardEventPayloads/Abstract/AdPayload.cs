using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    public abstract class AdPayload : AnalyticsEventPayload
    {
        protected static string k_ParamKey_PlacementId = "placement_id";
        protected static string k_ParamKey_Network = "network";
        protected static string k_ParamKey_Rewarded = "rewarded";

        public string achievementId
        {
            get { return GetParam<string>(k_ParamKey_PlacementId); }
            set { SetParam(k_ParamKey_PlacementId, value); }
        }

        public string network
        {
            get { return GetParam<string>(k_ParamKey_Network); }
            set { SetParam(k_ParamKey_Network, value); }
        }

        public string rewarded
        {
            get { return GetParam<string>(k_ParamKey_Rewarded); }
            set { SetParam(k_ParamKey_Rewarded, value); }
        }

        protected override void ValidatePayload()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_Rewarded);
        }

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

        new public static T CreateInstance<T> (IDictionary<string, object> eventData) where T : AdPayload
        {
            return AnalyticsEventPayload.CreateInstance<T>(eventData);
        }

        public static T CreateInstance<T> (bool rewarded, string advertisingNetwork = null, string placementId = null, IDictionary<string, object> eventData = null) where T : AdPayload
        {
            if(Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_PlacementId, placementId);
            eventData.Add(k_ParamKey_Network, advertisingNetwork);
            eventData.Add(k_ParamKey_Rewarded, rewarded);

            return CreateInstance<T>(eventData);
        }

        public static T CreateInstance<T>(bool rewarded, AdvertisingNetwork advertisingNetwork = AdvertisingNetwork.None, string placementId = null, IDictionary<string, object> eventData = null) where T : AdPayload
        {
            if (Equals(eventData, null))
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
