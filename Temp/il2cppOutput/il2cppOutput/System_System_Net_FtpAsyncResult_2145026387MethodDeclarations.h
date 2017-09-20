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

// System.Net.FtpAsyncResult
struct FtpAsyncResult_t_2145026387_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1045483054_0;
// System.Exception
struct Exception_t2143823668_0;
// System.Net.FtpWebResponse
struct FtpWebResponse_t_474528599_0;
// System.IO.Stream
struct Stream_t463444077_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FtpAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void FtpAsyncResult__ctor_m996159919_0 (FtpAsyncResult_t_2145026387_0 * __this, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.FtpAsyncResult::get_AsyncState()
extern "C"  Object_t * FtpAsyncResult_get_AsyncState_m_1613791606_0 (FtpAsyncResult_t_2145026387_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.FtpAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1045483054_0 * FtpAsyncResult_get_AsyncWaitHandle_m_1190701102_0 (FtpAsyncResult_t_2145026387_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_IsCompleted()
extern "C"  bool FtpAsyncResult_get_IsCompleted_m2040148559_0 (FtpAsyncResult_t_2145026387_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_GotException()
extern "C"  bool FtpAsyncResult_get_GotException_m_1375162953_0 (FtpAsyncResult_t_2145026387_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpAsyncResult::get_Exception()
extern "C"  Exception_t2143823668_0 * FtpAsyncResult_get_Exception_m_1303190954_0 (FtpAsyncResult_t_2145026387_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebResponse System.Net.FtpAsyncResult::get_Response()
extern "C"  FtpWebResponse_t_474528599_0 * FtpAsyncResult_get_Response_m_958021157_0 (FtpAsyncResult_t_2145026387_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Stream(System.IO.Stream)
extern "C"  void FtpAsyncResult_set_Stream_m_1280612491_0 (FtpAsyncResult_t_2145026387_0 * __this, Stream_t463444077_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C"  bool FtpAsyncResult_WaitUntilComplete_m1609274803_0 (FtpAsyncResult_t_2145026387_0 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception,System.Net.FtpWebResponse)
extern "C"  void FtpAsyncResult_SetCompleted_m_1834711458_0 (FtpAsyncResult_t_2145026387_0 * __this, bool ___synch, Exception_t2143823668_0 * ___exc, FtpWebResponse_t_474528599_0 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Net.FtpWebResponse)
extern "C"  void FtpAsyncResult_SetCompleted_m1997870026_0 (FtpAsyncResult_t_2145026387_0 * __this, bool ___synch, FtpWebResponse_t_474528599_0 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C"  void FtpAsyncResult_SetCompleted_m_1230802059_0 (FtpAsyncResult_t_2145026387_0 * __this, bool ___synch, Exception_t2143823668_0 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::DoCallback()
extern "C"  void FtpAsyncResult_DoCallback_m_1673071599_0 (FtpAsyncResult_t_2145026387_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
