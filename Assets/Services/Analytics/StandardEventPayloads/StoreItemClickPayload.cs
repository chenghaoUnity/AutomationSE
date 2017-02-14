using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "StoreItemClickPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Store Item Click")]
    public class StoreItemClickPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "store_item_click";

        static readonly string k_ParamKey_ItemId = "item_id";
        static readonly string k_ParamKey_ItemName = "item_name";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public string itemId
        {
            get { return GetParam<string>(k_ParamKey_ItemId); }
            set { SetParam(k_ParamKey_ItemId, value); }
        }

        public string itemName
        {
            get { return GetParam<string>(k_ParamKey_ItemName); }
            set { SetParam(k_ParamKey_ItemName, value); }
        }

        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateAtLeastOneDataKeyExists(k_ParamKey_ItemId, k_ParamKey_ItemName);
        }

        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_ItemId || key == k_ParamKey_ItemName)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        public static StoreItemClickPayload CreateInstance (string itemId, string itemName, IDictionary<string, object> eventData)
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_ItemId, itemId);
            eventData.Add(k_ParamKey_ItemName, itemName);

            return CreateInstance<StoreItemClickPayload>(eventData);
        }
    }
}
