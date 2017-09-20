#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.Xml.XmlNodeReaderImpl
struct XmlNodeReaderImpl_t_930017993_0;

#include "System_Xml_System_Xml_XmlReader1629164245.h"

// System.Xml.XmlNodeReader
struct  XmlNodeReader_t_1441379721_0  : public XmlReader_t1629164245_0
{
	// System.Xml.XmlReader System.Xml.XmlNodeReader::entity
	XmlReader_t1629164245_0 * ___entity_2;
	// System.Xml.XmlNodeReaderImpl System.Xml.XmlNodeReader::source
	XmlNodeReaderImpl_t_930017993_0 * ___source_3;
	// System.Boolean System.Xml.XmlNodeReader::entityInsideAttribute
	bool ___entityInsideAttribute_4;
	// System.Boolean System.Xml.XmlNodeReader::insideAttribute
	bool ___insideAttribute_5;
};
