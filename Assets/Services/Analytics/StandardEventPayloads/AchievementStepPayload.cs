using System;
using System.Collections.Generic;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Achievement step payload.
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "AchievementStepPayload.asset", menuName = "Analytics Events/User Engagement and Social/Achievement Step")]
    public class AchievementStepPayload : AchievementPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "achievement_step";

        /// <summary>
        /// The index of the k parameter key step.
        /// </summary>
        protected static string k_ParamKey_StepIndex = "step_index";

        /// <summary>
        /// Gets the name of the event.
        /// </summary>
        /// <value>The name of the event.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }

        /// <summary>
        /// Gets or sets the index of the step.
        /// </summary>
        /// <value>The index of the step.</value>
        public int stepIndex 
        {
            get { return GetParam<int>(k_ParamKey_StepIndex); }
            set { SetParam(k_ParamKey_StepIndex, value); }
        }

        /// <summary>
        /// Validates the payload.
        /// </summary>
        protected override void ValidatePayload()
        {
            base.ValidatePayload();

            ValidateDataKeyExists(k_ParamKey_StepIndex);
        }

        /// <summary>
        /// Validates the data field.
        /// </summary>
        /// <param name="key">Key.</param>
        /// <param name="value">Value.</param>
        protected override void ValidateDataField(string key, object value)
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
        /// <param name="achievementId">Achievement identifier.</param>
        /// <param name="eventData">Event data.</param>
        public static AchievementStepPayload CreateInstance(int stepIndex, string achievementId, IDictionary<string, object> eventData)
        {
            if (eventData == null)
            {
                eventData = new Dictionary<string, object>();
            }

            eventData.Add(k_ParamKey_StepIndex, stepIndex);

            return CreateInstance<AchievementStepPayload>(achievementId, eventData);
        }
    }
}