using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    public abstract class CurrencyPayload : AnalyticsEventPayload
    {
        protected static string k_ParamKey_ItemId = "item_id";
        protected static string k_ParamKey_Amount = "amount";
        protected static string k_ParamKey_Balance = "balance";
        protected static string k_ParamKey_Source = "source";
        protected static string k_ParamKey_Type = "type";

        public string itemId
        {
            get { return GetParam<string>(k_ParamKey_ItemId); }
            set { SetParam(k_ParamKey_ItemId, value); }
        }

        public int amount
        {
            get { return GetParam<int>(k_ParamKey_Amount); }
            set { SetParam(k_ParamKey_Amount, value); }
        }

        public int balance
        {
            get { return GetParam<int>(k_ParamKey_Balance); }
            set { SetParam(k_ParamKey_Balance, value); }
        }

        public string source
        {
            get { return GetParam<string>(k_ParamKey_Source); }
            set { SetParam(k_ParamKey_Source, value); }
        }

        public string type
        {
            get { return GetParam<string>(k_ParamKey_Type); }
            set { SetParam(k_ParamKey_Type, value); }
        }

        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_Amount || key == k_ParamKey_Balance)
            {
                ValidateDataValueType<int>(key, value);
            }
            else if (key == k_ParamKey_ItemId || key == k_ParamKey_Source || key == k_ParamKey_Type)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        public static T CreateInstance<T> (
            string itemId,
            int amount,
            int balance,
            string source,
            string type,
            IDictionary<string, object> eventData
            ) where T : CurrencyPayload
        {
            eventData.Add(k_ParamKey_ItemId, itemId);
            eventData.Add(k_ParamKey_Amount, amount);
            eventData.Add(k_ParamKey_Balance, balance);
            eventData.Add(k_ParamKey_Source, source);
            eventData.Add(k_ParamKey_Type, type);
            return CreateInstance<T>(eventData);
        }
    }
}
