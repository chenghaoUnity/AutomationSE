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

// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t_1798706413_0;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.XmlNamedNodeMap::.ctor(System.Xml.XmlNode)
extern "C"  void XmlNamedNodeMap__ctor_m1242526720_0 (XmlNamedNodeMap_t_1798706413_0 * __this, XmlNode_t_990591852_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamedNodeMap::.cctor()
extern "C"  void XmlNamedNodeMap__cctor_m659231594_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_NodeList()
extern "C"  ArrayList_t536890563_0 * XmlNamedNodeMap_get_NodeList_m1546968860_0 (XmlNamedNodeMap_t_1798706413_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNamedNodeMap::get_Count()
extern "C"  int32_t XmlNamedNodeMap_get_Count_m73697541_0 (XmlNamedNodeMap_t_1798706413_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::GetEnumerator()
extern "C"  Object_t * XmlNamedNodeMap_GetEnumerator_m_594203681_0 (XmlNamedNodeMap_t_1798706413_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::GetNamedItem(System.String)
extern "C"  XmlNode_t_990591852_0 * XmlNamedNodeMap_GetNamedItem_m_1848853507_0 (XmlNamedNodeMap_t_1798706413_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::GetNamedItem(System.String,System.String)
extern "C"  XmlNode_t_990591852_0 * XmlNamedNodeMap_GetNamedItem_m_1581603463_0 (XmlNamedNodeMap_t_1798706413_0 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::RemoveNamedItem(System.String)
extern "C"  XmlNode_t_990591852_0 * XmlNamedNodeMap_RemoveNamedItem_m592184647_0 (XmlNamedNodeMap_t_1798706413_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::RemoveNamedItem(System.String,System.String)
extern "C"  XmlNode_t_990591852_0 * XmlNamedNodeMap_RemoveNamedItem_m_1280121533_0 (XmlNamedNodeMap_t_1798706413_0 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode)
extern "C"  XmlNode_t_990591852_0 * XmlNamedNodeMap_SetNamedItem_m_813322122_0 (XmlNamedNodeMap_t_1798706413_0 * __this, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode,System.Int32,System.Boolean)
extern "C"  XmlNode_t_990591852_0 * XmlNamedNodeMap_SetNamedItem_m_176942788_0 (XmlNamedNodeMap_t_1798706413_0 * __this, XmlNode_t_990591852_0 * ___node, int32_t ___pos, bool ___raiseEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_Nodes()
extern "C"  ArrayList_t536890563_0 * XmlNamedNodeMap_get_Nodes_m_517194505_0 (XmlNamedNodeMap_t_1798706413_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
