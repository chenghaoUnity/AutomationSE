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
// Mono.Xml.DTDAutomata
struct DTDAutomata_t_1542573965_0;
// System.String
struct String_t;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t1055429361_0;

#include "System_Xml_Mono_Xml_DTDNode_138181947.h"
#include "System_Xml_Mono_Xml_DTDContentOrderType_1355489422.h"
#include "System_Xml_Mono_Xml_DTDOccurence853286356.h"

// Mono.Xml.DTDContentModel
struct  DTDContentModel_t_986637325_0  : public DTDNode_t_138181947_0
{
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDContentModel::root
	DTDObjectModel_t_2044825337_0 * ___root_5;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::compiledAutomata
	DTDAutomata_t_1542573965_0 * ___compiledAutomata_6;
	// System.String Mono.Xml.DTDContentModel::ownerElementName
	String_t* ___ownerElementName_7;
	// System.String Mono.Xml.DTDContentModel::elementName
	String_t* ___elementName_8;
	// Mono.Xml.DTDContentOrderType Mono.Xml.DTDContentModel::orderType
	int32_t ___orderType_9;
	// Mono.Xml.DTDContentModelCollection Mono.Xml.DTDContentModel::childModels
	DTDContentModelCollection_t1055429361_0 * ___childModels_10;
	// Mono.Xml.DTDOccurence Mono.Xml.DTDContentModel::occurence
	int32_t ___occurence_11;
};
