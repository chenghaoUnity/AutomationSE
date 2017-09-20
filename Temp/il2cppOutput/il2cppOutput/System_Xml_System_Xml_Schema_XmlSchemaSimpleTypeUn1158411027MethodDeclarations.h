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

// System.Xml.Schema.XmlSchemaSimpleTypeUnion
struct XmlSchemaSimpleTypeUnion_t1158411027_0;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t_636905395_0;
// System.Xml.XmlQualifiedName[]
struct XmlQualifiedNameU5BU5D_t_92307177_0;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1816173011_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeUnion::.ctor()
extern "C"  void XmlSchemaSimpleTypeUnion__ctor_m383336099_0 (XmlSchemaSimpleTypeUnion_t1158411027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_BaseTypes()
extern "C"  XmlSchemaObjectCollection_t_636905395_0 * XmlSchemaSimpleTypeUnion_get_BaseTypes_m1523723083_0 (XmlSchemaSimpleTypeUnion_t1158411027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName[] System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_MemberTypes()
extern "C"  XmlQualifiedNameU5BU5D_t_92307177_0* XmlSchemaSimpleTypeUnion_get_MemberTypes_m507135532_0 (XmlSchemaSimpleTypeUnion_t1158411027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_ValidatedTypes()
extern "C"  ObjectU5BU5D_t1774424924_0* XmlSchemaSimpleTypeUnion_get_ValidatedTypes_m_1437005912_0 (XmlSchemaSimpleTypeUnion_t1158411027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeUnion::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSimpleTypeUnion_SetParent_m622989797_0 (XmlSchemaSimpleTypeUnion_t1158411027_0 * __this, XmlSchemaObject_t1727784015_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeUnion::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeUnion_Compile_m2011977405_0 (XmlSchemaSimpleTypeUnion_t1158411027_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeUnion::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleTypeUnion_Validate_m_1091278620_0 (XmlSchemaSimpleTypeUnion_t1158411027_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeUnion System.Xml.Schema.XmlSchemaSimpleTypeUnion::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSimpleTypeUnion_t1158411027_0 * XmlSchemaSimpleTypeUnion_Read_m1781101310_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
