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

// System.Collections.Specialized.StringCollection
struct StringCollection_t705385851_0;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.String
struct String_t;
// System.Collections.Specialized.StringEnumerator
struct StringEnumerator_t1526038177_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Specialized.StringCollection::.ctor()
extern "C"  void StringCollection__ctor_m915846517_0 (StringCollection_t705385851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsReadOnly()
extern "C"  bool StringCollection_System_Collections_IList_get_IsReadOnly_m_1979618138_0 (StringCollection_t705385851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsFixedSize()
extern "C"  bool StringCollection_System_Collections_IList_get_IsFixedSize_m1866975219_0 (StringCollection_t705385851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringCollection::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * StringCollection_System_Collections_IList_get_Item_m_1597616835_0 (StringCollection_t705385851_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void StringCollection_System_Collections_IList_set_Item_m_345720438_0 (StringCollection_t705385851_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.Add(System.Object)
extern "C"  int32_t StringCollection_System_Collections_IList_Add_m1069392572_0 (StringCollection_t705385851_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.Contains(System.Object)
extern "C"  bool StringCollection_System_Collections_IList_Contains_m_578509436_0 (StringCollection_t705385851_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t StringCollection_System_Collections_IList_IndexOf_m_1112138988_0 (StringCollection_t705385851_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void StringCollection_System_Collections_IList_Insert_m401235571_0 (StringCollection_t705385851_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Remove(System.Object)
extern "C"  void StringCollection_System_Collections_IList_Remove_m55692245_0 (StringCollection_t705385851_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void StringCollection_System_Collections_ICollection_CopyTo_m980608550_0 (StringCollection_t705385851_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.StringCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * StringCollection_System_Collections_IEnumerable_GetEnumerator_m1161950369_0 (StringCollection_t705385851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
extern "C"  String_t* StringCollection_get_Item_m458216537_0 (StringCollection_t705385851_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
extern "C"  void StringCollection_set_Item_m646958915_0 (StringCollection_t705385851_0 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::get_Count()
extern "C"  int32_t StringCollection_get_Count_m_1986175470_0 (StringCollection_t705385851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
extern "C"  int32_t StringCollection_Add_m1734005996_0 (StringCollection_t705385851_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Clear()
extern "C"  void StringCollection_Clear_m1854767369_0 (StringCollection_t705385851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
extern "C"  bool StringCollection_Contains_m716685116_0 (StringCollection_t705385851_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringEnumerator System.Collections.Specialized.StringCollection::GetEnumerator()
extern "C"  StringEnumerator_t1526038177_0 * StringCollection_GetEnumerator_m355537934_0 (StringCollection_t705385851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
extern "C"  int32_t StringCollection_IndexOf_m183974317_0 (StringCollection_t705385851_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
extern "C"  void StringCollection_Insert_m466422508_0 (StringCollection_t705385851_0 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::get_IsReadOnly()
extern "C"  bool StringCollection_get_IsReadOnly_m_1270265467_0 (StringCollection_t705385851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::get_IsSynchronized()
extern "C"  bool StringCollection_get_IsSynchronized_m1486263991_0 (StringCollection_t705385851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
extern "C"  void StringCollection_Remove_m1834632280_0 (StringCollection_t705385851_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::RemoveAt(System.Int32)
extern "C"  void StringCollection_RemoveAt_m919867918_0 (StringCollection_t705385851_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringCollection::get_SyncRoot()
extern "C"  Object_t * StringCollection_get_SyncRoot_m_1149653129_0 (StringCollection_t705385851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
