using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Store Opened standard event payload (<c>store_opened</c>).
    /// <remarks>
    /// Send this event when the player opens a store in game.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into potential player engagment with store inventory.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "StoreOpenedPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Store Opened")]
    public class StoreOpenedPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "store_opened";

        static readonly string k_ParamKey_StoreType = "type";

        /// <summary>
        /// Gets the standard event name.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the type of the store.
        /// </summary>
        /// <value>StoreType.Premium if purchases use real-world money; otherwise, StoreType.Soft</value>
        public StoreType type
        {
            get { return GetParam<StoreType>(k_ParamKey_StoreType); }
            set { SetParam(k_ParamKey_StoreType, value); }
        }

        /// <summary>
        /// Verifies that any required event data parameters are set.
        /// <remarks>
        /// The <c>type</c> parameter must be set for the payload to be valid.
        /// </remarks>
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_StoreType);
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>type</c> parameter value must be of type <c>string</c> to be valid.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            if (key == k_ParamKey_StoreType && !(value is StoreType))
            {
                ValidateDataValueType<string>(key, value);
                ValidateDataValueExistsInEnum<StoreType>(key, (string)value);
            }
        }

        /// <summary>
        /// Creates a new instance of StoreOpenedPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="StoreOpenedPayload"/>.</returns>
        /// <param name="storeType">Set to StoreType.Premium if purchases use real-world money; otherwise, StoreType.Soft</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static StoreOpenedPayload CreateInstance (StoreType storeType, IDictionary<string, object> eventData = null)
        {
            var instance = CreateInstance<StoreOpenedPayload>(eventData);

            instance.SetParam(k_ParamKey_StoreType, GetStandardParamValue(storeType));

            return instance;
        }
    }
}
