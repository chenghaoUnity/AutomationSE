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

// System.Xml.Schema.XmlSchemaComplexContentExtension
struct XmlSchemaComplexContentExtension_t_962442874_0;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t_653546602_0;
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

// System.Void System.Xml.Schema.XmlSchemaComplexContentExtension::.ctor()
extern "C"  void XmlSchemaComplexContentExtension__ctor_m886437520_0 (XmlSchemaComplexContentExtension_t_962442874_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexContentExtension::get_BaseTypeName()
extern "C"  XmlQualifiedName_t_2082775307_0 * XmlSchemaComplexContentExtension_get_BaseTypeName_m286354496_0 (XmlSchemaComplexContentExtension_t_962442874_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexContentExtension::get_Particle()
extern "C"  XmlSchemaParticle_t_653546602_0 * XmlSchemaComplexContentExtension_get_Particle_m1576836143_0 (XmlSchemaComplexContentExtension_t_962442874_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaComplexContentExtension::get_Attributes()
extern "C"  XmlSchemaObjectCollection_t_636905395_0 * XmlSchemaComplexContentExtension_get_Attributes_m81863273_0 (XmlSchemaComplexContentExtension_t_962442874_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexContentExtension::get_AnyAttribute()
extern "C"  XmlSchemaAnyAttribute_t313454368_0 * XmlSchemaComplexContentExtension_get_AnyAttribute_m_1570523537_0 (XmlSchemaComplexContentExtension_t_962442874_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaComplexContentExtension::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C"  void XmlSchemaComplexContentExtension_set_AnyAttribute_m1254592288_0 (XmlSchemaComplexContentExtension_t_962442874_0 * __this, XmlSchemaAnyAttribute_t313454368_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaComplexContentExtension::get_IsExtension()
extern "C"  bool XmlSchemaComplexContentExtension_get_IsExtension_m_115037646_0 (XmlSchemaComplexContentExtension_t_962442874_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaComplexContentExtension::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaComplexContentExtension_SetParent_m2081864216_0 (XmlSchemaComplexContentExtension_t_962442874_0 * __this, XmlSchemaObject_t1727784015_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaComplexContentExtension::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaComplexContentExtension_Compile_m795837162_0 (XmlSchemaComplexContentExtension_t_962442874_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexContentExtension::GetBaseTypeName()
extern "C"  XmlQualifiedName_t_2082775307_0 * XmlSchemaComplexContentExtension_GetBaseTypeName_m_535215763_0 (XmlSchemaComplexContentExtension_t_962442874_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaComplexContentExtension::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaComplexContentExtension_Validate_m_136920489_0 (XmlSchemaComplexContentExtension_t_962442874_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaComplexContentExtension System.Xml.Schema.XmlSchemaComplexContentExtension::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaComplexContentExtension_t_962442874_0 * XmlSchemaComplexContentExtension_Read_m_946264034_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
