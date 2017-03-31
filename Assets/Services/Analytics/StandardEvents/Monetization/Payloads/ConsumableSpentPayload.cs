using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Consumable Spent standard event payload (<c>consumable_spent</c>).
    /// <remarks>
    /// Send this event when the player spends a consumable resource.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into consumable resource spend rates.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "ConsumableSpentPayload.asset", menuName = "Analytics Payloads/Monetization/Consumable Spent")]
    public class ConsumableSpentPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "consumable_spent";

        static readonly string k_ParamKey_Name = "consumable_name";
        static readonly string k_ParamKey_Amount = "consumable_amount";
        static readonly string k_ParamKey_Balance = "consumable_balance";
        static readonly string k_ParamKey_Purchase = "item_purchased";

        /// <summary>
        /// Gets the standard event name.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
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
        /// Gets or sets the amount of consumable resources spent.
        /// </summary>
        /// <value>The amount of consumable resources spent.</value>
        public object amount
        {
            get { return GetParam<object>(k_ParamKey_Amount); }
            set { SetParam(k_ParamKey_Amount, value); }
        }

        /// <summary>
        /// Gets or sets new total balance, minus the consumable resources spent.
        /// </summary>
        /// <value>The new total balance.</value>
        public object balance
        {
            get { return GetParam<object>(k_ParamKey_Balance); }
            set { SetParam(k_ParamKey_Balance, value); }
        }

        /// <summary>
        /// Gets or sets the item purchased with the consumable resource.
        /// </summary>
        /// <value>The item purchased.</value>
        public string itemPurchased
        {
            get { return GetParam<string>(k_ParamKey_Purchase); }
            set { SetParam(k_ParamKey_Purchase, value); }
        }

        /// <summary>
        /// Verifies that any required event data parameters are set.
        /// <remarks>
        /// The <c>consumable_name</c>, <c>consumable_amount</c>, and <c>consumable_balance</c> parameters must be set for the payload to be valid.
        /// </remarks>
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateAllDataKeysExist(k_ParamKey_Name, k_ParamKey_Amount, k_ParamKey_Balance);
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>consumable_name</c> and <c>item_purcahsed</c> parameter values must be of type <c>string</c>, 
        /// while the <c>consumable_amount</c> and <c>consumable_balance</c> parameter values must be of types <c>int</c>, <c>float</c>, or <c>decimal</c>.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
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

#if UNITY_5_5_OR_NEWER
        /// <summary>
        /// Creates a new instance of ConsumableSpentPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="ConsumableSpentPayload"/>.</returns>
        /// <param name="name">The name of the consumable resource spent.</param>
        /// <param name="amount">The number of consumable resources spent.</param>
        /// <param name="balance">The new total balance, minus the consumable resource spent.</param>
        /// <param name="itemPurchased">The item purchased with the consumable resource (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static ConsumableSpentPayload CreateInstance (string name, int amount, int balance, string itemPurchased = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, (object)amount, balance, itemPurchased, eventData);
        }
#else
        /// <summary>
        /// Creates a new instance of ConsumableSpentPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="ConsumableSpentPayload"/>.</returns>
        /// <param name="name">The name of the consumable resource spent.</param>
        /// <param name="amount">The number of consumable resources spent.</param>
        /// <param name="balance">The new total balance, minus the consumable resource spent.</param>
        /// <param name="itemPurchased">The item purchased with the consumable resource.</param>
        /// <param name="eventData">Custom event data.</param>
        public static ConsumableSpentPayload CreateInstance (string name, int amount, int balance, string itemPurchased, IDictionary<string, object> eventData)
        {
            return CreateInstance(name, (object)amount, balance, itemPurchased, eventData);
        }
#endif

        /// <summary>
        /// Creates a new instance of ConsumableSpentPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="ConsumableSpentPayload"/>.</returns>
        /// <param name="name">The name of the consumable resource spent.</param>
        /// <param name="amount">The number of consumable resources spent.</param>
        /// <param name="balance">The new total balance, minus the consumable resource spent.</param>
        /// <param name="itemPurchased">The item purchased with the consumable resource (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static ConsumableSpentPayload CreateInstance (string name, float amount, float balance, string itemPurchased = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, (object)amount, balance, itemPurchased, eventData);
        }

#if UNITY_5_5_OR_NEWER
        /// <summary>
        /// Creates a new instance of ConsumableSpentPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="ConsumableSpentPayload"/>.</returns>
        /// <param name="name">The name of the consumable resource spent.</param>
        /// <param name="amount">The number of consumable resources spent.</param>
        /// <param name="balance">The new total balance, minus the consumable resource spent.</param>
        /// <param name="itemPurchased">The item purchased with the consumable resource (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static ConsumableSpentPayload CreateInstance (string name, decimal amount, decimal balance, string itemPurchased = null, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, (object)amount, balance, itemPurchased, eventData);
        }
#else
        /// <summary>
        /// Creates a new instance of ConsumableSpentPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="ConsumableSpentPayload"/>.</returns>
        /// <param name="name">The name of the consumable resource spent.</param>
        /// <param name="amount">The number of consumable resources spent.</param>
        /// <param name="balance">The new total balance, minus the consumable resource spent.</param>
        /// <param name="itemPurchased">The item purchased with the consumable resource.</param>
        /// <param name="eventData">Custom event data.</param>
        public static ConsumableSpentPayload CreateInstance (string name, decimal amount, decimal balance, string itemPurchased, IDictionary<string, object> eventData)
        {
            return CreateInstance(name, (object)amount, balance, itemPurchased, eventData);
        }
#endif

        static ConsumableSpentPayload CreateInstance (string name, object amount, object balance, string itemPurchased, IDictionary<string, object> eventData)
        {
            var instance = CreateInstance<ConsumableSpentPayload>(eventData);

            instance.SetParam(k_ParamKey_Name, name);
            instance.SetParam(k_ParamKey_Amount, amount);
            instance.SetParam(k_ParamKey_Balance, balance);
            instance.SetParam(k_ParamKey_Purchase, itemPurchased);

            return instance;
        }
    }
}
