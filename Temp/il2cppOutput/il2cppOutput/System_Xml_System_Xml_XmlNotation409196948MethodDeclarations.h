#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Xml.XmlNotation
struct XmlNotation_t409196948_0;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t_307474771_0;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeType_46113298.h"

// System.Void System.Xml.XmlNotation::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlNotation__ctor_m_448576138_0 (XmlNotation_t409196948_0 * __this, String_t* ___localName, String_t* ___prefix, String_t* ___publicId, String_t* ___systemId, XmlDocument_t_307474771_0 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNotation::get_IsReadOnly()
extern "C"  bool XmlNotation_get_IsReadOnly_m1534547455_0 (XmlNotation_t409196948_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNotation::get_LocalName()
extern "C"  String_t* XmlNotation_get_LocalName_m_1724292982_0 (XmlNotation_t409196948_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNotation::get_Name()
extern "C"  String_t* XmlNotation_get_Name_m_1695923079_0 (XmlNotation_t409196948_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNotation::get_NodeType()
extern "C"  int32_t XmlNotation_get_NodeType_m_1347838277_0 (XmlNotation_t409196948_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNotation::CloneNode(System.Boolean)
extern "C"  XmlNode_t_990591852_0 * XmlNotation_CloneNode_m374283752_0 (XmlNotation_t409196948_0 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
