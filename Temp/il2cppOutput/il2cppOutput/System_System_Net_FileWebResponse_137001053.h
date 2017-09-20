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
// System.IO.FileStream
struct FileStream_t1255485065_0;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t_1532305783_0;

#include "System_System_Net_WebResponse_2034122602.h"

// System.Net.FileWebResponse
struct  FileWebResponse_t_137001053_0  : public WebResponse_t_2034122602_0
{
	// System.Uri System.Net.FileWebResponse::responseUri
	Uri_t_27263938_0 * ___responseUri_1;
	// System.IO.FileStream System.Net.FileWebResponse::fileStream
	FileStream_t1255485065_0 * ___fileStream_2;
	// System.Int64 System.Net.FileWebResponse::contentLength
	int64_t ___contentLength_3;
	// System.Net.WebHeaderCollection System.Net.FileWebResponse::webHeaders
	WebHeaderCollection_t_1532305783_0 * ___webHeaders_4;
	// System.Boolean System.Net.FileWebResponse::disposed
	bool ___disposed_5;
};
