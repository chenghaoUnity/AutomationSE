#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Analytics.GameObserver
struct GameObserver_t75592769_0;
// UnityEngine.Analytics.IPlatformWrapper
struct IPlatformWrapper_t1050919888_0;
// UnityEngine.Analytics.IGameObserverListener
struct IGameObserverListener_t197642380_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Analytics.GameObserver::.ctor()
extern "C"  void GameObserver__ctor_m1427892661_0 (GameObserver_t75592769_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.GameObserver UnityEngine.Analytics.GameObserver::CreateComponent(UnityEngine.Analytics.IPlatformWrapper,UnityEngine.Analytics.IGameObserverListener)
extern "C"  GameObserver_t75592769_0 * GameObserver_CreateComponent_m836205100_0 (Object_t * __this /* static, unused */, Object_t * ___platformWrapper, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.GameObserver::Update()
extern "C"  void GameObserver_Update_m_1253105672_0 (GameObserver_t75592769_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.GameObserver::OnLevelWasLoaded(System.Int32)
extern "C"  void GameObserver_OnLevelWasLoaded_m_1575816215_0 (GameObserver_t75592769_0 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.GameObserver::OnClick()
extern "C"  void GameObserver_OnClick_m_340482308_0 (GameObserver_t75592769_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.GameObserver::OnApplicationPause(System.Boolean)
extern "C"  void GameObserver_OnApplicationPause_m_799042517_0 (GameObserver_t75592769_0 * __this, bool ___didPause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.GameObserver::OnApplicationQuit()
extern "C"  void GameObserver_OnApplicationQuit_m1429368755_0 (GameObserver_t75592769_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.GameObserver::OnDestroy()
extern "C"  void GameObserver_OnDestroy_m_1127752658_0 (GameObserver_t75592769_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
