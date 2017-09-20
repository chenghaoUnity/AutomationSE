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
// System.Uri
struct Uri_t_27263938_0;

#include "mscorlib_System_Object_887538054.h"

// System.UriBuilder
struct  UriBuilder_t991765684_0  : public Object_t
{
	// System.String System.UriBuilder::scheme
	String_t* ___scheme_0;
	// System.String System.UriBuilder::host
	String_t* ___host_1;
	// System.Int32 System.UriBuilder::port
	int32_t ___port_2;
	// System.String System.UriBuilder::path
	String_t* ___path_3;
	// System.String System.UriBuilder::query
	String_t* ___query_4;
	// System.String System.UriBuilder::fragment
	String_t* ___fragment_5;
	// System.String System.UriBuilder::username
	String_t* ___username_6;
	// System.String System.UriBuilder::password
	String_t* ___password_7;
	// System.Uri System.UriBuilder::uri
	Uri_t_27263938_0 * ___uri_8;
	// System.Boolean System.UriBuilder::modified
	bool ___modified_9;
};
