using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    public abstract class ResourcePayload : AnalyticsEventPayload
    {
        protected static string k_ParamKey_ItemId = "item_id";
        protected static string k_ParamKey_ItemName = "item_name";
        protected static string k_ParamKey_Amount = "amount";
        protected static string k_ParamKey_NewBalance = "new_balance";

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

        public decimal amount
        {
            get { return GetParam<decimal>(k_ParamKey_Amount); }
            set { SetParam(k_ParamKey_Amount, value); }
        }

        public decimal newBalance
        {
            get { return GetParam<decimal>(k_ParamKey_NewBalance); }
            set { SetParam(k_ParamKey_NewBalance, value); }
        }

        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateAtLeastOneDataKeyExists(k_ParamKey_ItemId, k_ParamKey_ItemName);
            ValidateAllDataKeysExist(k_ParamKey_Amount, k_ParamKey_NewBalance);
        }

        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_ItemId || key == k_ParamKey_ItemName)
            {
                ValidateDataValueType<string>(key, value);
            }
            else if (key == k_ParamKey_Amount || key == k_ParamKey_NewBalance)
            {
                ValidateDataValueTypeIsNumeric(key, value);
            }
        }

        public static T CreateInstance<T> (
            int amount,
            int newBalance,
            string itemId,
            string itemName,
            IDictionary<string, object> eventData
            ) where T : ResourcePayload
        {
            return CreateInstance<T>((object)amount, (object)newBalance, itemId, itemName, eventData);
        }

        public static T CreateInstance<T> (
            float amount,
            float newBalance,
            string itemId,
            string itemName,
            IDictionary<string, object> eventData
            ) where T : ResourcePayload
        {
            return CreateInstance<T>((object)amount, (object)newBalance, itemId, itemName, eventData);
        }

        public static T CreateInstance<T> (
            decimal amount,
            decimal newBalance,
            string itemId,
            string itemName,
            IDictionary<string, object> eventData
            ) where T : ResourcePayload
        {
            return CreateInstance<T>((object)amount, (object)newBalance, itemId, itemName, eventData);
        }

        static T CreateInstance<T> (
            object amount,
            object newBalance,
            string itemId,
            string itemName,
            IDictionary<string, object> eventData
            ) where T : ResourcePayload
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_ItemId, itemId);
            eventData.Add(k_ParamKey_ItemName, itemName);
            eventData.Add(k_ParamKey_Amount, amount);
            eventData.Add(k_ParamKey_NewBalance, newBalance);

            return CreateInstance<T>(eventData);
        }

    }
}
