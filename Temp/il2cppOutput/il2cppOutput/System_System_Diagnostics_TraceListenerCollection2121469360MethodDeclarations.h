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

// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t2121469360_0;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Diagnostics.TraceListener
struct TraceListener_t_2068633230_0;
// System.String
struct String_t;
// System.Diagnostics.TraceImplSettings
struct TraceImplSettings_t_390842335_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.TraceListenerCollection::.ctor()
extern "C"  void TraceListenerCollection__ctor_m_1767486938_0 (TraceListenerCollection_t2121469360_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::.ctor(System.Boolean)
extern "C"  void TraceListenerCollection__ctor_m_1042987747_0 (TraceListenerCollection_t2121469360_0 * __this, bool ___addDefault, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * TraceListenerCollection_System_Collections_IList_get_Item_m_1648223365_0 (TraceListenerCollection_t2121469360_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void TraceListenerCollection_System_Collections_IList_set_Item_m_920356654_0 (TraceListenerCollection_t2121469360_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool TraceListenerCollection_System_Collections_ICollection_get_IsSynchronized_m_567583820_0 (TraceListenerCollection_t2121469360_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * TraceListenerCollection_System_Collections_ICollection_get_SyncRoot_m_1209526540_0 (TraceListenerCollection_t2121469360_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_IsFixedSize()
extern "C"  bool TraceListenerCollection_System_Collections_IList_get_IsFixedSize_m1554049047_0 (TraceListenerCollection_t2121469360_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_IsReadOnly()
extern "C"  bool TraceListenerCollection_System_Collections_IList_get_IsReadOnly_m_1296975870_0 (TraceListenerCollection_t2121469360_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void TraceListenerCollection_System_Collections_ICollection_CopyTo_m1732739550_0 (TraceListenerCollection_t2121469360_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::System.Collections.IList.Add(System.Object)
extern "C"  int32_t TraceListenerCollection_System_Collections_IList_Add_m_1209047644_0 (TraceListenerCollection_t2121469360_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.Contains(System.Object)
extern "C"  bool TraceListenerCollection_System_Collections_IList_Contains_m_605676888_0 (TraceListenerCollection_t2121469360_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t TraceListenerCollection_System_Collections_IList_IndexOf_m1878796796_0 (TraceListenerCollection_t2121469360_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void TraceListenerCollection_System_Collections_IList_Insert_m128012219_0 (TraceListenerCollection_t2121469360_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.Remove(System.Object)
extern "C"  void TraceListenerCollection_System_Collections_IList_Remove_m_2117835379_0 (TraceListenerCollection_t2121469360_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::get_Count()
extern "C"  int32_t TraceListenerCollection_get_Count_m_61554438_0 (TraceListenerCollection_t2121469360_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListener System.Diagnostics.TraceListenerCollection::get_Item(System.String)
extern "C"  TraceListener_t_2068633230_0 * TraceListenerCollection_get_Item_m1422885249_0 (TraceListenerCollection_t2121469360_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::set_Item(System.Int32,System.Diagnostics.TraceListener)
extern "C"  void TraceListenerCollection_set_Item_m_1920034513_0 (TraceListenerCollection_t2121469360_0 * __this, int32_t ___index, TraceListener_t_2068633230_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::Add(System.Diagnostics.TraceListener)
extern "C"  int32_t TraceListenerCollection_Add_m860190717_0 (TraceListenerCollection_t2121469360_0 * __this, TraceListener_t_2068633230_0 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Add(System.Diagnostics.TraceListener,System.Diagnostics.TraceImplSettings)
extern "C"  void TraceListenerCollection_Add_m710021106_0 (TraceListenerCollection_t2121469360_0 * __this, TraceListener_t_2068633230_0 * ___listener, TraceImplSettings_t_390842335_0 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::InitializeListener(System.Diagnostics.TraceListener)
extern "C"  void TraceListenerCollection_InitializeListener_m1025063114_0 (TraceListenerCollection_t2121469360_0 * __this, TraceListener_t_2068633230_0 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Clear()
extern "C"  void TraceListenerCollection_Clear_m_66386351_0 (TraceListenerCollection_t2121469360_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Diagnostics.TraceListenerCollection::GetEnumerator()
extern "C"  Object_t * TraceListenerCollection_GetEnumerator_m1087376660_0 (TraceListenerCollection_t2121469360_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Insert(System.Int32,System.Diagnostics.TraceListener)
extern "C"  void TraceListenerCollection_Insert_m_1556826906_0 (TraceListenerCollection_t2121469360_0 * __this, int32_t ___index, TraceListener_t_2068633230_0 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Remove(System.String)
extern "C"  void TraceListenerCollection_Remove_m1610673056_0 (TraceListenerCollection_t2121469360_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::RemoveAt(System.Int32)
extern "C"  void TraceListenerCollection_RemoveAt_m_1727900730_0 (TraceListenerCollection_t2121469360_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
