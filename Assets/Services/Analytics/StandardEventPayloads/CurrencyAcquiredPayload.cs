using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Currency Acquired (<c>currency_acquired</c>) standard event payload.
    /// <remarks>
    /// Send this event when the player purchases or earns in-game currency.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into currency accumulation rates with respect to premium vs. soft acquisitions.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "CurrencyAcquiredPayload.asset", menuName = "Analytics Events/Monetization and Game Economy/Currency Acquired")]
    public class CurrencyAcquiredPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "currency_acquired";

        static readonly string k_ParamKey_Type = "type";
        static readonly string k_ParamKey_Source = "source";
        static readonly string k_ParamKey_Name = "currency_name";
        static readonly string k_ParamKey_Amount = "currency_amount";
        static readonly string k_ParamKey_Balance = "currency_balance";
        static readonly string k_ParamKey_PurchaseId = "purchase_id"; // Optional parameter
        static readonly string k_ParamKey_PurchaseName = "purchase_name"; // Optional parameter
        static readonly string k_ParamKey_PurchaseQty = "puchase_qty"; // Optional parameter

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
        /// Gets or sets the source by which the currency was acquired.
        /// </summary>
        /// <value>The acquisition source.</value>
        public string source
        {
            get { return GetParam<string>(k_ParamKey_Source); }
            set { SetParam(k_ParamKey_Source, value); }
        }

        /// <summary>
        /// Gets or sets the name of the in-game currency.
        /// </summary>
        /// <value>The name of the in-game currency.</value>
        new public string name
        {
            get { return GetParam<string>(k_ParamKey_Name); }
            set { SetParam(k_ParamKey_Name, value); }
        }

        /// <summary>
        /// Gets or sets the amount of in-game currency acquired..
        /// </summary>
        /// <value>The amount of in-game currency acquired.</value>
        public object amount
        {
            get { return GetParam<object>(k_ParamKey_Amount); }
            set { SetParam(k_ParamKey_Amount, value); }
        }

        /// <summary>
        /// Gets or sets new total balance, including the currency acquired.
        /// </summary>
        /// <value>The new total balance.</value>
        public object balance
        {
            get { return GetParam<object>(k_ParamKey_Balance); }
            set { SetParam(k_ParamKey_Balance, value); }
        }

        /// <summary>
        /// Gets or sets the ID of the store item purchased.
        /// </summary>
        /// <value>The ID of the store item purchased.</value>
        public string purchaseId
        {
            get { return GetParam<string>(k_ParamKey_PurchaseId); }
            set { SetParam(k_ParamKey_PurchaseId, value); }
        }

        /// <summary>
        /// Gets or sets the name of the store item purchased.
        /// </summary>
        /// <value>The name of the store item purchased.</value>
        public string purchaseName
        {
            get { return GetParam<string>(k_ParamKey_PurchaseName); }
            set { SetParam(k_ParamKey_PurchaseName, value); }
        }

        /// <summary>
        /// Gets or sets the quantity of store items purchased.
        /// </summary>
        /// <value>The quantity of store items purchased.</value>
        public int purchaseQty
        {
            get { return GetParam<int>(k_ParamKey_PurchaseQty); }
            set { SetParam(k_ParamKey_Amount, value); }
        }

        /// <summary>
        /// Verifies that any required event data parameters are set.
        /// <remarks>
        /// The <c>type</c>, <c>source</c>, <c>currency_name</c>, <c>currency_amount</c>, 
        /// and <c>currency_balance</c> parameters must be set for the payload to be valid.
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
        /// The <c>type</c>, <c>source</c>, <c>currency_name</c>, <c>purchase_name</c>, <c>purchase_id</c> parameter values must be of type <c>string</c>, 
        /// while the <c>currency_amount</c> and <c>currency_balance</c> parameter values must be of types <c>int</c>, <c>float</c>, or <c>decimal</c>.
        /// The <c>purchase_qty</c> parameter value must be of type <c>int</c>.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_Name || key == k_ParamKey_PurchaseId || key == k_ParamKey_PurchaseName || (key == k_ParamKey_Source && !(value is AcquisitionSource)))
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
            else if (key == k_ParamKey_Amount || key == k_ParamKey_Balance || key == k_ParamKey_PurchaseQty)
            {
                ValidateDataValueTypeIsNumeric(key, value);
            }
        }

        /// <summary>
        /// Sets the source by which the currency was acquired.
        /// </summary>
        /// <param name="source">The acquisition source.</param>
        public void SetSource (AcquisitionSource source)
        {
            SetParam(k_ParamKey_Source, GetStandardParamValue(source));
        }

