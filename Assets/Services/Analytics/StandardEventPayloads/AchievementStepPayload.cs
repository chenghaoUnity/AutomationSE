using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Achievement Step standard event payload (<c>achievement_step</c>).
    /// <remarks>
    /// Send this event when a requirement or step toward completing a multi-part achievement is complete.
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can help provide insight into achievement completion rates among players. 
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "AchievementStepPayload.asset", menuName = "Analytics Events/User Engagement and Social/Achievement Step")]
    public class AchievementStepPayload : AchievementPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "achievement_step";

        static string k_ParamKey_StepIndex = "step_index";

        /// <summary>
        /// Gets the name of the standard event.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the index of the step completed in a multi-part achievement.
        /// </summary>
        /// <value>The index of the achievement step completed.</value>
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
        protected override void ValidatePayload()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_StepIndex);
        }

        /// <summary>
        /// Verifies the value and value type set for specific event payload data fields.
        /// <remarks>
        /// The <c>step_index</c> parameter value must be of type <c>int</c> to be valid.
        /// </remarks>
        /// </summary>
        /// <param name="key">The event data key.</param>
        /// <param name="value">The event data value.</param>
        protected override void ValidateDataField(string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_StepIndex)
            {
                ValidateDataValueType<int>(key, value);
            }
        }

        /// <summary>
        /// Creates a new instance of AchievementStepPayload and adds parameters to event data.
        /// </summary>
        /// <returns>A new instance of <see cref="AchievementStepPayload"/>.</returns>
        /// <param name="stepIndex">Index of the step completed in a multi-part achievement.</param>
        /// <param name="achievementId">The achievement ID.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AchievementStepPayload CreateInstance(int stepIndex, string achievementId, IDictionary<string, object> eventData = null)
        {
            var instance = CreateInstance<AchievementStepPayload>(achievementId, eventData);

            instance.SetParam(k_ParamKey_StepIndex, stepIndex);

            return instance;
        }
    }
}