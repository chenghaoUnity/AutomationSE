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

// System.Net.HttpWebRequest
struct HttpWebRequest_t_319555179_0;
// System.Uri
struct Uri_t_27263938_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1905772184_0;
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
// System.Net.WebAsyncResult
struct WebAsyncResult_t444298619_0;
// System.Exception
struct Exception_t2143823668_0;
// System.Net.WebConnectionStream
struct WebConnectionStream_t_1686496900_0;
// System.Net.WebConnectionData
struct WebConnectionData_t909510822_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"
#include "System_System_Net_DecompressionMethods1273611491.h"
#include "System_System_Net_HttpStatusCode_1016869027.h"
#include "System_System_Net_WebExceptionStatus_18632733.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C"  void HttpWebRequest__ctor_m_882715926_0 (HttpWebRequest_t_319555179_0 * __this, Uri_t_27263938_0 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest__ctor_m1235446968_0 (HttpWebRequest_t_319555179_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C"  void HttpWebRequest__cctor_m_2098897258_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m_2048059468_0 (HttpWebRequest_t_319555179_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C"  Uri_t_27263938_0 * HttpWebRequest_get_Address_m1203539790_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.DecompressionMethods System.Net.HttpWebRequest::get_AutomaticDecompression()
extern "C"  int32_t HttpWebRequest_get_AutomaticDecompression_m_1791052038_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_InternalAllowBuffering()
extern "C"  bool HttpWebRequest_get_InternalAllowBuffering_m1304022486_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::get_ClientCertificates()
extern "C"  X509CertificateCollection_t1905772184_0 * HttpWebRequest_get_ClientCertificates_m937340960_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpWebRequest::get_ContentLength()
extern "C"  int64_t HttpWebRequest_get_ContentLength_m585169692_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_InternalContentLength(System.Int64)
extern "C"  void HttpWebRequest_set_InternalContentLength_m856181900_0 (HttpWebRequest_t_319555179_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.HttpWebRequest::get_Credentials()
extern "C"  Object_t * HttpWebRequest_get_Credentials_m1078824536_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Credentials(System.Net.ICredentials)
extern "C"  void HttpWebRequest_set_Credentials_m852191195_0 (HttpWebRequest_t_319555179_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebRequest::get_Headers()
extern "C"  WebHeaderCollection_t_1532305783_0 * HttpWebRequest_get_Headers_m1094031202_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_KeepAlive()
extern "C"  bool HttpWebRequest_get_KeepAlive_m1231113482_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpWebRequest::get_ReadWriteTimeout()
extern "C"  int32_t HttpWebRequest_get_ReadWriteTimeout_m_1159259394_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_Method()
extern "C"  String_t* HttpWebRequest_get_Method_m_1936999148_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.HttpWebRequest::get_Proxy()
extern "C"  Object_t * HttpWebRequest_get_Proxy_m_1736324218_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_RequestUri()
extern "C"  Uri_t_27263938_0 * HttpWebRequest_get_RequestUri_m_2017796799_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_SendChunked()
extern "C"  bool HttpWebRequest_get_SendChunked_m_1450395482_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C"  ServicePoint_t1961884333_0 * HttpWebRequest_get_ServicePoint_m1869616069_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_TransferEncoding()
extern "C"  String_t* HttpWebRequest_get_TransferEncoding_m_212629295_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing()
extern "C"  bool HttpWebRequest_get_UnsafeAuthenticatedConnectionSharing_m_931464107_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ExpectContinue()
extern "C"  bool HttpWebRequest_get_ExpectContinue_m_487444480_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ExpectContinue(System.Boolean)
extern "C"  void HttpWebRequest_set_ExpectContinue_m372676545_0 (HttpWebRequest_t_319555179_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ProxyQuery()
extern "C"  bool HttpWebRequest_get_ProxyQuery_m_26556454_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C"  ServicePoint_t1961884333_0 * HttpWebRequest_GetServicePoint_m_1928370802_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckIfForceWrite()
extern "C"  void HttpWebRequest_CheckIfForceWrite_m_1055224146_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C"  Object_t * HttpWebRequest_BeginGetResponse_m_1857488349_0 (HttpWebRequest_t_319555179_0 * __this, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::EndGetResponse(System.IAsyncResult)
extern "C"  WebResponse_t_2034122602_0 * HttpWebRequest_EndGetResponse_m_891978252_0 (HttpWebRequest_t_319555179_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::GetResponse()
extern "C"  WebResponse_t_2034122602_0 * HttpWebRequest_GetResponse_m1494888070_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_FinishedReading()
extern "C"  bool HttpWebRequest_get_FinishedReading_m884104508_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_FinishedReading(System.Boolean)
extern "C"  void HttpWebRequest_set_FinishedReading_m1315164329_0 (HttpWebRequest_t_319555179_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_Aborted()
extern "C"  bool HttpWebRequest_get_Aborted_m_2066137327_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::Abort()
extern "C"  void HttpWebRequest_Abort_m_956798907_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest_GetObjectData_m_420971499_0 (HttpWebRequest_t_319555179_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoContinueDelegate(System.Int32,System.Net.WebHeaderCollection)
extern "C"  void HttpWebRequest_DoContinueDelegate_m1174339138_0 (HttpWebRequest_t_319555179_0 * __this, int32_t ___statusCode, WebHeaderCollection_t_1532305783_0 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::Redirect(System.Net.WebAsyncResult,System.Net.HttpStatusCode)
extern "C"  bool HttpWebRequest_Redirect_m67901887_0 (HttpWebRequest_t_319555179_0 * __this, WebAsyncResult_t444298619_0 * ___result, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::GetHeaders()
extern "C"  String_t* HttpWebRequest_GetHeaders_m306062586_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoPreAuthenticate()
extern "C"  void HttpWebRequest_DoPreAuthenticate_m1395833058_0 (HttpWebRequest_t_319555179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStreamError(System.Net.WebExceptionStatus,System.Exception)
extern "C"  void HttpWebRequest_SetWriteStreamError_m_250284735_0 (HttpWebRequest_t_319555179_0 * __this, int32_t ___status, Exception_t2143823668_0 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SendRequestHeaders(System.Boolean)
extern "C"  void HttpWebRequest_SendRequestHeaders_m1174520259_0 (HttpWebRequest_t_319555179_0 * __this, bool ___propagate_error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStream(System.Net.WebConnectionStream)
extern "C"  void HttpWebRequest_SetWriteStream_m_1092149144_0 (HttpWebRequest_t_319555179_0 * __this, WebConnectionStream_t_1686496900_0 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseError(System.Net.WebExceptionStatus,System.Exception,System.String)
extern "C"  void HttpWebRequest_SetResponseError_m1093010447_0 (HttpWebRequest_t_319555179_0 * __this, int32_t ___status, Exception_t2143823668_0 * ___e, String_t* ___where, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckSendError(System.Net.WebConnectionData)
extern "C"  void HttpWebRequest_CheckSendError_m181530809_0 (HttpWebRequest_t_319555179_0 * __this, WebConnectionData_t909510822_0 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::HandleNtlmAuth(System.Net.WebAsyncResult)
extern "C"  void HttpWebRequest_HandleNtlmAuth_m418121433_0 (HttpWebRequest_t_319555179_0 * __this, WebAsyncResult_t444298619_0 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseData(System.Net.WebConnectionData)
extern "C"  void HttpWebRequest_SetResponseData_m_1820652426_0 (HttpWebRequest_t_319555179_0 * __this, WebConnectionData_t909510822_0 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckAuthorization(System.Net.WebResponse,System.Net.HttpStatusCode)
extern "C"  bool HttpWebRequest_CheckAuthorization_m_549562440_0 (HttpWebRequest_t_319555179_0 * __this, WebResponse_t_2034122602_0 * ___response, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckFinalStatus(System.Net.WebAsyncResult)
extern "C"  bool HttpWebRequest_CheckFinalStatus_m52272070_0 (HttpWebRequest_t_319555179_0 * __this, WebAsyncResult_t444298619_0 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
