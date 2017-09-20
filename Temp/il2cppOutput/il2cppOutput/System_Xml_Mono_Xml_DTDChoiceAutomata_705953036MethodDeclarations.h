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

// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t_705953036_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t_1542573965_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDChoiceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  void DTDChoiceAutomata__ctor_m_1786447528_0 (DTDChoiceAutomata_t_705953036_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, DTDAutomata_t_1542573965_0 * ___left, DTDAutomata_t_1542573965_0 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t_1542573965_0 * DTDChoiceAutomata_TryStartElement_m1771571836_0 (DTDChoiceAutomata_t_705953036_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryEndElement()
extern "C"  DTDAutomata_t_1542573965_0 * DTDChoiceAutomata_TryEndElement_m_1487335251_0 (DTDChoiceAutomata_t_705953036_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDChoiceAutomata::get_Emptiable()
extern "C"  bool DTDChoiceAutomata_get_Emptiable_m_842076186_0 (DTDChoiceAutomata_t_705953036_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
