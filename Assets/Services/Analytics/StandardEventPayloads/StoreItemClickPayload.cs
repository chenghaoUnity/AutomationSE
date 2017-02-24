using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Store item click payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "StoreItemClickPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Store Item Click")]
    public class StoreItemClickPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "store_item_click";

        static readonly string k_ParamKey_StoreType = "type";
        static readonly string k_ParamKey_ItemId = "item_id";
        static readonly string k_ParamKey_ItemName = "item_name";

        /// <summary>
        /// Gets the name of the event.
        /// </summary>
        /// <value>The name of the event.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the item identifier.
        /// </summary>
        /// <value>The item identifier.</value>
        public string itemId
        {
            get { return GetParam<string>(k_ParamKey_ItemId); }
            set { SetParam(k_ParamKey_ItemId, value); }
        }

        /// <summary>
        /// Gets or sets the name of the item.
        /// </summary>
        /// <value>The name of the item.</value>
        public string itemName
        {
            get { return GetParam<string>(k_ParamKey_ItemName); }
            set { SetParam(k_ParamKey_ItemName, value); }
        }

        /// <summary>
        /// Validates the payload.
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_StoreType);
            ValidateAtLeastOneDataKeyExists(k_ParamKey_ItemId, k_ParamKey_ItemName);
        }

        /// <summary>
        /// Validates the data field.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_StoreType || key == k_ParamKey_ItemId || key == k_ParamKey_ItemName)
            {
                ValidateDataValueType<string>(key, value);

                if (key == k_ParamKey_StoreType)
                {
                    ValidateDataValueExistsInEnum<StoreType>(key, (string)value);
                }
            }
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="storeType">Store type.</param>
        /// <param name="itemId">Item identifier.</param>
        /// <param name="itemName">Item name.</param>
        /// <param name="eventData">Event data.</param>
        public static StoreItemClickPayload CreateInstance (StoreType storeType, string itemId, string itemName, IDictionary<string, object> eventData)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_StoreType, GetStandardParamValue(storeType));
            eventData.Add(k_ParamKey_ItemId, itemId);
            eventData.Add(k_ParamKey_ItemName, itemName);

            return CreateInstance<StoreItemClickPayload>(eventData);
        }
    }
}
