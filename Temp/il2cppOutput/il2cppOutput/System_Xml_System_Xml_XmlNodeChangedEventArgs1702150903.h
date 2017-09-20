#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNode
struct XmlNode_t_990591852_0;
// System.String
struct String_t;

#include "mscorlib_System_EventArgs693055868.h"
#include "System_Xml_System_Xml_XmlNodeChangedAction_89034282.h"

// System.Xml.XmlNodeChangedEventArgs
struct  XmlNodeChangedEventArgs_t1702150903_0  : public EventArgs_t693055868_0
{
	// System.Xml.XmlNode System.Xml.XmlNodeChangedEventArgs::_oldParent
	XmlNode_t_990591852_0 * ____oldParent_1;
	// System.Xml.XmlNode System.Xml.XmlNodeChangedEventArgs::_newParent
	XmlNode_t_990591852_0 * ____newParent_2;
	// System.Xml.XmlNodeChangedAction System.Xml.XmlNodeChangedEventArgs::_action
	int32_t ____action_3;
	// System.Xml.XmlNode System.Xml.XmlNodeChangedEventArgs::_node
	XmlNode_t_990591852_0 * ____node_4;
	// System.String System.Xml.XmlNodeChangedEventArgs::_oldValue
	String_t* ____oldValue_5;
	// System.String System.Xml.XmlNodeChangedEventArgs::_newValue
	String_t* ____newValue_6;
};
