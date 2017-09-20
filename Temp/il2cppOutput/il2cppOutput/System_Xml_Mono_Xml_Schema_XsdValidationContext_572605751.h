#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707053611_0;
// System.Collections.Stack
struct Stack_t_1068416332_0;

#include "mscorlib_System_Object_887538054.h"

// Mono.Xml.Schema.XsdValidationContext
struct  XsdValidationContext_t_572605751_0  : public Object_t
{
	// System.Object Mono.Xml.Schema.XsdValidationContext::xsi_type
	Object_t * ___xsi_type_0;
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdValidationContext::State
	XsdValidationState_t707053611_0 * ___State_1;
	// System.Collections.Stack Mono.Xml.Schema.XsdValidationContext::element_stack
	Stack_t_1068416332_0 * ___element_stack_2;
};
