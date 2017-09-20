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

// System.ComponentModel.TypeConverter
struct TypeConverter_t430695217_0;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1913844506_0;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t_1039475404_0;
// System.String
struct String_t;
// System.Exception
struct Exception_t2143823668_0;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t1738037247_0;
// System.Attribute[]
struct AttributeU5BU5D_t_1037111431_0;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t_109748317_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeConverter::.ctor()
extern "C"  void TypeConverter__ctor_m822402727_0 (TypeConverter_t430695217_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.Type)
extern "C"  bool TypeConverter_CanConvertFrom_m1936585069_0 (TypeConverter_t430695217_0 * __this, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool TypeConverter_CanConvertFrom_m_1463710329_0 (TypeConverter_t430695217_0 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool TypeConverter_CanConvertTo_m_1423508648_0 (TypeConverter_t430695217_0 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.Object)
extern "C"  Object_t * TypeConverter_ConvertFrom_m_142828827_0 (TypeConverter_t430695217_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Object_t * TypeConverter_ConvertFrom_m_1310993331_0 (TypeConverter_t430695217_0 * __this, Object_t * ___context, CultureInfo_t_1039475404_0 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.String)
extern "C"  Object_t * TypeConverter_ConvertFromInvariantString_m556598462_0 (TypeConverter_t430695217_0 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.ComponentModel.ITypeDescriptorContext,System.String)
extern "C"  Object_t * TypeConverter_ConvertFromInvariantString_m_927217544_0 (TypeConverter_t430695217_0 * __this, Object_t * ___context, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.String)
extern "C"  Object_t * TypeConverter_ConvertFromString_m1826822058_0 (TypeConverter_t430695217_0 * __this, Object_t * ___context, CultureInfo_t_1039475404_0 * ___culture, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Object_t * TypeConverter_ConvertTo_m_2042997425_0 (TypeConverter_t430695217_0 * __this, Object_t * ___context, CultureInfo_t_1039475404_0 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.Object)
extern "C"  String_t* TypeConverter_ConvertToInvariantString_m232733647_0 (TypeConverter_t430695217_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  String_t* TypeConverter_ConvertToInvariantString_m451735275_0 (TypeConverter_t430695217_0 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  String_t* TypeConverter_ConvertToString_m_496047331_0 (TypeConverter_t430695217_0 * __this, Object_t * ___context, CultureInfo_t_1039475404_0 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.TypeConverter::GetConvertFromException(System.Object)
extern "C"  Exception_t2143823668_0 * TypeConverter_GetConvertFromException_m_1885734600_0 (TypeConverter_t430695217_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.TypeConverter::GetConvertToException(System.Object,System.Type)
extern "C"  Exception_t2143823668_0 * TypeConverter_GetConvertToException_m269920572_0 (TypeConverter_t430695217_0 * __this, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeConverter_GetCreateInstanceSupported_m820991374_0 (TypeConverter_t430695217_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t1738037247_0 * TypeConverter_GetProperties_m374885713_0 (TypeConverter_t430695217_0 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t_1037111431_0* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeConverter_GetPropertiesSupported_m_711199796_0 (TypeConverter_t430695217_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.TypeConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C"  StandardValuesCollection_t_109748317_0 * TypeConverter_GetStandardValues_m1051889776_0 (TypeConverter_t430695217_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeConverter_GetStandardValuesExclusive_m863193904_0 (TypeConverter_t430695217_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeConverter_GetStandardValuesSupported_m858342720_0 (TypeConverter_t430695217_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  bool TypeConverter_IsValid_m156616059_0 (TypeConverter_t430695217_0 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
