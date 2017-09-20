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

// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t_716030166_0;
// System.Object
struct Object_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t_1532305783_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Net.HttpContinueDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void HttpContinueDelegate__ctor_m2092117820_0 (HttpContinueDelegate_t_716030166_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::Invoke(System.Int32,System.Net.WebHeaderCollection)
extern "C"  void HttpContinueDelegate_Invoke_m1655092752_0 (HttpContinueDelegate_t_716030166_0 * __this, int32_t ___StatusCode, WebHeaderCollection_t_1532305783_0 * ___httpHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_HttpContinueDelegate_t_716030166_0(Il2CppObject* delegate, int32_t ___StatusCode, WebHeaderCollection_t_1532305783_0 * ___httpHeaders);
// System.IAsyncResult System.Net.HttpContinueDelegate::BeginInvoke(System.Int32,System.Net.WebHeaderCollection,System.AsyncCallback,System.Object)
extern "C"  Object_t * HttpContinueDelegate_BeginInvoke_m_1965601131_0 (HttpContinueDelegate_t_716030166_0 * __this, int32_t ___StatusCode, WebHeaderCollection_t_1532305783_0 * ___httpHeaders, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void HttpContinueDelegate_EndInvoke_m697802572_0 (HttpContinueDelegate_t_716030166_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
