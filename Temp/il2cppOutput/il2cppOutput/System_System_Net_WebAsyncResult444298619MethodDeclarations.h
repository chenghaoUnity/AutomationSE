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

// System.Net.WebAsyncResult
struct WebAsyncResult_t444298619_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;
// System.Object
struct Object_t;
// System.Net.HttpWebRequest
struct HttpWebRequest_t_319555179_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Exception
struct Exception_t2143823668_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.Net.HttpWebResponse
struct HttpWebResponse_t684610839_0;
// System.Threading.WaitHandle
struct WaitHandle_t1045483054_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void WebAsyncResult__ctor_m1701398049_0 (WebAsyncResult_t444298619_0 * __this, AsyncCallback_t_266361018_0 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.Net.HttpWebRequest,System.AsyncCallback,System.Object)
extern "C"  void WebAsyncResult__ctor_m_323692568_0 (WebAsyncResult_t444298619_0 * __this, HttpWebRequest_t_319555179_0 * ___request, AsyncCallback_t_266361018_0 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32)
extern "C"  void WebAsyncResult__ctor_m_377609788_0 (WebAsyncResult_t444298619_0 * __this, AsyncCallback_t_266361018_0 * ___cb, Object_t * ___state, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C"  void WebAsyncResult_SetCompleted_m_733413657_0 (WebAsyncResult_t444298619_0 * __this, bool ___synch, Exception_t2143823668_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::Reset()
extern "C"  void WebAsyncResult_Reset_m1140937314_0 (WebAsyncResult_t444298619_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Int32)
extern "C"  void WebAsyncResult_SetCompleted_m_1334651128_0 (WebAsyncResult_t444298619_0 * __this, bool ___synch, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.IO.Stream)
extern "C"  void WebAsyncResult_SetCompleted_m_1285573426_0 (WebAsyncResult_t444298619_0 * __this, bool ___synch, Stream_t463444077_0 * ___writeStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Net.HttpWebResponse)
extern "C"  void WebAsyncResult_SetCompleted_m400315642_0 (WebAsyncResult_t444298619_0 * __this, bool ___synch, HttpWebResponse_t684610839_0 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::DoCallback()
extern "C"  void WebAsyncResult_DoCallback_m612756063_0 (WebAsyncResult_t444298619_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::WaitUntilComplete()
extern "C"  void WebAsyncResult_WaitUntilComplete_m_1542286187_0 (WebAsyncResult_t444298619_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C"  bool WebAsyncResult_WaitUntilComplete_m_151553919_0 (WebAsyncResult_t444298619_0 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.WebAsyncResult::get_AsyncState()
extern "C"  Object_t * WebAsyncResult_get_AsyncState_m1743691224_0 (WebAsyncResult_t444298619_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.WebAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1045483054_0 * WebAsyncResult_get_AsyncWaitHandle_m_1751279292_0 (WebAsyncResult_t444298619_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_IsCompleted()
extern "C"  bool WebAsyncResult_get_IsCompleted_m_1252066111_0 (WebAsyncResult_t444298619_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_GotException()
extern "C"  bool WebAsyncResult_get_GotException_m_354602619_0 (WebAsyncResult_t444298619_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebAsyncResult::get_Exception()
extern "C"  Exception_t2143823668_0 * WebAsyncResult_get_Exception_m_917790392_0 (WebAsyncResult_t444298619_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_NBytes()
extern "C"  int32_t WebAsyncResult_get_NBytes_m1499555429_0 (WebAsyncResult_t444298619_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_NBytes(System.Int32)
extern "C"  void WebAsyncResult_set_NBytes_m1001309402_0 (WebAsyncResult_t444298619_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebAsyncResult::get_InnerAsyncResult()
extern "C"  Object_t * WebAsyncResult_get_InnerAsyncResult_m_1038274761_0 (WebAsyncResult_t444298619_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_InnerAsyncResult(System.IAsyncResult)
extern "C"  void WebAsyncResult_set_InnerAsyncResult_m_1350693164_0 (WebAsyncResult_t444298619_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpWebResponse System.Net.WebAsyncResult::get_Response()
extern "C"  HttpWebResponse_t684610839_0 * WebAsyncResult_get_Response_m_861863017_0 (WebAsyncResult_t444298619_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebAsyncResult::get_Buffer()
extern "C"  ByteU5BU5D_t_1238178395_0* WebAsyncResult_get_Buffer_m1120906510_0 (WebAsyncResult_t444298619_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Offset()
extern "C"  int32_t WebAsyncResult_get_Offset_m287883483_0 (WebAsyncResult_t444298619_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Size()
extern "C"  int32_t WebAsyncResult_get_Size_m788557449_0 (WebAsyncResult_t444298619_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
