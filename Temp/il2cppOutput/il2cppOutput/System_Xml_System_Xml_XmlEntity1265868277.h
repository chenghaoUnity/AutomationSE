#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t_1267764019_0;

#include "System_Xml_System_Xml_XmlNode_990591852.h"

// System.Xml.XmlEntity
struct  XmlEntity_t1265868277_0  : public XmlNode_t_990591852_0
{
	// System.String System.Xml.XmlEntity::name
	String_t* ___name_5;
	// System.String System.Xml.XmlEntity::NDATA
	String_t* ___NDATA_6;
	// System.String System.Xml.XmlEntity::publicId
	String_t* ___publicId_7;
	// System.String System.Xml.XmlEntity::systemId
	String_t* ___systemId_8;
	// System.String System.Xml.XmlEntity::baseUri
	String_t* ___baseUri_9;
	// System.Xml.XmlLinkedNode System.Xml.XmlEntity::lastLinkedChild
	XmlLinkedNode_t_1267764019_0 * ___lastLinkedChild_10;
	// System.Boolean System.Xml.XmlEntity::contentAlreadySet
	bool ___contentAlreadySet_11;
};
