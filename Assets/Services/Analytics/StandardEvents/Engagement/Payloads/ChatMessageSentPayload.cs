using System;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Chat Message Sent standard event payload (<c>chat_msg_sent</c>).
    /// <remarks>
    /// Send this event when the player sends a chat message in game. 
    /// </remarks>
    /// </summary>
    /// <remarks>
    /// This standard event can provide insight into how often users are sending chat messages in your game.
    /// </remarks>
    [Serializable, CreateAssetMenu(fileName = "ChatMessageSentPayload.asset", menuName = "Analytics Payloads/Engagement/Chat Message Sent")]
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
