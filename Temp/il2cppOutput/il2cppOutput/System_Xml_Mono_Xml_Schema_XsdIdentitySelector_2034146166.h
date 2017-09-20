#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t391223730_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// Mono.Xml.Schema.XsdIdentityField[]
struct XsdIdentityFieldU5BU5D_t_826760239_0;

#include "mscorlib_System_Object_887538054.h"

// Mono.Xml.Schema.XsdIdentitySelector
struct  XsdIdentitySelector_t_2034146166_0  : public Object_t
{
	// Mono.Xml.Schema.XsdIdentityPath[] Mono.Xml.Schema.XsdIdentitySelector::selectorPaths
	XsdIdentityPathU5BU5D_t391223730_0* ___selectorPaths_0;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdIdentitySelector::fields
	ArrayList_t536890563_0 * ___fields_1;
	// Mono.Xml.Schema.XsdIdentityField[] Mono.Xml.Schema.XsdIdentitySelector::cachedFields
	XsdIdentityFieldU5BU5D_t_826760239_0* ___cachedFields_2;
};
