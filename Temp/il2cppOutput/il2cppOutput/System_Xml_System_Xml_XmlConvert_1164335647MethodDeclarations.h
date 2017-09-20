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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Char[]
struct CharU5BU5D_t_1225802637_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_818288618.h"
#include "mscorlib_System_Globalization_DateTimeStyles_652434523.h"
#include "mscorlib_System_Decimal1458036598.h"
#include "mscorlib_System_TimeSpan_393459662.h"

// System.Void System.Xml.XmlConvert::.cctor()
extern "C"  void XmlConvert__cctor_m_1287872642_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeLocalName(System.String)
extern "C"  String_t* XmlConvert_EncodeLocalName_m_802582510_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::IsInvalid(System.Char,System.Boolean)
extern "C"  bool XmlConvert_IsInvalid_m313614306_0 (Object_t * __this /* static, unused */, uint16_t ___c, bool ___firstOnlyLetter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeName(System.String,System.Boolean)
extern "C"  String_t* XmlConvert_EncodeName_m_594014706_0 (Object_t * __this /* static, unused */, String_t* ___name, bool ___nmtoken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeName(System.String)
extern "C"  String_t* XmlConvert_EncodeName_m948344207_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::ToBoolean(System.String)
extern "C"  bool XmlConvert_ToBoolean_m_536112352_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Xml.XmlConvert::ToByte(System.String)
extern "C"  uint8_t XmlConvert_ToByte_m1845524822_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String)
extern "C"  DateTime_t_818288618_0  XmlConvert_ToDateTime_m_2086926160_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.String[])
extern "C"  DateTime_t_818288618_0  XmlConvert_ToDateTime_m1713731850_0 (Object_t * __this /* static, unused */, String_t* ___s, StringU5BU5D_t_816028754_0* ___formats, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.String[],System.Globalization.DateTimeStyles)
extern "C"  DateTime_t_818288618_0  XmlConvert_ToDateTime_m_1862367795_0 (Object_t * __this /* static, unused */, String_t* ___s, StringU5BU5D_t_816028754_0* ___formats, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.XmlConvert::ToDecimal(System.String)
extern "C"  Decimal_t1458036598_0  XmlConvert_ToDecimal_m_830151168_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XmlConvert::ToDouble(System.String)
extern "C"  double XmlConvert_ToDouble_m1758308804_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Xml.XmlConvert::TryParseStringFloatConstants(System.String)
extern "C"  float XmlConvert_TryParseStringFloatConstants_m1229477373_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::TryParseStringConstant(System.String,System.String,System.Int32,System.Int32)
extern "C"  bool XmlConvert_TryParseStringConstant_m_466835676_0 (Object_t * __this /* static, unused */, String_t* ___format, String_t* ___s, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Xml.XmlConvert::ToInt16(System.String)
extern "C"  int16_t XmlConvert_ToInt16_m674493152_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlConvert::ToInt32(System.String)
extern "C"  int32_t XmlConvert_ToInt32_m_521346528_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlConvert::ToInt64(System.String)
extern "C"  int64_t XmlConvert_ToInt64_m778201600_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Xml.XmlConvert::ToSByte(System.String)
extern "C"  int8_t XmlConvert_ToSByte_m29345728_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Xml.XmlConvert::ToSingle(System.String)
extern "C"  float XmlConvert_ToSingle_m34142998_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Xml.XmlConvert::ToTimeSpan(System.String)
extern "C"  TimeSpan_t_393459662_0  XmlConvert_ToTimeSpan_m83474552_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Xml.XmlConvert::ToUInt16(System.String)
extern "C"  uint16_t XmlConvert_ToUInt16_m1167065128_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Xml.XmlConvert::ToUInt32(System.String)
extern "C"  uint32_t XmlConvert_ToUInt32_m2021978420_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Xml.XmlConvert::ToUInt64(System.String)
extern "C"  uint64_t XmlConvert_ToUInt64_m_1613211466_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::VerifyName(System.String)
extern "C"  String_t* XmlConvert_VerifyName_m_2025196980_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::VerifyNCName(System.String)
extern "C"  String_t* XmlConvert_VerifyNCName_m_1570208521_0 (Object_t * __this /* static, unused */, String_t* ___ncname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Xml.XmlConvert::FromBinHexString(System.String)
extern "C"  ByteU5BU5D_t_1238178395_0* XmlConvert_FromBinHexString_m923478344_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlConvert::FromBinHexString(System.Char[],System.Int32,System.Int32,System.Byte[])
extern "C"  int32_t XmlConvert_FromBinHexString_m1597652700_0 (Object_t * __this /* static, unused */, CharU5BU5D_t_1225802637_0* ___chars, int32_t ___offset, int32_t ___charLength, ByteU5BU5D_t_1238178395_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
