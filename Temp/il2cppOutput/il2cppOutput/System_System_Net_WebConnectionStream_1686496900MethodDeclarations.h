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

// System.Net.WebConnectionStream
struct WebConnectionStream_t_1686496900_0;
// System.Net.WebConnection
struct WebConnection_t_192777508_0;
// System.Net.HttpWebRequest
struct HttpWebRequest_t_319555179_0;
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

// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection)
extern "C"  void WebConnectionStream__ctor_m1279182072_0 (WebConnectionStream_t_1686496900_0 * __this, WebConnection_t_192777508_0 * ___cnc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C"  void WebConnectionStream__ctor_m_1715635759_0 (WebConnectionStream_t_1686496900_0 * __this, WebConnection_t_192777508_0 * ___cnc, HttpWebRequest_t_319555179_0 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.cctor()
extern "C"  void WebConnectionStream__cctor_m1397878419_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::IsNtlmAuth()
extern "C"  bool WebConnectionStream_IsNtlmAuth_m1696095129_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckResponseInBuffer()
extern "C"  void WebConnectionStream_CheckResponseInBuffer_m_1418837434_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionStream::get_Connection()
extern "C"  WebConnection_t_192777508_0 * WebConnectionStream_get_Connection_m_1316771570_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_ReadTimeout()
extern "C"  int32_t WebConnectionStream_get_ReadTimeout_m_204235382_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteTimeout()
extern "C"  int32_t WebConnectionStream_get_WriteTimeout_m_1644049307_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CompleteRequestWritten()
extern "C"  bool WebConnectionStream_get_CompleteRequestWritten_m817760810_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_SendChunked(System.Boolean)
extern "C"  void WebConnectionStream_set_SendChunked_m761764086_0 (WebConnectionStream_t_1686496900_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBuffer(System.Byte[])
extern "C"  void WebConnectionStream_set_ReadBuffer_m_796087348_0 (WebConnectionStream_t_1686496900_0 * __this, ByteU5BU5D_t_1238178395_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferOffset(System.Int32)
extern "C"  void WebConnectionStream_set_ReadBufferOffset_m1760629601_0 (WebConnectionStream_t_1686496900_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferSize(System.Int32)
extern "C"  void WebConnectionStream_set_ReadBufferSize_m_2040687281_0 (WebConnectionStream_t_1686496900_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebConnectionStream::get_WriteBuffer()
extern "C"  ByteU5BU5D_t_1238178395_0* WebConnectionStream_get_WriteBuffer_m_1595843868_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteBufferLength()
extern "C"  int32_t WebConnectionStream_get_WriteBufferLength_m47053412_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ForceCompletion()
extern "C"  void WebConnectionStream_ForceCompletion_m_1678731233_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckComplete()
extern "C"  void WebConnectionStream_CheckComplete_m212386969_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadAll()
extern "C"  void WebConnectionStream_ReadAll_m950658339_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteCallbackWrapper(System.IAsyncResult)
extern "C"  void WebConnectionStream_WriteCallbackWrapper_m_1413275990_0 (WebConnectionStream_t_1686496900_0 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadCallbackWrapper(System.IAsyncResult)
extern "C"  void WebConnectionStream_ReadCallbackWrapper_m_1925494637_0 (WebConnectionStream_t_1686496900_0 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t WebConnectionStream_Read_m635345913_0 (WebConnectionStream_t_1686496900_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * WebConnectionStream_BeginRead_m1757407100_0 (WebConnectionStream_t_1686496900_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t_266361018_0 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::EndRead(System.IAsyncResult)
extern "C"  int32_t WebConnectionStream_EndRead_m803616490_0 (WebConnectionStream_t_1686496900_0 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequestAsyncCB(System.IAsyncResult)
extern "C"  void WebConnectionStream_WriteRequestAsyncCB_m_1486365056_0 (WebConnectionStream_t_1686496900_0 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * WebConnectionStream_BeginWrite_m1117541837_0 (WebConnectionStream_t_1686496900_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t_266361018_0 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckWriteOverflow(System.Int64,System.Int64,System.Int64)
extern "C"  void WebConnectionStream_CheckWriteOverflow_m2000670613_0 (WebConnectionStream_t_1686496900_0 * __this, int64_t ___contentLength, int64_t ___totalWritten, int64_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::EndWrite(System.IAsyncResult)
extern "C"  void WebConnectionStream_EndWrite_m1280201525_0 (WebConnectionStream_t_1686496900_0 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void WebConnectionStream_Write_m_2049964430_0 (WebConnectionStream_t_1686496900_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Flush()
extern "C"  void WebConnectionStream_Flush_m_825239684_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetHeaders(System.Byte[])
extern "C"  void WebConnectionStream_SetHeaders_m859079643_0 (WebConnectionStream_t_1686496900_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_RequestWritten()
extern "C"  bool WebConnectionStream_get_RequestWritten_m_1300697391_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::WriteRequestAsync(System.AsyncCallback,System.Object)
extern "C"  Object_t * WebConnectionStream_WriteRequestAsync_m1160923980_0 (WebConnectionStream_t_1686496900_0 * __this, AsyncCallback_t_266361018_0 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteHeaders()
extern "C"  void WebConnectionStream_WriteHeaders_m_1215467119_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequest()
extern "C"  void WebConnectionStream_WriteRequest_m_308259238_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::InternalClose()
extern "C"  void WebConnectionStream_InternalClose_m_954443533_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Close()
extern "C"  void WebConnectionStream_Close_m801672560_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::KillBuffer()
extern "C"  void WebConnectionStream_KillBuffer_m2133152936_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t WebConnectionStream_Seek_m_9874342_0 (WebConnectionStream_t_1686496900_0 * __this, int64_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetLength(System.Int64)
extern "C"  void WebConnectionStream_SetLength_m_124067150_0 (WebConnectionStream_t_1686496900_0 * __this, int64_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanSeek()
extern "C"  bool WebConnectionStream_get_CanSeek_m1235161633_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanRead()
extern "C"  bool WebConnectionStream_get_CanRead_m1206406591_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanWrite()
extern "C"  bool WebConnectionStream_get_CanWrite_m_733447816_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Length()
extern "C"  int64_t WebConnectionStream_get_Length_m_1532593846_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Position()
extern "C"  int64_t WebConnectionStream_get_Position_m572597773_0 (WebConnectionStream_t_1686496900_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_Position(System.Int64)
extern "C"  void WebConnectionStream_set_Position_m743042146_0 (WebConnectionStream_t_1686496900_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
