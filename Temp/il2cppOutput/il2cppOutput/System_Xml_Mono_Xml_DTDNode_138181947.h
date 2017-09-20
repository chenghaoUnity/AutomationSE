#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t_2044825337_0;
// System.String
struct String_t;

#include "mscorlib_System_Object_887538054.h"

// Mono.Xml.DTDNode
struct  DTDNode_t_138181947_0  : public Object_t
{
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDNode::root
	DTDObjectModel_t_2044825337_0 * ___root_0;
	// System.Boolean Mono.Xml.DTDNode::isInternalSubset
	bool ___isInternalSubset_1;
	// System.String Mono.Xml.DTDNode::baseURI
	String_t* ___baseURI_2;
	// System.Int32 Mono.Xml.DTDNode::lineNumber
	int32_t ___lineNumber_3;
	// System.Int32 Mono.Xml.DTDNode::linePosition
	int32_t ___linePosition_4;
};