#if UNITY_5_5_OR_NEWER
        /// <summary>
        /// Creates a new instance of CurrencyAcquiredPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="CurrencyAcquiredPayload"/>.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased (optional).</param>
        /// <param name="purchaseName">The name of the store item purchased (optional).</param>
        /// <param name="purchaseQty">The quantity of store items purchased (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static CurrencyAcquiredPayload CreateInstance (string name, AcquisitionType type, AcquisitionSource source, int amount, int balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, GetStandardParamValue(source), amount, balance, purchaseId, purchaseName, purchaseQty, eventData);
        }

        /// <summary>
        /// Creates an instance of the CurrencyAcquiredPayload class, adding currency name, acquistion type, source, amount, balance, purchase ID, purchase name,
        /// and purchase quantity to eventData. If eventData is null, creates the dictionary.
        /// </summary>
        /// <returns>The instance of CurrencyAcquiredPayload.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased (optional).</param>
        /// <param name="purchaseName">The name of the store item purchased (optional).</param>
        /// <param name="purchaseQty">The quantity of store items purchased (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static CurrencyAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, int amount, int balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, source, (object)amount, balance, purchaseId, purchaseName, purchaseQty, eventData);
        }
#else
        /// <summary>
        /// Creates a new instance of CurrencyAcquiredPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="CurrencyAcquiredPayload"/>.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        /// <param name="purchaseName">The name of the store item purchased.</param>
        /// <param name="purchaseQty">The quantity of store items purchased.</param>
        /// <param name="eventData">Custom event data.</param>
        public static CurrencyAcquiredPayload CreateInstance (string name, AcquisitionType type, AcquisitionSource source, int amount, int balance, string purchaseId, string purchaseName, int purchaseQty, IDictionary<string, object> eventData)
        {
            return CreateInstance(name, type, GetStandardParamValue(source), amount, balance, purchaseId, purchaseName, purchaseQty, eventData);
        }

        /// <summary>
        /// Creates an instance of the CurrencyAcquiredPayload class, adding currency name, acquistion type, source, amount, balance, purchase ID, purchase name,
        /// and purchase quantity to eventData. If eventData is null, creates the dictionary.
        /// </summary>
        /// <returns>The instance of CurrencyAcquiredPayload.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        /// <param name="purchaseName">The name of the store item purchased.</param>
        /// <param name="purchaseQty">The quantity of store items purchased.</param>
        /// <param name="eventData">Custom event data.</param>
        public static CurrencyAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, int amount, int balance, string purchaseId, string purchaseName, int purchaseQty, IDictionary<string, object> eventData)
        {
            return CreateInstance(name, type, source, (object)amount, balance, purchaseId, purchaseName, purchaseQty, eventData);
        }
#endif

        /// <summary>
        /// Creates an instance of the CurrencyAcquiredPayload class, adding currency name, acquistion type, source, amount, balance, purchase ID, purchase name,
        /// and purchase quantity to eventData. If eventData is null, creates the dictionary.
        /// </summary>
        /// <returns>The instance of CurrencyAcquiredPayload.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased (optional).</param>
        /// <param name="purchaseName">The name of the store item purchased (optional).</param>
        /// <param name="purchaseQty">The quantity of store items purchased (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static CurrencyAcquiredPayload CreateInstance (string name, AcquisitionType type, AcquisitionSource source, float amount, float balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, GetStandardParamValue(source), amount, balance, purchaseId, purchaseName, purchaseQty, eventData);
        }

        /// <summary>
        /// Creates an instance of the CurrencyAcquiredPayload class, adding currency name, acquistion type, source, amount, balance, purchase ID, purchase name,
        /// and purchase quantity to eventData. If eventData is null, creates the dictionary.
        /// </summary>
        /// <returns>The instance of CurrencyAcquiredPayload.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased (optional).</param>
        /// <param name="purchaseName">The name of the store item purchased (optional).</param>
        /// <param name="purchaseQty">The quantity of store items purchased (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static CurrencyAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, float amount, float balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, source, (object)amount, balance, purchaseId, purchaseName, purchaseQty, eventData);
        }

