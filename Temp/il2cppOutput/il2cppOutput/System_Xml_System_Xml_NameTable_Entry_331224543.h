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
// System.Xml.NameTable/Entry
struct Entry_t_331224543_0;

#include "mscorlib_System_Object_887538054.h"

// System.Xml.NameTable/Entry
struct  Entry_t_331224543_0  : public Object_t
{
	// System.String System.Xml.NameTable/Entry::str
	String_t* ___str_0;
	// System.Int32 System.Xml.NameTable/Entry::hash
	int32_t ___hash_1;
	// System.Int32 System.Xml.NameTable/Entry::len
	int32_t ___len_2;
	// System.Xml.NameTable/Entry System.Xml.NameTable/Entry::next
	Entry_t_331224543_0 * ___next_3;
};
