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

// System.Xml.Schema.XmlSchemaParticle/EmptyParticle
struct EmptyParticle_t476421146_0;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t_653546602_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1517207743_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::.ctor()
extern "C"  void EmptyParticle__ctor_m_762928522_0 (EmptyParticle_t476421146_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle/EmptyParticle::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t_653546602_0 * EmptyParticle_GetOptimizedParticle_m_1434712144_0 (EmptyParticle_t476421146_0 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool EmptyParticle_ParticleEquals_m_95255808_0 (EmptyParticle_t476421146_0 * __this, XmlSchemaParticle_t_653546602_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool EmptyParticle_ValidateDerivationByRestriction_m_1782054509_0 (EmptyParticle_t476421146_0 * __this, XmlSchemaParticle_t_653546602_0 * ___baseParticle, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void EmptyParticle_CheckRecursion_m29816_0 (EmptyParticle_t476421146_0 * __this, int32_t ___depth, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void EmptyParticle_ValidateUniqueParticleAttribution_m_454527358_0 (EmptyParticle_t476421146_0 * __this, XmlSchemaObjectTable_t1517207743_0 * ___qnames, ArrayList_t536890563_0 * ___nsNames, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void EmptyParticle_ValidateUniqueTypeAttribution_m_1061032211_0 (EmptyParticle_t476421146_0 * __this, XmlSchemaObjectTable_t1517207743_0 * ___labels, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
