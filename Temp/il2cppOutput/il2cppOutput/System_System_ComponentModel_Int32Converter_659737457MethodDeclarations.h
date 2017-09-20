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

// System.ComponentModel.Int32Converter
struct Int32Converter_t_659737457_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t746228406_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Int32Converter::.ctor()
extern "C"  void Int32Converter__ctor_m_2088589209_0 (Int32Converter_t_659737457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Int32Converter::get_SupportHex()
extern "C"  bool Int32Converter_get_SupportHex_m2088600872_0 (Int32Converter_t_659737457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Int32Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* Int32Converter_ConvertToString_m_296085051_0 (Int32Converter_t_659737457_0 * __this, Object_t * ___value, NumberFormatInfo_t746228406_0 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int32Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Object_t * Int32Converter_ConvertFromString_m_1347656010_0 (Int32Converter_t_659737457_0 * __this, String_t* ___value, NumberFormatInfo_t746228406_0 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int32Converter::ConvertFromString(System.String,System.Int32)
extern "C"  Object_t * Int32Converter_ConvertFromString_m639360691_0 (Int32Converter_t_659737457_0 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
