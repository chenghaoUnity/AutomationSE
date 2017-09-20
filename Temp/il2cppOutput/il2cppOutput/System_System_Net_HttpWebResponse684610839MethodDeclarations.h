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

// System.Net.HttpWebResponse
struct HttpWebResponse_t684610839_0;
// System.Uri
struct Uri_t_27263938_0;
// System.String
struct String_t;
// System.Net.WebConnectionData
struct WebConnectionData_t909510822_0;
// System.Net.CookieContainer
struct CookieContainer_t1416428935_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t_1532305783_0;
// System.IO.Stream
struct Stream_t463444077_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"
#include "System_System_Net_HttpStatusCode_1016869027.h"
#include "mscorlib_System_DateTime_818288618.h"

// System.Void System.Net.HttpWebResponse::.ctor(System.Uri,System.String,System.Net.WebConnectionData,System.Net.CookieContainer)
extern "C"  void HttpWebResponse__ctor_m704868621_0 (HttpWebResponse_t684610839_0 * __this, Uri_t_27263938_0 * ___uri, String_t* ___method, WebConnectionData_t909510822_0 * ___data, CookieContainer_t1416428935_0 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebResponse__ctor_m96379232_0 (HttpWebResponse_t684610839_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m_1485655540_0 (HttpWebResponse_t684610839_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.IDisposable.Dispose()
extern "C"  void HttpWebResponse_System_IDisposable_Dispose_m705809504_0 (HttpWebResponse_t684610839_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebResponse::get_Headers()
extern "C"  WebHeaderCollection_t_1532305783_0 * HttpWebResponse_get_Headers_m1322100266_0 (HttpWebResponse_t684610839_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpStatusCode System.Net.HttpWebResponse::get_StatusCode()
extern "C"  int32_t HttpWebResponse_get_StatusCode_m1024380905_0 (HttpWebResponse_t684610839_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_StatusDescription()
extern "C"  String_t* HttpWebResponse_get_StatusDescription_m1329734203_0 (HttpWebResponse_t684610839_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::ReadAll()
extern "C"  void HttpWebResponse_ReadAll_m1984785448_0 (HttpWebResponse_t684610839_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpWebResponse::GetResponseStream()
extern "C"  Stream_t463444077_0 * HttpWebResponse_GetResponseStream_m2118879582_0 (HttpWebResponse_t684610839_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebResponse_GetObjectData_m_1955034947_0 (HttpWebResponse_t684610839_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Close()
extern "C"  void HttpWebResponse_Close_m_1136913995_0 (HttpWebResponse_t684610839_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Dispose(System.Boolean)
extern "C"  void HttpWebResponse_Dispose_m1925005715_0 (HttpWebResponse_t684610839_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::CheckDisposed()
extern "C"  void HttpWebResponse_CheckDisposed_m_1516431926_0 (HttpWebResponse_t684610839_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::FillCookies()
extern "C"  void HttpWebResponse_FillCookies_m_376054455_0 (HttpWebResponse_t684610839_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie(System.String)
extern "C"  void HttpWebResponse_SetCookie_m1353788479_0 (HttpWebResponse_t684610839_0 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie2(System.String)
extern "C"  void HttpWebResponse_SetCookie2_m1214268497_0 (HttpWebResponse_t684610839_0 * __this, String_t* ___cookies_str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.HttpWebResponse::TryParseCookieExpires(System.String)
extern "C"  DateTime_t_818288618_0  HttpWebResponse_TryParseCookieExpires_m1708112230_0 (HttpWebResponse_t684610839_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
