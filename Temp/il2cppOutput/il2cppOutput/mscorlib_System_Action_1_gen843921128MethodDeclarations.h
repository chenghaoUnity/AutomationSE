﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Action`1<System.Single>
struct Action_1_t843921128_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m993889981_0_gshared (Action_1_t843921128_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m993889981_0(__this, ___object, ___method, method) ((  void (*) (Action_1_t843921128_0 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m993889981_0_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Single>::Invoke(T)
extern "C"  void Action_1_Invoke_m_308995265_0_gshared (Action_1_t843921128_0 * __this, float ___obj, const MethodInfo* method);
#define Action_1_Invoke_m_308995265_0(__this, ___obj, method) ((  void (*) (Action_1_t843921128_0 *, float, const MethodInfo*))Action_1_Invoke_m_308995265_0_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Action_1_BeginInvoke_m1836875956_0_gshared (Action_1_t843921128_0 * __this, float ___obj, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m1836875956_0(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Action_1_t843921128_0 *, float, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m1836875956_0_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m_512235699_0_gshared (Action_1_t843921128_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m_512235699_0(__this, ___result, method) ((  void (*) (Action_1_t843921128_0 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m_512235699_0_gshared)(__this, ___result, method)
