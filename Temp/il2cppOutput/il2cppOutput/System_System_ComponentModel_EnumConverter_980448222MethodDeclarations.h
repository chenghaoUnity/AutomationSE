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

// System.ComponentModel.EnumConverter
struct EnumConverter_t_980448222_0;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1913844506_0;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t_1039475404_0;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t_109748317_0;
// System.Collections.IComparer
struct IComparer_t622777826_0;
// System.ArgumentException
struct ArgumentException_t1159624695_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.EnumConverter::.ctor(System.Type)
extern "C"  void EnumConverter__ctor_m1869923851_0 (EnumConverter_t_980448222_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool EnumConverter_CanConvertTo_m_2025188239_0 (EnumConverter_t_980448222_0 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.EnumConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Object_t * EnumConverter_ConvertTo_m_963711768_0 (EnumConverter_t_980448222_0 * __this, Object_t * ___context, CultureInfo_t_1039475404_0 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool EnumConverter_CanConvertFrom_m142787680_0 (EnumConverter_t_980448222_0 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.EnumConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Object_t * EnumConverter_ConvertFrom_m_81565914_0 (EnumConverter_t_980448222_0 * __this, Object_t * ___context, CultureInfo_t_1039475404_0 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  bool EnumConverter_IsValid_m918678274_0 (EnumConverter_t_980448222_0 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool EnumConverter_GetStandardValuesSupported_m_1830126567_0 (EnumConverter_t_980448222_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool EnumConverter_GetStandardValuesExclusive_m_1825275383_0 (EnumConverter_t_980448222_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C"  StandardValuesCollection_t_109748317_0 * EnumConverter_GetStandardValues_m_1499164297_0 (EnumConverter_t_980448222_0 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IComparer System.ComponentModel.EnumConverter::get_Comparer()
extern "C"  Object_t * EnumConverter_get_Comparer_m553316747_0 (EnumConverter_t_980448222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.EnumConverter::get_EnumType()
extern "C"  Type_t * EnumConverter_get_EnumType_m416881184_0 (EnumConverter_t_980448222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::get_Values()
extern "C"  StandardValuesCollection_t_109748317_0 * EnumConverter_get_Values_m1186616875_0 (EnumConverter_t_980448222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EnumConverter::set_Values(System.ComponentModel.TypeConverter/StandardValuesCollection)
extern "C"  void EnumConverter_set_Values_m822097836_0 (EnumConverter_t_980448222_0 * __this, StandardValuesCollection_t_109748317_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArgumentException System.ComponentModel.EnumConverter::CreateValueNotValidException(System.Object)
extern "C"  ArgumentException_t1159624695_0 * EnumConverter_CreateValueNotValidException_m_1560381703_0 (EnumConverter_t_980448222_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::get_IsFlags()
extern "C"  bool EnumConverter_get_IsFlags_m1298911030_0 (EnumConverter_t_980448222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
