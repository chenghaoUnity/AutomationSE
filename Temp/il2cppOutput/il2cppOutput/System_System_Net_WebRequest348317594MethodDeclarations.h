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

// System.Net.WebRequest
struct WebRequest_t348317594_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
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
// System.Uri
struct Uri_t_27263938_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t_2034122602_0;
// System.Net.IWebRequestCreate
struct IWebRequestCreate_t1397516426_0;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Net.WebRequest::.ctor()
extern "C"  void WebRequest__ctor_m_386560737_0 (WebRequest_t348317594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebRequest__ctor_m_2026896928_0 (WebRequest_t348317594_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.cctor()
extern "C"  void WebRequest__cctor_m419422830_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m_795704948_0 (WebRequest_t348317594_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebRequest::GetMustImplement()
extern "C"  Exception_t2143823668_0 * WebRequest_GetMustImplement_m_1949410438_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebRequest::get_ContentLength()
extern "C"  int64_t WebRequest_get_ContentLength_m282902724_0 (WebRequest_t348317594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebRequest::get_Credentials()
extern "C"  Object_t * WebRequest_get_Credentials_m632231296_0 (WebRequest_t348317594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials)
extern "C"  void WebRequest_set_Credentials_m1948289971_0 (WebRequest_t348317594_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers()
extern "C"  WebHeaderCollection_t_1532305783_0 * WebRequest_get_Headers_m_1725058422_0 (WebRequest_t348317594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebRequest::get_Method()
extern "C"  String_t* WebRequest_get_Method_m1855994732_0 (WebRequest_t348317594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_Proxy()
extern "C"  Object_t * WebRequest_get_Proxy_m1263414958_0 (WebRequest_t348317594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebRequest::get_RequestUri()
extern "C"  Uri_t_27263938_0 * WebRequest_get_RequestUri_m_407605223_0 (WebRequest_t348317594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
extern "C"  Object_t * WebRequest_get_DefaultWebProxy_m645383963_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetDefaultWebProxy()
extern "C"  Object_t * WebRequest_GetDefaultWebProxy_m_1063003970_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::Abort()
extern "C"  void WebRequest_Abort_m_737015443_0 (WebRequest_t348317594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C"  Object_t * WebRequest_BeginGetResponse_m1262614523_0 (WebRequest_t348317594_0 * __this, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
extern "C"  WebRequest_t348317594_0 * WebRequest_Create_m1770286229_0 (Object_t * __this /* static, unused */, Uri_t_27263938_0 * ___requestUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult)
extern "C"  WebResponse_t_2034122602_0 * WebRequest_EndGetResponse_m1707925532_0 (WebRequest_t348317594_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::GetResponse()
extern "C"  WebResponse_t_2034122602_0 * WebRequest_GetResponse_m461741742_0 (WebRequest_t348317594_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetSystemWebProxy()
extern "C"  Object_t * WebRequest_GetSystemWebProxy_m_137182296_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebRequest_GetObjectData_m_675190467_0 (WebRequest_t348317594_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebRequestCreate System.Net.WebRequest::GetCreator(System.String)
extern "C"  Object_t * WebRequest_GetCreator_m1370740790_0 (Object_t * __this /* static, unused */, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::ClearPrefixes()
extern "C"  void WebRequest_ClearPrefixes_m_263160022_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::RemovePrefix(System.String)
extern "C"  void WebRequest_RemovePrefix_m_1248812057_0 (Object_t * __this /* static, unused */, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.String)
extern "C"  void WebRequest_AddPrefix_m_602006610_0 (Object_t * __this /* static, unused */, String_t* ___prefix, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.Type)
extern "C"  void WebRequest_AddPrefix_m_1371621595_0 (Object_t * __this /* static, unused */, String_t* ___prefix, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
