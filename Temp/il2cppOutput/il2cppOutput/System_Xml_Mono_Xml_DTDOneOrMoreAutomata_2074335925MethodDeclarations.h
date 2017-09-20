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

// Mono.Xml.DTDOneOrMoreAutomata
struct DTDOneOrMoreAutomata_t_2074335925_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t_1542573965_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDOneOrMoreAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata)
extern "C"  void DTDOneOrMoreAutomata__ctor_m1844217423_0 (DTDOneOrMoreAutomata_t_2074335925_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, DTDAutomata_t_1542573965_0 * ___children, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t_1542573965_0 * DTDOneOrMoreAutomata_TryStartElement_m708739547_0 (DTDOneOrMoreAutomata_t_2074335925_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryEndElement()
extern "C"  DTDAutomata_t_1542573965_0 * DTDOneOrMoreAutomata_TryEndElement_m601138990_0 (DTDOneOrMoreAutomata_t_2074335925_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
