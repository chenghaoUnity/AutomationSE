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

// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t1531674336_0;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t_636905395_0;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t_653546602_0;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t1801736924_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Schema.XmlSchemaGroupBase::.ctor()
extern "C"  void XmlSchemaGroupBase__ctor_m_1433025610_0 (XmlSchemaGroupBase_t1531674336_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaGroupBase::get_CompiledItems()
extern "C"  XmlSchemaObjectCollection_t_636905395_0 * XmlSchemaGroupBase_get_CompiledItems_m_1379214619_0 (XmlSchemaGroupBase_t1531674336_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupBase::CopyOptimizedItems(System.Xml.Schema.XmlSchemaGroupBase)
extern "C"  void XmlSchemaGroupBase_CopyOptimizedItems_m_465850483_0 (XmlSchemaGroupBase_t1531674336_0 * __this, XmlSchemaGroupBase_t1531674336_0 * ___gb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaGroupBase_ParticleEquals_m_1579577552_0 (XmlSchemaGroupBase_t1531674336_0 * __this, XmlSchemaParticle_t_653546602_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupBase::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaGroupBase_CheckRecursion_m_510491208_0 (XmlSchemaGroupBase_t1531674336_0 * __this, int32_t ___depth, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateNSRecurseCheckCardinality(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaGroupBase_ValidateNSRecurseCheckCardinality_m593398327_0 (XmlSchemaGroupBase_t1531674336_0 * __this, XmlSchemaAny_t1801736924_0 * ___any, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateRecurse(System.Xml.Schema.XmlSchemaGroupBase,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaGroupBase_ValidateRecurse_m_1399153006_0 (XmlSchemaGroupBase_t1531674336_0 * __this, XmlSchemaGroupBase_t1531674336_0 * ___baseGroup, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateSeqRecurseMapSumCommon(System.Xml.Schema.XmlSchemaGroupBase,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean,System.Boolean,System.Boolean)
extern "C"  bool XmlSchemaGroupBase_ValidateSeqRecurseMapSumCommon_m1310490371_0 (XmlSchemaGroupBase_t1531674336_0 * __this, XmlSchemaGroupBase_t1531674336_0 * ___baseGroup, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, bool ___isLax, bool ___isMapAndSum, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
