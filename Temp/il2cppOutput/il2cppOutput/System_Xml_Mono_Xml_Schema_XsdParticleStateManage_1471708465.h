#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t_2004451924_0;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t2018508780_0;
// System.Collections.Stack
struct Stack_t_1068416332_0;
// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t_572605751_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t_1305703446_0;

#include "mscorlib_System_Object_887538054.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProc_1684590244.h"

// Mono.Xml.Schema.XsdParticleStateManager
struct  XsdParticleStateManager_t_1471708465_0  : public Object_t
{
	// System.Collections.Hashtable Mono.Xml.Schema.XsdParticleStateManager::table
	Hashtable_t_2004451924_0 * ___table_0;
	// System.Xml.Schema.XmlSchemaContentProcessing Mono.Xml.Schema.XsdParticleStateManager::processContents
	int32_t ___processContents_1;
	// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdParticleStateManager::CurrentElement
	XmlSchemaElement_t2018508780_0 * ___CurrentElement_2;
	// System.Collections.Stack Mono.Xml.Schema.XsdParticleStateManager::ContextStack
	Stack_t_1068416332_0 * ___ContextStack_3;
	// Mono.Xml.Schema.XsdValidationContext Mono.Xml.Schema.XsdParticleStateManager::Context
	XsdValidationContext_t_572605751_0 * ___Context_4;
};
struct XsdParticleStateManager_t_1471708465_0_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdParticleStateManager::<>f__switch$map2
	Dictionary_2_t_1305703446_0 * ___U3CU3Ef__switchU24map2_5;
};
