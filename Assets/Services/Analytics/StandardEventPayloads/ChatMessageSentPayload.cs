using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    [Serializable]
    [CreateAssetMenu(fileName = "ChatMessageSentPayload.asset", menuName = "Analytics Events/User Engagement and Social/Chat Message Sent")]
    public class ChatMessageSentPayload : AnalyticsEventPayload
    {
        public static readonly string standardEventName = "chat_msg_sent";

        public override string eventName
        {
            get { return standardEventName; }
        }
    }
}
