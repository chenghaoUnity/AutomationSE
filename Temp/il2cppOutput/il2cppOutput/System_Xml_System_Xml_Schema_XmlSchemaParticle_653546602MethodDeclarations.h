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

// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t_653546602_0;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1517207743_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal1458036598.h"

// System.Void System.Xml.Schema.XmlSchemaParticle::.ctor()
extern "C"  void XmlSchemaParticle__ctor_m_1186989766_0 (XmlSchemaParticle_t_653546602_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::get_Empty()
extern "C"  XmlSchemaParticle_t_653546602_0 * XmlSchemaParticle_get_Empty_m_1899969304_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MinOccursString()
extern "C"  String_t* XmlSchemaParticle_get_MinOccursString_m_454762948_0 (XmlSchemaParticle_t_653546602_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccursString(System.String)
extern "C"  void XmlSchemaParticle_set_MinOccursString_m_1386103363_0 (XmlSchemaParticle_t_653546602_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MaxOccursString()
extern "C"  String_t* XmlSchemaParticle_get_MaxOccursString_m1525159374_0 (XmlSchemaParticle_t_653546602_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccursString(System.String)
extern "C"  void XmlSchemaParticle_set_MaxOccursString_m_888347797_0 (XmlSchemaParticle_t_653546602_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MinOccurs()
extern "C"  Decimal_t1458036598_0  XmlSchemaParticle_get_MinOccurs_m_1824598233_0 (XmlSchemaParticle_t_653546602_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccurs(System.Decimal)
extern "C"  void XmlSchemaParticle_set_MinOccurs_m_1907882974_0 (XmlSchemaParticle_t_653546602_0 * __this, Decimal_t1458036598_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MaxOccurs()
extern "C"  Decimal_t1458036598_0  XmlSchemaParticle_get_MaxOccurs_m_1147165639_0 (XmlSchemaParticle_t_653546602_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccurs(System.Decimal)
extern "C"  void XmlSchemaParticle_set_MaxOccurs_m_1809086028_0 (XmlSchemaParticle_t_653546602_0 * __this, Decimal_t1458036598_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMinOccurs()
extern "C"  Decimal_t1458036598_0  XmlSchemaParticle_get_ValidatedMinOccurs_m_1291296769_0 (XmlSchemaParticle_t_653546602_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMaxOccurs()
extern "C"  Decimal_t1458036598_0  XmlSchemaParticle_get_ValidatedMaxOccurs_m_613864175_0 (XmlSchemaParticle_t_653546602_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t_653546602_0 * XmlSchemaParticle_GetOptimizedParticle_m1275538028_0 (XmlSchemaParticle_t_653546602_0 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetShallowClone()
extern "C"  XmlSchemaParticle_t_653546602_0 * XmlSchemaParticle_GetShallowClone_m_1264079133_0 (XmlSchemaParticle_t_653546602_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CompileOccurence(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_CompileOccurence_m2116634681_0 (XmlSchemaParticle_t_653546602_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CopyInfo(System.Xml.Schema.XmlSchemaParticle)
extern "C"  void XmlSchemaParticle_CopyInfo_m795056094_0 (XmlSchemaParticle_t_653546602_0 * __this, XmlSchemaParticle_t_653546602_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateOccurenceRangeOK(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaParticle_ValidateOccurenceRangeOK_m898215581_0 (XmlSchemaParticle_t_653546602_0 * __this, XmlSchemaParticle_t_653546602_0 * ___other, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRange()
extern "C"  Decimal_t1458036598_0  XmlSchemaParticle_GetMinEffectiveTotalRange_m1371005051_0 (XmlSchemaParticle_t_653546602_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRangeAllAndSequence()
extern "C"  Decimal_t1458036598_0  XmlSchemaParticle_GetMinEffectiveTotalRangeAllAndSequence_m_133469262_0 (XmlSchemaParticle_t_653546602_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateIsEmptiable()
extern "C"  bool XmlSchemaParticle_ValidateIsEmptiable_m_1865778313_0 (XmlSchemaParticle_t_653546602_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaParticle_ValidateDerivationByRestriction_m_1734910641_0 (XmlSchemaParticle_t_653546602_0 * __this, XmlSchemaParticle_t_653546602_0 * ___baseParticle, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_ValidateUniqueParticleAttribution_m_425952442_0 (XmlSchemaParticle_t_653546602_0 * __this, XmlSchemaObjectTable_t1517207743_0 * ___qnames, ArrayList_t536890563_0 * ___nsNames, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_ValidateUniqueTypeAttribution_m_1728958039_0 (XmlSchemaParticle_t_653546602_0 * __this, XmlSchemaObjectTable_t1517207743_0 * ___labels, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaParticle_CheckRecursion_m1006304828_0 (XmlSchemaParticle_t_653546602_0 * __this, int32_t ___depth, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaParticle_ParticleEquals_m2079584708_0 (XmlSchemaParticle_t_653546602_0 * __this, XmlSchemaParticle_t_653546602_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
