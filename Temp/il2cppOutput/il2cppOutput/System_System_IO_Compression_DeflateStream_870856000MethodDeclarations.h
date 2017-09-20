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

// System.IO.Compression.DeflateStream
struct DeflateStream_t_870856000_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;
// System.Object
struct Object_t;
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t_1624402289_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_IO_Compression_CompressionMode_1565328866.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_IO_SeekOrigin_1060652501.h"

// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
extern "C"  void DeflateStream__ctor_m_2124860421_0 (DeflateStream_t_870856000_0 * __this, Stream_t463444077_0 * ___compressedStream, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
extern "C"  void DeflateStream__ctor_m_958185189_0 (DeflateStream_t_870856000_0 * __this, Stream_t463444077_0 * ___compressedStream, int32_t ___mode, bool ___leaveOpen, bool ___gzip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Dispose(System.Boolean)
extern "C"  void DeflateStream_Dispose_m1280984772_0 (DeflateStream_t_870856000_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t DeflateStream_UnmanagedRead_m404803083_0 (Object_t * __this /* static, unused */, IntPtr_t ___buffer, int32_t ___length, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedRead(System.IntPtr,System.Int32)
extern "C"  int32_t DeflateStream_UnmanagedRead_m709889853_0 (DeflateStream_t_870856000_0 * __this, IntPtr_t ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t DeflateStream_UnmanagedWrite_m223973422_0 (Object_t * __this /* static, unused */, IntPtr_t ___buffer, int32_t ___length, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedWrite(System.IntPtr,System.Int32)
extern "C"  int32_t DeflateStream_UnmanagedWrite_m1575352992_0 (DeflateStream_t_870856000_0 * __this, IntPtr_t ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t DeflateStream_ReadInternal_m2114588690_0 (DeflateStream_t_870856000_0 * __this, ByteU5BU5D_t_1238178395_0* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t DeflateStream_Read_m_1328245425_0 (DeflateStream_t_870856000_0 * __this, ByteU5BU5D_t_1238178395_0* ___dest, int32_t ___dest_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_WriteInternal_m_1847599105_0 (DeflateStream_t_870856000_0 * __this, ByteU5BU5D_t_1238178395_0* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_Write_m_2095340996_0 (DeflateStream_t_870856000_0 * __this, ByteU5BU5D_t_1238178395_0* ___src, int32_t ___src_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::CheckResult(System.Int32,System.String)
extern "C"  void DeflateStream_CheckResult_m_2074559680_0 (Object_t * __this /* static, unused */, int32_t ___result, String_t* ___where, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Flush()
extern "C"  void DeflateStream_Flush_m508224242_0 (DeflateStream_t_870856000_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * DeflateStream_BeginRead_m_522779142_0 (DeflateStream_t_870856000_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t_266361018_0 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * DeflateStream_BeginWrite_m_848754929_0 (DeflateStream_t_870856000_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t_266361018_0 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
extern "C"  int32_t DeflateStream_EndRead_m1762250452_0 (DeflateStream_t_870856000_0 * __this, Object_t * ___async_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
extern "C"  void DeflateStream_EndWrite_m1375453739_0 (DeflateStream_t_870856000_0 * __this, Object_t * ___async_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t DeflateStream_Seek_m_43706670_0 (DeflateStream_t_870856000_0 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::SetLength(System.Int64)
extern "C"  void DeflateStream_SetLength_m1827422760_0 (DeflateStream_t_870856000_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanRead()
extern "C"  bool DeflateStream_get_CanRead_m1107799201_0 (DeflateStream_t_870856000_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanSeek()
extern "C"  bool DeflateStream_get_CanSeek_m1136554243_0 (DeflateStream_t_870856000_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanWrite()
extern "C"  bool DeflateStream_get_CanWrite_m504690390_0 (DeflateStream_t_870856000_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::get_Length()
extern "C"  int64_t DeflateStream_get_Length_m_1870814766_0 (DeflateStream_t_870856000_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::get_Position()
extern "C"  int64_t DeflateStream_get_Position_m1959808149_0 (DeflateStream_t_870856000_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::set_Position(System.Int64)
extern "C"  void DeflateStream_set_Position_m901632300_0 (DeflateStream_t_870856000_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.Compression.DeflateStream::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStream/UnmanagedReadOrWrite,System.IntPtr)
extern "C"  IntPtr_t DeflateStream_CreateZStream_m_1490896549_0 (Object_t * __this /* static, unused */, int32_t ___compress, bool ___gzip, UnmanagedReadOrWrite_t_1624402289_0 * ___feeder, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::CloseZStream(System.IntPtr)
extern "C"  int32_t DeflateStream_CloseZStream_m216284366_0 (Object_t * __this /* static, unused */, IntPtr_t ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::Flush(System.IntPtr)
extern "C"  int32_t DeflateStream_Flush_m1378424946_0 (Object_t * __this /* static, unused */, IntPtr_t ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::ReadZStream(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  int32_t DeflateStream_ReadZStream_m630967223_0 (Object_t * __this /* static, unused */, IntPtr_t ___stream, IntPtr_t ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::WriteZStream(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  int32_t DeflateStream_WriteZStream_m123938164_0 (Object_t * __this /* static, unused */, IntPtr_t ___stream, IntPtr_t ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
