using System;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Chat Message Sent (<c>chat_msg_sent</c>) standard event payload.
    /// <remarks>
    /// Send this event when the user sends a chat message in game. This event can provide insight into
    /// how often users are sending chat messages in your game.
    /// </remarks>
    /// </summary>
    [Serializable, CreateAssetMenu(fileName = "ChatMessageSentPayload.asset", menuName = "Analytics Events/User Engagement and Social/Chat Message Sent")]
    public class ChatMessageSentPayload : AnalyticsEventPayload
    {
        /// <summary>
        /// The name of the standard event.
        /// </summary>
        public static readonly string standardEventName = "chat_msg_sent";

        /// <summary>
        /// Gets the standard event name.
        /// </summary>
        /// <value>The standard event name.</value>
        public override string eventName
        {
            get { return standardEventName; }
        }
    }
}
