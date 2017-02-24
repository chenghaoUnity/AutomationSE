using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Screen visit payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "ScreenVisitPayload.asset", menuName = "Analytics Events/User Engagement and Social/Screen Visit")]
    public class ScreenVisitPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "screen_visit";

        static readonly string k_ParamKey_ScreenType = "screen_name";

        /// <summary>
        /// Gets the name of the event.
        /// </summary>
        /// <value>The name of the event.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the type of the screen.
        /// </summary>
        /// <value>The type of the screen.</value>
        public string screenType
        {
            get { return GetParam<string>(k_ParamKey_ScreenType); }
            set { SetParam(k_ParamKey_ScreenType, value); }
        }

        /// <summary>
        /// Sets the type of the screen.
        /// </summary>
        /// <param name="screenType">Screen type.</param>
        public void SetScreenType (ScreenName screenType)
        {
            SetParam(k_ParamKey_ScreenType, screenType);
        }

        /// <summary>
        /// Validates the payload.
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_ScreenType);
        }

        /// <summary>
        /// Validates the data field.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_ScreenType)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="screenType">Screen type.</param>
        /// <param name="eventData">Event data.</param>
        public static ScreenVisitPayload CreateInstance (ScreenName screenType, IDictionary<string, object> eventData)
        {
            return CreateInstance(GetStandardParamValue(screenType), eventData);
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="screenType">Screen type.</param>
        /// <param name="eventData">Event data.</param>
        new public static ScreenVisitPayload CreateInstance (string screenType, IDictionary<string, object> eventData)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_ScreenType, screenType);

            return CreateInstance<ScreenVisitPayload>(eventData);
        }
    }
}
