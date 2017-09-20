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

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t464806536_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void ThreadSafeDictionaryValueFactory_2__ctor_m_25092774_0_gshared (ThreadSafeDictionaryValueFactory_2_t464806536_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2__ctor_m_25092774_0(__this, ___object, ___method, method) ((  void (*) (ThreadSafeDictionaryValueFactory_2_t464806536_0 *, Object_t *, IntPtr_t, const MethodInfo*))ThreadSafeDictionaryValueFactory_2__ctor_m_25092774_0_gshared)(__this, ___object, ___method, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::Invoke(TKey)
extern "C"  Object_t * ThreadSafeDictionaryValueFactory_2_Invoke_m893533719_0_gshared (ThreadSafeDictionaryValueFactory_2_t464806536_0 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_Invoke_m893533719_0(__this, ___key, method) ((  Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t464806536_0 *, Object_t *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_Invoke_m893533719_0_gshared)(__this, ___key, method)
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
extern "C"  Object_t * ThreadSafeDictionaryValueFactory_2_BeginInvoke_m_917121070_0_gshared (ThreadSafeDictionaryValueFactory_2_t464806536_0 * __this, Object_t * ___key, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_BeginInvoke_m_917121070_0(__this, ___key, ___callback, ___object, method) ((  Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t464806536_0 *, Object_t *, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_BeginInvoke_m_917121070_0_gshared)(__this, ___key, ___callback, ___object, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * ThreadSafeDictionaryValueFactory_2_EndInvoke_m_475125160_0_gshared (ThreadSafeDictionaryValueFactory_2_t464806536_0 * __this, Object_t * ___result, const MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_EndInvoke_m_475125160_0(__this, ___result, method) ((  Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t464806536_0 *, Object_t *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_EndInvoke_m_475125160_0_gshared)(__this, ___result, method)
