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

// System.Net.FileWebRequest/GetResponseCallback
struct GetResponseCallback_t_674093862_0;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t_2034122602_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Net.FileWebRequest/GetResponseCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GetResponseCallback__ctor_m910176172_0 (GetResponseCallback_t_674093862_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest/GetResponseCallback::Invoke()
extern "C"  WebResponse_t_2034122602_0 * GetResponseCallback_Invoke_m2012732236_0 (GetResponseCallback_t_674093862_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" WebResponse_t_2034122602_0 * pinvoke_delegate_wrapper_GetResponseCallback_t_674093862_0(Il2CppObject* delegate);
// System.IAsyncResult System.Net.FileWebRequest/GetResponseCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * GetResponseCallback_BeginInvoke_m_1806972987_0 (GetResponseCallback_t_674093862_0 * __this, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest/GetResponseCallback::EndInvoke(System.IAsyncResult)
extern "C"  WebResponse_t_2034122602_0 * GetResponseCallback_EndInvoke_m_903938174_0 (GetResponseCallback_t_674093862_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
