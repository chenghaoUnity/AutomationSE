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

// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1789909661_0;
// System.Collections.ArrayList
struct ArrayList_t536890563_0;
// System.Attribute[]
struct AttributeU5BU5D_t_1037111431_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Object
struct Object_t;
// System.Attribute
struct Attribute_t675283329_0;
// System.Array
struct Array_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.AttributeCollection::.ctor(System.Collections.ArrayList)
extern "C"  void AttributeCollection__ctor_m1643864276_0 (AttributeCollection_t1789909661_0 * __this, ArrayList_t536890563_0 * ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::.ctor(System.Attribute[])
extern "C"  void AttributeCollection__ctor_m1354289780_0 (AttributeCollection_t1789909661_0 * __this, AttributeU5BU5D_t_1037111431_0* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::.cctor()
extern "C"  void AttributeCollection__cctor_m1889908538_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.AttributeCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * AttributeCollection_System_Collections_IEnumerable_GetEnumerator_m_1430595188_0 (AttributeCollection_t1789909661_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool AttributeCollection_System_Collections_ICollection_get_IsSynchronized_m_835073459_0 (AttributeCollection_t1789909661_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * AttributeCollection_System_Collections_ICollection_get_SyncRoot_m630646571_0 (AttributeCollection_t1789909661_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_Count()
extern "C"  int32_t AttributeCollection_System_Collections_ICollection_get_Count_m575680968_0 (AttributeCollection_t1789909661_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::Contains(System.Attribute)
extern "C"  bool AttributeCollection_Contains_m_1367584867_0 (AttributeCollection_t1789909661_0 * __this, Attribute_t675283329_0 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::Contains(System.Attribute[])
extern "C"  bool AttributeCollection_Contains_m10986363_0 (AttributeCollection_t1789909661_0 * __this, AttributeU5BU5D_t_1037111431_0* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::CopyTo(System.Array,System.Int32)
extern "C"  void AttributeCollection_CopyTo_m_418699792_0 (AttributeCollection_t1789909661_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.AttributeCollection::GetEnumerator()
extern "C"  Object_t * AttributeCollection_GetEnumerator_m_177808683_0 (AttributeCollection_t1789909661_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.ComponentModel.AttributeCollection::GetDefaultAttribute(System.Type)
extern "C"  Attribute_t675283329_0 * AttributeCollection_GetDefaultAttribute_m223539477_0 (AttributeCollection_t1789909661_0 * __this, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.AttributeCollection::get_Count()
extern "C"  int32_t AttributeCollection_get_Count_m_776705657_0 (AttributeCollection_t1789909661_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.ComponentModel.AttributeCollection::get_Item(System.Type)
extern "C"  Attribute_t675283329_0 * AttributeCollection_get_Item_m1177971022_0 (AttributeCollection_t1789909661_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
