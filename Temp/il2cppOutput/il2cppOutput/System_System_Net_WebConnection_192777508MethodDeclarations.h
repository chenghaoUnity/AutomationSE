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

// System.Net.WebConnection
struct WebConnection_t_192777508_0;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t_1866662653_0;
// System.Net.ServicePoint
struct ServicePoint_t1961884333_0;
// System.Exception
struct Exception_t2143823668_0;
// System.Net.HttpWebRequest
struct HttpWebRequest_t_319555179_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t_1532305783_0;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.Object
struct Object_t;
// System.EventHandler
struct EventHandler_t_1938407861_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;
// System.EventArgs
struct EventArgs_t693055868_0;
// System.Net.NetworkCredential
struct NetworkCredential_t23481775_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_WebExceptionStatus_18632733.h"

// System.Void System.Net.WebConnection::.ctor(System.Net.WebConnectionGroup,System.Net.ServicePoint)
extern "C"  void WebConnection__ctor_m570141276_0 (WebConnection_t_192777508_0 * __this, WebConnectionGroup_t_1866662653_0 * ___group, ServicePoint_t1961884333_0 * ___sPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::.cctor()
extern "C"  void WebConnection__cctor_m1414380979_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CanReuse()
extern "C"  bool WebConnection_CanReuse_m429734244_0 (WebConnection_t_192777508_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::LoggedThrow(System.Exception)
extern "C"  void WebConnection_LoggedThrow_m289187660_0 (WebConnection_t_192777508_0 * __this, Exception_t2143823668_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::CheckUnityWebSecurity(System.Net.HttpWebRequest)
extern "C"  void WebConnection_CheckUnityWebSecurity_m2005814720_0 (WebConnection_t_192777508_0 * __this, HttpWebRequest_t_319555179_0 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Connect(System.Net.HttpWebRequest)
extern "C"  void WebConnection_Connect_m1601206237_0 (WebConnection_t_192777508_0 * __this, HttpWebRequest_t_319555179_0 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::EnsureSSLStreamAvailable()
extern "C"  void WebConnection_EnsureSSLStreamAvailable_m2023486437_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CreateTunnel(System.Net.HttpWebRequest,System.IO.Stream,System.Byte[]&)
extern "C"  bool WebConnection_CreateTunnel_m_1419490905_0 (WebConnection_t_192777508_0 * __this, HttpWebRequest_t_319555179_0 * ___request, Stream_t463444077_0 * ___stream, ByteU5BU5D_t_1238178395_0** ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebConnection::ReadHeaders(System.Net.HttpWebRequest,System.IO.Stream,System.Byte[]&,System.Int32&)
extern "C"  WebHeaderCollection_t_1532305783_0 * WebConnection_ReadHeaders_m1472946024_0 (WebConnection_t_192777508_0 * __this, HttpWebRequest_t_319555179_0 * ___request, Stream_t463444077_0 * ___stream, ByteU5BU5D_t_1238178395_0** ___retBuffer, int32_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CreateStream(System.Net.HttpWebRequest)
extern "C"  bool WebConnection_CreateStream_m_613635805_0 (WebConnection_t_192777508_0 * __this, HttpWebRequest_t_319555179_0 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::HandleError(System.Net.WebExceptionStatus,System.Exception,System.String)
extern "C"  void WebConnection_HandleError_m1182435509_0 (WebConnection_t_192777508_0 * __this, int32_t ___st, Exception_t2143823668_0 * ___e, String_t* ___where, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::ReadDone(System.IAsyncResult)
extern "C"  void WebConnection_ReadDone_m_1328643551_0 (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::ExpectContent(System.Int32)
extern "C"  bool WebConnection_ExpectContent_m_983711821_0 (Object_t * __this /* static, unused */, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::GetCertificates()
extern "C"  void WebConnection_GetCertificates_m1592645962_0 (WebConnection_t_192777508_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::InitRead(System.Object)
extern "C"  void WebConnection_InitRead_m_40477180_0 (Object_t * __this /* static, unused */, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::GetResponse(System.Byte[],System.Int32)
extern "C"  int32_t WebConnection_GetResponse_m157348301_0 (WebConnection_t_192777508_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::InitConnection(System.Object)
extern "C"  void WebConnection_InitConnection_m1634600572_0 (WebConnection_t_192777508_0 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.WebConnection::SendRequest(System.Net.HttpWebRequest)
extern "C"  EventHandler_t_1938407861_0 * WebConnection_SendRequest_m_1182957820_0 (WebConnection_t_192777508_0 * __this, HttpWebRequest_t_319555179_0 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::SendNext()
extern "C"  void WebConnection_SendNext_m_563942363_0 (WebConnection_t_192777508_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::NextRead()
extern "C"  void WebConnection_NextRead_m2095832371_0 (WebConnection_t_192777508_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::ReadLine(System.Byte[],System.Int32&,System.Int32,System.String&)
extern "C"  bool WebConnection_ReadLine_m_1535904531_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t* ___start, int32_t ___max, String_t** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnection::BeginRead(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * WebConnection_BeginRead_m_1279654237_0 (WebConnection_t_192777508_0 * __this, HttpWebRequest_t_319555179_0 * ___request, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t_266361018_0 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::EndRead(System.Net.HttpWebRequest,System.IAsyncResult)
extern "C"  int32_t WebConnection_EndRead_m1274630179_0 (WebConnection_t_192777508_0 * __this, HttpWebRequest_t_319555179_0 * ___request, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::EnsureRead(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t WebConnection_EnsureRead_m929166331_0 (WebConnection_t_192777508_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CompleteChunkedRead()
extern "C"  bool WebConnection_CompleteChunkedRead_m_573808373_0 (WebConnection_t_192777508_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnection::BeginWrite(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * WebConnection_BeginWrite_m_1721120268_0 (WebConnection_t_192777508_0 * __this, HttpWebRequest_t_319555179_0 * ___request, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t_266361018_0 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::EndWrite2(System.Net.HttpWebRequest,System.IAsyncResult)
extern "C"  void WebConnection_EndWrite2_m_6287306_0 (WebConnection_t_192777508_0 * __this, HttpWebRequest_t_319555179_0 * ___request, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::EndWrite(System.Net.HttpWebRequest,System.IAsyncResult)
extern "C"  bool WebConnection_EndWrite_m_2033980264_0 (WebConnection_t_192777508_0 * __this, HttpWebRequest_t_319555179_0 * ___request, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::Read(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t WebConnection_Read_m1730466610_0 (WebConnection_t_192777508_0 * __this, HttpWebRequest_t_319555179_0 * ___request, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::Write(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.String&)
extern "C"  bool WebConnection_Write_m_1739889873_0 (WebConnection_t_192777508_0 * __this, HttpWebRequest_t_319555179_0 * ___request, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, String_t** ___err_msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Close(System.Boolean)
extern "C"  void WebConnection_Close_m1582875591_0 (WebConnection_t_192777508_0 * __this, bool ___sendNext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Abort(System.Object,System.EventArgs)
extern "C"  void WebConnection_Abort_m1843916898_0 (WebConnection_t_192777508_0 * __this, Object_t * ___sender, EventArgs_t693055868_0 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::ResetNtlm()
extern "C"  void WebConnection_ResetNtlm_m1493144846_0 (WebConnection_t_192777508_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_Busy()
extern "C"  bool WebConnection_get_Busy_m_1472095582_0 (WebConnection_t_192777508_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_PriorityRequest(System.Net.HttpWebRequest)
extern "C"  void WebConnection_set_PriorityRequest_m_235419047_0 (WebConnection_t_192777508_0 * __this, HttpWebRequest_t_319555179_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_NtlmAuthenticated()
extern "C"  bool WebConnection_get_NtlmAuthenticated_m_1542933567_0 (WebConnection_t_192777508_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_NtlmAuthenticated(System.Boolean)
extern "C"  void WebConnection_set_NtlmAuthenticated_m1641730266_0 (WebConnection_t_192777508_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.WebConnection::get_NtlmCredential()
extern "C"  NetworkCredential_t23481775_0 * WebConnection_get_NtlmCredential_m_2130076197_0 (WebConnection_t_192777508_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_NtlmCredential(System.Net.NetworkCredential)
extern "C"  void WebConnection_set_NtlmCredential_m870530416_0 (WebConnection_t_192777508_0 * __this, NetworkCredential_t23481775_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_UnsafeAuthenticatedConnectionSharing()
extern "C"  bool WebConnection_get_UnsafeAuthenticatedConnectionSharing_m1443601566_0 (WebConnection_t_192777508_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_UnsafeAuthenticatedConnectionSharing(System.Boolean)
extern "C"  void WebConnection_set_UnsafeAuthenticatedConnectionSharing_m1418610931_0 (WebConnection_t_192777508_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
