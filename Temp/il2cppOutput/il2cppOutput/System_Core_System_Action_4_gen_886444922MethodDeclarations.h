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

// System.Action`4<System.Object,System.Object,System.Boolean,System.Int32>
struct Action_4_t_886444922_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Action`4<System.Object,System.Object,System.Boolean,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_4__ctor_m1434218450_0_gshared (Action_4_t_886444922_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_4__ctor_m1434218450_0(__this, ___object, ___method, method) ((  void (*) (Action_4_t_886444922_0 *, Object_t *, IntPtr_t, const MethodInfo*))Action_4__ctor_m1434218450_0_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`4<System.Object,System.Object,System.Boolean,System.Int32>::Invoke(T1,T2,T3,T4)
extern "C"  void Action_4_Invoke_m315683096_0_gshared (Action_4_t_886444922_0 * __this, Object_t * ___arg1, Object_t * ___arg2, bool ___arg3, int32_t ___arg4, const MethodInfo* method);
#define Action_4_Invoke_m315683096_0(__this, ___arg1, ___arg2, ___arg3, ___arg4, method) ((  void (*) (Action_4_t_886444922_0 *, Object_t *, Object_t *, bool, int32_t, const MethodInfo*))Action_4_Invoke_m315683096_0_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, method)
// System.IAsyncResult System.Action`4<System.Object,System.Object,System.Boolean,System.Int32>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
extern "C"  Object_t * Action_4_BeginInvoke_m1896037785_0_gshared (Action_4_t_886444922_0 * __this, Object_t * ___arg1, Object_t * ___arg2, bool ___arg3, int32_t ___arg4, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_4_BeginInvoke_m1896037785_0(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___callback, ___object, method) ((  Object_t * (*) (Action_4_t_886444922_0 *, Object_t *, Object_t *, bool, int32_t, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Action_4_BeginInvoke_m1896037785_0_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___callback, ___object, method)
// System.Void System.Action`4<System.Object,System.Object,System.Boolean,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_4_EndInvoke_m1192532706_0_gshared (Action_4_t_886444922_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_4_EndInvoke_m1192532706_0(__this, ___result, method) ((  void (*) (Action_4_t_886444922_0 *, Object_t *, const MethodInfo*))Action_4_EndInvoke_m1192532706_0_gshared)(__this, ___result, method)
