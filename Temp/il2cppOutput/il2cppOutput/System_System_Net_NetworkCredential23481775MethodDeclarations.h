#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.NetworkCredential
struct NetworkCredential_t23481775_0;
// System.String
struct String_t;
// System.Uri
struct Uri_t_27263938_0;

#include "codegen/il2cpp-codegen.h"

// System.String System.Net.NetworkCredential::get_Domain()
extern "C"  String_t* NetworkCredential_get_Domain_m1006306893_0 (NetworkCredential_t23481775_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C"  String_t* NetworkCredential_get_UserName_m_925128705_0 (NetworkCredential_t23481775_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C"  String_t* NetworkCredential_get_Password_m_1064202140_0 (NetworkCredential_t23481775_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C"  NetworkCredential_t23481775_0 * NetworkCredential_GetCredential_m1548991703_0 (NetworkCredential_t23481775_0 * __this, Uri_t_27263938_0 * ___uri, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
