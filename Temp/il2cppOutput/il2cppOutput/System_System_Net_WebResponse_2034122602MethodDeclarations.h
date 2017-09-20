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

// System.Net.WebResponse
struct WebResponse_t_2034122602_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t_1532305783_0;
// System.Exception
struct Exception_t2143823668_0;
// System.IO.Stream
struct Stream_t463444077_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Net.WebResponse::.ctor()
extern "C"  void WebResponse__ctor_m_329453449_0 (WebResponse_t_2034122602_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebResponse__ctor_m2042933560_0 (WebResponse_t_2034122602_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.IDisposable.Dispose()
extern "C"  void WebResponse_System_IDisposable_Dispose_m931962760_0 (WebResponse_t_2034122602_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m_1317371084_0 (WebResponse_t_2034122602_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebResponse::get_Headers()
extern "C"  WebHeaderCollection_t_1532305783_0 * WebResponse_get_Headers_m_170332158_0 (WebResponse_t_2034122602_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebResponse::GetMustImplement()
extern "C"  Exception_t2143823668_0 * WebResponse_GetMustImplement_m1484151200_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::Close()
extern "C"  void WebResponse_Close_m1381406093_0 (WebResponse_t_2034122602_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebResponse::GetResponseStream()
extern "C"  Stream_t463444077_0 * WebResponse_GetResponseStream_m1640513078_0 (WebResponse_t_2034122602_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebResponse_GetObjectData_m_1245888363_0 (WebResponse_t_2034122602_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
