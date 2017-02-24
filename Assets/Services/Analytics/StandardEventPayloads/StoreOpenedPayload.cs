using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Store opened payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "StoreOpenedPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Store Opened")]
    public class StoreOpenedPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "store_opened";

        static readonly string k_ParamKey_StoreType = "type";

        /// <summary>
        /// Gets the name of the event.
        /// </summary>
        /// <value>The name of the event.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the type.
        /// </summary>
        /// <value>The type.</value>
        public string type
        {
            get { return GetParam<string>(k_ParamKey_StoreType); }
            set { SetParam(k_ParamKey_StoreType, value); }
        }

        /// <summary>
        /// Validates the payload.
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_StoreType);
        }

        /// <summary>
        /// Validates the data field.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            if (key == k_ParamKey_StoreType)
            {
                ValidateDataValueType<string>(key, value);
                ValidateDataValueExistsInEnum<StoreType>(key, (string)value);
            }
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="storeType">Store type.</param>
        /// <param name="eventData">Event data.</param>
        public static StoreOpenedPayload CreateInstance (StoreType storeType, IDictionary<string, object> eventData)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_StoreType, GetStandardParamValue(storeType));

            return CreateInstance<StoreOpenedPayload>(eventData);
        }
    }
}
