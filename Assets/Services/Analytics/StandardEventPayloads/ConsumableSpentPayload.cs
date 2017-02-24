using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Consumable spent payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "ConsumableSpentPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Consumable Spent")]
    public class ConsumableSpentPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "consumable_spent";

        static readonly string k_ParamKey_Name = "consumable_name";
        static readonly string k_ParamKey_Amount = "consumable_amount";
        static readonly string k_ParamKey_Balance = "consumable_balance";
        static readonly string k_ParamKey_Purchase = "item_purchased"; // Optional parameter

        /// <summary>
        /// Gets the name of the event.
        /// </summary>
        /// <value>The name of the event.</value>
        public override string eventName
        {
            get { return standardEventName; }
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
        /// Gets or sets the item purchased.
        /// </summary>
        /// <value>The item purchased.</value>
        public string itemPurchased
        {
            get { return GetParam<string>(k_ParamKey_Purchase); }
            set { SetParam(k_ParamKey_Purchase, value); }
        }

        /// <summary>
        /// Validates the payload.
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateAllDataKeysExist(k_ParamKey_Name, k_ParamKey_Amount, k_ParamKey_Balance);
        }

        /// <summary>
        /// Validates the data field.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_Name || key == k_ParamKey_Purchase)
            {
                ValidateDataValueType<string>(key, value);
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
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="name">Name.</param>
        /// <param name="itemPurchased">Item purchased.</param>
        /// <param name="eventData">Event data.</param>
        public static ConsumableSpentPayload CreateInstance (string name, int amount, int balance, string itemPurchased = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, (object)amount, balance, itemPurchased, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="name">Name.</param>
        /// <param name="itemPurchased">Item purchased.</param>
        /// <param name="eventData">Event data.</param>
        public static ConsumableSpentPayload CreateInstance (string name, float amount, float balance, string itemPurchased = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, (object)amount, balance, itemPurchased, eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="amount">Amount.</param>
        /// <param name="balance">Balance.</param>
        /// <param name="name">Name.</param>
        /// <param name="itemPurchased">Item purchased.</param>
        /// <param name="eventData">Event data.</param>
        public static ConsumableSpentPayload CreateInstance (string name, decimal amount, decimal balance, string itemPurchased = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, (object)amount, balance, itemPurchased, eventData);
        }

        static ConsumableSpentPayload CreateInstance (string name, object amount, object balance, string itemPurchased, IDictionary<string, object> eventData)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_Name, name);
            eventData.Add(k_ParamKey_Amount, amount);
            eventData.Add(k_ParamKey_Balance, balance);
            eventData.Add(k_ParamKey_Purchase, itemPurchased);

            return CreateInstance<ConsumableSpentPayload>(eventData);
        }
    }
}
