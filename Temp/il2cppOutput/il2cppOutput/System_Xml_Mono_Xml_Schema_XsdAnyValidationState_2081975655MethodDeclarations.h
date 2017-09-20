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

// Mono.Xml.Schema.XsdAnyValidationState
struct XsdAnyValidationState_t_2081975655_0;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t1801736924_0;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t_1471708465_0;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707053611_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.Schema.XsdAnyValidationState::.ctor(System.Xml.Schema.XmlSchemaAny,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdAnyValidationState__ctor_m_1351399976_0 (XsdAnyValidationState_t_2081975655_0 * __this, XmlSchemaAny_t1801736924_0 * ___any, XsdParticleStateManager_t_1471708465_0 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAnyValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t707053611_0 * XsdAnyValidationState_EvaluateStartElement_m1688337909_0 (XsdAnyValidationState_t_2081975655_0 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::MatchesNamespace(System.String)
extern "C"  bool XsdAnyValidationState_MatchesNamespace_m353570741_0 (XsdAnyValidationState_t_2081975655_0 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::EvaluateEndElement()
extern "C"  bool XsdAnyValidationState_EvaluateEndElement_m71511199_0 (XsdAnyValidationState_t_2081975655_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdAnyValidationState_EvaluateIsEmptiable_m345635121_0 (XsdAnyValidationState_t_2081975655_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
