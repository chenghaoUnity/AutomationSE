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

// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t_492849967_0;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t_636905395_0;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;
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
#include "mscorlib_System_Decimal1458036598.h"

// System.Void System.Xml.Schema.XmlSchemaSequence::.ctor()
extern "C"  void XmlSchemaSequence__ctor_m403907167_0 (XmlSchemaSequence_t_492849967_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSequence::get_Items()
extern "C"  XmlSchemaObjectCollection_t_636905395_0 * XmlSchemaSequence_get_Items_m_1059407511_0 (XmlSchemaSequence_t_492849967_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSequence::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSequence_SetParent_m1561662377_0 (XmlSchemaSequence_t_492849967_0 * __this, XmlSchemaObject_t1727784015_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSequence::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSequence_Compile_m_1256438147_0 (XmlSchemaSequence_t_492849967_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaSequence::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t_653546602_0 * XmlSchemaSequence_GetOptimizedParticle_m_494571673_0 (XmlSchemaSequence_t_492849967_0 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSequence::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSequence_Validate_m667054372_0 (XmlSchemaSequence_t_492849967_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSequence::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaSequence_ValidateDerivationByRestriction_m232673994_0 (XmlSchemaSequence_t_492849967_0 * __this, XmlSchemaParticle_t_653546602_0 * ___baseParticle, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaSequence::GetMinEffectiveTotalRange()
extern "C"  Decimal_t1458036598_0  XmlSchemaSequence_GetMinEffectiveTotalRange_m1517815072_0 (XmlSchemaSequence_t_492849967_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSequence::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaSequence_ValidateUniqueParticleAttribution_m478242283_0 (XmlSchemaSequence_t_492849967_0 * __this, XmlSchemaObjectTable_t1517207743_0 * ___qnames, ArrayList_t536890563_0 * ___nsNames, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSequence::ValidateUPAOnHeadingOptionalComponents(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaSequence_ValidateUPAOnHeadingOptionalComponents_m963133546_0 (XmlSchemaSequence_t_492849967_0 * __this, XmlSchemaObjectTable_t1517207743_0 * ___qnames, ArrayList_t536890563_0 * ___nsNames, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSequence::ValidateUPAOnItems(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaSequence_ValidateUPAOnItems_m527772274_0 (XmlSchemaSequence_t_492849967_0 * __this, XmlSchemaObjectTable_t1517207743_0 * ___qnames, ArrayList_t536890563_0 * ___nsNames, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSequence::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaSequence_ValidateUniqueTypeAttribution_m_1142125980_0 (XmlSchemaSequence_t_492849967_0 * __this, XmlSchemaObjectTable_t1517207743_0 * ___labels, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSequence System.Xml.Schema.XmlSchemaSequence::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSequence_t_492849967_0 * XmlSchemaSequence_Read_m_1467537982_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
