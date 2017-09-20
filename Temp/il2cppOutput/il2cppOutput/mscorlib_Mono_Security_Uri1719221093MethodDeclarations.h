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

// Mono.Security.Uri
struct Uri_t1719221093_0;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_UriPartial613055068.h"

// System.Void Mono.Security.Uri::.ctor(System.String)
extern "C"  void Uri__ctor_m1155355095_0 (Uri_t1719221093_0 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::.ctor(System.String,System.Boolean)
extern "C"  void Uri__ctor_m1769486534_0 (Uri_t1719221093_0 * __this, String_t* ___uriString, bool ___dontEscape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::.ctor(System.String,System.Boolean,System.Boolean)
extern "C"  void Uri__ctor_m_501041673_0 (Uri_t1719221093_0 * __this, String_t* ___uriString, bool ___dontEscape, bool ___reduce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::.cctor()
extern "C"  void Uri__cctor_m742217218_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_AbsolutePath()
extern "C"  String_t* Uri_get_AbsolutePath_m_1017522661_0 (Uri_t1719221093_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_Host()
extern "C"  String_t* Uri_get_Host_m_159576953_0 (Uri_t1719221093_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::get_IsFile()
extern "C"  bool Uri_get_IsFile_m_1423125850_0 (Uri_t1719221093_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::get_IsLoopback()
extern "C"  bool Uri_get_IsLoopback_m_458280331_0 (Uri_t1719221093_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::get_IsUnc()
extern "C"  bool Uri_get_IsUnc_m1907746594_0 (Uri_t1719221093_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_LocalPath()
extern "C"  String_t* Uri_get_LocalPath_m_1627381229_0 (Uri_t1719221093_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_Scheme()
extern "C"  String_t* Uri_get_Scheme_m869646788_0 (Uri_t1719221093_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::Equals(System.Object)
extern "C"  bool Uri_Equals_m849712830_0 (Uri_t1719221093_0 * __this, Object_t * ___comparant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Uri::GetHashCode()
extern "C"  int32_t Uri_GetHashCode_m1494332310_0 (Uri_t1719221093_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::GetLeftPart(Mono.Security.UriPartial)
extern "C"  String_t* Uri_GetLeftPart_m_58251356_0 (Uri_t1719221093_0 * __this, int32_t ___part, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Uri::FromHex(System.Char)
extern "C"  int32_t Uri_FromHex_m595312135_0 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::HexEscape(System.Char)
extern "C"  String_t* Uri_HexEscape_m_91513707_0 (Object_t * __this /* static, unused */, uint16_t ___character, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Security.Uri::HexUnescape(System.String,System.Int32&)
extern "C"  uint16_t Uri_HexUnescape_m1235944411_0 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::IsHexDigit(System.Char)
extern "C"  bool Uri_IsHexDigit_m111893066_0 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::IsHexEncoding(System.String,System.Int32)
extern "C"  bool Uri_IsHexEncoding_m_932750332_0 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::ToString()
extern "C"  String_t* Uri_ToString_m_639199422_0 (Uri_t1719221093_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::EscapeString(System.String)
extern "C"  String_t* Uri_EscapeString_m865399610_0 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C"  String_t* Uri_EscapeString_m510645283_0 (Object_t * __this /* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::Parse()
extern "C"  void Uri_Parse_m1614870044_0 (Uri_t1719221093_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::Unescape(System.String)
extern "C"  String_t* Uri_Unescape_m986112850_0 (Uri_t1719221093_0 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::Unescape(System.String,System.Boolean)
extern "C"  String_t* Uri_Unescape_m_1003478549_0 (Uri_t1719221093_0 * __this, String_t* ___str, bool ___excludeSharp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::ParseAsWindowsUNC(System.String)
extern "C"  void Uri_ParseAsWindowsUNC_m_1100914579_0 (Uri_t1719221093_0 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern "C"  void Uri_ParseAsWindowsAbsoluteFilePath_m840662803_0 (Uri_t1719221093_0 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern "C"  void Uri_ParseAsUnixAbsoluteFilePath_m_1649267980_0 (Uri_t1719221093_0 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::Parse(System.String)
extern "C"  void Uri_Parse_m_1306364314_0 (Uri_t1719221093_0 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::Reduce(System.String)
extern "C"  String_t* Uri_Reduce_m_158104698_0 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::GetSchemeDelimiter(System.String)
extern "C"  String_t* Uri_GetSchemeDelimiter_m2082537472_0 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Uri::GetDefaultPort(System.String)
extern "C"  int32_t Uri_GetDefaultPort_m_630898119_0 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::GetOpaqueWiseSchemeDelimiter()
extern "C"  String_t* Uri_GetOpaqueWiseSchemeDelimiter_m_1920133731_0 (Uri_t1719221093_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::IsPredefinedScheme(System.String)
extern "C"  bool Uri_IsPredefinedScheme_m2138553750_0 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
