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

// System.Threading.WaitCallback
struct WaitCallback_t_487418165_0;
// System.Object
struct Object_t;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t951043344_0;
// System.Threading.WaitHandle
struct WaitHandle_t1045483054_0;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t_792606655_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan_393459662.h"

// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C"  bool ThreadPool_QueueUserWorkItem_m_439460648_0 (Object_t * __this /* static, unused */, WaitCallback_t_487418165_0 * ___callBack, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.Int64,System.Boolean)
extern "C"  RegisteredWaitHandle_t951043344_0 * ThreadPool_RegisterWaitForSingleObject_m_1987119222_0 (Object_t * __this /* static, unused */, WaitHandle_t1045483054_0 * ___waitObject, WaitOrTimerCallback_t_792606655_0 * ___callBack, Object_t * ___state, int64_t ___millisecondsTimeOutInterval, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C"  RegisteredWaitHandle_t951043344_0 * ThreadPool_RegisterWaitForSingleObject_m_339352862_0 (Object_t * __this /* static, unused */, WaitHandle_t1045483054_0 * ___waitObject, WaitOrTimerCallback_t_792606655_0 * ___callBack, Object_t * ___state, TimeSpan_t_393459662_0  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
