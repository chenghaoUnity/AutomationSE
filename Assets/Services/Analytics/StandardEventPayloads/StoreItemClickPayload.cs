using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Store Item Click standard event payload (<c>store_item_click</c>).
    /// <remarks>
    /// Send this event when the player clicks on an item in the store.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into player engagment with store inventory.
    /// </remarks>
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
        /// Gets the standard event name.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the item ID.
        /// </summary>
        /// <value>The item ID.</value>
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
        /// Verifies that any required event data parameters are set.
        /// <remarks>
        /// The <c>type</c> parameter, and either <c>item_id</c> or <c>item_name</c> parameters, 
        /// must be set for the payload to be valid.
        /// </remarks>
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_StoreType);
            ValidateAtLeastOneDataKeyExists(k_ParamKey_ItemId, k_ParamKey_ItemName);
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>type</c>, <c>item_id</c>, and <c>item_name</c> parameter values must be of type <c>string</c> to be valid.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_ItemId || key == k_ParamKey_ItemName || (key == k_ParamKey_StoreType && !(value is StoreType)))
            {
                ValidateDataValueType<string>(key, value);

                if (key == k_ParamKey_StoreType)
                {
                    ValidateDataValueExistsInEnum<StoreType>(key, (string)value);
                }
            }
        }

        /// <summary>
        /// Creates a new instance of StoreItemClickPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="StoreItemClickPayload"/>.</returns>
        /// <param name="storeType">Set to StoreType.Premium if purchases use real-world money; otherwise, StoreType.Soft</param>
        /// <param name="itemId">The item ID.</param>
        /// <param name="itemName">The item name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static StoreItemClickPayload CreateInstance (StoreType storeType, string itemId, string itemName = null, IDictionary<string, object> eventData = null)
        {
            var instance = CreateInstance<StoreItemClickPayload>(eventData);

            instance.SetParam(k_ParamKey_StoreType, GetStandardParamValue(storeType));
            instance.SetParam(k_ParamKey_ItemId, itemId);
            instance.SetParam(k_ParamKey_ItemName, itemName);

            return instance;
        }
    }
}
