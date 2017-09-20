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

// System.Xml.Schema.XmlSchemaSimpleContentExtension
struct XmlSchemaSimpleContentExtension_t_1789463896_0;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t_636905395_0;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t313454368_0;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1816173011_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::.ctor()
extern "C"  void XmlSchemaSimpleContentExtension__ctor_m91409320_0 (XmlSchemaSimpleContentExtension_t_1789463896_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::get_BaseTypeName()
extern "C"  XmlQualifiedName_t_2082775307_0 * XmlSchemaSimpleContentExtension_get_BaseTypeName_m414359854_0 (XmlSchemaSimpleContentExtension_t_1789463896_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleContentExtension::get_Attributes()
extern "C"  XmlSchemaObjectCollection_t_636905395_0 * XmlSchemaSimpleContentExtension_get_Attributes_m310061703_0 (XmlSchemaSimpleContentExtension_t_1789463896_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaSimpleContentExtension::get_AnyAttribute()
extern "C"  XmlSchemaAnyAttribute_t313454368_0 * XmlSchemaSimpleContentExtension_get_AnyAttribute_m_2052274733_0 (XmlSchemaSimpleContentExtension_t_1789463896_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C"  void XmlSchemaSimpleContentExtension_set_AnyAttribute_m1362095672_0 (XmlSchemaSimpleContentExtension_t_1789463896_0 * __this, XmlSchemaAnyAttribute_t313454368_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleContentExtension::get_IsExtension()
extern "C"  bool XmlSchemaSimpleContentExtension_get_IsExtension_m_522744742_0 (XmlSchemaSimpleContentExtension_t_1789463896_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSimpleContentExtension_SetParent_m_116804608_0 (XmlSchemaSimpleContentExtension_t_1789463896_0 * __this, XmlSchemaObject_t1727784015_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentExtension::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleContentExtension_Compile_m1533196678_0 (XmlSchemaSimpleContentExtension_t_1789463896_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::GetBaseTypeName()
extern "C"  XmlQualifiedName_t_2082775307_0 * XmlSchemaSimpleContentExtension_GetBaseTypeName_m438744767_0 (XmlSchemaSimpleContentExtension_t_1789463896_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentExtension::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleContentExtension_Validate_m1246388027_0 (XmlSchemaSimpleContentExtension_t_1789463896_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleContentExtension System.Xml.Schema.XmlSchemaSimpleContentExtension::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSimpleContentExtension_t_1789463896_0 * XmlSchemaSimpleContentExtension_Read_m_437744976_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
