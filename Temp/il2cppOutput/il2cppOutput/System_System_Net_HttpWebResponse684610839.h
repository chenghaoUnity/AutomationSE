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
// System.Net.CookieCollection
struct CookieCollection_t_926933416_0;
// System.String
struct String_t;
// System.Version
struct Version_t267380989_0;
// System.Net.CookieContainer
struct CookieContainer_t1416428935_0;
// System.IO.Stream
struct Stream_t463444077_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t_1305703446_0;

#include "System_System_Net_WebResponse_2034122602.h"
#include "System_System_Net_HttpStatusCode_1016869027.h"

// System.Net.HttpWebResponse
struct  HttpWebResponse_t684610839_0  : public WebResponse_t_2034122602_0
{
	// System.Uri System.Net.HttpWebResponse::uri
	Uri_t_27263938_0 * ___uri_1;
	// System.Net.WebHeaderCollection System.Net.HttpWebResponse::webHeaders
	WebHeaderCollection_t_1532305783_0 * ___webHeaders_2;
	// System.Net.CookieCollection System.Net.HttpWebResponse::cookieCollection
	CookieCollection_t_926933416_0 * ___cookieCollection_3;
	// System.String System.Net.HttpWebResponse::method
	String_t* ___method_4;
	// System.Version System.Net.HttpWebResponse::version
	Version_t267380989_0 * ___version_5;
	// System.Net.HttpStatusCode System.Net.HttpWebResponse::statusCode
	int32_t ___statusCode_6;
	// System.String System.Net.HttpWebResponse::statusDescription
	String_t* ___statusDescription_7;
	// System.Int64 System.Net.HttpWebResponse::contentLength
	int64_t ___contentLength_8;
	// System.String System.Net.HttpWebResponse::contentType
	String_t* ___contentType_9;
	// System.Net.CookieContainer System.Net.HttpWebResponse::cookie_container
	CookieContainer_t1416428935_0 * ___cookie_container_10;
	// System.Boolean System.Net.HttpWebResponse::disposed
	bool ___disposed_11;
	// System.IO.Stream System.Net.HttpWebResponse::stream
	Stream_t463444077_0 * ___stream_12;
	// System.String[] System.Net.HttpWebResponse::cookieExpiresFormats
	StringU5BU5D_t_816028754_0* ___cookieExpiresFormats_13;
};
struct HttpWebResponse_t684610839_0_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.HttpWebResponse::<>f__switch$mapD
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24mapD_14;
};
