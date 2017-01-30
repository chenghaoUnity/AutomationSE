using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    public abstract class AdPayload : AnalyticsEventPayload
    {
        protected static string k_ParamKey_PlacementId = "placement_id";

        public string achievementId
        {
            get { return GetParam<string>(k_ParamKey_PlacementId); }
            set { SetParam(k_ParamKey_PlacementId, value); }
        }

        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_PlacementId)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        new public static T CreateInstance<T> (IDictionary<string, object> eventData) where T : AdPayload
        {
            if (eventData.ContainsKey(k_ParamKey_PlacementId))
            {
                bool isEmpty = eventData[k_ParamKey_PlacementId] is string &&
                    Equals((string)eventData[k_ParamKey_PlacementId], string.Empty);
                
                if (Equals(eventData[k_ParamKey_PlacementId], null) || isEmpty)
                {
                    eventData.Remove(k_ParamKey_PlacementId);
                }
            }

            return AnalyticsEventPayload.CreateInstance<T>(eventData);
        }

        public static T CreateInstance<T> (string placementId, IDictionary<string, object> eventData) where T : AdPayload
        {
            if (!Equals(placementId, null))
            {
                eventData.Add(k_ParamKey_PlacementId, placementId);
            }

            return CreateInstance<T>(eventData);
        }
    }
}
