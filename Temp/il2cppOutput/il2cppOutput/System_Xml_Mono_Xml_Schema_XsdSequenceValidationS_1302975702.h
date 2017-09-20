#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t_492849967_0;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707053611_0;

#include "System_Xml_Mono_Xml_Schema_XsdValidationState707053611.h"

// Mono.Xml.Schema.XsdSequenceValidationState
struct  XsdSequenceValidationState_t_1302975702_0  : public XsdValidationState_t707053611_0
{
	// System.Xml.Schema.XmlSchemaSequence Mono.Xml.Schema.XsdSequenceValidationState::seq
	XmlSchemaSequence_t_492849967_0 * ___seq_3;
	// System.Int32 Mono.Xml.Schema.XsdSequenceValidationState::current
	int32_t ___current_4;
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdSequenceValidationState::currentAutomata
	XsdValidationState_t707053611_0 * ___currentAutomata_5;
	// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::emptiable
	bool ___emptiable_6;
};
