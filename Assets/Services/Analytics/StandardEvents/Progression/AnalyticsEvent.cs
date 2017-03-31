using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    public static partial class AnalyticsEvent // Progression Events
    {
        /// <summary>
        /// Sends a <c>game_over</c> event using the GameOverPayload.
        /// <remarks>
        /// Send this event when gameplay ends.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight to duration of gameplay and progression rates among players. 
        /// The <c>game_over</c> event should be preceded by a <see cref="GameStartPayload"><c>game_start</c></see> event, 
        /// sent using AnalyticsEvent.GameStart or GameStartPayload.Send.
        /// This event is intended for use with games that do not utilize a traditional level structure, or for games that advance through 
        /// multiple levels over the course of a single gameplay while starting from a common entry level, such as 0 or 1.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult GameOver (string levelName = null, IDictionary<string, object> eventData = null)
        {
            return GameOverPayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>game_over</c> event using the GameOverPayload.
        /// <remarks>
        /// Send this event when gameplay ends.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight to duration of gameplay and progression rates among players. 
        /// The <c>game_start</c> event should precede the <see cref="GameOverPayload"><c>game_over</c></see> event, 
        /// sent using AnalyticsEvent.GameOver or GameOverPayload.Send.
        /// This event is intended for use with games that do not utilize a traditional level structure, or for games that advance through 
        /// multiple levels over the course of a single gameplay while starting from a common entry level, such as 0 or 1.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult GameOver (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return GameOverPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>game_start</c> event using the GameStartPayload.
        /// <remarks>
        /// Send this event when gameplay starts.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight to duration of gameplay and progression rates among players. 
        /// The <c>game_start</c> event should precede the <see cref="GameOverPayload"><c>game_over</c></see> event, 
        /// sent using AnalyticsEvent.GameOver or GameOverPayload.Send.
        /// This event is intended for use with games that do not utilize a traditional level structure, or for games that advance through 
        /// multiple levels over the course of a single gameplay while starting from a common entry level, such as 0 or 1.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult GameStart (IDictionary<string, object> eventData = null)
        {
            return AnalyticsEventPayload.CreateInstance<GameStartPayload>(eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_complete</c> event using the LevelCompletePayload.
        /// <remarks>
        /// Send this event when the player sucessfully completes a level.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into level progression rates among players.
        /// The <c>level_complete</c> event should be preceded by a <see cref="LevelStartPayload"><c>level_start</c></see> event, 
        /// sent using AnalyticsEvent.LevelStart or LevelStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelComplete (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelCompletePayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_complete</c> event using the LevelCompletePayload.
        /// <remarks>
        /// Send this event when the player sucessfully completes a level.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into level progression rates among players.
        /// The <c>level_complete</c> event should be preceded by a <see cref="LevelStartPayload"><c>level_start</c></see> event, 
        /// sent using AnalyticsEvent.LevelStart or LevelStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelComplete (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelCompletePayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_fail</c> event using the LevelFailPayload.
        /// <remarks>
        /// Send this event when the player fails to successfully complete a level.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into level progression rates among players, and potentially help predict when players may churn.
        /// The <c>level_fail</c> event should be preceded by a <see cref="LevelStartPayload"><c>level_start</c></see> event, 
        /// sent using AnalyticsEvent.LevelStart or LevelStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelFail (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelFailPayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_fail</c> event using the LevelFailPayload.
        /// <remarks>
        /// Send this event when the player fails to successfully complete a level.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into level progression rates among players, and potentially help predict when players may churn.
        /// The <c>level_fail</c> event should be preceded by a <see cref="LevelStartPayload"><c>level_start</c></see> event, 
        /// sent using AnalyticsEvent.LevelStart or LevelStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelFail (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelFailPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_quit</c> event using the LevelQuitPayload.
        /// <remarks>
        /// Send this event when the player opts to quit from a level before completing it.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into gameplay attrition rates by level, and potentially help predict when players may churn.
        /// The <c>level_quit</c> event should be preceded by a <see cref="LevelStartPayload"><c>level_start</c></see> event, 
        /// sent using AnalyticsEvent.LevelStart or LevelStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelQuit (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelQuitPayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_quit</c> event using the LevelQuitPayload.
        /// <remarks>
        /// Send this event when the player opts to quit from a level before completing it.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into gameplay attrition rates by level, and potentially help predict when players may churn.
        /// The <c>level_quit</c> event should be preceded by a <see cref="LevelStartPayload"><c>level_start</c></see> event, 
        /// sent using AnalyticsEvent.LevelStart or LevelStartPayload.Send.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelQuit (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelQuitPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_skip</c> event using the LevelSkipPayload.
        /// <remarks>
        /// Send this event when the player opts to skip a level in order to contiue onto the next without having to completing it first.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into level progression rates among players, and potentially help predict when players may churn.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelSkip (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelSkipPayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_skip</c> event using the LevelSkipPayload.
        /// <remarks>
        /// Send this event when the player opts to skip a level in order to contiue onto the next without having to completing it.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into level progression rates among players, and potentially help predict when players may churn.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelSkip (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelSkipPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_start</c> event using the LevelStartPayload.
        /// <remarks>
        /// Send this event when the player enters into a level.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into level progression rates among players.
        /// The <c>level_start</c> event should precede most other level specific events, including <see cref="LevelCompletePayload">
        /// <c>level_complete</c></see>, <see cref="LevelFailPayload"><c>level_fail</c></see>, and <see cref="LevelQuitPayload"><c>level_quit</c></see>. 
        /// The <see cref="LevelSkipPayload"><c>level_skip</c></see> event does not need to be preceded by <c>level_start</c> 
        /// if the level is skipped without having to enter into the level.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelName">The level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelStart (string levelName, IDictionary<string, object> eventData = null)
        {
            return LevelStartPayload.CreateInstance(levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_start</c> event using the LevelStartPayload.
        /// <remarks>
        /// Send this event when the player enters into a level.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into level progression rates among players.
        /// The <c>level_start</c> event should precede most other level specific events, including <see cref="LevelCompletePayload">
        /// <c>level_complete</c></see>, <see cref="LevelFailPayload"><c>level_fail</c></see>, and <see cref="LevelQuitPayload"><c>level_quit</c></see>. 
        /// The <see cref="LevelSkipPayload"><c>level_skip</c></see> event does not need to be preceded by <c>level_start</c> 
        /// if the level is skipped without having to enter into the level.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="levelIndex">The level index or number.</param>
        /// <param name="levelName">The level name (optional).</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelStart (int levelIndex, string levelName = null, IDictionary<string, object> eventData = null)
        {
            return LevelStartPayload.CreateInstance(levelIndex, levelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_up</c> event using the LevelUpPayload.
        /// <remarks>
        /// Send this event when the player rank increases, or when the accumulated experience reaches the next level tier.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into gameplay progression rates among players.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="oldLevelName">The old rank or level name.</param>
        /// <param name="newLevelName">The new rank or level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelUp (string oldLevelName, string newLevelName, IDictionary<string, object> eventData = null)
        {
            return LevelUpPayload.CreateInstance(oldLevelName, newLevelName, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_up</c> event using the LevelUpPayload.
        /// <remarks>
        /// Send this event when the player rank increases, or when the accumulated experience reaches the next level tier.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into gameplay progression rates among players.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="oldLevelIndex">The level index or number.</param>
        /// <param name="newLevelIndex">The level index or number.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelUp (int oldLevelIndex, int newLevelIndex, IDictionary<string, object> eventData = null)
        {
            return LevelUpPayload.CreateInstance(oldLevelIndex, newLevelIndex, eventData).Send();
        }

        /// <summary>
        /// Sends a <c>level_up</c> event using the LevelUpPayload.
        /// <remarks>
        /// Send this event when the player rank increases, or when the accumulated experience reaches the next level tier.
        /// </remarks>
        /// </summary>
        /// <remarks>
        /// This standard event can help provide insight into gameplay progression rates among players.
        /// </remarks>
        /// <returns>The result of the analytics event sent.</returns>
        /// <param name="oldLevelIndex">The level index or number.</param>
        /// <param name="newLevelIndex">The level index or number.</param>
        /// <param name="oldLevelName">The old rank or level name.</param>
        /// <param name="newLevelName">The new rank or level name.</param>
        /// <param name="eventData">Custom event data (optional).</param>
        public static AnalyticsResult LevelUp (int oldLevelIndex, int newLevelIndex, string oldLevelName, string newLevelName, IDictionary<string, object> eventData = null)
        {
            return LevelUpPayload.CreateInstance(oldLevelIndex, newLevelIndex, oldLevelName, newLevelName, eventData).Send();
        }
    }
}
