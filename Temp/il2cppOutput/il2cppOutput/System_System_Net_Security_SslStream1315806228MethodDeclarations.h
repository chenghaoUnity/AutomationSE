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

// System.Net.Security.SslStream
struct SslStream_t1315806228_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1271970355_0;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t_577322611_0;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1524084820_0;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1905772184_0;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Authentication_SslProtocols1383392796.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP_942303750.h"
#include "mscorlib_System_IO_SeekOrigin_1060652501.h"

// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
extern "C"  void SslStream__ctor_m219176074_0 (SslStream_t1315806228_0 * __this, Stream_t463444077_0 * ___innerStream, bool ___leaveStreamOpen, RemoteCertificateValidationCallback_t1271970355_0 * ___certValidationCallback, LocalCertificateSelectionCallback_t_577322611_0 * ___certSelectionCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanRead()
extern "C"  bool SslStream_get_CanRead_m_953381107_0 (SslStream_t1315806228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanSeek()
extern "C"  bool SslStream_get_CanSeek_m_924626065_0 (SslStream_t1315806228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanWrite()
extern "C"  bool SslStream_get_CanWrite_m1032610282_0 (SslStream_t1315806228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Length()
extern "C"  int64_t SslStream_get_Length_m1037506982_0 (SslStream_t1315806228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Position()
extern "C"  int64_t SslStream_get_Position_m833298281_0 (SslStream_t1315806228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::set_Position(System.Int64)
extern "C"  void SslStream_set_Position_m1453586112_0 (SslStream_t1315806228_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsAuthenticated()
extern "C"  bool SslStream_get_IsAuthenticated_m800088812_0 (SslStream_t1315806228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_ReadTimeout()
extern "C"  int32_t SslStream_get_ReadTimeout_m_1615840308_0 (SslStream_t1315806228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_WriteTimeout()
extern "C"  int32_t SslStream_get_WriteTimeout_m1840838243_0 (SslStream_t1315806228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::OnCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t1524084820_0 * SslStream_OnCertificateSelection_m280533825_0 (SslStream_t1315806228_0 * __this, X509CertificateCollection_t1905772184_0 * ___clientCerts, X509Certificate_t1524084820_0 * ___serverCert, String_t* ___targetHost, X509CertificateCollection_t1905772184_0 * ___serverRequestedCerts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Object_t * SslStream_BeginAuthenticateAsClient_m_1759165622_0 (SslStream_t1315806228_0 * __this, String_t* ___targetHost, X509CertificateCollection_t1905772184_0 * ___clientCertificates, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, AsyncCallback_t_266361018_0 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * SslStream_BeginRead_m_631945498_0 (SslStream_t1315806228_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t_266361018_0 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType System.Net.Security.SslStream::GetMonoSslProtocol(System.Security.Authentication.SslProtocols)
extern "C"  int32_t SslStream_GetMonoSslProtocol_m403603204_0 (SslStream_t1315806228_0 * __this, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * SslStream_BeginWrite_m62055331_0 (SslStream_t1315806228_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t_266361018_0 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::AuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
extern "C"  void SslStream_AuthenticateAsClient_m_734522231_0 (SslStream_t1315806228_0 * __this, String_t* ___targetHost, X509CertificateCollection_t1905772184_0 * ___clientCertificates, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Dispose(System.Boolean)
extern "C"  void SslStream_Dispose_m50080176_0 (SslStream_t1315806228_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndAuthenticateAsClient(System.IAsyncResult)
extern "C"  void SslStream_EndAuthenticateAsClient_m_1900887012_0 (SslStream_t1315806228_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::EndRead(System.IAsyncResult)
extern "C"  int32_t SslStream_EndRead_m1650948968_0 (SslStream_t1315806228_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndWrite(System.IAsyncResult)
extern "C"  void SslStream_EndWrite_m_798309353_0 (SslStream_t1315806228_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Flush()
extern "C"  void SslStream_Flush_m369630686_0 (SslStream_t1315806228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t SslStream_Read_m_1520753861_0 (SslStream_t1315806228_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t SslStream_Seek_m1475566206_0 (SslStream_t1315806228_0 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::SetLength(System.Int64)
extern "C"  void SslStream_SetLength_m596518164_0 (SslStream_t1315806228_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void SslStream_Write_m_1729415728_0 (SslStream_t1315806228_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::CheckConnectionAuthenticated()
extern "C"  void SslStream_CheckConnectionAuthenticated_m_1088173167_0 (SslStream_t1315806228_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
