#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t1724304885_0;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1271970355_0;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t_577322611_0;

#include "System_System_Net_Security_AuthenticatedStream_1774777865.h"

// System.Net.Security.SslStream
struct  SslStream_t1315806228_0  : public AuthenticatedStream_t_1774777865_0
{
	// Mono.Security.Protocol.Tls.SslStreamBase System.Net.Security.SslStream::ssl_stream
	SslStreamBase_t1724304885_0 * ___ssl_stream_4;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Security.SslStream::validation_callback
	RemoteCertificateValidationCallback_t1271970355_0 * ___validation_callback_5;
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream::selection_callback
	LocalCertificateSelectionCallback_t_577322611_0 * ___selection_callback_6;
};
