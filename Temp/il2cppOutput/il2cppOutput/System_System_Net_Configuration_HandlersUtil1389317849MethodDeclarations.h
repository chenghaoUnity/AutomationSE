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

// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;

#include "codegen/il2cpp-codegen.h"

// System.String System.Net.Configuration.HandlersUtil::ExtractAttributeValue(System.String,System.Xml.XmlNode)
extern "C"  String_t* HandlersUtil_ExtractAttributeValue_m_632564401_0 (Object_t * __this /* static, unused */, String_t* ___attKey, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Configuration.HandlersUtil::ExtractAttributeValue(System.String,System.Xml.XmlNode,System.Boolean)
extern "C"  String_t* HandlersUtil_ExtractAttributeValue_m_348957106_0 (Object_t * __this /* static, unused */, String_t* ___attKey, XmlNode_t_990591852_0 * ___node, bool ___optional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HandlersUtil::ThrowException(System.String,System.Xml.XmlNode)
extern "C"  void HandlersUtil_ThrowException_m_2066826377_0 (Object_t * __this /* static, unused */, String_t* ___msg, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
