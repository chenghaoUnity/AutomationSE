namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Analytics event payload exception.
    /// </summary>
    public class AnalyticsEventPayloadException : UnityException
    {
        /// <summary>
        /// Initializes a new instance of the
        /// <see cref="T:UnityEngine.Analytics.Experimental.AnalyticsEventPayloadException"/> class.
        /// </summary>
        /// <param name="message">Message.</param>
        public AnalyticsEventPayloadException (string message) : base(message) { }
    }
}