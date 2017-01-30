using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.Analytics.Experimental;
using UnityEngine.SceneManagement;

public class SEDemoProgression : SEDemo 
{
    public int levelRank;

    public int levelIndex { get { return SceneManager.GetActiveScene().buildIndex; } }

    public void GameOver ()
    {
        DebugSend<GameOverPayload>(
            GameOverPayload.CreateInstance(levelIndex)
        );
    }

    public void GameStart ()
    {
		DebugSend<GameStartPayload>(
            GameStartPayload.CreateInstance(levelIndex)
        );
    }

    public void LevelComplete ()
    {
        DebugSend<LevelCompletePayload>(
            LevelCompletePayload.CreateInstance(levelIndex)
        );
    }

    public void LevelFail ()
    {
        DebugSend<LevelFailPayload>(
            LevelFailPayload.CreateInstance(levelIndex)
        );
    }

    public void LevelQuit ()
    {
        DebugSend<LevelQuitPayload>(
            LevelQuitPayload.CreateInstance(levelIndex)
        );
    }

    public void LevelStart ()
    {
        DebugSend<LevelStartPayload>(
            LevelStartPayload.CreateInstance(levelIndex)
        );
    }

    public void LevelUp ()
    {
        DebugSend<LevelUpPayload>(
            LevelUpPayload.CreateInstance(levelRank.ToString(), (++levelRank).ToString())
        );
    }

    public void StateNode ()
    {
        DebugSend<StateNodePayload>(
            StateNodePayload.CreateInstance("test_node", levelIndex.ToString())
        );
    }
}
