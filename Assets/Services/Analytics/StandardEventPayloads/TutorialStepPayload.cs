using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Tutorial step payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "TutorialStepPayload.asset", menuName = "Analytics Events/First-Time User Experience/Tutorial Step")]
    public class TutorialStepPayload : TutorialPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "tutorial_step";

        static readonly string k_ParamKey_StepIndex = "step_index";

        /// <summary>
        /// Gets the name of the event.
        /// </summary>
        /// <value>The name of the event.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the step identifier.
        /// </summary>
        /// <value>The step identifier.</value>
        public int stepId
        {
            get { return GetParam<int>(k_ParamKey_StepIndex); }
            set { SetParam(k_ParamKey_StepIndex, value); }
        }

        /// <summary>
        /// Validates the payload.
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_StepIndex);
        }

        /// <summary>
        /// Validates the data field.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_StepIndex)
            {
                ValidateDataValueType<int>(key, value);
            }
        }

        /// <summary>
        /// Creates the instance.
        /// </summary>
        /// <returns>The instance.</returns>
        /// <param name="stepIndex">Step index.</param>
        /// <param name="tutorialId">Tutorial identifier.</param>
        /// <param name="eventData">Event data.</param>
        public static TutorialStepPayload CreateInstance (int stepIndex, string tutorialId, IDictionary<string, object> eventData)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_StepIndex, stepIndex);

            return CreateInstance<TutorialStepPayload>(tutorialId, eventData);
        }
    }
}
