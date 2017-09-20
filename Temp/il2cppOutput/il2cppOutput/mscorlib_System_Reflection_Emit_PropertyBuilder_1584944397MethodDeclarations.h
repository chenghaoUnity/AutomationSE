﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Reflection.Emit.PropertyBuilder
struct PropertyBuilder_t_1584944397_0;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t_217407495_0;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t_1161824911_0;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t1890870994_0;
// System.Globalization.CultureInfo
struct CultureInfo_t_1039475404_0;
// System.Reflection.Module
struct Module_t_2083915884_0;
// System.Exception
struct Exception_t2143823668_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PropertyAttributes_131354060.h"
#include "mscorlib_System_Reflection_BindingFlags_1175949782.h"

// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::get_Attributes()
extern "C"  int32_t PropertyBuilder_get_Attributes_m548385532_0 (PropertyBuilder_t_1584944397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanRead()
extern "C"  bool PropertyBuilder_get_CanRead_m1928541820_0 (PropertyBuilder_t_1584944397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanWrite()
extern "C"  bool PropertyBuilder_get_CanWrite_m177907803_0 (PropertyBuilder_t_1584944397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_DeclaringType()
extern "C"  Type_t * PropertyBuilder_get_DeclaringType_m1573425887_0 (PropertyBuilder_t_1584944397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.PropertyBuilder::get_Name()
extern "C"  String_t* PropertyBuilder_get_Name_m1476342296_0 (PropertyBuilder_t_1584944397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_PropertyType()
extern "C"  Type_t * PropertyBuilder_get_PropertyType_m946002355_0 (PropertyBuilder_t_1584944397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_ReflectedType()
extern "C"  Type_t * PropertyBuilder_get_ReflectedType_m803872660_0 (PropertyBuilder_t_1584944397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.PropertyBuilder::GetAccessors(System.Boolean)
extern "C"  MethodInfoU5BU5D_t_217407495_0* PropertyBuilder_GetAccessors_m_859836924_0 (PropertyBuilder_t_1584944397_0 * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t1774424924_0* PropertyBuilder_GetCustomAttributes_m_1273507581_0 (PropertyBuilder_t_1584944397_0 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1774424924_0* PropertyBuilder_GetCustomAttributes_m_804684688_0 (PropertyBuilder_t_1584944397_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetGetMethod(System.Boolean)
extern "C"  MethodInfo_t * PropertyBuilder_GetGetMethod_m1084139825_0 (PropertyBuilder_t_1584944397_0 * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.PropertyBuilder::GetIndexParameters()
extern "C"  ParameterInfoU5BU5D_t_1161824911_0* PropertyBuilder_GetIndexParameters_m_385026523_0 (PropertyBuilder_t_1584944397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetSetMethod(System.Boolean)
extern "C"  MethodInfo_t * PropertyBuilder_GetSetMethod_m1927431485_0 (PropertyBuilder_t_1584944397_0 * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Object[])
extern "C"  Object_t * PropertyBuilder_GetValue_m1709912399_0 (PropertyBuilder_t_1584944397_0 * __this, Object_t * ___obj, ObjectU5BU5D_t1774424924_0* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Object_t * PropertyBuilder_GetValue_m_1524588369_0 (PropertyBuilder_t_1584944397_0 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1890870994_0 * ___binder, ObjectU5BU5D_t1774424924_0* ___index, CultureInfo_t_1039475404_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool PropertyBuilder_IsDefined_m_476873022_0 (PropertyBuilder_t_1584944397_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Object[])
extern "C"  void PropertyBuilder_SetValue_m_1483346114_0 (PropertyBuilder_t_1584944397_0 * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t1774424924_0* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  void PropertyBuilder_SetValue_m307828128_0 (PropertyBuilder_t_1584944397_0 * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t1890870994_0 * ___binder, ObjectU5BU5D_t1774424924_0* ___index, CultureInfo_t_1039475404_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.PropertyBuilder::get_Module()
extern "C"  Module_t_2083915884_0 * PropertyBuilder_get_Module_m_843323535_0 (PropertyBuilder_t_1584944397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.PropertyBuilder::not_supported()
extern "C"  Exception_t2143823668_0 * PropertyBuilder_not_supported_m_770269080_0 (PropertyBuilder_t_1584944397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;