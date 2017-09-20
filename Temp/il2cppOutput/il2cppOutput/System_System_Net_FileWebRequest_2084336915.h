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
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t_1532305783_0;
// System.Net.ICredentials
struct ICredentials_t359442962_0;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t1249552781_0;
// System.Net.FileWebResponse
struct FileWebResponse_t_137001053_0;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t_1183770805_0;

#include "System_System_Net_WebRequest348317594.h"
#include "mscorlib_System_IO_FileAccess724014189.h"

// System.Net.FileWebRequest
struct  FileWebRequest_t_2084336915_0  : public WebRequest_t348317594_0
{
	// System.Uri System.Net.FileWebRequest::uri
	Uri_t_27263938_0 * ___uri_6;
	// System.Net.WebHeaderCollection System.Net.FileWebRequest::webHeaders
	WebHeaderCollection_t_1532305783_0 * ___webHeaders_7;
	// System.Net.ICredentials System.Net.FileWebRequest::credentials
	Object_t * ___credentials_8;
	// System.String System.Net.FileWebRequest::connectionGroup
	String_t* ___connectionGroup_9;
	// System.Int64 System.Net.FileWebRequest::contentLength
	int64_t ___contentLength_10;
	// System.IO.FileAccess System.Net.FileWebRequest::fileAccess
	int32_t ___fileAccess_11;
	// System.String System.Net.FileWebRequest::method
	String_t* ___method_12;
	// System.Net.IWebProxy System.Net.FileWebRequest::proxy
	Object_t * ___proxy_13;
	// System.Boolean System.Net.FileWebRequest::preAuthenticate
	bool ___preAuthenticate_14;
	// System.Int32 System.Net.FileWebRequest::timeout
	int32_t ___timeout_15;
	// System.Net.FileWebResponse System.Net.FileWebRequest::webResponse
	FileWebResponse_t_137001053_0 * ___webResponse_16;
	// System.Threading.AutoResetEvent System.Net.FileWebRequest::requestEndEvent
	AutoResetEvent_t_1183770805_0 * ___requestEndEvent_17;
	// System.Boolean System.Net.FileWebRequest::requesting
	bool ___requesting_18;
	// System.Boolean System.Net.FileWebRequest::asyncResponding
	bool ___asyncResponding_19;
};
