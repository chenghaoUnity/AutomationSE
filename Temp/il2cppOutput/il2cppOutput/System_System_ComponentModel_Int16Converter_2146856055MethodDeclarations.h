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

// System.ComponentModel.Int16Converter
struct Int16Converter_t_2146856055_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t746228406_0;

#include "codegen/il2cpp-codegen.h"

// System.Boolean System.ComponentModel.Int16Converter::get_SupportHex()
extern "C"  bool Int16Converter_get_SupportHex_m_316548702_0 (Int16Converter_t_2146856055_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Int16Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* Int16Converter_ConvertToString_m_1523251905_0 (Int16Converter_t_2146856055_0 * __this, Object_t * ___value, NumberFormatInfo_t746228406_0 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int16Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Object_t * Int16Converter_ConvertFromString_m461003696_0 (Int16Converter_t_2146856055_0 * __this, String_t* ___value, NumberFormatInfo_t746228406_0 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int16Converter::ConvertFromString(System.String,System.Int32)
extern "C"  Object_t * Int16Converter_ConvertFromString_m_1567501191_0 (Int16Converter_t_2146856055_0 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
