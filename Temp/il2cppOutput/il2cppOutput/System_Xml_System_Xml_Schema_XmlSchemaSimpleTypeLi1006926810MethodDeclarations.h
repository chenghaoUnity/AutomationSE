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

// System.Xml.Schema.XmlSchemaSimpleTypeList
struct XmlSchemaSimpleTypeList_t1006926810_0;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1845511452_0;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1816173011_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::.ctor()
extern "C"  void XmlSchemaSimpleTypeList__ctor_m2115999670_0 (XmlSchemaSimpleTypeList_t1006926810_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeList::get_ItemTypeName()
extern "C"  XmlQualifiedName_t_2082775307_0 * XmlSchemaSimpleTypeList_get_ItemTypeName_m2125876514_0 (XmlSchemaSimpleTypeList_t1006926810_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::set_ItemTypeName(System.Xml.XmlQualifiedName)
extern "C"  void XmlSchemaSimpleTypeList_set_ItemTypeName_m_1954782455_0 (XmlSchemaSimpleTypeList_t1006926810_0 * __this, XmlQualifiedName_t_2082775307_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeList::get_ItemType()
extern "C"  XmlSchemaSimpleType_t1845511452_0 * XmlSchemaSimpleTypeList_get_ItemType_m_99713122_0 (XmlSchemaSimpleTypeList_t1006926810_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::set_ItemType(System.Xml.Schema.XmlSchemaSimpleType)
extern "C"  void XmlSchemaSimpleTypeList_set_ItemType_m_1341888243_0 (XmlSchemaSimpleTypeList_t1006926810_0 * __this, XmlSchemaSimpleType_t1845511452_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeList::get_ValidatedListItemType()
extern "C"  Object_t * XmlSchemaSimpleTypeList_get_ValidatedListItemType_m701359481_0 (XmlSchemaSimpleTypeList_t1006926810_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSimpleTypeList_SetParent_m_483329870_0 (XmlSchemaSimpleTypeList_t1006926810_0 * __this, XmlSchemaObject_t1727784015_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeList::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeList_Compile_m1444500756_0 (XmlSchemaSimpleTypeList_t1006926810_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeList::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeList_Validate_m_1503185555_0 (XmlSchemaSimpleTypeList_t1006926810_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeList System.Xml.Schema.XmlSchemaSimpleTypeList::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSimpleTypeList_t1006926810_0 * XmlSchemaSimpleTypeList_Read_m_1966098796_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
