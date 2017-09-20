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

// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1789909661_0;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.ComponentModel.TypeConverter
struct TypeConverter_t430695217_0;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t1738037247_0;
// System.Object
struct Object_t;
// System.Attribute[]
struct AttributeU5BU5D_t_1037111431_0;
// System.EventArgs
struct EventArgs_t693055868_0;
// System.ComponentModel.ComponentInfo
struct ComponentInfo_t1356174798_0;
// System.ComponentModel.IComponent
struct IComponent_t979010289_0;
// System.ComponentModel.TypeInfo
struct TypeInfo_t2058063525_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeDescriptor::.cctor()
extern "C"  void TypeDescriptor__cctor_m_815131907_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Type)
extern "C"  AttributeCollection_t1789909661_0 * TypeDescriptor_GetAttributes_m76214042_0 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::get_DefaultConverters()
extern "C"  ArrayList_t536890563_0 * TypeDescriptor_get_DefaultConverters_m2146028793_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
extern "C"  TypeConverter_t430695217_0 * TypeDescriptor_GetConverter_m_604814221_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::FindDefaultConverterType(System.Type)
extern "C"  Type_t * TypeDescriptor_FindDefaultConverterType_m1892798521_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t1738037247_0 * TypeDescriptor_GetProperties_m1457495824_0 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t_1037111431_0* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[],System.Boolean)
extern "C"  PropertyDescriptorCollection_t1738037247_0 * TypeDescriptor_GetProperties_m_328420755_0 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t_1037111431_0* ___attributes, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::OnComponentDisposed(System.Object,System.EventArgs)
extern "C"  void TypeDescriptor_OnComponentDisposed_m_804705397_0 (Object_t * __this /* static, unused */, Object_t * ___sender, EventArgs_t693055868_0 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ComponentInfo System.ComponentModel.TypeDescriptor::GetComponentInfo(System.ComponentModel.IComponent)
extern "C"  ComponentInfo_t1356174798_0 * TypeDescriptor_GetComponentInfo_m_1574344739_0 (Object_t * __this /* static, unused */, Object_t * ___com, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeInfo System.ComponentModel.TypeDescriptor::GetTypeInfo(System.Type)
extern "C"  TypeInfo_t2058063525_0 * TypeDescriptor_GetTypeInfo_m_544945599_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetTypeFromName(System.ComponentModel.IComponent,System.String)
extern "C"  Type_t * TypeDescriptor_GetTypeFromName_m554158078_0 (Object_t * __this /* static, unused */, Object_t * ___component, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