#if UNITY_5_5_OR_NEWER
        /// <summary>
        /// Creates an instance of the CurrencyAcquiredPayload class, adding currency name, acquistion type, source, amount, balance, purchase ID, purchase name,
        /// and purchase quantity to eventData. If eventData is null, creates the dictionary.
        /// </summary>
        /// <returns>The instance of CurrencyAcquiredPayload.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased (optional).</param>
        /// <param name="purchaseName">The name of the store item purchased (optional).</param>
        /// <param name="purchaseQty">The quantity of store items purchased (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static CurrencyAcquiredPayload CreateInstance (string name, AcquisitionType type, AcquisitionSource source, decimal amount, decimal balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, GetStandardParamValue(source), amount, balance, purchaseId, purchaseName, purchaseQty, eventData);
        }

        /// <summary>
        /// Creates an instance of the CurrencyAcquiredPayload class, adding currency name, acquistion type, source, amount, balance, purchase ID, purchase name,
        /// and purchase quantity to eventData. If eventData is null, creates the dictionary.
        /// </summary>
        /// <returns>The instance of CurrencyAcquiredPayload.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased (optional).</param>
        /// <param name="purchaseName">The name of the store item purchased (optional).</param>
        /// <param name="purchaseQty">The quantity of store items purchased (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static CurrencyAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, decimal amount, decimal balance, string purchaseId = null, string purchaseName = null, int purchaseQty = 1, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(name, type, source, (object)amount, balance, purchaseId, purchaseName, purchaseQty, eventData);
        }
#else
        /// <summary>
        /// Creates an instance of the CurrencyAcquiredPayload class, adding currency name, acquistion type, source, amount, balance, purchase ID, purchase name,
        /// and purchase quantity to eventData. If eventData is null, creates the dictionary.
        /// </summary>
        /// <returns>The instance of CurrencyAcquiredPayload.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        /// <param name="purchaseName">The name of the store item purchased.</param>
        /// <param name="purchaseQty">The quantity of store items purchased.</param>
        /// <param name="eventData">Custom event data.</param>
        public static CurrencyAcquiredPayload CreateInstance (string name, AcquisitionType type, AcquisitionSource source, decimal amount, decimal balance, string purchaseId, string purchaseName, int purchaseQty, IDictionary<string, object> eventData)
        {
            return CreateInstance(name, type, GetStandardParamValue(source), amount, balance, purchaseId, purchaseName, purchaseQty, eventData);
        }

        /// <summary>
        /// Creates an instance of the CurrencyAcquiredPayload class, adding currency name, acquistion type, source, amount, balance, purchase ID, purchase name,
        /// and purchase quantity to eventData. If eventData is null, creates the dictionary.
        /// </summary>
        /// <returns>The instance of CurrencyAcquiredPayload.</returns>
        /// <param name="name">The name of the in-game currency.</param>
        /// <param name="type">Set to AcquisitionType.Premium if purchased with real-world money; otherwise, AcqusitionType.Soft.</param>
        /// <param name="source">The source by which the currency was acquired.</param>
        /// <param name="amount">The amount of currency acquired.</param>
        /// <param name="balance">The new total balance, including the currency acquired.</param>
        /// <param name="purchaseId">The ID of the store item purchased.</param>
        /// <param name="purchaseName">The name of the store item purchased.</param>
        /// <param name="purchaseQty">The quantity of store items purchased.</param>
        /// <param name="eventData">Custom event data.</param>
        public static CurrencyAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, decimal amount, decimal balance, string purchaseId, string purchaseName, int purchaseQty, IDictionary<string, object> eventData)
        {
            return CreateInstance(name, type, source, (object)amount, balance, purchaseId, purchaseName, purchaseQty, eventData);
        }
#endif

        static CurrencyAcquiredPayload CreateInstance (string name, AcquisitionType type, string source, object amount, object balance, string purchaseId, string purchaseName, int purchaseQty, IDictionary<string, object> eventData)
        {
            var instance = CreateInstance<CurrencyAcquiredPayload>(eventData);

            instance.SetParam(k_ParamKey_Type, GetStandardParamValue(type));
            instance.SetParam(k_ParamKey_Source, source);
            instance.SetParam(k_ParamKey_Name, name);
            instance.SetParam(k_ParamKey_Amount, amount);
            instance.SetParam(k_ParamKey_Balance, balance);
            instance.SetParam(k_ParamKey_PurchaseId, purchaseId);
            instance.SetParam(k_ParamKey_PurchaseName, purchaseName);

            if (!string.IsNullOrEmpty(purchaseId) || !string.IsNullOrEmpty(purchaseName) || purchaseQty > 1 || purchaseQty < 0)
            {
                instance.SetParam(k_ParamKey_PurchaseQty, purchaseQty);
            }

            return instance;
        }
    }
}
