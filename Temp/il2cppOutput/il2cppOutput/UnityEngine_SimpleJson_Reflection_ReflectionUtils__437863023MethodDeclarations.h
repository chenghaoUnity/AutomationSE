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

// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t_437863023_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void GetDelegate__ctor_m_1947174045_0 (GetDelegate_t_437863023_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern "C"  Object_t * GetDelegate_Invoke_m891352364_0 (GetDelegate_t_437863023_0 * __this, Object_t * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_GetDelegate_t_437863023_0(Il2CppObject* delegate, Object_t * ___source);
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  Object_t * GetDelegate_BeginInvoke_m_446423840_0 (GetDelegate_t_437863023_0 * __this, Object_t * ___source, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * GetDelegate_EndInvoke_m779500702_0 (GetDelegate_t_437863023_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
