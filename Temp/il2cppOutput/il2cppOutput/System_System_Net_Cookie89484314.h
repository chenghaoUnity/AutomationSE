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
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;

#include "mscorlib_System_Object_887538054.h"
#include "mscorlib_System_DateTime_818288618.h"

// System.Net.Cookie
struct  Cookie_t89484314_0  : public Object_t
{
	// System.String System.Net.Cookie::comment
	String_t* ___comment_0;
	// System.Uri System.Net.Cookie::commentUri
	Uri_t_27263938_0 * ___commentUri_1;
	// System.Boolean System.Net.Cookie::discard
	bool ___discard_2;
	// System.String System.Net.Cookie::domain
	String_t* ___domain_3;
	// System.DateTime System.Net.Cookie::expires
	DateTime_t_818288618_0  ___expires_4;
	// System.Boolean System.Net.Cookie::httpOnly
	bool ___httpOnly_5;
	// System.String System.Net.Cookie::name
	String_t* ___name_6;
	// System.String System.Net.Cookie::path
	String_t* ___path_7;
	// System.String System.Net.Cookie::port
	String_t* ___port_8;
	// System.Int32[] System.Net.Cookie::ports
	Int32U5BU5D_t1872284309_0* ___ports_9;
	// System.Boolean System.Net.Cookie::secure
	bool ___secure_10;
	// System.DateTime System.Net.Cookie::timestamp
	DateTime_t_818288618_0  ___timestamp_11;
	// System.String System.Net.Cookie::val
	String_t* ___val_12;
	// System.Int32 System.Net.Cookie::version
	int32_t ___version_13;
	// System.Boolean System.Net.Cookie::exact_domain
	bool ___exact_domain_17;
};
struct Cookie_t89484314_0_StaticFields{
	// System.Char[] System.Net.Cookie::reservedCharsName
	CharU5BU5D_t_1225802637_0* ___reservedCharsName_14;
	// System.Char[] System.Net.Cookie::portSeparators
	CharU5BU5D_t_1225802637_0* ___portSeparators_15;
	// System.String System.Net.Cookie::tspecials
	String_t* ___tspecials_16;
};
