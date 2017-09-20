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

// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t806844761_0;
// System.Object
struct Object_t;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;
// System.Collections.IDictionary
struct IDictionary_t_1514320629_0;
// System.String
struct String_t;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t2121469360_0;
// System.Collections.Hashtable
struct Hashtable_t_2004451924_0;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t_864004728_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
extern "C"  void DiagnosticsConfigurationHandler__ctor_m1711073693_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
extern "C"  Object_t * DiagnosticsConfigurationHandler_Create_m_2072569223_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, Object_t * ___parent, Object_t * ___configContext, XmlNode_t_990591852_0 * ___section, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddAssertNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddAssertNode_m1324010022_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, Object_t * ___d, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddSwitchesNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddSwitchesNode_m_621833782_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, Object_t * ___d, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::GetSwitchValue(System.String,System.String)
extern "C"  Object_t * DiagnosticsConfigurationHandler_GetSwitchValue_m1393522491_0 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceNode_m364428253_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, Object_t * ___d, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceAttributes(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceAttributes_m_1428336152_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, Object_t * ___d, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.DiagnosticsConfigurationHandler::GetSharedListeners(System.Collections.IDictionary)
extern "C"  TraceListenerCollection_t2121469360_0 * DiagnosticsConfigurationHandler_GetSharedListeners_m_2044211_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, Object_t * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddSourcesNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddSourcesNode_m_829179574_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, Object_t * ___d, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceSource(System.Collections.IDictionary,System.Collections.Hashtable,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceSource_m_21201596_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, Object_t * ___d, Hashtable_t_2004451924_0 * ___sources, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceListeners(System.Collections.IDictionary,System.Xml.XmlNode,System.Diagnostics.TraceListenerCollection)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceListeners_m1161991740_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, Object_t * ___d, XmlNode_t_990591852_0 * ___listenersNode, TraceListenerCollection_t2121469360_0 * ___listeners, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceListener(System.Collections.IDictionary,System.Xml.XmlNode,System.Xml.XmlAttributeCollection,System.Diagnostics.TraceListenerCollection)
extern "C"  void DiagnosticsConfigurationHandler_AddTraceListener_m_1613074094_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, Object_t * ___d, XmlNode_t_990591852_0 * ___child, XmlAttributeCollection_t_864004728_0 * ___attributes, TraceListenerCollection_t2121469360_0 * ___listeners, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::RemoveTraceListener(System.String)
extern "C"  void DiagnosticsConfigurationHandler_RemoveTraceListener_m1501878802_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.DiagnosticsConfigurationHandler::GetAttribute(System.Xml.XmlAttributeCollection,System.String,System.Boolean,System.Xml.XmlNode)
extern "C"  String_t* DiagnosticsConfigurationHandler_GetAttribute_m_660309941_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, XmlAttributeCollection_t_864004728_0 * ___attrs, String_t* ___attr, bool ___required, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ValidateAttribute(System.String,System.String,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ValidateAttribute_m1258132294_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, String_t* ___attribute, String_t* ___value, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ValidateInvalidAttributes(System.Xml.XmlAttributeCollection,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ValidateInvalidAttributes_m1133717085_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, XmlAttributeCollection_t_864004728_0 * ___c, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowMissingAttribute(System.String,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ThrowMissingAttribute_m_367929992_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, String_t* ___attribute, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedNode(System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ThrowUnrecognizedNode_m_1020585681_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedElement(System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ThrowUnrecognizedElement_m_1761020885_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedAttribute(System.String,System.Xml.XmlNode)
extern "C"  void DiagnosticsConfigurationHandler_ThrowUnrecognizedAttribute_m_1198268465_0 (DiagnosticsConfigurationHandler_t806844761_0 * __this, String_t* ___attribute, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
