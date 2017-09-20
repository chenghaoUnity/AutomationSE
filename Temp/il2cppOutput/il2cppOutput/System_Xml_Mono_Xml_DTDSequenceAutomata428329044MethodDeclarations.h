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

// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t428329044_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t_1542573965_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDSequenceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  void DTDSequenceAutomata__ctor_m_165767304_0 (DTDSequenceAutomata_t428329044_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, DTDAutomata_t_1542573965_0 * ___left, DTDAutomata_t_1542573965_0 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t_1542573965_0 * DTDSequenceAutomata_TryStartElement_m683184348_0 (DTDSequenceAutomata_t428329044_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::TryEndElement()
extern "C"  DTDAutomata_t_1542573965_0 * DTDSequenceAutomata_TryEndElement_m_540502451_0 (DTDSequenceAutomata_t428329044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDSequenceAutomata::get_Emptiable()
extern "C"  bool DTDSequenceAutomata_get_Emptiable_m_130560058_0 (DTDSequenceAutomata_t428329044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
