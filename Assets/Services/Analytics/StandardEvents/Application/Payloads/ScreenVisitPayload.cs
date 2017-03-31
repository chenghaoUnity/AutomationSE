using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Screen Visit standard event payload (<c>screen_visit</c>).
    /// <remarks>
    /// Send this event when the player opens a menu or visits a screen in the game.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into navigational flows, and may help predict when players may churn.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "ScreenVisitPayload.asset", menuName = "Analytics Payloads/Application/Screen Visit")]
    public class ScreenVisitPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "screen_visit";

        static readonly string k_ParamKey_ScreenName = "screen_name";

        /// <summary>
        /// Gets the standard event name.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets name of the screen or type of screen visited.
        /// </summary>
        /// <value>The name of the screen or type of screen visited.</value>
        public string screenType
        {
            get { return GetParam<string>(k_ParamKey_ScreenName); }
            set { SetParam(k_ParamKey_ScreenName, value); }
        }

        /// <summary>
        /// Sets name of the screen or type of screen visited.
        /// </summary>
        /// <param name="screenType">The name of the screen or type of screen visited.</param>
        public void SetScreenType (ScreenName screenType)
        {
            SetParam(k_ParamKey_ScreenName, screenType);
        }

        /// <summary>
        /// Verifies that any required event data parameters are set.
        /// <remarks>
        /// The <c>screen_name</c> parameter must be set for the payload to be valid.
        /// </remarks>
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_ScreenName);
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>screen_name</c> parameter value must be of type <c>string</c> to be valid.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_ScreenName)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates a new instance of ScreenVisitPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="ScreenVisitPayload"/>.</returns>
        /// <param name="screenName">The name of the screen or type of screen visited.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static ScreenVisitPayload CreateInstance (ScreenName screenName, IDictionary<string, object> eventData = null)
        {
            return CreateInstance(GetStandardParamValue(screenName), eventData);
        }

        /// <summary>
        /// Creates an instance of ScreenVisitPayload, adding screen type to event data. If event data is null, creates the dictionary.
        /// </summary>
        /// <returns>The instance of ScreenVisitPayload.</returns>
        /// <param name="screenName">The name of the screen or type of screen visited.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        new public static ScreenVisitPayload CreateInstance (string screenName, IDictionary<string, object> eventData = null)
        {
            var instance = CreateInstance<ScreenVisitPayload>(eventData);

            instance.SetParam(k_ParamKey_ScreenName, screenName);

            return instance;
        }
    }
}
