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

// System.Net.WebException
struct WebException_t807691409_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Exception
struct Exception_t2143823668_0;
// System.Net.WebResponse
struct WebResponse_t_2034122602_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"
#include "System_System_Net_WebExceptionStatus_18632733.h"

// System.Void System.Net.WebException::.ctor()
extern "C"  void WebException__ctor_m350863519_0 (WebException_t807691409_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String)
extern "C"  void WebException__ctor_m1678776515_0 (WebException_t807691409_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebException__ctor_m1447032160_0 (WebException_t807691409_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception)
extern "C"  void WebException__ctor_m_1191843117_0 (WebException_t807691409_0 * __this, String_t* ___message, Exception_t2143823668_0 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Net.WebExceptionStatus)
extern "C"  void WebException__ctor_m_1320985550_0 (WebException_t807691409_0 * __this, String_t* ___message, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus)
extern "C"  void WebException__ctor_m1782198850_0 (WebException_t807691409_0 * __this, String_t* ___message, Exception_t2143823668_0 * ___innerException, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
extern "C"  void WebException__ctor_m_915683873_0 (WebException_t807691409_0 * __this, String_t* ___message, Exception_t2143823668_0 * ___innerException, int32_t ___status, WebResponse_t_2034122602_0 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebException_System_Runtime_Serialization_ISerializable_GetObjectData_m871947788_0 (WebException_t807691409_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebExceptionStatus System.Net.WebException::get_Status()
extern "C"  int32_t WebException_get_Status_m_2030562582_0 (WebException_t807691409_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebException_GetObjectData_m1063640253_0 (WebException_t807691409_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
