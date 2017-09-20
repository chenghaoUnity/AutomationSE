#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.Analytics.IGameObserverListener
struct IGameObserverListener_t197642380_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// UnityEngine.Analytics.GameObserver
struct  GameObserver_t75592769_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.GameObject UnityEngine.Analytics.GameObserver::m_GameObject
	GameObject_t_184308134_0 * ___m_GameObject_2;
	// UnityEngine.Analytics.IGameObserverListener UnityEngine.Analytics.GameObserver::m_GameObserverListener
	Object_t * ___m_GameObserverListener_3;
	// System.Boolean UnityEngine.Analytics.GameObserver::m_IsWebPlayerOrEditor
	bool ___m_IsWebPlayerOrEditor_4;
};
