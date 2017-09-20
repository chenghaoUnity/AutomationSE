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

// System.Net.FtpWebRequest
struct FtpWebRequest_t1507005735_0;
// System.Uri
struct Uri_t_27263938_0;
// System.Exception
struct Exception_t2143823668_0;
// System.Net.ICredentials
struct ICredentials_t359442962_0;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t_1532305783_0;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t1249552781_0;
// System.Net.ServicePoint
struct ServicePoint_t1961884333_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t_2034122602_0;
// System.Net.FtpStatus
struct FtpStatus_t_2140212610_0;
// System.Net.Sockets.Socket
struct Socket_t771039639_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1524084820_0;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1053886404_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_FtpWebRequest_RequestState809462602.h"
#include "System_System_Net_Security_SslPolicyErrors_1769437075.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern "C"  void FtpWebRequest__ctor_m_1157033918_0 (FtpWebRequest_t1507005735_0 * __this, Uri_t_27263938_0 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
extern "C"  void FtpWebRequest__cctor_m_1380172226_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::GetMustImplement()
extern "C"  Exception_t2143823668_0 * FtpWebRequest_GetMustImplement_m1436910600_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpWebRequest::get_ContentLength()
extern "C"  int64_t FtpWebRequest_get_ContentLength_m_784919438_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FtpWebRequest::get_Credentials()
extern "C"  Object_t * FtpWebRequest_get_Credentials_m_1184514352_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_Credentials(System.Net.ICredentials)
extern "C"  void FtpWebRequest_set_Credentials_m133801859_0 (FtpWebRequest_t1507005735_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::get_EnableSsl()
extern "C"  bool FtpWebRequest_get_EnableSsl_m_896023433_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebRequest::get_Headers()
extern "C"  WebHeaderCollection_t_1532305783_0 * FtpWebRequest_get_Headers_m1485893850_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_Method()
extern "C"  String_t* FtpWebRequest_get_Method_m2046966946_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FtpWebRequest::get_Proxy()
extern "C"  Object_t * FtpWebRequest_get_Proxy_m942600838_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpWebRequest::get_ReadWriteTimeout()
extern "C"  int32_t FtpWebRequest_get_ReadWriteTimeout_m_754917626_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FtpWebRequest::get_RequestUri()
extern "C"  Uri_t_27263938_0 * FtpWebRequest_get_RequestUri_m_1938787763_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::get_ServicePoint()
extern "C"  ServicePoint_t1961884333_0 * FtpWebRequest_get_ServicePoint_m1902344865_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_DataType()
extern "C"  String_t* FtpWebRequest_get_DataType_m2074737925_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebRequest/RequestState System.Net.FtpWebRequest::get_State()
extern "C"  int32_t FtpWebRequest_get_State_m1818655718_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_State(System.Net.FtpWebRequest/RequestState)
extern "C"  void FtpWebRequest_set_State_m1873142957_0 (FtpWebRequest_t1507005735_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Abort()
extern "C"  void FtpWebRequest_Abort_m728953757_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C"  Object_t * FtpWebRequest_BeginGetResponse_m_187948973_0 (FtpWebRequest_t1507005735_0 * __this, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::EndGetResponse(System.IAsyncResult)
extern "C"  WebResponse_t_2034122602_0 * FtpWebRequest_EndGetResponse_m_1760328680_0 (FtpWebRequest_t1507005735_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::GetResponse()
extern "C"  WebResponse_t_2034122602_0 * FtpWebRequest_GetResponse_m_721459286_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::GetServicePoint()
extern "C"  ServicePoint_t1961884333_0 * FtpWebRequest_GetServicePoint_m483585814_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ResolveHost()
extern "C"  void FtpWebRequest_ResolveHost_m_1719725023_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessRequest()
extern "C"  void FtpWebRequest_ProcessRequest_m1634672693_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetType()
extern "C"  void FtpWebRequest_SetType_m_1800556247_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetRemoteFolderPath(System.Uri)
extern "C"  String_t* FtpWebRequest_GetRemoteFolderPath_m_1954629268_0 (FtpWebRequest_t1507005735_0 * __this, Uri_t_27263938_0 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CWDAndSetFileName(System.Uri)
extern "C"  void FtpWebRequest_CWDAndSetFileName_m1594277826_0 (FtpWebRequest_t1507005735_0 * __this, Uri_t_27263938_0 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessMethod()
extern "C"  void FtpWebRequest_ProcessMethod_m141324445_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseControlConnection()
extern "C"  void FtpWebRequest_CloseControlConnection_m_1535262888_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseDataConnection()
extern "C"  void FtpWebRequest_CloseDataConnection_m1443100077_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseConnection()
extern "C"  void FtpWebRequest_CloseConnection_m874562275_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessSimpleMethod()
extern "C"  void FtpWebRequest_ProcessSimpleMethod_m_1780691921_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::UploadData()
extern "C"  void FtpWebRequest_UploadData_m_370256992_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::DownloadData()
extern "C"  void FtpWebRequest_DownloadData_m_391112729_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckRequestStarted()
extern "C"  void FtpWebRequest_CheckRequestStarted_m486165255_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenControlConnection()
extern "C"  void FtpWebRequest_OpenControlConnection_m875311902_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetInitialPath(System.Net.FtpStatus)
extern "C"  String_t* FtpWebRequest_GetInitialPath_m2140946823_0 (Object_t * __this /* static, unused */, FtpStatus_t_2140212610_0 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::SetupPassiveConnection(System.String)
extern "C"  Socket_t771039639_0 * FtpWebRequest_SetupPassiveConnection_m_266153789_0 (FtpWebRequest_t1507005735_0 * __this, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::CreateExceptionFromResponse(System.Net.FtpStatus)
extern "C"  Exception_t2143823668_0 * FtpWebRequest_CreateExceptionFromResponse_m_1227156200_0 (FtpWebRequest_t1507005735_0 * __this, FtpStatus_t_2140212610_0 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetTransferCompleted()
extern "C"  void FtpWebRequest_SetTransferCompleted_m_1394380045_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OperationCompleted()
extern "C"  void FtpWebRequest_OperationCompleted_m1627023545_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetCompleteWithError(System.Exception)
extern "C"  void FtpWebRequest_SetCompleteWithError_m_2051550612_0 (FtpWebRequest_t1507005735_0 * __this, Exception_t2143823668_0 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::InitDataConnection()
extern "C"  Socket_t771039639_0 * FtpWebRequest_InitDataConnection_m_1362069873_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenDataConnection()
extern "C"  void FtpWebRequest_OpenDataConnection_m1100056487_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Authenticate()
extern "C"  void FtpWebRequest_Authenticate_m_158531158_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.String,System.String[])
extern "C"  FtpStatus_t_2140212610_0 * FtpWebRequest_SendCommand_m_39221721_0 (FtpWebRequest_t1507005735_0 * __this, String_t* ___command, StringU5BU5D_t_816028754_0* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.Boolean,System.String,System.String[])
extern "C"  FtpStatus_t_2140212610_0 * FtpWebRequest_SendCommand_m1304781218_0 (FtpWebRequest_t1507005735_0 * __this, bool ___waitResponse, String_t* ___command, StringU5BU5D_t_816028754_0* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::ServiceNotAvailable()
extern "C"  FtpStatus_t_2140212610_0 * FtpWebRequest_ServiceNotAvailable_m797374525_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::GetResponseStatus()
extern "C"  FtpStatus_t_2140212610_0 * FtpWebRequest_GetResponseStatus_m1396642043_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::InitiateSecureConnection(System.IO.Stream&)
extern "C"  void FtpWebRequest_InitiateSecureConnection_m_1045502606_0 (FtpWebRequest_t1507005735_0 * __this, Stream_t463444077_0 ** ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::ChangeToSSLSocket(System.IO.Stream&)
extern "C"  bool FtpWebRequest_ChangeToSSLSocket_m485421130_0 (FtpWebRequest_t1507005735_0 * __this, Stream_t463444077_0 ** ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InFinalState()
extern "C"  bool FtpWebRequest_InFinalState_m_1662094741_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InProgress()
extern "C"  bool FtpWebRequest_InProgress_m_77192419_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckIfAborted()
extern "C"  void FtpWebRequest_CheckIfAborted_m1919386719_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckFinalState()
extern "C"  void FtpWebRequest_CheckFinalState_m1058126992_0 (FtpWebRequest_t1507005735_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__3(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool FtpWebRequest_U3CcallbackU3Em__3_m_223489243_0 (Object_t * __this /* static, unused */, Object_t * ___sender, X509Certificate_t1524084820_0 * ___certificate, X509Chain_t1053886404_0 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
