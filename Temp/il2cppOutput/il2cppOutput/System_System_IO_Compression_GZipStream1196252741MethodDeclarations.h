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

// System.IO.Compression.GZipStream
struct GZipStream_t1196252741_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_IO_Compression_CompressionMode_1565328866.h"
#include "mscorlib_System_IO_SeekOrigin_1060652501.h"

// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
extern "C"  void GZipStream__ctor_m2136427100_0 (GZipStream_t1196252741_0 * __this, Stream_t463444077_0 * ___compressedStream, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
extern "C"  void GZipStream__ctor_m1301775777_0 (GZipStream_t1196252741_0 * __this, Stream_t463444077_0 * ___compressedStream, int32_t ___mode, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::Dispose(System.Boolean)
extern "C"  void GZipStream_Dispose_m1233763813_0 (GZipStream_t1196252741_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t GZipStream_Read_m295052112_0 (GZipStream_t1196252741_0 * __this, ByteU5BU5D_t_1238178395_0* ___dest, int32_t ___dest_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void GZipStream_Write_m1453962747_0 (GZipStream_t1196252741_0 * __this, ByteU5BU5D_t_1238178395_0* ___src, int32_t ___src_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::Flush()
extern "C"  void GZipStream_Flush_m1315355667_0 (GZipStream_t1196252741_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t GZipStream_Seek_m_1609953999_0 (GZipStream_t1196252741_0 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::SetLength(System.Int64)
extern "C"  void GZipStream_SetLength_m1780201801_0 (GZipStream_t1196252741_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.GZipStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * GZipStream_BeginRead_m_1818054445_0 (GZipStream_t1196252741_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t_266361018_0 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.GZipStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * GZipStream_BeginWrite_m1947383638_0 (GZipStream_t1196252741_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t_266361018_0 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.GZipStream::EndRead(System.IAsyncResult)
extern "C"  int32_t GZipStream_EndRead_m_1412719949_0 (GZipStream_t1196252741_0 * __this, Object_t * ___async_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::EndWrite(System.IAsyncResult)
extern "C"  void GZipStream_EndWrite_m1193516172_0 (GZipStream_t1196252741_0 * __this, Object_t * ___async_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.GZipStream::get_CanRead()
extern "C"  bool GZipStream_get_CanRead_m1595474582_0 (GZipStream_t1196252741_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.GZipStream::get_CanSeek()
extern "C"  bool GZipStream_get_CanSeek_m1624229624_0 (GZipStream_t1196252741_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.GZipStream::get_CanWrite()
extern "C"  bool GZipStream_get_CanWrite_m_1557241983_0 (GZipStream_t1196252741_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.GZipStream::get_Length()
extern "C"  int64_t GZipStream_get_Length_m449516243_0 (GZipStream_t1196252741_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.GZipStream::get_Position()
extern "C"  int64_t GZipStream_get_Position_m_1585086122_0 (GZipStream_t1196252741_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::set_Position(System.Int64)
extern "C"  void GZipStream_set_Position_m_1403651477_0 (GZipStream_t1196252741_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
