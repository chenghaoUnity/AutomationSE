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

// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t_602950146_0;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t_931382277_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan_393459662.h"

// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::.ctor()
extern "C"  void LeaseManager__ctor_m_1772850414_0 (LeaseManager_t_602950146_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::SetPollTime(System.TimeSpan)
extern "C"  void LeaseManager_SetPollTime_m_228249922_0 (LeaseManager_t_602950146_0 * __this, TimeSpan_t_393459662_0  ___timeSpan, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern "C"  void LeaseManager_TrackLifetime_m1439053293_0 (LeaseManager_t_602950146_0 * __this, ServerIdentity_t_931382277_0 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StartManager()
extern "C"  void LeaseManager_StartManager_m_160362211_0 (LeaseManager_t_602950146_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StopManager()
extern "C"  void LeaseManager_StopManager_m1415465851_0 (LeaseManager_t_602950146_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::ManageLeases(System.Object)
extern "C"  void LeaseManager_ManageLeases_m1070826756_0 (LeaseManager_t_602950146_0 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
