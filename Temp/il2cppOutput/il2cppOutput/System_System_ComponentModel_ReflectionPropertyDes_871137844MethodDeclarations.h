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

// System.ComponentModel.ReflectionPropertyDescriptor
struct ReflectionPropertyDescriptor_t_871137844_0;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Type
struct Type_t;
// System.Collections.IList
struct IList_t_1078834989_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Reflection.PropertyInfo)
extern "C"  void ReflectionPropertyDescriptor__ctor_m_1295939261_0 (ReflectionPropertyDescriptor_t_871137844_0 * __this, PropertyInfo_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::GetPropertyInfo()
extern "C"  PropertyInfo_t * ReflectionPropertyDescriptor_GetPropertyInfo_m_896152343_0 (ReflectionPropertyDescriptor_t_871137844_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_ComponentType()
extern "C"  Type_t * ReflectionPropertyDescriptor_get_ComponentType_m_1573090820_0 (ReflectionPropertyDescriptor_t_871137844_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_PropertyType()
extern "C"  Type_t * ReflectionPropertyDescriptor_get_PropertyType_m483693196_0 (ReflectionPropertyDescriptor_t_871137844_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::FillAttributes(System.Collections.IList)
extern "C"  void ReflectionPropertyDescriptor_FillAttributes_m_643603739_0 (ReflectionPropertyDescriptor_t_871137844_0 * __this, Object_t * ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
