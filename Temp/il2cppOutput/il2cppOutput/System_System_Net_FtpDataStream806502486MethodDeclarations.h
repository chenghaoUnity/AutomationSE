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

// System.Net.FtpDataStream
struct FtpDataStream_t806502486_0;
// System.Net.FtpWebRequest
struct FtpWebRequest_t1507005735_0;
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
#include "mscorlib_System_IO_SeekOrigin_1060652501.h"

// System.Void System.Net.FtpDataStream::.ctor(System.Net.FtpWebRequest,System.IO.Stream,System.Boolean)
extern "C"  void FtpDataStream__ctor_m1292366195_0 (FtpDataStream_t806502486_0 * __this, FtpWebRequest_t1507005735_0 * ___request, Stream_t463444077_0 * ___stream, bool ___isRead, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::System.IDisposable.Dispose()
extern "C"  void FtpDataStream_System_IDisposable_Dispose_m1477901983_0 (FtpDataStream_t806502486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpDataStream::get_CanRead()
extern "C"  bool FtpDataStream_get_CanRead_m_62822043_0 (FtpDataStream_t806502486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpDataStream::get_CanWrite()
extern "C"  bool FtpDataStream_get_CanWrite_m_1424829806_0 (FtpDataStream_t806502486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpDataStream::get_CanSeek()
extern "C"  bool FtpDataStream_get_CanSeek_m_34067001_0 (FtpDataStream_t806502486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpDataStream::get_Length()
extern "C"  int64_t FtpDataStream_get_Length_m1564877092_0 (FtpDataStream_t806502486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpDataStream::get_Position()
extern "C"  int64_t FtpDataStream_get_Position_m829833063_0 (FtpDataStream_t806502486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::set_Position(System.Int64)
extern "C"  void FtpDataStream_set_Position_m_2013698564_0 (FtpDataStream_t806502486_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Close()
extern "C"  void FtpDataStream_Close_m_1771235818_0 (FtpDataStream_t806502486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Flush()
extern "C"  void FtpDataStream_Flush_m896819234_0 (FtpDataStream_t806502486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpDataStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t FtpDataStream_Seek_m1228510272_0 (FtpDataStream_t806502486_0 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::SetLength(System.Int64)
extern "C"  void FtpDataStream_SetLength_m592797528_0 (FtpDataStream_t806502486_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FtpDataStream_ReadInternal_m_1471168798_0 (FtpDataStream_t806502486_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpDataStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * FtpDataStream_BeginRead_m_2023796062_0 (FtpDataStream_t806502486_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t_266361018_0 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream::EndRead(System.IAsyncResult)
extern "C"  int32_t FtpDataStream_EndRead_m_620653052_0 (FtpDataStream_t806502486_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FtpDataStream_Read_m_841083873_0 (FtpDataStream_t806502486_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  void FtpDataStream_WriteInternal_m1319050447_0 (FtpDataStream_t806502486_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpDataStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * FtpDataStream_BeginWrite_m_135639193_0 (FtpDataStream_t806502486_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t_266361018_0 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::EndWrite(System.IAsyncResult)
extern "C"  void FtpDataStream_EndWrite_m_712623269_0 (FtpDataStream_t806502486_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void FtpDataStream_Write_m336375564_0 (FtpDataStream_t806502486_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Finalize()
extern "C"  void FtpDataStream_Finalize_m1344737122_0 (FtpDataStream_t806502486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Dispose(System.Boolean)
extern "C"  void FtpDataStream_Dispose_m46359540_0 (FtpDataStream_t806502486_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::CheckDisposed()
extern "C"  void FtpDataStream_CheckDisposed_m_25679573_0 (FtpDataStream_t806502486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
