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

// Mono.Xml.DTDElementAutomata
struct DTDElementAutomata_t1581113257_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// System.String
struct String_t;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t_1542573965_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDElementAutomata::.ctor(Mono.Xml.DTDObjectModel,System.String)
extern "C"  void DTDElementAutomata__ctor_m739456143_0 (DTDElementAutomata_t1581113257_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDElementAutomata::get_Name()
extern "C"  String_t* DTDElementAutomata_get_Name_m_1292801618_0 (DTDElementAutomata_t1581113257_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDElementAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t_1542573965_0 * DTDElementAutomata_TryStartElement_m1218012473_0 (DTDElementAutomata_t1581113257_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
