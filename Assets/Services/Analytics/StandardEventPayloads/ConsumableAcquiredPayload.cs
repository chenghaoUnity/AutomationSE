using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Consumable Acquired standard event payload (<c>consumable_acquired</c>).
    /// <remarks>
    /// Send this event when the player purchases or earns a consumable resource.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into consumable resource accumulation rates with respect to premium vs. soft acquisitions.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "ConsumableAcquiredPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Consumable Acquired")]
    public class ConsumableAcquiredPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "consumable_acquired";

        static readonly string k_ParamKey_Type = "type";
        static readonly string k_ParamKey_Source = "source";
        static readonly string k_ParamKey_Name = "consumable_name";
        static readonly string k_ParamKey_Amount = "consumable_amount";
        static readonly string k_ParamKey_Balance = "consumable_balance";

        /// <summary>
        /// Gets the standard event name.
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
        /// Gets or sets the source by which the consumable resource was acquired.
        /// </summary>
        /// <value>The acquisition source.</value>
        public string source
        {
            get { return GetParam<string>(k_ParamKey_Source); }
            set { SetParam(k_ParamKey_Source, value); }
        }

        /// <summary>
        /// Gets or sets the name of the in-game consumable resource.
        /// </summary>
        /// <value>The name of the in-game consumable resource.</value>
        new public string name
        {
            get { return GetParam<string>(k_ParamKey_Name); }
            set { SetParam(k_ParamKey_Name, value); }
        }

        /// <summary>
        /// Gets or sets the amount of consumable resources acquired.
        /// </summary>
        /// <value>The amount of consumable resources acquired.</value>
        public object amount
        {
            get { return GetParam<object>(k_ParamKey_Amount); }
            set { SetParam(k_ParamKey_Amount, value); }
        }

        /// <summary>
        /// Gets or sets new total balance, including the consumable resources acquired.
        /// </summary>
        /// <value>The new total balance.</value>
        public object balance
        {
            get { return GetParam<object>(k_ParamKey_Balance); }
            set { SetParam(k_ParamKey_Balance, value); }
        }

        /// <summary>
        /// Verifies that any required event data parameters are set.
        /// <remarks>
        /// The <c>type</c>, <c>source</c>, <c>consumable_name</c>, <c>consumable_amount</c>, 
        /// and <c>consumable_balance</c> parameters must be set for the payload to be valid.
        /// </remarks>
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateAllDataKeysExist(k_ParamKey_Type, k_ParamKey_Source, k_ParamKey_Name, k_ParamKey_Amount, k_ParamKey_Balance);
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>type</c>, <c>source</c>, and <c>consumable_name</c> parameter values must be of type <c>string</c>, 
        /// while the <c>consumable_amount</c> and <c>consumable_balance</c> parameter values must be of types <c>int</c>, <c>float</c>, or <c>decimal</c>.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_Name || (key == k_ParamKey_Source && !(value is AcquisitionSource)))
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
            else if (key == k_ParamKey_Amount || key == k_ParamKey_Balance)
            {
                ValidateDataValueTypeIsNumeric(key, value);
            }
        }

        /// <summary>
        /// Creates a new instance of ConsumableAcquiredPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="ConsumableAcquiredPayload"/>.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static ConsumableAcquiredPayload CreateInstance (string name, AcquisitionType type, AcquisitionSource source, int amount, int balance, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, GetStandardParamValue(source), amount, balance, eventData);
        }

        /// <summary>
        /// Creates a new instance of ConsumableAcquiredPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="ConsumableAcquiredPayload"/>.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static ConsumableAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, int amount, int balance, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, source, (object)amount, balance, eventData);
        }

        /// <summary>
        /// Creates a new instance of ConsumableAcquiredPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="ConsumableAcquiredPayload"/>.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static ConsumableAcquiredPayload CreateInstance (string name, AcquisitionType type, AcquisitionSource source, float amount, float balance, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, GetStandardParamValue(source), amount, balance, eventData);
        }

        /// <summary>
        /// Creates a new instance of ConsumableAcquiredPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="ConsumableAcquiredPayload"/>.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static ConsumableAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, float amount, float balance, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, source, (object)amount, balance, eventData);
        }

        /// <summary>
        /// Creates a new instance of ConsumableAcquiredPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="ConsumableAcquiredPayload"/>.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static ConsumableAcquiredPayload CreateInstance (string name, AcquisitionType type, AcquisitionSource source, decimal amount, decimal balance, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, GetStandardParamValue(source), amount, balance, eventData);
        }

        /// <summary>
        /// Creates a new instance of ConsumableAcquiredPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="ConsumableAcquiredPayload"/>.</returns>
        /// <param name="name">The name of the consumable resource acquired.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the consumable resource was acquired.</param>
        /// <param name="amount">The number of consumable resources acquired.</param>
        /// <param name="balance">The new total balance, including the consumable resource acquired.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static ConsumableAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, decimal amount, decimal balance, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, source, (object)amount, balance, eventData);
        }

        static ConsumableAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, object amount, object balance, IDictionary<string, object> eventData)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_Type, GetStandardParamValue(type));
            eventData.Add(k_ParamKey_Source, source);
            eventData.Add(k_ParamKey_Name, name);
            eventData.Add(k_ParamKey_Amount, amount);
            eventData.Add(k_ParamKey_Balance, balance);

            return CreateInstance<ConsumableAcquiredPayload>(eventData);
        }
    }
}
