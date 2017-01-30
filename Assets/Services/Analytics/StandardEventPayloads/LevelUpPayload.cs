using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "LevelUpPayload.asset", menuName = "Analytics Events/Level Up")]
    public class LevelUpPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "level_up";

        protected static string k_ParamKey_OldLevel = "old_level";
        protected static string k_ParamKey_NewLevel = "new_level";

        public override string eventName
        {
            get { return standardEventName; }
        }

        public string oldLevel
        {
            get { return GetParam<string>(k_ParamKey_OldLevel); }
            set { SetParam(k_ParamKey_OldLevel, value); }
        }

        public string newLevel
        {
            get { return GetParam<string>(k_ParamKey_NewLevel); }
            set { SetParam(k_ParamKey_NewLevel, value); }
        }

        protected override void ValidatePayload ()
        {
            base.ValidatePayload();

            if (!HasParam(k_ParamKey_OldLevel))
            {
                OnValidationFailed(
                    string.Format(
                        k_ErrorFormat_RequiredParamNotSet,
                        k_ParamKey_OldLevel
                    )
                );
            }

            if (!HasParam(k_ParamKey_NewLevel))
            {
                OnValidationFailed(
                    string.Format(
                        k_ErrorFormat_RequiredParamNotSet,
                        k_ParamKey_NewLevel
                    )
                );
            }
        }

        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_OldLevel || key == k_ParamKey_NewLevel)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        public static LevelUpPayload CreateInstance (string oldLevel, string newLevel)
        {
            return CreateInstance(oldLevel, newLevel, new Dictionary<string, object>());
        }

        public static LevelUpPayload CreateInstance (string oldLevel, string newLevel, IDictionary<string, object> eventData)
        {
            eventData.Add(k_ParamKey_OldLevel, oldLevel);
            eventData.Add(k_ParamKey_NewLevel, newLevel);
            return CreateInstance<LevelUpPayload>(eventData);
        }
    }
}
