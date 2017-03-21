using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Item Acquired standard event payload (<c>item_acquired</c>).
    /// <remarks>
    /// Send this event when the player purchases or earns a non-consumable item.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into item accumulation rates between players, 
    /// and the effect non-consumable items might have on in-game economies.
    /// </remarks>
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
        static readonly string k_ParamKey_ResourceType = "resource_type";

        /// <summary>
        /// Gets the name of the standard event.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the acquisition type, which indicates whether the item was purchased with real-world money.
        /// </summary>
        /// <value>AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</value>
        public AcquisitionType type
        {
            get { return GetParam<AcquisitionType>(k_ParamKey_Type); }
            set { SetParam(k_ParamKey_Type, value); }
        }

        /// <summary>
        /// Gets or sets the source by which the item was acquired.
        /// </summary>
        /// <value>The item source.</value>
        public string source
        {
            get { return GetParam<string>(k_ParamKey_Source); }
            set { SetParam(k_ParamKey_Source, value); }
        }

        /// <summary>
        /// Gets or sets the name of the item.
        /// </summary>
        /// <value>The item name.</value>
        new public string name
        {
            get { return GetParam<string>(k_ParamKey_Name); }
            set { SetParam(k_ParamKey_Name, value); }
        }

        /// <summary>
        /// Gets or sets the type of resource used to acquire the item.
        /// </summary>
        /// <value>The resource type used to acquire the item.</value>
        public string resourceType
        {
            get { return GetParam<string>(k_ParamKey_ResourceType); } 
            set { SetParam(k_ParamKey_ResourceType, value); }
        }

        /// <summary>
        /// Verifies that any required event data parameters are set.
        /// <remarks>
        /// The <c>item_name</c>, <c>type</c>, and <c>source</c> parameters must be set for the payload to be valid.
        /// </remarks>
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateAllDataKeysExist(k_ParamKey_Type, k_ParamKey_Source, k_ParamKey_Name);
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>item_name</c>, <c>source</c>, and <c>resource_type</c> parameter values must be of type <c>string</c>, 
        /// while the <c>type</c> parameter value must be a <c>string</c> value of AcquisitionType to be valid.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_Name || key == k_ParamKey_ResourceType || (key == k_ParamKey_Source && !(value is AcquisitionSource)))
            {
                ValidateDataValueType<string>(key, value);
            }
            else if (key == k_ParamKey_Type)
            {
                if (value is string)
                {
                    ValidateDataValueExistsInEnum<AcquisitionType>(key, (string)value);
                }
                else
                {
                    ValidateDataValueType<AcquisitionType>(key, value);
                }
            }
        }

        /// <summary>
        /// Creates a new instance of ItemAcquiredPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="ItemAcquiredPayload"/>.</returns>
        /// <param name="name">The name of the item acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the item was acquired.</param>
        /// <param name="resourceType">The resource used to acquire the item (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static ItemAcquiredPayload CreateInstance (string name, AcquisitionType type, AcquisitionSource source, string resourceType = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, GetStandardParamValue(source), resourceType, eventData);
        }

        /// <summary>
        /// Creates a new instance of ItemAcquiredPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="ItemAcquiredPayload"/>.</returns>
        /// <param name="name">The name of the item acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the item was acquired.</param>
        /// <param name="resourceType">The resource used to acquire the item (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static ItemAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, string resourceType = null, IDictionary<string, object> eventData = null)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_Type, GetStandardParamValue(type));
            eventData.Add(k_ParamKey_Source, source);
            eventData.Add(k_ParamKey_Name, name);
            eventData.Add(k_ParamKey_ResourceType, resourceType);

            return CreateInstance<ItemAcquiredPayload>(eventData);
        }
    }
}
