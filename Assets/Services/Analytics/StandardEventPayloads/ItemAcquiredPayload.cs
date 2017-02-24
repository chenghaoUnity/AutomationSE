using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Item acquired payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "ItemAcquiredPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Item Acquired")]
    public class ItemAcquiredPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "item_acquired";

        static readonly string k_ParamKey_Type = "type";
        static readonly string k_ParamKey_Source = "source";
        static readonly string k_ParamKey_Name = "item_name";
        static readonly string k_ParamKey_ResourceType = "resource_type"; // Optional parameter
        static readonly string k_ParamKey_ResourceAmount = "resource_amount"; // Optional parameter
        static readonly string k_ParamKey_ResourceBalance = "resource_balance"; // Optional parameter

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
        public AcquisitionType type
        {
            get { return GetParam<AcquisitionType>(k_ParamKey_Type); }
            set { SetParam(k_ParamKey_Type, value); }
        }

        /// <summary>
        /// Gets or sets the source.
        /// </summary>
        /// <value>The source.</value>
        public string source
        {
            get { return GetParam<string>(k_ParamKey_Source); }
            set { SetParam(k_ParamKey_Source, value); }
        }

        /// <summary>
        /// Gets or sets the name.
        /// </summary>
        /// <value>The name.</value>
        new public string name
        {
            get { return GetParam<string>(k_ParamKey_Name); }
            set { SetParam(k_ParamKey_Name, value); }
        }

        /// <summary>
        /// Gets or sets the type of the resource.
        /// </summary>
        /// <value>The type of the resource.</value>
        public string resourceType
        {
            get { return GetParam<string>(k_ParamKey_ResourceType); } 
            set { SetParam(k_ParamKey_ResourceType, value); }
        }

        /// <summary>
        /// Gets or sets the resource amount.
        /// </summary>
        /// <value>The resource amount.</value>
        public object resourceAmount
        {
            get { return GetParam<object>(k_ParamKey_ResourceAmount); }
            set { SetParam(k_ParamKey_ResourceAmount, value); }
        }

        /// <summary>
        /// Gets or sets the resource balance.
        /// </summary>
        /// <value>The resource balance.</value>
        public object resourceBalance
        {
            get { return GetParam<object>(k_ParamKey_ResourceBalance); }
            set { SetParam(k_ParamKey_ResourceBalance, value); }
        }

        /// <summary>
        /// Validates the payload.
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateAllDataKeysExist(k_ParamKey_Type, k_ParamKey_Source, k_ParamKey_Name);
        }

        /// <summary>
        /// Validates the data field.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_Type || key == k_ParamKey_Source || key == k_ParamKey_Name || key == k_ParamKey_ResourceType)
            {
                ValidateDataValueType<string>(key, value);

                if (key == k_ParamKey_Type)
                {
                    ValidateDataValueExistsInEnum<AcquisitionType>(key, (string)value);
                }
            }
            else if (key == k_ParamKey_ResourceAmount || key == k_ParamKey_ResourceBalance)
            {
                ValidateDataValueTypeIsNumeric(key, value);
            }
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="resourceType">Resource type.</param>
        /// <param name="resourceAmount">Resource amount.</param>
        /// <param name="resourceBalance">Resource balance.</param>
        /// <param name="eventData">Event data.</param>
        public static ItemAcquiredPayload CreateInstance (string name, AcquisitionType type, AcquisitionSource source, string resourceType = null, int resourceAmount = 0, int resourceBalance = 0, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, GetStandardParamValue(source), resourceType, (object)resourceAmount, resourceBalance, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="resourceType">Resource type.</param>
        /// <param name="resourceAmount">Resource amount.</param>
        /// <param name="resourceBalance">Resource balance.</param>
        /// <param name="eventData">Event data.</param>
        public static ItemAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, string resourceType = null, int resourceAmount = 0, int resourceBalance = 0, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, source, resourceType, (object)resourceAmount, resourceBalance, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="resourceType">Resource type.</param>
        /// <param name="resourceAmount">Resource amount.</param>
        /// <param name="resourceBalance">Resource balance.</param>
        /// <param name="eventData">Event data.</param>
        public static ItemAcquiredPayload CreateInstance (string name, AcquisitionType type, AcquisitionSource source, string resourceType = null, float resourceAmount = 0, float resourceBalance = 0, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, GetStandardParamValue(source), resourceType, (object)resourceAmount, resourceBalance, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="resourceType">Resource type.</param>
        /// <param name="resourceAmount">Resource amount.</param>
        /// <param name="resourceBalance">Resource balance.</param>
        /// <param name="eventData">Event data.</param>
        public static ItemAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, string resourceType = null, float resourceAmount = 0, float resourceBalance = 0, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, source, resourceType, (object)resourceAmount, resourceBalance, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="resourceType">Resource type.</param>
        /// <param name="resourceAmount">Resource amount.</param>
        /// <param name="resourceBalance">Resource balance.</param>
        /// <param name="eventData">Event data.</param>
        public static ItemAcquiredPayload CreateInstance (string name, AcquisitionType type, AcquisitionSource source, string resourceType = null, decimal resourceAmount = 0, decimal resourceBalance = 0, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, GetStandardParamValue(source), resourceType, (object)resourceAmount, resourceBalance, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="resourceType">Resource type.</param>
        /// <param name="resourceAmount">Resource amount.</param>
        /// <param name="resourceBalance">Resource balance.</param>
        /// <param name="eventData">Event data.</param>
        public static ItemAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, string resourceType = null, decimal resourceAmount = 0, decimal resourceBalance = 0, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, source, resourceType, (object)resourceAmount, resourceBalance, eventData);
        }

        static ItemAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, string resourceType, object resourceAmount, object resourceBalance, IDictionary<string, object> eventData)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_Type, GetStandardParamValue(type));
            eventData.Add(k_ParamKey_Source, source);
            eventData.Add(k_ParamKey_Name, name);
            eventData.Add(k_ParamKey_ResourceType, resourceType);

            if ((decimal)resourceAmount != 0)
            {
                eventData.Add(k_ParamKey_ResourceAmount, resourceAmount);
                eventData.Add(k_ParamKey_ResourceBalance, resourceBalance);
            }

            return CreateInstance<ItemAcquiredPayload>(eventData);
        }
    }
}
