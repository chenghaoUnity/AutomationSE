#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.Schema.XsdInvalidValidationState
struct XsdInvalidValidationState_t173315246_0;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t_1471708465_0;

#include "mscorlib_System_Object_887538054.h"

// Mono.Xml.Schema.XsdValidationState
struct  XsdValidationState_t707053611_0  : public Object_t
{
	// System.Int32 Mono.Xml.Schema.XsdValidationState::occured
	int32_t ___occured_1;
	// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidationState::manager
	XsdParticleStateManager_t_1471708465_0 * ___manager_2;
};
struct XsdValidationState_t707053611_0_StaticFields{
	// Mono.Xml.Schema.XsdInvalidValidationState Mono.Xml.Schema.XsdValidationState::invalid
	XsdInvalidValidationState_t173315246_0 * ___invalid_0;
};
