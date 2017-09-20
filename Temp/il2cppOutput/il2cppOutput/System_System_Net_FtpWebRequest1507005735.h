#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t_27263938_0;
// System.String
struct String_t;
// System.Net.ServicePoint
struct ServicePoint_t1961884333_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.IO.StreamReader
struct StreamReader_t1933514640_0;
// System.Net.NetworkCredential
struct NetworkCredential_t23481775_0;
// System.Net.IPHostEntry
struct IPHostEntry_t_1615694227_0;
// System.Net.IPEndPoint
struct IPEndPoint_t_1780335022_0;
// System.Net.IWebProxy
struct IWebProxy_t1249552781_0;
// System.Object
struct Object_t;
// System.Net.FtpAsyncResult
struct FtpAsyncResult_t_2145026387_0;
// System.Net.FtpWebResponse
struct FtpWebResponse_t_474528599_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1271970355_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t_1305703446_0;

#include "System_System_Net_WebRequest348317594.h"
#include "System_System_Net_FtpWebRequest_RequestState809462602.h"

// System.Net.FtpWebRequest
struct  FtpWebRequest_t1507005735_0  : public WebRequest_t348317594_0
{
	// System.Uri System.Net.FtpWebRequest::requestUri
	Uri_t_27263938_0 * ___requestUri_6;
	// System.String System.Net.FtpWebRequest::file_name
	String_t* ___file_name_7;
	// System.Net.ServicePoint System.Net.FtpWebRequest::servicePoint
	ServicePoint_t1961884333_0 * ___servicePoint_8;
	// System.IO.Stream System.Net.FtpWebRequest::origDataStream
	Stream_t463444077_0 * ___origDataStream_9;
	// System.IO.Stream System.Net.FtpWebRequest::dataStream
	Stream_t463444077_0 * ___dataStream_10;
	// System.IO.Stream System.Net.FtpWebRequest::controlStream
	Stream_t463444077_0 * ___controlStream_11;
	// System.IO.StreamReader System.Net.FtpWebRequest::controlReader
	StreamReader_t1933514640_0 * ___controlReader_12;
	// System.Net.NetworkCredential System.Net.FtpWebRequest::credentials
	NetworkCredential_t23481775_0 * ___credentials_13;
	// System.Net.IPHostEntry System.Net.FtpWebRequest::hostEntry
	IPHostEntry_t_1615694227_0 * ___hostEntry_14;
	// System.Net.IPEndPoint System.Net.FtpWebRequest::localEndPoint
	IPEndPoint_t_1780335022_0 * ___localEndPoint_15;
	// System.Net.IWebProxy System.Net.FtpWebRequest::proxy
	Object_t * ___proxy_16;
	// System.Int32 System.Net.FtpWebRequest::timeout
	int32_t ___timeout_17;
	// System.Int32 System.Net.FtpWebRequest::rwTimeout
	int32_t ___rwTimeout_18;
	// System.Int64 System.Net.FtpWebRequest::offset
	int64_t ___offset_19;
	// System.Boolean System.Net.FtpWebRequest::binary
	bool ___binary_20;
	// System.Boolean System.Net.FtpWebRequest::enableSsl
	bool ___enableSsl_21;
	// System.Boolean System.Net.FtpWebRequest::usePassive
	bool ___usePassive_22;
	// System.Boolean System.Net.FtpWebRequest::keepAlive
	bool ___keepAlive_23;
	// System.String System.Net.FtpWebRequest::method
	String_t* ___method_24;
	// System.String System.Net.FtpWebRequest::renameTo
	String_t* ___renameTo_25;
	// System.Object System.Net.FtpWebRequest::locker
	Object_t * ___locker_26;
	// System.Net.FtpWebRequest/RequestState System.Net.FtpWebRequest::requestState
	int32_t ___requestState_27;
	// System.Net.FtpAsyncResult System.Net.FtpWebRequest::asyncResult
	FtpAsyncResult_t_2145026387_0 * ___asyncResult_28;
	// System.Net.FtpWebResponse System.Net.FtpWebRequest::ftpResponse
	FtpWebResponse_t_474528599_0 * ___ftpResponse_29;
	// System.IO.Stream System.Net.FtpWebRequest::requestStream
	Stream_t463444077_0 * ___requestStream_30;
	// System.String System.Net.FtpWebRequest::initial_path
	String_t* ___initial_path_31;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::callback
	RemoteCertificateValidationCallback_t1271970355_0 * ___callback_33;
};
struct FtpWebRequest_t1507005735_0_StaticFields{
	// System.String[] System.Net.FtpWebRequest::supportedCommands
	StringU5BU5D_t_816028754_0* ___supportedCommands_32;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::<>f__am$cache1C
	RemoteCertificateValidationCallback_t1271970355_0 * ___U3CU3Ef__amU24cache1C_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.FtpWebRequest::<>f__switch$mapA
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24mapA_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.FtpWebRequest::<>f__switch$mapB
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24mapB_36;
};
