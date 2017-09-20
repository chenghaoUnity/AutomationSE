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

// System.ComponentModel.ReferenceConverter
struct ReferenceConverter_t1571791346_0;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1913844506_0;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t_1039475404_0;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t_109748317_0;

#include "codegen/il2cpp-codegen.h"

// System.Boolean System.ComponentModel.ReferenceConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool ReferenceConverter_CanConvertFrom_m721774294_0 (ReferenceConverter_t1571791346_0 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ReferenceConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Object_t * ReferenceConverter_ConvertFrom_m_558385606_0 (ReferenceConverter_t1571791346_0 * __this, Object_t * ___context, CultureInfo_t_1039475404_0 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ReferenceConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Object_t * ReferenceConverter_ConvertTo_m1982493436_0 (ReferenceConverter_t1571791346_0 * __this, Object_t * ___context, CultureInfo_t_1039475404_0 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.ReferenceConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C"  StandardValuesCollection_t_109748317_0 * ReferenceConverter_GetStandardValues_m3669313_0 (ReferenceConverter_t1571791346_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReferenceConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool ReferenceConverter_GetStandardValuesExclusive_m_1246288769_0 (ReferenceConverter_t1571791346_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReferenceConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool ReferenceConverter_GetStandardValuesSupported_m_1251139953_0 (ReferenceConverter_t1571791346_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReferenceConverter::IsValueAllowed(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  bool ReferenceConverter_IsValueAllowed_m_1265579291_0 (ReferenceConverter_t1571791346_0 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
