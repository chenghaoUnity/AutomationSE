using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "StoreOpenedPayload.asset", menuName = "Analytics Events/Store Opened")]
    public class StoreOpenedPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "store_opened";

        public override string eventName
        {
            get { return standardEventName; }
        }

        static readonly string k_ParamKey_Type = "type";

        public string type
        {
            get { return GetParam<string>(k_ParamKey_Type); }
            set { SetParam(k_ParamKey_Type, value); }
        }

        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            if (!HasParam(k_ParamKey_Type))
            {
                OnValidationFailed(
                    string.Format(
                        k_ErrorFormat_RequiredParamNotSet,
                        k_ParamKey_Type
                    )
                );
            }
        }

        protected override void ValidateDataField (string key, object value)
        {
            if (key == k_ParamKey_Type)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        new public static StoreOpenedPayload CreateInstance (string type)
        {
            return CreateInstance(type, new Dictionary<string, object>());
        }

        new public static StoreOpenedPayload CreateInstance (string type, IDictionary<string, object> eventParams)
        {
            eventParams.Add(k_ParamKey_Type, type);
            return CreateInstance<StoreOpenedPayload>(eventParams);
        }
    }
}
