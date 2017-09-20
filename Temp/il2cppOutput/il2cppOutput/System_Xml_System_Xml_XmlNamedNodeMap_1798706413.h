#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;

#include "mscorlib_System_Object_887538054.h"

// System.Xml.XmlNamedNodeMap
struct  XmlNamedNodeMap_t_1798706413_0  : public Object_t
{
	// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::parent
	XmlNode_t_990591852_0 * ___parent_1;
	// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::nodeList
	ArrayList_t536890563_0 * ___nodeList_2;
	// System.Boolean System.Xml.XmlNamedNodeMap::readOnly
	bool ___readOnly_3;
};
struct XmlNamedNodeMap_t_1798706413_0_StaticFields{
	// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::emptyEnumerator
	Object_t * ___emptyEnumerator_0;
};
