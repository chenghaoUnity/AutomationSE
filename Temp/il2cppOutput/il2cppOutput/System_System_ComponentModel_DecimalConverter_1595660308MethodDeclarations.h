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

// System.ComponentModel.DecimalConverter
struct DecimalConverter_t_1595660308_0;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1913844506_0;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t_1039475404_0;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t746228406_0;

#include "codegen/il2cpp-codegen.h"

// System.Boolean System.ComponentModel.DecimalConverter::get_SupportHex()
extern "C"  bool DecimalConverter_get_SupportHex_m1605848709_0 (DecimalConverter_t_1595660308_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DecimalConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool DecimalConverter_CanConvertTo_m1530176801_0 (DecimalConverter_t_1595660308_0 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DecimalConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Object_t * DecimalConverter_ConvertTo_m_1174210442_0 (DecimalConverter_t_1595660308_0 * __this, Object_t * ___context, CultureInfo_t_1039475404_0 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.DecimalConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C"  String_t* DecimalConverter_ConvertToString_m_1229803678_0 (DecimalConverter_t_1595660308_0 * __this, Object_t * ___value, NumberFormatInfo_t746228406_0 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DecimalConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Object_t * DecimalConverter_ConvertFromString_m324299923_0 (DecimalConverter_t_1595660308_0 * __this, String_t* ___value, NumberFormatInfo_t746228406_0 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
