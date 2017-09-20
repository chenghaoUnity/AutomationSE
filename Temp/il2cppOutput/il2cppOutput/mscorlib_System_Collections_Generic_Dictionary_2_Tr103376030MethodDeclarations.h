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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>
struct Transform_1_t103376030_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_109161175.h"
#include "mscorlib_System_Reflection_Emit_Label_1261953503.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m_35347920_0_gshared (Transform_1_t103376030_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m_35347920_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t103376030_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m_35347920_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t109161175_0  Transform_1_Invoke_m731773512_0_gshared (Transform_1_t103376030_0 * __this, int32_t ___key, Label_t_1261953503_0  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m731773512_0(__this, ___key, ___value, method) ((  KeyValuePair_2_t109161175_0  (*) (Transform_1_t103376030_0 *, int32_t, Label_t_1261953503_0 , const MethodInfo*))Transform_1_Invoke_m731773512_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m_571918605_0_gshared (Transform_1_t103376030_0 * __this, int32_t ___key, Label_t_1261953503_0  ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m_571918605_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t103376030_0 *, int32_t, Label_t_1261953503_0 , AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m_571918605_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t109161175_0  Transform_1_EndInvoke_m274917698_0_gshared (Transform_1_t103376030_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m274917698_0(__this, ___result, method) ((  KeyValuePair_2_t109161175_0  (*) (Transform_1_t103376030_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m274917698_0_gshared)(__this, ___result, method)
