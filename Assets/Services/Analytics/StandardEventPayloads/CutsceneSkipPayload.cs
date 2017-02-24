using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Cutscene skip payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "CutsceneSkipPayload.asset", menuName = "Analytics Events/App Navigation/Cutscene Skip")]
    public class CutsceneSkipPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "cutscene_skip";

        static readonly string k_ParamKey_SceneName = "scene_name";

        /// <summary>
        /// Gets the name of the event.
        /// </summary>
        /// <value>The name of the event.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the name of the scene.
        /// </summary>
        /// <value>The name of the scene.</value>
        public string sceneName 
        { 
            get { return GetParam<string>(k_ParamKey_SceneName); } 
            set { SetParam(k_ParamKey_SceneName, value); } 
        }

        /// <summary>
        /// Validates the payload.
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_SceneName);
        }

        /// <summary>
        /// Validates the data field.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        protected override void ValidateDataField(string key, object value)
        {
            if (key == k_ParamKey_SceneName)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="sceneName">Scene name.</param>
        /// <param name="eventData">Event data.</param>
        new public static CutsceneSkipPayload CreateInstance(string sceneName, IDictionary<string, object> eventData)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_SceneName, sceneName);

            return CreateInstance<CutsceneSkipPayload>(eventData);
        }
    }
}
