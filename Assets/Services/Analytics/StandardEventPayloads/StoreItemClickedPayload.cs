using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "StoreItemClickedPayload.asset", menuName = "Analytics Events/Store Item Clicked")]
    public class StoreItemClickedPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "store_item";

        public override string eventName
        {
            get { return standardEventName; }
        }

        static readonly string k_ParamKey_ItemId = "itemId";

        public string itemId
        {
            get { return GetParam<string>(k_ParamKey_ItemId); }
            set { SetParam(k_ParamKey_ItemId, value); }
        }

        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            if (!HasParam(k_ParamKey_ItemId))
            {
                OnValidationFailed(
                    string.Format(
                        k_ErrorFormat_RequiredParamNotSet,
                        k_ParamKey_ItemId
                    )
                );
            }
        }

        protected override void ValidateDataField (string key, object value)
        {
            if (key == k_ParamKey_ItemId)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        new public static StoreItemClickedPayload CreateInstance (string itemId)
        {
            return CreateInstance(itemId, new Dictionary<string, object>());
        }

        new public static StoreItemClickedPayload CreateInstance (string itemId, IDictionary<string, object> eventParams)
        {
            eventParams.Add(k_ParamKey_ItemId, itemId);
            return CreateInstance<StoreItemClickedPayload>(eventParams);
        }
    }
}
