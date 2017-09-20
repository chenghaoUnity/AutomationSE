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

// Mono.Xml.Schema.XsdWildcard
struct XsdWildcard_t698125479_0;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t513619217_0;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t_881538832_0;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t1801736924_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.Schema.XsdWildcard::.ctor(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XsdWildcard__ctor_m_1015919223_0 (XsdWildcard_t698125479_0 * __this, XmlSchemaObject_t1727784015_0 * ___wildcard, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::Reset()
extern "C"  void XsdWildcard_Reset_m_1370291466_0 (XsdWildcard_t698125479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::Compile(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XsdWildcard_Compile_m_91745335_0 (XsdWildcard_t698125479_0 * __this, String_t* ___nss, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ExamineAttributeWildcardIntersection(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  bool XsdWildcard_ExamineAttributeWildcardIntersection_m1346006443_0 (XsdWildcard_t698125479_0 * __this, XmlSchemaAny_t1801736924_0 * ___other, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XsdWildcard_ValidateWildcardAllowsNamespaceName_m_825435917_0 (XsdWildcard_t698125479_0 * __this, String_t* ___ns, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::ValidateWildcardSubset(Mono.Xml.Schema.XsdWildcard,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XsdWildcard_ValidateWildcardSubset_m2036236740_0 (XsdWildcard_t698125479_0 * __this, XsdWildcard_t698125479_0 * ___other, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ValidateWildcardSubset(Mono.Xml.Schema.XsdWildcard,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XsdWildcard_ValidateWildcardSubset_m2072467265_0 (XsdWildcard_t698125479_0 * __this, XsdWildcard_t698125479_0 * ___other, ValidationEventHandler_t513619217_0 * ___h, XmlSchema_t_881538832_0 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
