using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Tutorial Step standard event payload (<c>tutorial_step</c>).
    /// <remarks>
    /// Send this event when the player completes a step or stage in a multi-part tutorial.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into tutorial progression rates among players.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "TutorialStepPayload.asset", menuName = "Analytics Events/First-Time User Experience/Tutorial Step")]
    public class TutorialStepPayload : TutorialPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "tutorial_step";

        static readonly string k_ParamKey_StepIndex = "step_index";

        /// <summary>
        /// Gets the standard event name.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the step or stage completed in a multi-part tutorial.
        /// </summary>
        /// <value>The step or stage completed in a multi-part tutorial.</value>
        public int stepIndex
        {
            get { return GetParam<int>(k_ParamKey_StepIndex); }
            set { SetParam(k_ParamKey_StepIndex, value); }
        }

        /// <summary>
        /// Verifies that any required event data parameters are set.
        /// <remarks>
        /// The <c>step_index</c> parameter must be set for the payload to be valid.
        /// </remarks>
        /// </summary>
        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_StepIndex);
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>step_index</c> parameter value must be of type <c>string</c> to be valid.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_StepIndex)
            {
                ValidateDataValueType<int>(key, value);
            }
        }

        /// <summary>
        /// Creates a new instance of TutorialStepPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="TutorialStepPayload"/>.</returns>
        /// <param name="stepIndex">The step or stage completed in a multi-part tutorial.</param>
        /// <param name="tutorialId">The tutorial name or ID (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static TutorialStepPayload CreateInstance (int stepIndex, string tutorialId = null, IDictionary<string, object> eventData = null)
        {
            var instance = CreateInstance<TutorialStepPayload>(tutorialId, eventData);

            instance.SetParam(k_ParamKey_StepIndex, stepIndex);

            return instance;
        }
    }
}
