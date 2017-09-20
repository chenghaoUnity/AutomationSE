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

// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t1801736924_0;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t705385851_0;
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
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProc_1684590244.h"

// System.Void System.Xml.Schema.XmlSchemaAny::.ctor()
extern "C"  void XmlSchemaAny__ctor_m_778668678_0 (XmlSchemaAny_t1801736924_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAny System.Xml.Schema.XmlSchemaAny::get_AnyTypeContent()
extern "C"  XmlSchemaAny_t1801736924_0 * XmlSchemaAny_get_AnyTypeContent_m_2005610868_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAny::get_Namespace()
extern "C"  String_t* XmlSchemaAny_get_Namespace_m141846471_0 (XmlSchemaAny_t1801736924_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::set_Namespace(System.String)
extern "C"  void XmlSchemaAny_set_Namespace_m63374572_0 (XmlSchemaAny_t1801736924_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAny::get_ProcessContents()
extern "C"  int32_t XmlSchemaAny_get_ProcessContents_m_1141673230_0 (XmlSchemaAny_t1801736924_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::set_ProcessContents(System.Xml.Schema.XmlSchemaContentProcessing)
extern "C"  void XmlSchemaAny_set_ProcessContents_m102151801_0 (XmlSchemaAny_t1801736924_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueAny()
extern "C"  bool XmlSchemaAny_get_HasValueAny_m_1308985892_0 (XmlSchemaAny_t1801736924_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueLocal()
extern "C"  bool XmlSchemaAny_get_HasValueLocal_m1672656859_0 (XmlSchemaAny_t1801736924_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueOther()
extern "C"  bool XmlSchemaAny_get_HasValueOther_m188088896_0 (XmlSchemaAny_t1801736924_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueTargetNamespace()
extern "C"  bool XmlSchemaAny_get_HasValueTargetNamespace_m68551866_0 (XmlSchemaAny_t1801736924_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringCollection System.Xml.Schema.XmlSchemaAny::get_ResolvedNamespaces()
extern "C"  StringCollection_t705385851_0 * XmlSchemaAny_get_ResolvedNamespaces_m_712450102_0 (XmlSchemaAny_t1801736924_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAny::get_ResolvedProcessContents()
extern "C"  int32_t XmlSchemaAny_get_ResolvedProcessContents_m59137498_0 (XmlSchemaAny_t1801736924_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAny::get_TargetNamespace()
extern "C"  String_t* XmlSchemaAny_get_TargetNamespace_m_1689281226_0 (XmlSchemaAny_t1801736924_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAny::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAny_Compile_m_576801452_0 (XmlSchemaAny_t1801736924_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaAny::GetOptimizedParticle(System.Boolean)
extern "C"  XmlSchemaParticle_t_653546602_0 * XmlSchemaAny_GetOptimizedParticle_m1792675460_0 (XmlSchemaAny_t1801736924_0 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAny::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAny_Validate_m260955437_0 (XmlSchemaAny_t1801736924_0 * __this, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaAny_ParticleEquals_m1040598260_0 (XmlSchemaAny_t1801736924_0 * __this, XmlSchemaParticle_t_653546602_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ExamineAttributeWildcardIntersection(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  bool XmlSchemaAny_ExamineAttributeWildcardIntersection_m298519948_0 (XmlSchemaAny_t1801736924_0 * __this, XmlSchemaAny_t1801736924_0 * ___other, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaAny_ValidateDerivationByRestriction_m_1051998177_0 (XmlSchemaAny_t1801736924_0 * __this, XmlSchemaParticle_t_653546602_0 * ___baseParticle, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAny_CheckRecursion_m1773185660_0 (XmlSchemaAny_t1801736924_0 * __this, int32_t ___depth, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAny_ValidateUniqueParticleAttribution_m_27928698_0 (XmlSchemaAny_t1801736924_0 * __this, XmlSchemaObjectTable_t1517207743_0 * ___qnames, ArrayList_t536890563_0 * ___nsNames, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAny_ValidateUniqueTypeAttribution_m1943752041_0 (XmlSchemaAny_t1801736924_0 * __this, XmlSchemaObjectTable_t1517207743_0 * ___labels, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XmlSchemaAny_ValidateWildcardAllowsNamespaceName_m_72471374_0 (XmlSchemaAny_t1801736924_0 * __this, String_t* ___ns, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAny System.Xml.Schema.XmlSchemaAny::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaAny_t1801736924_0 * XmlSchemaAny_Read_m1502776286_0 (Object_t * __this /* static, unused */, XmlSchemaReader_t1816173011_0 * ___reader, ValidationEventHandler_t513619217_0 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
