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

// System.Xml.Schema.XmlSchemaGroupRef
struct XmlSchemaGroupRef_t_1336048988_0;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t_2082775307_0;
// System.Xml.Schema.XmlSchemaGroup
struct XmlSchemaGroup_t603018095_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t_653546602_0;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1517207743_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1816173011_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Schema.XmlSchemaGroupRef::.ctor()
extern "C"  void XmlSchemaGroupRef__ctor_m_1760284180_0 (XmlSchemaGroupRef_t_1336048988_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroupRef::get_RefName()
extern "C"  XmlQualifiedName_t_2082775307_0 * XmlSchemaGroupRef_get_RefName_m_1962074100_0 (XmlSchemaGroupRef_t_1336048988_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroup System.Xml.Schema.XmlSchemaGroupRef::get_TargetGroup()
extern "C"  XmlSchemaGroup_t603018095_0 * XmlSchemaGroupRef_get_TargetGroup_m_1827925630_0 (XmlSchemaGroupRef_t_1336048988_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroupRef::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaGroupRef_Compile_m1441779786_0 (XmlSchemaGroupRef_t_1336048988_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroupRef::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaGroupRef_Validate_m_1587535625_0 (XmlSchemaGroupRef_t_1336048988_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaGroupRef::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t_653546602_0 * XmlSchemaGroupRef_GetOptimizedParticle_m_330479878_0 (XmlSchemaGroupRef_t_1336048988_0 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupRef::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaGroupRef_ParticleEquals_m_1709480074_0 (XmlSchemaGroupRef_t_1336048988_0 * __this, XmlSchemaParticle_t_653546602_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupRef::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaGroupRef_ValidateDerivationByRestriction_m654474973_0 (XmlSchemaGroupRef_t_1336048988_0 * __this, XmlSchemaParticle_t_653546602_0 * ___baseParticle, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaGroupRef_CheckRecursion_m810306670_0 (XmlSchemaGroupRef_t_1336048988_0 * __this, int32_t ___depth, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaGroupRef_ValidateUniqueParticleAttribution_m_1967611144_0 (XmlSchemaGroupRef_t_1336048988_0 * __this, XmlSchemaObjectTable_t1517207743_0 * ___qnames, ArrayList_t536890563_0 * ___nsNames, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaGroupRef_ValidateUniqueTypeAttribution_m1001718711_0 (XmlSchemaGroupRef_t_1336048988_0 * __this, XmlSchemaObjectTable_t1517207743_0 * ___labels, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroupRef System.Xml.Schema.XmlSchemaGroupRef::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaGroupRef_t_1336048988_0 * XmlSchemaGroupRef_Read_m_500799896_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
