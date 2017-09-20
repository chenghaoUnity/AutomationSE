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

// System.Net.Sockets.NetworkStream
struct NetworkStream_t2105919658_0;
// System.Net.Sockets.Socket
struct Socket_t771039639_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_FileAccess724014189.h"
#include "mscorlib_System_IO_SeekOrigin_1060652501.h"

// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket)
extern "C"  void NetworkStream__ctor_m_1541738731_0 (NetworkStream_t2105919658_0 * __this, Socket_t771039639_0 * ___socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.Boolean)
extern "C"  void NetworkStream__ctor_m520140744_0 (NetworkStream_t2105919658_0 * __this, Socket_t771039639_0 * ___socket, bool ___owns_socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.IO.FileAccess,System.Boolean)
extern "C"  void NetworkStream__ctor_m1461663701_0 (NetworkStream_t2105919658_0 * __this, Socket_t771039639_0 * ___socket, int32_t ___access, bool ___owns_socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::System.IDisposable.Dispose()
extern "C"  void NetworkStream_System_IDisposable_Dispose_m_23453965_0 (NetworkStream_t2105919658_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanRead()
extern "C"  bool NetworkStream_get_CanRead_m1447813521_0 (NetworkStream_t2105919658_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanSeek()
extern "C"  bool NetworkStream_get_CanSeek_m1476568563_0 (NetworkStream_t2105919658_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanWrite()
extern "C"  bool NetworkStream_get_CanWrite_m_1839767578_0 (NetworkStream_t2105919658_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::get_Length()
extern "C"  int64_t NetworkStream_get_Length_m1553131640_0 (NetworkStream_t2105919658_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::get_Position()
extern "C"  int64_t NetworkStream_get_Position_m_1867611717_0 (NetworkStream_t2105919658_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::set_Position(System.Int64)
extern "C"  void NetworkStream_set_Position_m1068534608_0 (NetworkStream_t2105919658_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::get_ReadTimeout()
extern "C"  int32_t NetworkStream_get_ReadTimeout_m_1347705124_0 (NetworkStream_t2105919658_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::get_WriteTimeout()
extern "C"  int32_t NetworkStream_get_WriteTimeout_m1563094355_0 (NetworkStream_t2105919658_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.NetworkStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * NetworkStream_BeginRead_m601033934_0 (NetworkStream_t2105919658_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.NetworkStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * NetworkStream_BeginWrite_m_370287941_0 (NetworkStream_t2105919658_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Finalize()
extern "C"  void NetworkStream_Finalize_m1616600246_0 (NetworkStream_t2105919658_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Dispose(System.Boolean)
extern "C"  void NetworkStream_Dispose_m_1183162592_0 (NetworkStream_t2105919658_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::EndRead(System.IAsyncResult)
extern "C"  int32_t NetworkStream_EndRead_m_758806952_0 (NetworkStream_t2105919658_0 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::EndWrite(System.IAsyncResult)
extern "C"  void NetworkStream_EndWrite_m_10017401_0 (NetworkStream_t2105919658_0 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Flush()
extern "C"  void NetworkStream_Flush_m1627337550_0 (NetworkStream_t2105919658_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t NetworkStream_Read_m945182283_0 (NetworkStream_t2105919658_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t NetworkStream_Seek_m_1681991572_0 (NetworkStream_t2105919658_0 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::SetLength(System.Int64)
extern "C"  void NetworkStream_SetLength_m_636724604_0 (NetworkStream_t2105919658_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkStream_Write_m133161568_0 (NetworkStream_t2105919658_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::CheckDisposed()
extern "C"  void NetworkStream_CheckDisposed_m_482144169_0 (NetworkStream_t2105919658_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
