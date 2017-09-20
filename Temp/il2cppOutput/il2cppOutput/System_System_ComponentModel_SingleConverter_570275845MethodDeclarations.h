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

// System.ComponentModel.SingleConverter
struct SingleConverter_t_570275845_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t746228406_0;

#include "codegen/il2cpp-codegen.h"

// System.Boolean System.ComponentModel.SingleConverter::get_SupportHex()
extern "C"  bool SingleConverter_get_SupportHex_m1611380270_0 (SingleConverter_t_570275845_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.SingleConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* SingleConverter_ConvertToString_m_568235439_0 (SingleConverter_t_570275845_0 * __this, Object_t * ___value, NumberFormatInfo_t746228406_0 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.SingleConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Object_t * SingleConverter_ConvertFromString_m_1386563746_0 (SingleConverter_t_570275845_0 * __this, String_t* ___value, NumberFormatInfo_t746228406_0 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
