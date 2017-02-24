using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Consumable acquired payload.
    /// </summary>
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
        /// Gets or sets the amount.
        /// </summary>
        /// <value>The amount.</value>
        public object amount
        {
            get { return GetParam<object>(k_ParamKey_Amount); }
            set { SetParam(k_ParamKey_Amount, value); }
        }

        /// <summary>
        /// Gets or sets the balance.
        /// </summary>
        /// <value>The balance.</value>
        public object balance
        {
            get { return GetParam<object>(k_ParamKey_Balance); }
            set { SetParam(k_ParamKey_Balance, value); }
        }

        /// <summary>
        /// Validates the payload.
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateAllDataKeysExist(k_ParamKey_Type, k_ParamKey_Source, k_ParamKey_Name, k_ParamKey_Amount, k_ParamKey_Balance);
        }

        /// <summary>
        /// Validates the data field.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_Type || key == k_ParamKey_Source || key == k_ParamKey_Name)
            {
                ValidateDataValueType<string>(key, value);

                if (key == k_ParamKey_Type)
                {
                    ValidateDataValueExistsInEnum<AcquisitionType>(key, (string)value);
                }
            }
            else if (key == k_ParamKey_Amount || key == k_ParamKey_Balance)
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
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="eventData">Event data.</param>
        public static ConsumableAcquiredPayload CreateInstance (string name, AcquisitionType type, AcquisitionSource source, int amount, int balance, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, GetStandardParamValue(source), amount, balance, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="eventData">Event data.</param>
        public static ConsumableAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, int amount, int balance, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, source, (object)amount, balance, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="eventData">Event data.</param>
        public static ConsumableAcquiredPayload CreateInstance (string name, AcquisitionType type, AcquisitionSource source, float amount, float balance, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, GetStandardParamValue(source), amount, balance, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="eventData">Event data.</param>
        public static ConsumableAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, float amount, float balance, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, source, (object)amount, balance, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="eventData">Event data.</param>
        public static ConsumableAcquiredPayload CreateInstance (string name, AcquisitionType type, AcquisitionSource source, decimal amount, decimal balance, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, GetStandardParamValue(source), amount, balance, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="name">Name.</param>
        /// <param name="type">Type.</param>
        /// <param name="source">Source.</param>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="eventData">Event data.</param>
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
