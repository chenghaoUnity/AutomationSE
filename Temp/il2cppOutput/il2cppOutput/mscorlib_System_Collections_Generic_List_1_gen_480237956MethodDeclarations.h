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

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t_480237956_0;
// System.Boolean[]
struct BooleanU5BU5D_t_1574345617_0;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t_680899060_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t2081284710_0;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_t_870543088_0;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Boolean>
struct ReadOnlyCollection_1_t_363048094_0;
// System.Predicate`1<System.Boolean>
struct Predicate_1_t_1417292067_0;
// System.Collections.Generic.IComparer`1<System.Boolean>
struct IComparer_1_t_627792459_0;
// System.Comparison`1<System.Boolean>
struct Comparison_1_t_1215755058_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerat662960882.h"

// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
extern "C"  void List_1__ctor_m1142155092_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1__ctor_m1142155092_0(__this, method) ((  void (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1__ctor_m1142155092_0_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m_1091377298_0_gshared (List_1_t_480237956_0 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m_1091377298_0(__this, ___capacity, method) ((  void (*) (List_1_t_480237956_0 *, int32_t, const MethodInfo*))List_1__ctor_m_1091377298_0_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor(T[],System.Int32)
extern "C"  void List_1__ctor_m735380728_0_gshared (List_1_t_480237956_0 * __this, BooleanU5BU5D_t_1574345617_0* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m735380728_0(__this, ___data, ___size, method) ((  void (*) (List_1_t_480237956_0 *, BooleanU5BU5D_t_1574345617_0*, int32_t, const MethodInfo*))List_1__ctor_m735380728_0_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::.cctor()
extern "C"  void List_1__cctor_m_1048000080_0_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m_1048000080_0(__this /* static, unused */, method) ((  void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m_1048000080_0_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Boolean>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m_150254745_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m_150254745_0(__this, method) ((  Object_t* (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m_150254745_0_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void List_1_System_Collections_ICollection_CopyTo_m1597781575_0_gshared (List_1_t_480237956_0 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1597781575_0(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t_480237956_0 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1597781575_0_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1849147542_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1849147542_0(__this, method) ((  Object_t * (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1849147542_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Add(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_Add_m676877031_0_gshared (List_1_t_480237956_0 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m676877031_0(__this, ___item, method) ((  int32_t (*) (List_1_t_480237956_0 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m676877031_0_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Contains(System.Object)
extern "C"  bool List_1_System_Collections_IList_Contains_m_1696307399_0_gshared (List_1_t_480237956_0 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m_1696307399_0(__this, ___item, method) ((  bool (*) (List_1_t_480237956_0 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m_1696307399_0_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_IndexOf_m2077670847_0_gshared (List_1_t_480237956_0 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m2077670847_0(__this, ___item, method) ((  int32_t (*) (List_1_t_480237956_0 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m2077670847_0_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_Insert_m1072020914_0_gshared (List_1_t_480237956_0 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1072020914_0(__this, ___index, ___item, method) ((  void (*) (List_1_t_480237956_0 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1072020914_0_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.Remove(System.Object)
extern "C"  void List_1_System_Collections_IList_Remove_m1823576630_0_gshared (List_1_t_480237956_0 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1823576630_0(__this, ___item, method) ((  void (*) (List_1_t_480237956_0 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1823576630_0_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m409428986_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m409428986_0(__this, method) ((  bool (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m409428986_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool List_1_System_Collections_ICollection_get_IsSynchronized_m_113542781_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m_113542781_0(__this, method) ((  bool (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m_113542781_0_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m_1590231307_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m_1590231307_0(__this, method) ((  Object_t * (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m_1590231307_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_IsFixedSize()
extern "C"  bool List_1_System_Collections_IList_get_IsFixedSize_m422851944_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m422851944_0(__this, method) ((  bool (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m422851944_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_IList_get_IsReadOnly_m_1194918767_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m_1194918767_0(__this, method) ((  bool (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m_1194918767_0_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * List_1_System_Collections_IList_get_Item_m1861683004_0_gshared (List_1_t_480237956_0 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1861683004_0(__this, ___index, method) ((  Object_t * (*) (List_1_t_480237956_0 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1861683004_0_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_set_Item_m33899785_0_gshared (List_1_t_480237956_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m33899785_0(__this, ___index, ___value, method) ((  void (*) (List_1_t_480237956_0 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m33899785_0_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(T)
extern "C"  void List_1_Add_m561619778_0_gshared (List_1_t_480237956_0 * __this, bool ___item, const MethodInfo* method);
#define List_1_Add_m561619778_0(__this, ___item, method) ((  void (*) (List_1_t_480237956_0 *, bool, const MethodInfo*))List_1_Add_m561619778_0_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::GrowIfNeeded(System.Int32)
extern "C"  void List_1_GrowIfNeeded_m_93545347_0_gshared (List_1_t_480237956_0 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m_93545347_0(__this, ___newCount, method) ((  void (*) (List_1_t_480237956_0 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m_93545347_0_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C"  void List_1_AddCollection_m1615052667_0_gshared (List_1_t_480237956_0 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m1615052667_0(__this, ___collection, method) ((  void (*) (List_1_t_480237956_0 *, Object_t*, const MethodInfo*))List_1_AddCollection_m1615052667_0_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddEnumerable_m876024891_0_gshared (List_1_t_480237956_0 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m876024891_0(__this, ___enumerable, method) ((  void (*) (List_1_t_480237956_0 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m876024891_0_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddRange_m_71900804_0_gshared (List_1_t_480237956_0 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m_71900804_0(__this, ___collection, method) ((  void (*) (List_1_t_480237956_0 *, Object_t*, const MethodInfo*))List_1_AddRange_m_71900804_0_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Boolean>::AsReadOnly()
extern "C"  ReadOnlyCollection_1_t_363048094_0 * List_1_AsReadOnly_m130816905_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m130816905_0(__this, method) ((  ReadOnlyCollection_1_t_363048094_0 * (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1_AsReadOnly_m130816905_0_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Clear()
extern "C"  void List_1_Clear_m_2057932344_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1_Clear_m_2057932344_0(__this, method) ((  void (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1_Clear_m_2057932344_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Contains(T)
extern "C"  bool List_1_Contains_m_1565765062_0_gshared (List_1_t_480237956_0 * __this, bool ___item, const MethodInfo* method);
#define List_1_Contains_m_1565765062_0(__this, ___item, method) ((  bool (*) (List_1_t_480237956_0 *, bool, const MethodInfo*))List_1_Contains_m_1565765062_0_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CopyTo(T[],System.Int32)
extern "C"  void List_1_CopyTo_m1686765234_0_gshared (List_1_t_480237956_0 * __this, BooleanU5BU5D_t_1574345617_0* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1686765234_0(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t_480237956_0 *, BooleanU5BU5D_t_1574345617_0*, int32_t, const MethodInfo*))List_1_CopyTo_m1686765234_0_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Boolean>::Find(System.Predicate`1<T>)
extern "C"  bool List_1_Find_m_1053413164_0_gshared (List_1_t_480237956_0 * __this, Predicate_1_t_1417292067_0 * ___match, const MethodInfo* method);
#define List_1_Find_m_1053413164_0(__this, ___match, method) ((  bool (*) (List_1_t_480237956_0 *, Predicate_1_t_1417292067_0 *, const MethodInfo*))List_1_Find_m_1053413164_0_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckMatch(System.Predicate`1<T>)
extern "C"  void List_1_CheckMatch_m_853112719_0_gshared (Object_t * __this /* static, unused */, Predicate_1_t_1417292067_0 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m_853112719_0(__this /* static, unused */, ___match, method) ((  void (*) (Object_t * /* static, unused */, Predicate_1_t_1417292067_0 *, const MethodInfo*))List_1_CheckMatch_m_853112719_0_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Boolean>::FindAll(System.Predicate`1<T>)
extern "C"  List_1_t_480237956_0 * List_1_FindAll_m_724137888_0_gshared (List_1_t_480237956_0 * __this, Predicate_1_t_1417292067_0 * ___match, const MethodInfo* method);
#define List_1_FindAll_m_724137888_0(__this, ___match, method) ((  List_1_t_480237956_0 * (*) (List_1_t_480237956_0 *, Predicate_1_t_1417292067_0 *, const MethodInfo*))List_1_FindAll_m_724137888_0_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Boolean>::FindAllStackBits(System.Predicate`1<T>)
extern "C"  List_1_t_480237956_0 * List_1_FindAllStackBits_m_1470984341_0_gshared (List_1_t_480237956_0 * __this, Predicate_1_t_1417292067_0 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m_1470984341_0(__this, ___match, method) ((  List_1_t_480237956_0 * (*) (List_1_t_480237956_0 *, Predicate_1_t_1417292067_0 *, const MethodInfo*))List_1_FindAllStackBits_m_1470984341_0_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Boolean>::FindAllList(System.Predicate`1<T>)
extern "C"  List_1_t_480237956_0 * List_1_FindAllList_m2135370385_0_gshared (List_1_t_480237956_0 * __this, Predicate_1_t_1417292067_0 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m2135370385_0(__this, ___match, method) ((  List_1_t_480237956_0 * (*) (List_1_t_480237956_0 *, Predicate_1_t_1417292067_0 *, const MethodInfo*))List_1_FindAllList_m2135370385_0_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C"  int32_t List_1_GetIndex_m_180138930_0_gshared (List_1_t_480237956_0 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t_1417292067_0 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m_180138930_0(__this, ___startIndex, ___count, ___match, method) ((  int32_t (*) (List_1_t_480237956_0 *, int32_t, int32_t, Predicate_1_t_1417292067_0 *, const MethodInfo*))List_1_GetIndex_m_180138930_0_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Boolean>::GetEnumerator()
extern "C"  Enumerator_t662960882_0  List_1_GetEnumerator_m817620599_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m817620599_0(__this, method) ((  Enumerator_t662960882_0  (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1_GetEnumerator_m817620599_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::IndexOf(T)
extern "C"  int32_t List_1_IndexOf_m1035483902_0_gshared (List_1_t_480237956_0 * __this, bool ___item, const MethodInfo* method);
#define List_1_IndexOf_m1035483902_0(__this, ___item, method) ((  int32_t (*) (List_1_t_480237956_0 *, bool, const MethodInfo*))List_1_IndexOf_m1035483902_0_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Shift(System.Int32,System.Int32)
extern "C"  void List_1_Shift_m899220233_0_gshared (List_1_t_480237956_0 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m899220233_0(__this, ___start, ___delta, method) ((  void (*) (List_1_t_480237956_0 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m899220233_0_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckIndex(System.Int32)
extern "C"  void List_1_CheckIndex_m1433132418_0_gshared (List_1_t_480237956_0 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1433132418_0(__this, ___index, method) ((  void (*) (List_1_t_480237956_0 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1433132418_0_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Insert(System.Int32,T)
extern "C"  void List_1_Insert_m1100749225_0_gshared (List_1_t_480237956_0 * __this, int32_t ___index, bool ___item, const MethodInfo* method);
#define List_1_Insert_m1100749225_0(__this, ___index, ___item, method) ((  void (*) (List_1_t_480237956_0 *, int32_t, bool, const MethodInfo*))List_1_Insert_m1100749225_0_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_CheckCollection_m2109087582_0_gshared (List_1_t_480237956_0 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m2109087582_0(__this, ___collection, method) ((  void (*) (List_1_t_480237956_0 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m2109087582_0_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Remove(T)
extern "C"  bool List_1_Remove_m1231313077_0_gshared (List_1_t_480237956_0 * __this, bool ___item, const MethodInfo* method);
#define List_1_Remove_m1231313077_0(__this, ___item, method) ((  bool (*) (List_1_t_480237956_0 *, bool, const MethodInfo*))List_1_Remove_m1231313077_0_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::RemoveAll(System.Predicate`1<T>)
extern "C"  int32_t List_1_RemoveAll_m_1161719743_0_gshared (List_1_t_480237956_0 * __this, Predicate_1_t_1417292067_0 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m_1161719743_0(__this, ___match, method) ((  int32_t (*) (List_1_t_480237956_0 *, Predicate_1_t_1417292067_0 *, const MethodInfo*))List_1_RemoveAll_m_1161719743_0_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m_1025397905_0_gshared (List_1_t_480237956_0 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m_1025397905_0(__this, ___index, method) ((  void (*) (List_1_t_480237956_0 *, int32_t, const MethodInfo*))List_1_RemoveAt_m_1025397905_0_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Reverse()
extern "C"  void List_1_Reverse_m_325339491_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1_Reverse_m_325339491_0(__this, method) ((  void (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1_Reverse_m_325339491_0_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort()
extern "C"  void List_1_Sort_m1087591973_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1_Sort_m1087591973_0(__this, method) ((  void (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1_Sort_m1087591973_0_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C"  void List_1_Sort_m699096415_0_gshared (List_1_t_480237956_0 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m699096415_0(__this, ___comparer, method) ((  void (*) (List_1_t_480237956_0 *, Object_t*, const MethodInfo*))List_1_Sort_m699096415_0_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::Sort(System.Comparison`1<T>)
extern "C"  void List_1_Sort_m_1665136456_0_gshared (List_1_t_480237956_0 * __this, Comparison_1_t_1215755058_0 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m_1665136456_0(__this, ___comparison, method) ((  void (*) (List_1_t_480237956_0 *, Comparison_1_t_1215755058_0 *, const MethodInfo*))List_1_Sort_m_1665136456_0_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Boolean>::ToArray()
extern "C"  BooleanU5BU5D_t_1574345617_0* List_1_ToArray_m_518009994_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1_ToArray_m_518009994_0(__this, method) ((  BooleanU5BU5D_t_1574345617_0* (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1_ToArray_m_518009994_0_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::TrimExcess()
extern "C"  void List_1_TrimExcess_m_68123138_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m_68123138_0(__this, method) ((  void (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1_TrimExcess_m_68123138_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Capacity()
extern "C"  int32_t List_1_get_Capacity_m_1054440402_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m_1054440402_0(__this, method) ((  int32_t (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1_get_Capacity_m_1054440402_0_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Capacity(System.Int32)
extern "C"  void List_1_set_Capacity_m1411610767_0_gshared (List_1_t_480237956_0 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1411610767_0(__this, ___value, method) ((  void (*) (List_1_t_480237956_0 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1411610767_0_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
extern "C"  int32_t List_1_get_Count_m1852537405_0_gshared (List_1_t_480237956_0 * __this, const MethodInfo* method);
#define List_1_get_Count_m1852537405_0(__this, method) ((  int32_t (*) (List_1_t_480237956_0 *, const MethodInfo*))List_1_get_Count_m1852537405_0_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Boolean>::get_Item(System.Int32)
extern "C"  bool List_1_get_Item_m_726264491_0_gshared (List_1_t_480237956_0 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m_726264491_0(__this, ___index, method) ((  bool (*) (List_1_t_480237956_0 *, int32_t, const MethodInfo*))List_1_get_Item_m_726264491_0_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Item(System.Int32,T)
extern "C"  void List_1_set_Item_m_1227320256_0_gshared (List_1_t_480237956_0 * __this, int32_t ___index, bool ___value, const MethodInfo* method);
#define List_1_set_Item_m_1227320256_0(__this, ___index, ___value, method) ((  void (*) (List_1_t_480237956_0 *, int32_t, bool, const MethodInfo*))List_1_set_Item_m_1227320256_0_gshared)(__this, ___index, ___value, method)
