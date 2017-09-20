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

// Mono.Xml.DTDAutomata
struct DTDAutomata_t_1542573965_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAutomata__ctor_m_174675945_0 (DTDAutomata_t_1542573965_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDAutomata::get_Root()
extern "C"  DTDObjectModel_t_2044825337_0 * DTDAutomata_get_Root_m285994343_0 (DTDAutomata_t_1542573965_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::MakeChoice(Mono.Xml.DTDAutomata)
extern "C"  DTDAutomata_t_1542573965_0 * DTDAutomata_MakeChoice_m720640605_0 (DTDAutomata_t_1542573965_0 * __this, DTDAutomata_t_1542573965_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::MakeSequence(Mono.Xml.DTDAutomata)
extern "C"  DTDAutomata_t_1542573965_0 * DTDAutomata_MakeSequence_m2001475901_0 (DTDAutomata_t_1542573965_0 * __this, DTDAutomata_t_1542573965_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::TryEndElement()
extern "C"  DTDAutomata_t_1542573965_0 * DTDAutomata_TryEndElement_m_1418488818_0 (DTDAutomata_t_1542573965_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDAutomata::get_Emptiable()
extern "C"  bool DTDAutomata_get_Emptiable_m470025351_0 (DTDAutomata_t_1542573965_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
