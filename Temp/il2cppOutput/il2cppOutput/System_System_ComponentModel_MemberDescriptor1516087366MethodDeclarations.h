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

// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t1516087366_0;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t_1037111431_0;
// System.Collections.IList
struct IList_t_1078834989_0;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1789909661_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.String,System.Attribute[])
extern "C"  void MemberDescriptor__ctor_m215106805_0 (MemberDescriptor_t1516087366_0 * __this, String_t* ___name, AttributeU5BU5D_t_1037111431_0* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.ComponentModel.MemberDescriptor::get_AttributeArray()
extern "C"  AttributeU5BU5D_t_1037111431_0* MemberDescriptor_get_AttributeArray_m1822558682_0 (MemberDescriptor_t1516087366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::FillAttributes(System.Collections.IList)
extern "C"  void MemberDescriptor_FillAttributes_m_544358305_0 (MemberDescriptor_t1516087366_0 * __this, Object_t * ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::get_Attributes()
extern "C"  AttributeCollection_t1789909661_0 * MemberDescriptor_get_Attributes_m_1675884816_0 (MemberDescriptor_t1516087366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::CreateAttributeCollection()
extern "C"  AttributeCollection_t1789909661_0 * MemberDescriptor_CreateAttributeCollection_m_816266800_0 (MemberDescriptor_t1516087366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Name()
extern "C"  String_t* MemberDescriptor_get_Name_m_1761797013_0 (MemberDescriptor_t1516087366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MemberDescriptor::GetHashCode()
extern "C"  int32_t MemberDescriptor_GetHashCode_m337807439_0 (MemberDescriptor_t1516087366_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::Equals(System.Object)
extern "C"  bool MemberDescriptor_Equals_m_1002690837_0 (MemberDescriptor_t1516087366_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
