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

// System.Uri
struct Uri_t_27263938_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Object
struct Object_t;
// System.UriParser
struct UriParser_t691699686_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;
// System.IO.MemoryStream
struct MemoryStream_t_197486834_0;
// System.Text.Encoding
struct Encoding_t453909881_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"
#include "System_System_UriKind_1718657806.h"
#include "System_System_UriHostNameType_357727052.h"
#include "System_System_UriPartial_32112998.h"

// System.Void System.Uri::.ctor(System.String)
extern "C"  void Uri__ctor_m_1601700822_0 (Uri_t_27263938_0 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Uri__ctor_m_193151600_0 (Uri_t_27263938_0 * __this, SerializationInfo_t526833679_0 * ___serializationInfo, StreamingContext_t_1216992900_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.UriKind)
extern "C"  void Uri__ctor_m1284254235_0 (Uri_t_27263938_0 * __this, String_t* ___uriString, int32_t ___uriKind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.Boolean)
extern "C"  void Uri__ctor_m70204947_0 (Uri_t_27263938_0 * __this, String_t* ___uriString, bool ___dontEscape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern "C"  void Uri__ctor_m182303879_0 (Uri_t_27263938_0 * __this, Uri_t_27263938_0 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.cctor()
extern "C"  void Uri__cctor_m2145170622_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m_713816100_0 (Uri_t_27263938_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Merge(System.Uri,System.String)
extern "C"  void Uri_Merge_m1925025748_0 (Uri_t_27263938_0 * __this, Uri_t_27263938_0 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsolutePath()
extern "C"  String_t* Uri_get_AbsolutePath_m1170417812_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsoluteUri()
extern "C"  String_t* Uri_get_AbsoluteUri_m_2066697866_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Authority()
extern "C"  String_t* Uri_get_Authority_m1914393796_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Fragment()
extern "C"  String_t* Uri_get_Fragment_m219209233_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Host()
extern "C"  String_t* Uri_get_Host_m_1158633651_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::get_HostNameType()
extern "C"  int32_t Uri_get_HostNameType_m_625470224_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsDefaultPort()
extern "C"  bool Uri_get_IsDefaultPort_m1824629382_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsFile()
extern "C"  bool Uri_get_IsFile_m1860057402_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsLoopback()
extern "C"  bool Uri_get_IsLoopback_m224603913_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsUnc()
extern "C"  bool Uri_get_IsUnc_m766729742_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_LocalPath()
extern "C"  String_t* Uri_get_LocalPath_m_1919972806_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_PathAndQuery()
extern "C"  String_t* Uri_get_PathAndQuery_m_673793353_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::get_Port()
extern "C"  int32_t Uri_get_Port_m_2041184753_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Query()
extern "C"  String_t* Uri_get_Query_m1454422281_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Scheme()
extern "C"  String_t* Uri_get_Scheme_m1248371453_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_UserInfo()
extern "C"  String_t* Uri_get_UserInfo_m_1709648742_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C"  bool Uri_get_IsAbsoluteUri_m_2066529360_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_OriginalString()
extern "C"  String_t* Uri_get_OriginalString_m1931405402_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern "C"  int32_t Uri_CheckHostName_m294200959_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsIPv4Address(System.String)
extern "C"  bool Uri_IsIPv4Address_m_804876474_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsDomainAddress(System.String)
extern "C"  bool Uri_IsDomainAddress_m740222981_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern "C"  bool Uri_CheckSchemeName_m_455244205_0 (Object_t * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsAlpha(System.Char)
extern "C"  bool Uri_IsAlpha_m171894930_0 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::Equals(System.Object)
extern "C"  bool Uri_Equals_m_2086906198_0 (Uri_t_27263938_0 * __this, Object_t * ___comparant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::InternalEquals(System.Uri)
extern "C"  bool Uri_InternalEquals_m_1785494022_0 (Uri_t_27263938_0 * __this, Uri_t_27263938_0 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetHashCode()
extern "C"  int32_t Uri_GetHashCode_m629619726_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetLeftPart(System.UriPartial)
extern "C"  String_t* Uri_GetLeftPart_m_1428542108_0 (Uri_t_27263938_0 * __this, int32_t ___part, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::FromHex(System.Char)
extern "C"  int32_t Uri_FromHex_m_1429586289_0 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::HexEscape(System.Char)
extern "C"  String_t* Uri_HexEscape_m_1515181961_0 (Object_t * __this /* static, unused */, uint16_t ___character, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern "C"  bool Uri_IsHexDigit_m_185479370_0 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
extern "C"  bool Uri_IsHexEncoding_m_1098191376_0 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
extern "C"  void Uri_AppendQueryAndFragment_m1562004088_0 (Uri_t_27263938_0 * __this, String_t** ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ToString()
extern "C"  String_t* Uri_ToString_m967075364_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String)
extern "C"  String_t* Uri_EscapeString_m_1841920872_0 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C"  String_t* Uri_EscapeString_m1653334917_0 (Object_t * __this /* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseUri(System.UriKind)
extern "C"  void Uri_ParseUri_m_523504371_0 (Uri_t_27263938_0 * __this, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String)
extern "C"  String_t* Uri_Unescape_m_197930064_0 (Uri_t_27263938_0 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern "C"  String_t* Uri_Unescape_m416590285_0 (Object_t * __this /* static, unused */, String_t* ___str, bool ___excludeSpecial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern "C"  void Uri_ParseAsWindowsUNC_m_1262531799_0 (Uri_t_27263938_0 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern "C"  String_t* Uri_ParseAsWindowsAbsoluteFilePath_m1155471572_0 (Uri_t_27263938_0 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern "C"  void Uri_ParseAsUnixAbsoluteFilePath_m1730599600_0 (Uri_t_27263938_0 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern "C"  void Uri_Parse_m561053531_0 (Uri_t_27263938_0 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
extern "C"  String_t* Uri_ParseNoExceptions_m_1777703779_0 (Uri_t_27263938_0 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CompactEscaped(System.String)
extern "C"  bool Uri_CompactEscaped_m2021013591_0 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Reduce(System.String,System.Boolean)
extern "C"  String_t* Uri_Reduce_m1169795993_0 (Object_t * __this /* static, unused */, String_t* ___path, bool ___compact_escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
extern "C"  uint16_t Uri_HexUnescapeMultiByte_m_1025722243_0 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t* ___index, uint16_t* ___surrogate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern "C"  String_t* Uri_GetSchemeDelimiter_m1914409694_0 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetDefaultPort(System.String)
extern "C"  int32_t Uri_GetDefaultPort_m711645873_0 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern "C"  String_t* Uri_GetOpaqueWiseSchemeDelimiter_m_513761409_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern "C"  bool Uri_IsPredefinedScheme_m_1307444350_0 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.Uri::get_Parser()
extern "C"  UriParser_t691699686_0 * Uri_get_Parser_m533607664_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::UnescapeDataString(System.String)
extern "C"  String_t* Uri_UnescapeDataString_m207009557_0 (Object_t * __this /* static, unused */, String_t* ___stringToUnescape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetInt(System.Byte)
extern "C"  int32_t Uri_GetInt_m_1642691475_0 (Object_t * __this /* static, unused */, uint8_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetChar(System.String,System.Int32,System.Int32)
extern "C"  int32_t Uri_GetChar_m979940409_0 (Object_t * __this /* static, unused */, String_t* ___str, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.Uri::GetChars(System.IO.MemoryStream,System.Text.Encoding)
extern "C"  CharU5BU5D_t_1225802637_0* Uri_GetChars_m731438051_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___b, Encoding_t453909881_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::EnsureAbsoluteUri()
extern "C"  void Uri_EnsureAbsoluteUri_m_887395452_0 (Uri_t_27263938_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C"  bool Uri_op_Equality_m_222446368_0 (Object_t * __this /* static, unused */, Uri_t_27263938_0 * ___u1, Uri_t_27263938_0 * ___u2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern "C"  bool Uri_op_Inequality_m_1419900453_0 (Object_t * __this /* static, unused */, Uri_t_27263938_0 * ___u1, Uri_t_27263938_0 * ___u2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
