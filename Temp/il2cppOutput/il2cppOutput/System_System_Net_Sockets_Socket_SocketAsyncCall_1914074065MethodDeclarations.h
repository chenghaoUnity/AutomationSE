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

// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t_1914074065_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Net.Sockets.Socket/SocketAsyncCall::.ctor(System.Object,System.IntPtr)
extern "C"  void SocketAsyncCall__ctor_m641028609_0 (SocketAsyncCall_t_1914074065_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncCall::Invoke()
extern "C"  void SocketAsyncCall_Invoke_m90963355_0 (SocketAsyncCall_t_1914074065_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SocketAsyncCall_t_1914074065_0(Il2CppObject* delegate);
// System.IAsyncResult System.Net.Sockets.Socket/SocketAsyncCall::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * SocketAsyncCall_BeginInvoke_m_1437124208_0 (SocketAsyncCall_t_1914074065_0 * __this, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncCall::EndInvoke(System.IAsyncResult)
extern "C"  void SocketAsyncCall_EndInvoke_m_2076447599_0 (SocketAsyncCall_t_1914074065_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
