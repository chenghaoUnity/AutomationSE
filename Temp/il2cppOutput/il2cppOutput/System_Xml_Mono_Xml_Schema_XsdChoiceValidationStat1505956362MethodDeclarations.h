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

// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t1505956362_0;
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t1389928113_0;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t_1471708465_0;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707053611_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.Schema.XsdChoiceValidationState::.ctor(System.Xml.Schema.XmlSchemaChoice,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdChoiceValidationState__ctor_m_2077772112_0 (XsdChoiceValidationState_t1505956362_0 * __this, XmlSchemaChoice_t1389928113_0 * ___choice, XsdParticleStateManager_t_1471708465_0 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdChoiceValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t707053611_0 * XsdChoiceValidationState_EvaluateStartElement_m750387804_0 (XsdChoiceValidationState_t1505956362_0 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::EvaluateEndElement()
extern "C"  bool XsdChoiceValidationState_EvaluateEndElement_m2025657818_0 (XsdChoiceValidationState_t1505956362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdChoiceValidationState_EvaluateIsEmptiable_m794638166_0 (XsdChoiceValidationState_t1505956362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
