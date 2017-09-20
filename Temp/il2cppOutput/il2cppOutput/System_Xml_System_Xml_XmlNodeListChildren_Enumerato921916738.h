#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.IHasXmlChildNode
struct IHasXmlChildNode_t1033689981_0;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t_1267764019_0;

#include "mscorlib_System_Object_887538054.h"

// System.Xml.XmlNodeListChildren/Enumerator
struct  Enumerator_t921916738_0  : public Object_t
{
	// System.Xml.IHasXmlChildNode System.Xml.XmlNodeListChildren/Enumerator::parent
	Object_t * ___parent_0;
	// System.Xml.XmlLinkedNode System.Xml.XmlNodeListChildren/Enumerator::currentChild
	XmlLinkedNode_t_1267764019_0 * ___currentChild_1;
	// System.Boolean System.Xml.XmlNodeListChildren/Enumerator::passedLastNode
	bool ___passedLastNode_2;
};
