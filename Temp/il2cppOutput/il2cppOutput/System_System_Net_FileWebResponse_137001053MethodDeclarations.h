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

// System.Net.FileWebResponse
struct FileWebResponse_t_137001053_0;
// System.Uri
struct Uri_t_27263938_0;
// System.IO.FileStream
struct FileStream_t1255485065_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t_1532305783_0;
// System.IO.Stream
struct Stream_t463444077_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Net.FileWebResponse::.ctor(System.Uri,System.IO.FileStream)
extern "C"  void FileWebResponse__ctor_m_91880389_0 (FileWebResponse_t_137001053_0 * __this, Uri_t_27263938_0 * ___responseUri, FileStream_t1255485065_0 * ___fileStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebResponse__ctor_m_1917143468_0 (FileWebResponse_t_137001053_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m1417232536_0 (FileWebResponse_t_137001053_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.IDisposable.Dispose()
extern "C"  void FileWebResponse_System_IDisposable_Dispose_m423821804_0 (FileWebResponse_t_137001053_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebResponse::get_Headers()
extern "C"  WebHeaderCollection_t_1532305783_0 * FileWebResponse_get_Headers_m_1979610594_0 (FileWebResponse_t_137001053_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebResponse_GetObjectData_m22702513_0 (FileWebResponse_t_137001053_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebResponse::GetResponseStream()
extern "C"  Stream_t463444077_0 * FileWebResponse_GetResponseStream_m_650533294_0 (FileWebResponse_t_137001053_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Finalize()
extern "C"  void FileWebResponse_Finalize_m_1519502353_0 (FileWebResponse_t_137001053_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Close()
extern "C"  void FileWebResponse_Close_m_715719511_0 (FileWebResponse_t_137001053_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Dispose(System.Boolean)
extern "C"  void FileWebResponse_Dispose_m1051444359_0 (FileWebResponse_t_137001053_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::CheckDisposed()
extern "C"  void FileWebResponse_CheckDisposed_m_479736642_0 (FileWebResponse_t_137001053_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
