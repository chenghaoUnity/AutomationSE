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

// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t1535764398_0;
// System.Xml.XmlNameTable
struct XmlNameTable_t_662182735_0;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1801753938_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaCollectionEnumerator
struct XmlSchemaCollectionEnumerator_t351820306_0;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t2045452406_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlSchemaCollection__ctor_m1218368366_0 (XmlSchemaCollection_t1535764398_0 * __this, XmlNameTable_t_662182735_0 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.Schema.XmlSchemaSet)
extern "C"  void XmlSchemaCollection__ctor_m717772417_0 (XmlSchemaCollection_t1535764398_0 * __this, XmlSchemaSet_t1801753938_0 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_Count()
extern "C"  int32_t XmlSchemaCollection_System_Collections_ICollection_get_Count_m_1859442713_0 (XmlSchemaCollection_t1535764398_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void XmlSchemaCollection_System_Collections_ICollection_CopyTo_m146759330_0 (XmlSchemaCollection_t1535764398_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool XmlSchemaCollection_System_Collections_ICollection_get_IsSynchronized_m832654286_0 (XmlSchemaCollection_t1535764398_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.Schema.XmlSchemaCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * XmlSchemaCollection_System_Collections_IEnumerable_GetEnumerator_m_529665173_0 (XmlSchemaCollection_t1535764398_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * XmlSchemaCollection_System_Collections_ICollection_get_SyncRoot_m1719580346_0 (XmlSchemaCollection_t1535764398_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::get_SchemaSet()
extern "C"  XmlSchemaSet_t1801753938_0 * XmlSchemaCollection_get_SchemaSet_m_644852728_0 (XmlSchemaCollection_t1535764398_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::get_Count()
extern "C"  int32_t XmlSchemaCollection_get_Count_m1461156680_0 (XmlSchemaCollection_t1535764398_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollectionEnumerator System.Xml.Schema.XmlSchemaCollection::GetEnumerator()
extern "C"  XmlSchemaCollectionEnumerator_t351820306_0 * XmlSchemaCollection_GetEnumerator_m_196488918_0 (XmlSchemaCollection_t1535764398_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::OnValidationError(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C"  void XmlSchemaCollection_OnValidationError_m1289440393_0 (XmlSchemaCollection_t1535764398_0 * __this, Object_t * ___o, ValidationEventArgs_t2045452406_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
