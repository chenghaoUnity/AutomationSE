using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "StoreOpenedPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Store Opened")]
    public class StoreOpenedPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "store_opened";

        static readonly string k_ParamKey_StoreType = "type";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public string type
        {
            get { return GetParam<string>(k_ParamKey_StoreType); }
            set { SetParam(k_ParamKey_StoreType, value); }
        }

        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_StoreType);
        }

        protected override void ValidateDataField (string key, object value)
        {
            if (key == k_ParamKey_StoreType)
            {
                ValidateDataValueType<string>(key, value);
                ValidateStoreType((string)value);
            }
        }

        public static StoreOpenedPayload CreateInstance (StoreType storeType, IDictionary<string, object> eventData)
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_StoreType, GetStandardParamValue(storeType));

            return CreateInstance<StoreOpenedPayload>(eventData);
        }
    }
}
