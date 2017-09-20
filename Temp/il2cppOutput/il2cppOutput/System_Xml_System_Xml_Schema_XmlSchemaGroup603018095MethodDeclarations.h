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

// System.Xml.Schema.XmlSchemaGroup
struct XmlSchemaGroup_t603018095_0;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t1531674336_0;
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

// System.Void System.Xml.Schema.XmlSchemaGroup::.ctor()
extern "C"  void XmlSchemaGroup__ctor_m457482631_0 (XmlSchemaGroup_t603018095_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaGroup::get_Name()
extern "C"  String_t* XmlSchemaGroup_get_Name_m_1227492908_0 (XmlSchemaGroup_t603018095_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroupBase System.Xml.Schema.XmlSchemaGroup::get_Particle()
extern "C"  XmlSchemaGroupBase_t1531674336_0 * XmlSchemaGroup_get_Particle_m_186633650_0 (XmlSchemaGroup_t603018095_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroup::set_Particle(System.Xml.Schema.XmlSchemaGroupBase)
extern "C"  void XmlSchemaGroup_set_Particle_m803346225_0 (XmlSchemaGroup_t603018095_0 * __this, XmlSchemaGroupBase_t1531674336_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroup::get_QualifiedName()
extern "C"  XmlQualifiedName_t_2082775307_0 * XmlSchemaGroup_get_QualifiedName_m_1711494410_0 (XmlSchemaGroup_t603018095_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroup::get_IsCircularDefinition()
extern "C"  bool XmlSchemaGroup_get_IsCircularDefinition_m2043379466_0 (XmlSchemaGroup_t603018095_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroup::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaGroup_SetParent_m1696558465_0 (XmlSchemaGroup_t603018095_0 * __this, XmlSchemaObject_t1727784015_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroup::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaGroup_Compile_m_1555719135_0 (XmlSchemaGroup_t603018095_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroup::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaGroup_Validate_m_20721664_0 (XmlSchemaGroup_t603018095_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroup System.Xml.Schema.XmlSchemaGroup::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaGroup_t603018095_0 * XmlSchemaGroup_Read_m_507608706_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
