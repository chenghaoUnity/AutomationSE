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

// System.ComponentModel.TypeInfo
struct TypeInfo_t2058063525_0;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1789909661_0;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t1738037247_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeInfo::.ctor(System.Type)
extern "C"  void TypeInfo__ctor_m161186184_0 (TypeInfo_t2058063525_0 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeInfo::GetAttributes()
extern "C"  AttributeCollection_t1789909661_0 * TypeInfo_GetAttributes_m_1949603936_0 (TypeInfo_t2058063525_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::GetProperties()
extern "C"  PropertyDescriptorCollection_t1738037247_0 * TypeInfo_GetProperties_m600389086_0 (TypeInfo_t2058063525_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
