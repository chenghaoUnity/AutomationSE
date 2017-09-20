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

// System.UriTypeConverter
struct UriTypeConverter_t2035341791_0;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1913844506_0;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t_1039475404_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.UriTypeConverter::.ctor()
extern "C"  void UriTypeConverter__ctor_m1548837649_0 (UriTypeConverter_t2035341791_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::CanConvert(System.Type)
extern "C"  bool UriTypeConverter_CanConvert_m_984419143_0 (UriTypeConverter_t2035341791_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool UriTypeConverter_CanConvertFrom_m80729437_0 (UriTypeConverter_t2035341791_0 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool UriTypeConverter_CanConvertTo_m1085358254_0 (UriTypeConverter_t2035341791_0 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UriTypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Object_t * UriTypeConverter_ConvertFrom_m1831566755_0 (UriTypeConverter_t2035341791_0 * __this, Object_t * ___context, CultureInfo_t_1039475404_0 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UriTypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Object_t * UriTypeConverter_ConvertTo_m_1449211099_0 (UriTypeConverter_t2035341791_0 * __this, Object_t * ___context, CultureInfo_t_1039475404_0 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriTypeConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  bool UriTypeConverter_IsValid_m_232558619_0 (UriTypeConverter_t2035341791_0 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
