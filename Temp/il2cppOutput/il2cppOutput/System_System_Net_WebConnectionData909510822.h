#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.HttpWebRequest
struct HttpWebRequest_t_319555179_0;
// System.String
struct String_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t_1532305783_0;
// System.Version
struct Version_t267380989_0;
// System.IO.Stream
struct Stream_t463444077_0;

#include "mscorlib_System_Object_887538054.h"

// System.Net.WebConnectionData
struct  WebConnectionData_t909510822_0  : public Object_t
{
	// System.Net.HttpWebRequest System.Net.WebConnectionData::request
	HttpWebRequest_t_319555179_0 * ___request_0;
	// System.Int32 System.Net.WebConnectionData::StatusCode
	int32_t ___StatusCode_1;
	// System.String System.Net.WebConnectionData::StatusDescription
	String_t* ___StatusDescription_2;
	// System.Net.WebHeaderCollection System.Net.WebConnectionData::Headers
	WebHeaderCollection_t_1532305783_0 * ___Headers_3;
	// System.Version System.Net.WebConnectionData::Version
	Version_t267380989_0 * ___Version_4;
	// System.IO.Stream System.Net.WebConnectionData::stream
	Stream_t463444077_0 * ___stream_5;
	// System.String System.Net.WebConnectionData::Challenge
	String_t* ___Challenge_6;
};
