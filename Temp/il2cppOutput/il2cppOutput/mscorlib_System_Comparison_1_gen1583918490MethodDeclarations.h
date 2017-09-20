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

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t1583918490_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair__2064968959.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m449166892_0_gshared (Comparison_1_t1583918490_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m449166892_0(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t1583918490_0 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m449166892_0_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m_1838338996_0_gshared (Comparison_1_t1583918490_0 * __this, KeyValuePair_2_t_2064968959_0  ___x, KeyValuePair_2_t_2064968959_0  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m_1838338996_0(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t1583918490_0 *, KeyValuePair_2_t_2064968959_0 , KeyValuePair_2_t_2064968959_0 , const MethodInfo*))Comparison_1_Invoke_m_1838338996_0_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Comparison_1_BeginInvoke_m898417557_0_gshared (Comparison_1_t1583918490_0 * __this, KeyValuePair_2_t_2064968959_0  ___x, KeyValuePair_2_t_2064968959_0  ___y, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m898417557_0(__this, ___x, ___y, ___callback, ___object, method) ((  Object_t * (*) (Comparison_1_t1583918490_0 *, KeyValuePair_2_t_2064968959_0 , KeyValuePair_2_t_2064968959_0 , AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m898417557_0_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m2038311072_0_gshared (Comparison_1_t1583918490_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m2038311072_0(__this, ___result, method) ((  int32_t (*) (Comparison_1_t1583918490_0 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m2038311072_0_gshared)(__this, ___result, method)
