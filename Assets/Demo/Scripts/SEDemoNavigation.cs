using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics.Experimental;

public class SEDemoNavigation : SEDemo 
{
    public void CutsceneSkip ()
    {
        DebugSend<CutsceneSkipPayload>(
            CutsceneSkipPayload.CreateInstance("cutscene_test")
        );
    }

    public void MainMenu ()
    {
        DebugSend<MainMenuPayload>(
            AnalyticsEvent.Create<MainMenuPayload>()
        );
    }
}
