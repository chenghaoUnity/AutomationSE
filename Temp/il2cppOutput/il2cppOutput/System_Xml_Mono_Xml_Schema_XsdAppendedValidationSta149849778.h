#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707053611_0;

#include "System_Xml_Mono_Xml_Schema_XsdValidationState707053611.h"

// Mono.Xml.Schema.XsdAppendedValidationState
struct  XsdAppendedValidationState_t149849778_0  : public XsdValidationState_t707053611_0
{
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::head
	XsdValidationState_t707053611_0 * ___head_3;
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::rest
	XsdValidationState_t707053611_0 * ___rest_4;
};
