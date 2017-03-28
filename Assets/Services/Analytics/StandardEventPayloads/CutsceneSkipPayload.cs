using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Cutscene Skip standard event payload (<c>cutscene_skip</c>).
    /// <remarks>
    /// Send this event when the player opts to skip a cutscene or cinematic screen.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can help provide insight into how cutscenes may affect player engagement.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "CutsceneSkipPayload.asset", menuName = "Analytics Events/App Navigation/Cutscene Skip")]
    public class CutsceneSkipPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "cutscene_skip";

        static readonly string k_ParamKey_CutsceneName = "scene_name";

        /// <summary>
        /// Gets the name of the standard event.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the name of the cutscene skipped.
        /// </summary>
        /// <value>The cutscene name.</value>
        public string CutsceneName 
        { 
            get { return GetParam<string>(k_ParamKey_CutsceneName); } 
            set { SetParam(k_ParamKey_CutsceneName, value); } 
        }

        /// <summary>
        /// Verifies that any required event data parameters are set.
        /// <remarks>
        /// The <c>scene_name</c> parameter must be set for the payload to be valid.
        /// </remarks>
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_CutsceneName);
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>scene_name</c> parameter value must be of type <c>string</c> to be valid.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField(string key, object value)
        {
            if (key == k_ParamKey_CutsceneName)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates a new instance of CutsceneSkipPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="CutsceneSkipPayload"/> .</returns>
        /// <param name="cutsceneName">The name of the cutscene skipped.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        new public static CutsceneSkipPayload CreateInstance(string cutsceneName, IDictionary<string, object> eventData = null)
        {
            var instance = CreateInstance<CutsceneSkipPayload>(eventData);

            instance.SetParam(k_ParamKey_CutsceneName, cutsceneName);

            return instance;
        }
    }
}
