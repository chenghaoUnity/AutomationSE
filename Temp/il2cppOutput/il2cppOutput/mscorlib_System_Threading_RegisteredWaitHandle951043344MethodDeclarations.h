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

// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t951043344_0;
// System.Threading.WaitHandle
struct WaitHandle_t1045483054_0;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t_792606655_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan_393459662.h"

// System.Void System.Threading.RegisteredWaitHandle::.ctor(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C"  void RegisteredWaitHandle__ctor_m_1164684912_0 (RegisteredWaitHandle_t951043344_0 * __this, WaitHandle_t1045483054_0 * ___waitObject, WaitOrTimerCallback_t_792606655_0 * ___callback, Object_t * ___state, TimeSpan_t_393459662_0  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::Wait(System.Object)
extern "C"  void RegisteredWaitHandle_Wait_m_80613893_0 (RegisteredWaitHandle_t951043344_0 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::DoCallBack(System.Object)
extern "C"  void RegisteredWaitHandle_DoCallBack_m_1096814016_0 (RegisteredWaitHandle_t951043344_0 * __this, Object_t * ___timedOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
