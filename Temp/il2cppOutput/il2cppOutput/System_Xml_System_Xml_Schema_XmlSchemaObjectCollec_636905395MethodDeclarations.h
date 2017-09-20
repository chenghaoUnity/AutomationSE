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

// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t_636905395_0;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1727784015_0;
// System.Xml.Schema.XmlSchemaObjectEnumerator
struct XmlSchemaObjectEnumerator_t183746931_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Schema.XmlSchemaObjectCollection::.ctor()
extern "C"  void XmlSchemaObjectCollection__ctor_m_650539677_0 (XmlSchemaObjectCollection_t_636905395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::.ctor(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaObjectCollection__ctor_m_933174353_0 (XmlSchemaObjectCollection_t_636905395_0 * __this, XmlSchemaObject_t1727784015_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObjectCollection::get_Item(System.Int32)
extern "C"  XmlSchemaObject_t1727784015_0 * XmlSchemaObjectCollection_get_Item_m886097275_0 (XmlSchemaObjectCollection_t_636905395_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObjectCollection::Add(System.Xml.Schema.XmlSchemaObject)
extern "C"  int32_t XmlSchemaObjectCollection_Add_m2084724462_0 (XmlSchemaObjectCollection_t_636905395_0 * __this, XmlSchemaObject_t1727784015_0 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObjectCollection::Contains(System.Xml.Schema.XmlSchemaObject)
extern "C"  bool XmlSchemaObjectCollection_Contains_m1970009306_0 (XmlSchemaObjectCollection_t_636905395_0 * __this, XmlSchemaObject_t1727784015_0 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectEnumerator System.Xml.Schema.XmlSchemaObjectCollection::GetEnumerator()
extern "C"  XmlSchemaObjectEnumerator_t183746931_0 * XmlSchemaObjectCollection_GetEnumerator_m_502139670_0 (XmlSchemaObjectCollection_t_636905395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnClear()
extern "C"  void XmlSchemaObjectCollection_OnClear_m_557913425_0 (XmlSchemaObjectCollection_t_636905395_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnInsert(System.Int32,System.Object)
extern "C"  void XmlSchemaObjectCollection_OnInsert_m97119256_0 (XmlSchemaObjectCollection_t_636905395_0 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnRemove(System.Int32,System.Object)
extern "C"  void XmlSchemaObjectCollection_OnRemove_m_162737309_0 (XmlSchemaObjectCollection_t_636905395_0 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnSet(System.Int32,System.Object,System.Object)
extern "C"  void XmlSchemaObjectCollection_OnSet_m_1587611983_0 (XmlSchemaObjectCollection_t_636905395_0 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
