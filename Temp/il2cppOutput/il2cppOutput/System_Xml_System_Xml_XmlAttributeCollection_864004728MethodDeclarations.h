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

// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t_864004728_0;
// System.Xml.XmlNode
struct XmlNode_t_990591852_0;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Xml.XmlAttribute
struct XmlAttribute_t_1872240822_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.XmlAttributeCollection::.ctor(System.Xml.XmlNode)
extern "C"  void XmlAttributeCollection__ctor_m1342482149_0 (XmlAttributeCollection_t_864004728_0 * __this, XmlNode_t_990591852_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttributeCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool XmlAttributeCollection_System_Collections_ICollection_get_IsSynchronized_m_1365474124_0 (XmlAttributeCollection_t_864004728_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlAttributeCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * XmlAttributeCollection_System_Collections_ICollection_get_SyncRoot_m704344736_0 (XmlAttributeCollection_t_864004728_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void XmlAttributeCollection_System_Collections_ICollection_CopyTo_m_1034088580_0 (XmlAttributeCollection_t_864004728_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttributeCollection::get_IsReadOnly()
extern "C"  bool XmlAttributeCollection_get_IsReadOnly_m898352553_0 (XmlAttributeCollection_t_864004728_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.String)
extern "C"  XmlAttribute_t_1872240822_0 * XmlAttributeCollection_get_ItemOf_m_2111635381_0 (XmlAttributeCollection_t_864004728_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.Int32)
extern "C"  XmlAttribute_t_1872240822_0 * XmlAttributeCollection_get_ItemOf_m1441171176_0 (XmlAttributeCollection_t_864004728_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.String,System.String)
extern "C"  XmlAttribute_t_1872240822_0 * XmlAttributeCollection_get_ItemOf_m_324777657_0 (XmlAttributeCollection_t_864004728_0 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::Remove(System.Xml.XmlAttribute)
extern "C"  XmlAttribute_t_1872240822_0 * XmlAttributeCollection_Remove_m1356329359_0 (XmlAttributeCollection_t_864004728_0 * __this, XmlAttribute_t_1872240822_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::RemoveAll()
extern "C"  void XmlAttributeCollection_RemoveAll_m940419235_0 (XmlAttributeCollection_t_864004728_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttributeCollection::SetNamedItem(System.Xml.XmlNode)
extern "C"  XmlNode_t_990591852_0 * XmlAttributeCollection_SetNamedItem_m318328533_0 (XmlAttributeCollection_t_864004728_0 * __this, XmlNode_t_990591852_0 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::AdjustIdenticalAttributes(System.Xml.XmlAttribute,System.Xml.XmlNode)
extern "C"  void XmlAttributeCollection_AdjustIdenticalAttributes_m_11851537_0 (XmlAttributeCollection_t_864004728_0 * __this, XmlAttribute_t_1872240822_0 * ___node, XmlNode_t_990591852_0 * ___existing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttributeCollection::RemoveIdenticalAttribute(System.Xml.XmlNode)
extern "C"  XmlNode_t_990591852_0 * XmlAttributeCollection_RemoveIdenticalAttribute_m_270953930_0 (XmlAttributeCollection_t_864004728_0 * __this, XmlNode_t_990591852_0 * ___existing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
