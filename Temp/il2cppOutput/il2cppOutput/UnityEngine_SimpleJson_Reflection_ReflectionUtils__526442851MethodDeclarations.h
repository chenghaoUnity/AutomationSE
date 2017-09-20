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

// SimpleJson.Reflection.ReflectionUtils/SetDelegate
struct SetDelegate_t_526442851_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SetDelegate__ctor_m229262959_0 (SetDelegate_t_526442851_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern "C"  void SetDelegate_Invoke_m209693753_0 (SetDelegate_t_526442851_0 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SetDelegate_t_526442851_0(Il2CppObject* delegate, Object_t * ___source, Object_t * ___value);
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C"  Object_t * SetDelegate_BeginInvoke_m_83125946_0 (SetDelegate_t_526442851_0 * __this, Object_t * ___source, Object_t * ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void SetDelegate_EndInvoke_m_918009857_0 (SetDelegate_t_526442851_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
