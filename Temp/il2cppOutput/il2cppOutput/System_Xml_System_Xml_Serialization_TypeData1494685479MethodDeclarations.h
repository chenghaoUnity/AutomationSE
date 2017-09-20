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

// System.Xml.Serialization.TypeData
struct TypeData_t1494685479_0;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaPatternFacet
struct XmlSchemaPatternFacet_t837683479_0;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.InvalidOperationException
struct InvalidOperationException_t_523179548_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Serialization_SchemaTypes_941586603.h"

// System.Void System.Xml.Serialization.TypeData::.ctor(System.Type,System.String,System.Boolean)
extern "C"  void TypeData__ctor_m338275825_0 (TypeData_t1494685479_0 * __this, Type_t * ___type, String_t* ___elementName, bool ___isPrimitive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::.ctor(System.Type,System.String,System.Boolean,System.Xml.Serialization.TypeData,System.Xml.Schema.XmlSchemaPatternFacet)
extern "C"  void TypeData__ctor_m420493673_0 (TypeData_t1494685479_0 * __this, Type_t * ___type, String_t* ___elementName, bool ___isPrimitive, TypeData_t1494685479_0 * ___mappedType, XmlSchemaPatternFacet_t837683479_0 * ___facet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::.cctor()
extern "C"  void TypeData__cctor_m1141656772_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeData::get_XmlType()
extern "C"  String_t* TypeData_get_XmlType_m_376721070_0 (TypeData_t1494685479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::get_Type()
extern "C"  Type_t * TypeData_get_Type_m_2103242748_0 (TypeData_t1494685479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.SchemaTypes System.Xml.Serialization.TypeData::get_SchemaType()
extern "C"  int32_t TypeData_get_SchemaType_m1693934194_0 (TypeData_t1494685479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsListType()
extern "C"  bool TypeData_get_IsListType_m1977463454_0 (TypeData_t1494685479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::set_IsNullable(System.Boolean)
extern "C"  void TypeData_set_IsNullable_m1764739194_0 (TypeData_t1494685479_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::get_ListItemTypeData()
extern "C"  TypeData_t1494685479_0 * TypeData_get_ListItemTypeData_m_351274434_0 (TypeData_t1494685479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::get_ListItemType()
extern "C"  Type_t * TypeData_get_ListItemType_m_1499978955_0 (TypeData_t1494685479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Xml.Serialization.TypeData::GetIndexerProperty(System.Type)
extern "C"  PropertyInfo_t * TypeData_GetIndexerProperty_m_516149430_0 (Object_t * __this /* static, unused */, Type_t * ___collectionType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.InvalidOperationException System.Xml.Serialization.TypeData::CreateMissingAddMethodException(System.Type,System.String,System.Type)
extern "C"  InvalidOperationException_t_523179548_0 * TypeData_CreateMissingAddMethodException_m1061219609_0 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___inheritFrom, Type_t * ___argumentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::GetGenericListItemType(System.Type)
extern "C"  Type_t * TypeData_GetGenericListItemType_m510784044_0 (TypeData_t1494685479_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
