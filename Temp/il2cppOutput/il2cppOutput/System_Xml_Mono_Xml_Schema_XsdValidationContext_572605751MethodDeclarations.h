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

// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t_572605751_0;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t2018508780_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.Schema.XsdValidationContext::.ctor()
extern "C"  void XsdValidationContext__ctor_m_1588797971_0 (XsdValidationContext_t_572605751_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::get_XsiType()
extern "C"  Object_t * XsdValidationContext_get_XsiType_m_45618251_0 (XsdValidationContext_t_572605751_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::set_XsiType(System.Object)
extern "C"  void XsdValidationContext_set_XsiType_m650689086_0 (XsdValidationContext_t_572605751_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdValidationContext::get_Element()
extern "C"  XmlSchemaElement_t2018508780_0 * XsdValidationContext_get_Element_m_615025720_0 (XsdValidationContext_t_572605751_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::PushCurrentElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  void XsdValidationContext_PushCurrentElement_m1168932281_0 (XsdValidationContext_t_572605751_0 * __this, XmlSchemaElement_t2018508780_0 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::PopCurrentElement()
extern "C"  void XsdValidationContext_PopCurrentElement_m_223640833_0 (XsdValidationContext_t_572605751_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::get_ActualType()
extern "C"  Object_t * XsdValidationContext_get_ActualType_m_2011737635_0 (XsdValidationContext_t_572605751_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidationContext::get_IsInvalid()
extern "C"  bool XsdValidationContext_get_IsInvalid_m_1773976889_0 (XsdValidationContext_t_572605751_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::Clone()
extern "C"  Object_t * XsdValidationContext_Clone_m1616271379_0 (XsdValidationContext_t_572605751_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::EvaluateStartElement(System.String,System.String)
extern "C"  void XsdValidationContext_EvaluateStartElement_m917357844_0 (XsdValidationContext_t_572605751_0 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidationContext::EvaluateEndElement()
extern "C"  bool XsdValidationContext_EvaluateEndElement_m626427865_0 (XsdValidationContext_t_572605751_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
