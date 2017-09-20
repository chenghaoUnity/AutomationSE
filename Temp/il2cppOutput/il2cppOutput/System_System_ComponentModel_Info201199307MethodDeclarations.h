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

// System.ComponentModel.Info
struct Info_t201199307_0;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t1738037247_0;
// System.Attribute[]
struct AttributeU5BU5D_t_1037111431_0;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1789909661_0;
// System.ComponentModel.IComponent
struct IComponent_t979010289_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Info::.ctor(System.Type)
extern "C"  void Info__ctor_m_2068799186_0 (Info_t201199307_0 * __this, Type_t * ___infoType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.Info::get_InfoType()
extern "C"  Type_t * Info_get_InfoType_m_115492700_0 (Info_t201199307_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.Info::GetProperties(System.Attribute[])
extern "C"  PropertyDescriptorCollection_t1738037247_0 * Info_GetProperties_m_1173037223_0 (Info_t201199307_0 * __this, AttributeU5BU5D_t_1037111431_0* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.Info::GetAttributes(System.ComponentModel.IComponent)
extern "C"  AttributeCollection_t1789909661_0 * Info_GetAttributes_m_911212573_0 (Info_t201199307_0 * __this, Object_t * ___comp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
