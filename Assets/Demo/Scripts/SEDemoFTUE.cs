using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics.Experimental;

public class SEDemoFTUE : SEDemo 
{
    public void PostInstallAction ()
    {
        DebugSend<PostInstallActionPayload>(
            AnalyticsEvent.Create<PostInstallActionPayload>()
        );
    }

    public void TutorialComplete ()
    {
        DebugSend<TutorialCompletePayload>(
            TutorialCompletePayload.CreateInstance("tutorial_test")
        );
    }

    public void TutorialSkip ()
    {
        DebugSend<TutorialSkipPayload>(
            TutorialSkipPayload.CreateInstance("tutorial_test")
        );
    }

    public void TutorialStart ()
    {
        DebugSend<TutorialStartPayload>(
            TutorialStartPayload.CreateInstance("tutorial_test")
        );
    }

    public void TutorialStep ()
    { 
        DebugSend<TutorialStepPayload>(
            TutorialStepPayload.CreateInstance("basic_step", "tutorial_test")
        );
    }
}
