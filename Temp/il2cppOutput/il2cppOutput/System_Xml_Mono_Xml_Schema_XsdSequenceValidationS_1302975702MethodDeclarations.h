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

// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t_1302975702_0;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t_492849967_0;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t_1471708465_0;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707053611_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.Schema.XsdSequenceValidationState::.ctor(System.Xml.Schema.XmlSchemaSequence,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdSequenceValidationState__ctor_m1127236464_0 (XsdSequenceValidationState_t_1302975702_0 * __this, XmlSchemaSequence_t_492849967_0 * ___sequence, XsdParticleStateManager_t_1471708465_0 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdSequenceValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t707053611_0 * XsdSequenceValidationState_EvaluateStartElement_m_307141060_0 (XsdSequenceValidationState_t_1302975702_0 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateEndElement()
extern "C"  bool XsdSequenceValidationState_EvaluateEndElement_m_329361990_0 (XsdSequenceValidationState_t_1302975702_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdSequenceValidationState_EvaluateIsEmptiable_m803468150_0 (XsdSequenceValidationState_t_1302975702_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
