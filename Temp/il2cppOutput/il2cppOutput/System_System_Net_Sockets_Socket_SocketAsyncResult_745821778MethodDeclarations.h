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

// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t_745821778_0;
// System.Net.Sockets.Socket
struct Socket_t771039639_0;
// System.Object
struct Object_t;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;
// System.Collections.Queue
struct Queue_t_1070229187_0;
// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t_1914074065_0;
// System.Net.Sockets.Socket/Worker
struct Worker_t_1039050986_0;
// System.Exception
struct Exception_t2143823668_0;
// System.Threading.WaitHandle
struct WaitHandle_t1045483054_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket_SocketOperation1456803484.h"
#include "System_System_Net_Sockets_SocketError_1731909967.h"

// System.Void System.Net.Sockets.Socket/SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.Object,System.AsyncCallback,System.Net.Sockets.Socket/SocketOperation)
extern "C"  void SocketAsyncResult__ctor_m_907334419_0 (SocketAsyncResult_t_745821778_0 * __this, Socket_t771039639_0 * ___sock, Object_t * ___state, AsyncCallback_t_266361018_0 * ___callback, int32_t ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CheckIfThrowDelayedException()
extern "C"  void SocketAsyncResult_CheckIfThrowDelayedException_m_1217340496_0 (SocketAsyncResult_t_745821778_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteAllOnDispose(System.Collections.Queue)
extern "C"  void SocketAsyncResult_CompleteAllOnDispose_m1491762849_0 (SocketAsyncResult_t_745821778_0 * __this, Queue_t_1070229187_0 * ___queue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteDisposed(System.Object)
extern "C"  void SocketAsyncResult_CompleteDisposed_m_209574220_0 (SocketAsyncResult_t_745821778_0 * __this, Object_t * ___unused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete()
extern "C"  void SocketAsyncResult_Complete_m_1068778533_0 (SocketAsyncResult_t_745821778_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket/SocketAsyncCall System.Net.Sockets.Socket/SocketAsyncResult::GetDelegate(System.Net.Sockets.Socket/Worker,System.Net.Sockets.Socket/SocketOperation)
extern "C"  SocketAsyncCall_t_1914074065_0 * SocketAsyncResult_GetDelegate_m_647305153_0 (SocketAsyncResult_t_745821778_0 * __this, Worker_t_1039050986_0 * ___worker, int32_t ___op, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Int32)
extern "C"  void SocketAsyncResult_Complete_m2117042348_0 (SocketAsyncResult_t_745821778_0 * __this, int32_t ___total, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Exception)
extern "C"  void SocketAsyncResult_Complete_m_1164953973_0 (SocketAsyncResult_t_745821778_0 * __this, Exception_t2143823668_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncState()
extern "C"  Object_t * SocketAsyncResult_get_AsyncState_m_1519519797_0 (SocketAsyncResult_t_745821778_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1045483054_0 * SocketAsyncResult_get_AsyncWaitHandle_m1788904497_0 (SocketAsyncResult_t_745821778_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::get_IsCompleted()
extern "C"  bool SocketAsyncResult_get_IsCompleted_m_1049691410_0 (SocketAsyncResult_t_745821778_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_IsCompleted(System.Boolean)
extern "C"  void SocketAsyncResult_set_IsCompleted_m1869173595_0 (SocketAsyncResult_t_745821778_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::get_Total()
extern "C"  int32_t SocketAsyncResult_get_Total_m_1710775349_0 (SocketAsyncResult_t_745821778_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_Total(System.Int32)
extern "C"  void SocketAsyncResult_set_Total_m1350627192_0 (SocketAsyncResult_t_745821778_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.Socket/SocketAsyncResult::get_ErrorCode()
extern "C"  int32_t SocketAsyncResult_get_ErrorCode_m_1540755724_0 (SocketAsyncResult_t_745821778_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
