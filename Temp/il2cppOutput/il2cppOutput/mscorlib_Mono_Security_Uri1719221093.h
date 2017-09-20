#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Mono.Security.Uri/UriScheme[]
struct UriSchemeU5BU5D_t297908617_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t_1305703446_0;

#include "mscorlib_System_Object_887538054.h"

// Mono.Security.Uri
struct  Uri_t1719221093_0  : public Object_t
{
	// System.Boolean Mono.Security.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String Mono.Security.Uri::source
	String_t* ___source_1;
	// System.String Mono.Security.Uri::scheme
	String_t* ___scheme_2;
	// System.String Mono.Security.Uri::host
	String_t* ___host_3;
	// System.Int32 Mono.Security.Uri::port
	int32_t ___port_4;
	// System.String Mono.Security.Uri::path
	String_t* ___path_5;
	// System.String Mono.Security.Uri::query
	String_t* ___query_6;
	// System.String Mono.Security.Uri::fragment
	String_t* ___fragment_7;
	// System.String Mono.Security.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean Mono.Security.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean Mono.Security.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean Mono.Security.Uri::userEscaped
	bool ___userEscaped_11;
	// System.String Mono.Security.Uri::cachedToString
	String_t* ___cachedToString_12;
	// System.String Mono.Security.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_13;
	// System.Int32 Mono.Security.Uri::cachedHashCode
	int32_t ___cachedHashCode_14;
	// System.Boolean Mono.Security.Uri::reduce
	bool ___reduce_15;
};
struct Uri_t1719221093_0_StaticFields{
	// System.String Mono.Security.Uri::hexUpperChars
	String_t* ___hexUpperChars_16;
	// System.String Mono.Security.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_17;
	// System.String Mono.Security.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_18;
	// System.String Mono.Security.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_19;
	// System.String Mono.Security.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_20;
	// System.String Mono.Security.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_21;
	// System.String Mono.Security.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_22;
	// System.String Mono.Security.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_23;
	// System.String Mono.Security.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_24;
	// System.String Mono.Security.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_25;
	// Mono.Security.Uri/UriScheme[] Mono.Security.Uri::schemes
	UriSchemeU5BU5D_t297908617_0* ___schemes_26;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Uri::<>f__switch$map6
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map6_27;
};
