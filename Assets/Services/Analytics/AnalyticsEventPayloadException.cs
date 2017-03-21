namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Analytics event payload exception.
    /// </summary>
    public class AnalyticsEventPayloadException : UnityException
    {
        /// <summary>
        /// Initializes a new instance of the AnalyticsEventPayloadException class.
        /// </summary>
        /// <param name="message">The exception message.</param>
        public AnalyticsEventPayloadException (string message) : base(message) { }
    }
}