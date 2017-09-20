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

// System.ComponentModel.NullableConverter
struct NullableConverter_t909546562_0;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1913844506_0;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t_1039475404_0;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t1738037247_0;
// System.Attribute[]
struct AttributeU5BU5D_t_1037111431_0;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t_109748317_0;

#include "codegen/il2cpp-codegen.h"

// System.Boolean System.ComponentModel.NullableConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool NullableConverter_CanConvertFrom_m529890816_0 (NullableConverter_t909546562_0 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool NullableConverter_CanConvertTo_m956216849_0 (NullableConverter_t909546562_0 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.NullableConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Object_t * NullableConverter_ConvertFrom_m1952495686_0 (NullableConverter_t909546562_0 * __this, Object_t * ___context, CultureInfo_t_1039475404_0 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.NullableConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Object_t * NullableConverter_ConvertTo_m_1867426296_0 (NullableConverter_t909546562_0 * __this, Object_t * ___context, CultureInfo_t_1039475404_0 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool NullableConverter_GetCreateInstanceSupported_m_1480374777_0 (NullableConverter_t909546562_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.NullableConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t1738037247_0 * NullableConverter_GetProperties_m1508735306_0 (NullableConverter_t909546562_0 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t_1037111431_0* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool NullableConverter_GetPropertiesSupported_m828704965_0 (NullableConverter_t909546562_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.NullableConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C"  StandardValuesCollection_t_109748317_0 * NullableConverter_GetStandardValues_m_1720237097_0 (NullableConverter_t909546562_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool NullableConverter_GetStandardValuesExclusive_m_1438172247_0 (NullableConverter_t909546562_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool NullableConverter_GetStandardValuesSupported_m_1443023431_0 (NullableConverter_t909546562_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  bool NullableConverter_IsValid_m67743074_0 (NullableConverter_t909546562_0 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
