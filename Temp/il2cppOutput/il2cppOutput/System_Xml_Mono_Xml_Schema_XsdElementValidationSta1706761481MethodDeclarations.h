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

// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t1706761481_0;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t2018508780_0;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t_1471708465_0;
// System.String
struct String_t;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707053611_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.Schema.XsdElementValidationState::.ctor(System.Xml.Schema.XmlSchemaElement,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdElementValidationState__ctor_m_1775856552_0 (XsdElementValidationState_t1706761481_0 * __this, XmlSchemaElement_t2018508780_0 * ___element, XsdParticleStateManager_t_1471708465_0 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdElementValidationState::get_Name()
extern "C"  String_t* XsdElementValidationState_get_Name_m141511438_0 (XsdElementValidationState_t1706761481_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdElementValidationState::get_NS()
extern "C"  String_t* XsdElementValidationState_get_NS_m666052648_0 (XsdElementValidationState_t1706761481_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdElementValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t707053611_0 * XsdElementValidationState_EvaluateStartElement_m1126013829_0 (XsdElementValidationState_t1706761481_0 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdElementValidationState::CheckOccurence(System.Xml.Schema.XmlSchemaElement)
extern "C"  XsdValidationState_t707053611_0 * XsdElementValidationState_CheckOccurence_m_559309062_0 (XsdElementValidationState_t1706761481_0 * __this, XmlSchemaElement_t2018508780_0 * ___maybeSubstituted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdElementValidationState::EvaluateEndElement()
extern "C"  bool XsdElementValidationState_EvaluateEndElement_m_637377137_0 (XsdElementValidationState_t1706761481_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdElementValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdElementValidationState_EvaluateIsEmptiable_m_155066815_0 (XsdElementValidationState_t1706761481_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
