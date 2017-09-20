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

// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t1424408855_0;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t_705953036_0;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t_1542573965_0;
// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t428329044_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.DTDAutomataFactory::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAutomataFactory__ctor_m_1341689087_0 (DTDAutomataFactory_t1424408855_0 * __this, DTDObjectModel_t_2044825337_0 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDChoiceAutomata Mono.Xml.DTDAutomataFactory::Choice(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDChoiceAutomata_t_705953036_0 * DTDAutomataFactory_Choice_m_1004960152_0 (DTDAutomataFactory_t1424408855_0 * __this, DTDAutomata_t_1542573965_0 * ___left, DTDAutomata_t_1542573965_0 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDSequenceAutomata Mono.Xml.DTDAutomataFactory::Sequence(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDSequenceAutomata_t428329044_0 * DTDAutomataFactory_Sequence_m812875240_0 (DTDAutomataFactory_t1424408855_0 * __this, DTDAutomata_t_1542573965_0 * ___left, DTDAutomata_t_1542573965_0 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
