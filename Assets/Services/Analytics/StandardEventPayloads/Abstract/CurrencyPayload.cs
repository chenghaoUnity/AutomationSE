using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    public abstract class CurrencyPayload : AnalyticsEventPayload
    {
        protected static string k_ParamKey_ItemId = "item_id";
        protected static string k_ParamKey_ItemName = "item_name";
        protected static string k_ParamKey_Amount = "amount";
        protected static string k_ParamKey_NewBalance = "new_balance";
        protected static string k_ParamKey_Type = "type";

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

        public object amount
        {
            get { return GetParam<object>(k_ParamKey_Amount); }
            set { SetParam(k_ParamKey_Amount, value); }
        }

        public object newBalance
        {
            get { return GetParam<object>(k_ParamKey_NewBalance); }
            set { SetParam(k_ParamKey_NewBalance, value); }
        }

        public ItemType type
        {
            get { return (GetParam<string>(k_ParamKey_Type) == GetStandardParamValue(ItemType.Premium)) ? ItemType.Premium : ItemType.Soft; }
            set { SetParam(k_ParamKey_Type, GetStandardParamValue(value)); }
        }

        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateAtLeastOneDataKeyExists(k_ParamKey_ItemId, k_ParamKey_ItemName);
            ValidateAllDataKeysExist(k_ParamKey_Amount, k_ParamKey_NewBalance, k_ParamKey_Type);
        }

        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_ItemId || key == k_ParamKey_ItemName || key == k_ParamKey_Type)
            {
                ValidateDataValueType<string>(key, value);

                if (key == k_ParamKey_Type)
                {
                    ValidateDataValueExistsInEnum<ItemType>(key, (string)value);
                }
            }
            else if (key == k_ParamKey_Amount || key == k_ParamKey_NewBalance)
            {
                ValidateDataValueTypeIsNumeric(key, value);
            }
        }

        public static T CreateInstance<T> (int amount, int newBalance, ItemType type, string itemId, string itemName, IDictionary<string, object> eventData)
            where T : CurrencyPayload
        {
            return CreateInstance<T>((object)amount, (object)newBalance, type, itemId, itemName, eventData);
        }

        public static T CreateInstance<T> (float amount, float newBalance, ItemType type, string itemId, string itemName, IDictionary<string, object> eventData)
            where T : CurrencyPayload
        {
            return CreateInstance<T>((object)amount, (object)newBalance, type, itemId, itemName, eventData);
        }

        public static T CreateInstance<T> (decimal amount, decimal newBalance, ItemType type, string itemId, string itemName, IDictionary<string, object> eventData)
            where T : CurrencyPayload
        {
            return CreateInstance<T>((object)amount, (object)newBalance, type, itemId, itemName, eventData);
        }

        protected static T CreateInstance<T> (object amount, object newBalance, ItemType type, string itemId, string itemName, IDictionary<string, object> eventData) 
            where T : CurrencyPayload
        {
            if (Equals(eventData, null))
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_ItemId, itemId);
            eventData.Add(k_ParamKey_ItemName, itemName);
            eventData.Add(k_ParamKey_Amount, amount);
            eventData.Add(k_ParamKey_NewBalance, newBalance);
            eventData.Add(k_ParamKey_Type, GetStandardParamValue(type));

            return CreateInstance<T>(eventData);
        }
    }
}
