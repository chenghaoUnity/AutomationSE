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

// System.Net.FileWebRequest
struct FileWebRequest_t_2084336915_0;
// System.Uri
struct Uri_t_27263938_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Net.ICredentials
struct ICredentials_t359442962_0;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t_1532305783_0;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t1249552781_0;
// System.Exception
struct Exception_t2143823668_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t_2034122602_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Net.FileWebRequest::.ctor(System.Uri)
extern "C"  void FileWebRequest__ctor_m1190066806_0 (FileWebRequest_t_2084336915_0 * __this, Uri_t_27263938_0 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebRequest__ctor_m_1877546684_0 (FileWebRequest_t_2084336915_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m_707491928_0 (FileWebRequest_t_2084336915_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FileWebRequest::get_ContentLength()
extern "C"  int64_t FileWebRequest_get_ContentLength_m_335450200_0 (FileWebRequest_t_2084336915_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FileWebRequest::get_Credentials()
extern "C"  Object_t * FileWebRequest_get_Credentials_m_1143360028_0 (FileWebRequest_t_2084336915_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_Credentials(System.Net.ICredentials)
extern "C"  void FileWebRequest_set_Credentials_m_2023914801_0 (FileWebRequest_t_2084336915_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebRequest::get_Headers()
extern "C"  WebHeaderCollection_t_1532305783_0 * FileWebRequest_get_Headers_m_1229232914_0 (FileWebRequest_t_2084336915_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FileWebRequest::get_Method()
extern "C"  String_t* FileWebRequest_get_Method_m2005929480_0 (FileWebRequest_t_2084336915_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FileWebRequest::get_Proxy()
extern "C"  Object_t * FileWebRequest_get_Proxy_m469077010_0 (FileWebRequest_t_2084336915_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FileWebRequest::get_RequestUri()
extern "C"  Uri_t_27263938_0 * FileWebRequest_get_RequestUri_m_981101515_0 (FileWebRequest_t_2084336915_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FileWebRequest::GetMustImplement()
extern "C"  Exception_t2143823668_0 * FileWebRequest_GetMustImplement_m391298838_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Abort()
extern "C"  void FileWebRequest_Abort_m303714001_0 (FileWebRequest_t_2084336915_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FileWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C"  Object_t * FileWebRequest_BeginGetResponse_m1046890263_0 (FileWebRequest_t_2084336915_0 * __this, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::EndGetResponse(System.IAsyncResult)
extern "C"  WebResponse_t_2034122602_0 * FileWebRequest_EndGetResponse_m1769167488_0 (FileWebRequest_t_2084336915_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponse()
extern "C"  WebResponse_t_2034122602_0 * FileWebRequest_GetResponse_m_828376046_0 (FileWebRequest_t_2084336915_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponseInternal()
extern "C"  WebResponse_t_2034122602_0 * FileWebRequest_GetResponseInternal_m_1220590929_0 (FileWebRequest_t_2084336915_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebRequest_GetObjectData_m1166847137_0 (FileWebRequest_t_2084336915_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Close()
extern "C"  void FileWebRequest_Close_m_1929939047_0 (FileWebRequest_t_2084336915_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
