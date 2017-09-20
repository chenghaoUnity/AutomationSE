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

// System.ComponentModel.DoubleConverter
struct DoubleConverter_t1148631698_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t746228406_0;

#include "codegen/il2cpp-codegen.h"

// System.Boolean System.ComponentModel.DoubleConverter::get_SupportHex()
extern "C"  bool DoubleConverter_get_SupportHex_m_1064873723_0 (DoubleConverter_t1148631698_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.DoubleConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* DoubleConverter_ConvertToString_m1915688872_0 (DoubleConverter_t1148631698_0 * __this, Object_t * ___value, NumberFormatInfo_t746228406_0 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DoubleConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Object_t * DoubleConverter_ConvertFromString_m1957849845_0 (DoubleConverter_t1148631698_0 * __this, String_t* ___value, NumberFormatInfo_t746228406_0 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
