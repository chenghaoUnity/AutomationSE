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

// System.ComponentModel.UInt16Converter
struct UInt16Converter_t_1881909436_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t746228406_0;

#include "codegen/il2cpp-codegen.h"

// System.Boolean System.ComponentModel.UInt16Converter::get_SupportHex()
extern "C"  bool UInt16Converter_get_SupportHex_m_1565661897_0 (UInt16Converter_t_1881909436_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.UInt16Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* UInt16Converter_ConvertToString_m829052634_0 (UInt16Converter_t_1881909436_0 * __this, Object_t * ___value, NumberFormatInfo_t746228406_0 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt16Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Object_t * UInt16Converter_ConvertFromString_m1377478055_0 (UInt16Converter_t_1881909436_0 * __this, String_t* ___value, NumberFormatInfo_t746228406_0 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt16Converter::ConvertFromString(System.String,System.Int32)
extern "C"  Object_t * UInt16Converter_ConvertFromString_m84581026_0 (UInt16Converter_t_1881909436_0 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
