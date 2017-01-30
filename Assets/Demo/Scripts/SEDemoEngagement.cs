using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics.Experimental;

public class SEDemoEngagement : SEDemo 
{
    public void AchievementUnlock ()
    {
        DebugSend<AchievementUnlockedPayload>(
            AchievementUnlockedPayload.CreateInstance("achievement_test")
        );
    }

    public void ChatMessageSend ()
    {
        DebugSend<ChatMessageSentPayload>(
            AnalyticsEvent.Create<ChatMessageSentPayload>()
        );
    }

    public void PushNotificationClick ()
    {
        DebugSend<PushNotificationClickedPayload>(
            PushNotificationClickedPayload.CreateInstance("push_notification_test")
        );
    }

    public void PushNotificationEnable ()
    {
        DebugSend<PushNotificationEnabledPayload>(
            AnalyticsEvent.Create<PushNotificationEnabledPayload>()
        );
    }
}
