﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.WaitHandle
struct WaitHandle_t1045483054_0;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t_792606655_0;
// System.Object
struct Object_t;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t856229986_0;

#include "mscorlib_System_MarshalByRefObject1484498776.h"
#include "mscorlib_System_TimeSpan_393459662.h"

// System.Threading.RegisteredWaitHandle
struct  RegisteredWaitHandle_t951043344_0  : public MarshalByRefObject_t1484498776_0
{
	// System.Threading.WaitHandle System.Threading.RegisteredWaitHandle::_waitObject
	WaitHandle_t1045483054_0 * ____waitObject_1;
	// System.Threading.WaitOrTimerCallback System.Threading.RegisteredWaitHandle::_callback
	WaitOrTimerCallback_t_792606655_0 * ____callback_2;
	// System.TimeSpan System.Threading.RegisteredWaitHandle::_timeout
	TimeSpan_t_393459662_0  ____timeout_3;
	// System.Object System.Threading.RegisteredWaitHandle::_state
	Object_t * ____state_4;
	// System.Boolean System.Threading.RegisteredWaitHandle::_executeOnlyOnce
	bool ____executeOnlyOnce_5;
	// System.Threading.WaitHandle System.Threading.RegisteredWaitHandle::_finalEvent
	WaitHandle_t1045483054_0 * ____finalEvent_6;
	// System.Threading.ManualResetEvent System.Threading.RegisteredWaitHandle::_cancelEvent
	ManualResetEvent_t856229986_0 * ____cancelEvent_7;
	// System.Int32 System.Threading.RegisteredWaitHandle::_callsInProcess
	int32_t ____callsInProcess_8;
	// System.Boolean System.Threading.RegisteredWaitHandle::_unregistered
	bool ____unregistered_9;
};