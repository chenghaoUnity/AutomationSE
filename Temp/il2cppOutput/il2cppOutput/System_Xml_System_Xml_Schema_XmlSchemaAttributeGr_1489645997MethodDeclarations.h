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

// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t_1489645997_0;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t_636905395_0;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1517207743_0;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t313454368_0;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1816173011_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Schema.XmlSchemaAttributeGroup::.ctor()
extern "C"  void XmlSchemaAttributeGroup__ctor_m385940829_0 (XmlSchemaAttributeGroup_t_1489645997_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttributeGroup::get_Name()
extern "C"  String_t* XmlSchemaAttributeGroup_get_Name_m1816681816_0 (XmlSchemaAttributeGroup_t_1489645997_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAttributeGroup::get_Attributes()
extern "C"  XmlSchemaObjectCollection_t_636905395_0 * XmlSchemaAttributeGroup_get_Attributes_m_2069557390_0 (XmlSchemaAttributeGroup_t_1489645997_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaAttributeGroup::get_AttributeUses()
extern "C"  XmlSchemaObjectTable_t1517207743_0 * XmlSchemaAttributeGroup_get_AttributeUses_m1276538813_0 (XmlSchemaAttributeGroup_t_1489645997_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::get_AnyAttributeUse()
extern "C"  XmlSchemaAnyAttribute_t313454368_0 * XmlSchemaAttributeGroup_get_AnyAttributeUse_m_237003381_0 (XmlSchemaAttributeGroup_t_1489645997_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::get_AnyAttribute()
extern "C"  XmlSchemaAnyAttribute_t313454368_0 * XmlSchemaAttributeGroup_get_AnyAttribute_m_731095298_0 (XmlSchemaAttributeGroup_t_1489645997_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttributeGroup::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C"  void XmlSchemaAttributeGroup_set_AnyAttribute_m88860845_0 (XmlSchemaAttributeGroup_t_1489645997_0 * __this, XmlSchemaAnyAttribute_t313454368_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttributeGroup::get_QualifiedName()
extern "C"  XmlQualifiedName_t_2082775307_0 * XmlSchemaAttributeGroup_get_QualifiedName_m1369605062_0 (XmlSchemaAttributeGroup_t_1489645997_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttributeGroup::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaAttributeGroup_SetParent_m127852395_0 (XmlSchemaAttributeGroup_t_1489645997_0 * __this, XmlSchemaObject_t1727784015_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttributeGroup::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAttributeGroup_Compile_m_378214021_0 (XmlSchemaAttributeGroup_t_1489645997_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttributeGroup::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAttributeGroup_Validate_m2122198502_0 (XmlSchemaAttributeGroup_t_1489645997_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchemaAttributeGroup::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaAttributeGroup_t_1489645997_0 * XmlSchemaAttributeGroup_Read_m445209542_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
