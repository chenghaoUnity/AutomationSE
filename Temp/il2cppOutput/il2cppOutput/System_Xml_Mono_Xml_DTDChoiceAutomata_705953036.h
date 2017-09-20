#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.DTDAutomata
struct DTDAutomata_t_1542573965_0;

#include "System_Xml_Mono_Xml_DTDAutomata_1542573965.h"

// Mono.Xml.DTDChoiceAutomata
struct  DTDChoiceAutomata_t_705953036_0  : public DTDAutomata_t_1542573965_0
{
	// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::left
	DTDAutomata_t_1542573965_0 * ___left_1;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::right
	DTDAutomata_t_1542573965_0 * ___right_2;
	// System.Boolean Mono.Xml.DTDChoiceAutomata::hasComputedEmptiable
	bool ___hasComputedEmptiable_3;
	// System.Boolean Mono.Xml.DTDChoiceAutomata::cachedEmptiable
	bool ___cachedEmptiable_4;
};
