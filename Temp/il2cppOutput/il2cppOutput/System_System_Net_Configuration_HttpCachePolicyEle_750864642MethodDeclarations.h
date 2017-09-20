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

// System.Net.Configuration.HttpCachePolicyElement
struct HttpCachePolicyElement_t_750864642_0;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t7845476_0;
// System.Xml.XmlReader
struct XmlReader_t1629164245_0;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t_1454036085_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Configuration.HttpCachePolicyElement::.cctor()
extern "C"  void HttpCachePolicyElement__cctor_m_211041253_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpCachePolicyElement::get_Properties()
extern "C"  ConfigurationPropertyCollection_t7845476_0 * HttpCachePolicyElement_get_Properties_m1493540609_0 (HttpCachePolicyElement_t_750864642_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void HttpCachePolicyElement_DeserializeElement_m_217378574_0 (HttpCachePolicyElement_t_750864642_0 * __this, XmlReader_t1629164245_0 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::Reset(System.Configuration.ConfigurationElement)
extern "C"  void HttpCachePolicyElement_Reset_m_616149802_0 (HttpCachePolicyElement_t_750864642_0 * __this, ConfigurationElement_t_1454036085_0 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
