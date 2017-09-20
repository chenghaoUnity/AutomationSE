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

// System.Action`4<System.Object,System.Object,System.Object,System.Object>
struct Action_4_t768566568_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_4__ctor_m620347252_0_gshared (Action_4_t768566568_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_4__ctor_m620347252_0(__this, ___object, ___method, method) ((  void (*) (Action_4_t768566568_0 *, Object_t *, IntPtr_t, const MethodInfo*))Action_4__ctor_m620347252_0_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
extern "C"  void Action_4_Invoke_m157716918_0_gshared (Action_4_t768566568_0 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, const MethodInfo* method);
#define Action_4_Invoke_m157716918_0(__this, ___arg1, ___arg2, ___arg3, ___arg4, method) ((  void (*) (Action_4_t768566568_0 *, Object_t *, Object_t *, Object_t *, Object_t *, const MethodInfo*))Action_4_Invoke_m157716918_0_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, method)
// System.IAsyncResult System.Action`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
extern "C"  Object_t * Action_4_BeginInvoke_m1414752311_0_gshared (Action_4_t768566568_0 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_4_BeginInvoke_m1414752311_0(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___callback, ___object, method) ((  Object_t * (*) (Action_4_t768566568_0 *, Object_t *, Object_t *, Object_t *, Object_t *, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Action_4_BeginInvoke_m1414752311_0_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___callback, ___object, method)
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_4_EndInvoke_m_1738601596_0_gshared (Action_4_t768566568_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_4_EndInvoke_m_1738601596_0(__this, ___result, method) ((  void (*) (Action_4_t768566568_0 *, Object_t *, const MethodInfo*))Action_4_EndInvoke_m_1738601596_0_gshared)(__this, ___result, method)
