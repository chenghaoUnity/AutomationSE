using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "StateNodePayload.asset", menuName = "Analytics Events/State Node")]
    public class StateNodePayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "state_node";

        public override string eventName
        {
            get { return standardEventName; }
        }

        static readonly string k_ParamKey_NodeId = "node_id";
        static readonly string k_ParamKey_LevelId = "level_id";

        public string nodeId
        {
            get { return GetParam<string>(k_ParamKey_NodeId); }
            set { SetParam(k_ParamKey_NodeId, value); }
        }

        public string levelId
        {
            get { return GetParam<string>(k_ParamKey_LevelId); }
            set { SetParam(k_ParamKey_LevelId, value); }
        }

        protected override void ValidatePayload ()
        {
            if (!HasParam(k_ParamKey_NodeId))
            {
                OnValidationFailed(
                    string.Format(
                        k_ErrorFormat_RequiredParamNotSet,
                        k_ParamKey_NodeId
                    )
                );
            }

            if (!HasParam(k_ParamKey_LevelId))
            {
                OnValidationFailed(
                    string.Format(
                        k_ErrorFormat_RequiredParamNotSet,
                        k_ParamKey_LevelId
                    )
                );
            }
        }

        protected override void ValidateDataField (string key, object value)
        {
            base.ValidateDataField(key, value);

            if (key == k_ParamKey_NodeId || key == k_ParamKey_LevelId)
            {
                ValidateDataValueType<string>(key, value);
            }
        }

        public static StateNodePayload CreateInstance (string nodeId, string levelId)
        {
            return CreateInstance(nodeId, levelId, new Dictionary<string, object>());
        }

        public static StateNodePayload CreateInstance (string nodeId, string levelId, IDictionary<string, object> eventParams)
        {
            eventParams.Add(k_ParamKey_NodeId, nodeId);
            eventParams.Add(k_ParamKey_LevelId, levelId);
            return CreateInstance<StateNodePayload>(eventParams);
        }
    }
}
