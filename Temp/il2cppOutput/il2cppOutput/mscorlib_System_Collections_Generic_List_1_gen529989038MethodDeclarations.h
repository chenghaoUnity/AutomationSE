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

// System.Collections.Generic.List`1<System.Int64>
struct List_1_t529989038_0;
// System.Int64[]
struct Int64U5BU5D_t1872375604_0;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t815626599_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t_437363647_0;
// System.Collections.Generic.IEnumerable`1<System.Int64>
struct IEnumerable_1_t1414311275_0;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int64>
struct ReadOnlyCollection_1_t_1780687811_0;
// System.Predicate`1<System.Int64>
struct Predicate_1_t_472260735_0;
// System.Collections.Generic.IComparer`1<System.Int64>
struct IComparer_1_t_1164204208_0;
// System.Comparison`1<System.Int64>
struct Comparison_1_t998310057_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera1693001677.h"

// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor()
extern "C"  void List_1__ctor_m447042082_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1__ctor_m447042082_0(__this, method) ((  void (*) (List_1_t529989038_0 *, const MethodInfo*))List_1__ctor_m447042082_0_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m120513651_0_gshared (List_1_t529989038_0 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m120513651_0(__this, ___capacity, method) ((  void (*) (List_1_t529989038_0 *, int32_t, const MethodInfo*))List_1__ctor_m120513651_0_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(T[],System.Int32)
extern "C"  void List_1__ctor_m_871303299_0_gshared (List_1_t529989038_0 * __this, Int64U5BU5D_t1872375604_0* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m_871303299_0(__this, ___data, ___size, method) ((  void (*) (List_1_t529989038_0 *, Int64U5BU5D_t1872375604_0*, int32_t, const MethodInfo*))List_1__ctor_m_871303299_0_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.cctor()
extern "C"  void List_1__cctor_m491306443_0_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m491306443_0(__this /* static, unused */, method) ((  void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m491306443_0_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m_1543965780_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m_1543965780_0(__this, method) ((  Object_t* (*) (List_1_t529989038_0 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m_1543965780_0_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void List_1_System_Collections_ICollection_CopyTo_m_2127749790_0_gshared (List_1_t529989038_0 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m_2127749790_0(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t529989038_0 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m_2127749790_0_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m_508081423_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m_508081423_0(__this, method) ((  Object_t * (*) (List_1_t529989038_0 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m_508081423_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Add(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_Add_m1407510508_0_gshared (List_1_t529989038_0 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1407510508_0(__this, ___item, method) ((  int32_t (*) (List_1_t529989038_0 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1407510508_0_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Contains(System.Object)
extern "C"  bool List_1_System_Collections_IList_Contains_m530987988_0_gshared (List_1_t529989038_0 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m530987988_0(__this, ___item, method) ((  bool (*) (List_1_t529989038_0 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m530987988_0_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t List_1_System_Collections_IList_IndexOf_m894912580_0_gshared (List_1_t529989038_0 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m894912580_0(__this, ___item, method) ((  int32_t (*) (List_1_t529989038_0 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m894912580_0_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_Insert_m2059506103_0_gshared (List_1_t529989038_0 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m2059506103_0(__this, ___index, ___item, method) ((  void (*) (List_1_t529989038_0 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m2059506103_0_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Remove(System.Object)
extern "C"  void List_1_System_Collections_IList_Remove_m536123921_0_gshared (List_1_t529989038_0 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m536123921_0(__this, ___item, method) ((  void (*) (List_1_t529989038_0 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m536123921_0_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m_362253611_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m_362253611_0(__this, method) ((  bool (*) (List_1_t529989038_0 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m_362253611_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool List_1_System_Collections_ICollection_get_IsSynchronized_m293575432_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m293575432_0(__this, method) ((  bool (*) (List_1_t529989038_0 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m293575432_0_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m119941370_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m119941370_0(__this, method) ((  Object_t * (*) (List_1_t529989038_0 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m119941370_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsFixedSize()
extern "C"  bool List_1_System_Collections_IList_get_IsFixedSize_m_156476861_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m_156476861_0(__this, method) ((  bool (*) (List_1_t529989038_0 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m_156476861_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsReadOnly()
extern "C"  bool List_1_System_Collections_IList_get_IsReadOnly_m1972981846_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1972981846_0(__this, method) ((  bool (*) (List_1_t529989038_0 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1972981846_0_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * List_1_System_Collections_IList_get_Item_m365151233_0_gshared (List_1_t529989038_0 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m365151233_0(__this, ___index, method) ((  Object_t * (*) (List_1_t529989038_0 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m365151233_0_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void List_1_System_Collections_IList_set_Item_m_180606002_0_gshared (List_1_t529989038_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m_180606002_0(__this, ___index, ___value, method) ((  void (*) (List_1_t529989038_0 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m_180606002_0_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Add(T)
extern "C"  void List_1_Add_m558752285_0_gshared (List_1_t529989038_0 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Add_m558752285_0(__this, ___item, method) ((  void (*) (List_1_t529989038_0 *, int64_t, const MethodInfo*))List_1_Add_m558752285_0_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::GrowIfNeeded(System.Int32)
extern "C"  void List_1_GrowIfNeeded_m_1701847080_0_gshared (List_1_t529989038_0 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m_1701847080_0(__this, ___newCount, method) ((  void (*) (List_1_t529989038_0 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m_1701847080_0_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C"  void List_1_AddCollection_m_431302954_0_gshared (List_1_t529989038_0 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m_431302954_0(__this, ___collection, method) ((  void (*) (List_1_t529989038_0 *, Object_t*, const MethodInfo*))List_1_AddCollection_m_431302954_0_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddEnumerable_m_1170330730_0_gshared (List_1_t529989038_0 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m_1170330730_0(__this, ___enumerable, method) ((  void (*) (List_1_t529989038_0 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m_1170330730_0_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_AddRange_m_1393599167_0_gshared (List_1_t529989038_0 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m_1393599167_0(__this, ___collection, method) ((  void (*) (List_1_t529989038_0 *, Object_t*, const MethodInfo*))List_1_AddRange_m_1393599167_0_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int64>::AsReadOnly()
extern "C"  ReadOnlyCollection_1_t_1780687811_0 * List_1_AsReadOnly_m_1437907548_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m_1437907548_0(__this, method) ((  ReadOnlyCollection_1_t_1780687811_0 * (*) (List_1_t529989038_0 *, const MethodInfo*))List_1_AsReadOnly_m_1437907548_0_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Clear()
extern "C"  void List_1_Clear_m_2146824627_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1_Clear_m_2146824627_0(__this, method) ((  void (*) (List_1_t529989038_0 *, const MethodInfo*))List_1_Clear_m_2146824627_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Contains(T)
extern "C"  bool List_1_Contains_m348921023_0_gshared (List_1_t529989038_0 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Contains_m348921023_0(__this, ___item, method) ((  bool (*) (List_1_t529989038_0 *, int64_t, const MethodInfo*))List_1_Contains_m348921023_0_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CopyTo(T[],System.Int32)
extern "C"  void List_1_CopyTo_m_875799347_0_gshared (List_1_t529989038_0 * __this, Int64U5BU5D_t1872375604_0* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m_875799347_0(__this, ___array, ___arrayIndex, method) ((  void (*) (List_1_t529989038_0 *, Int64U5BU5D_t1872375604_0*, int32_t, const MethodInfo*))List_1_CopyTo_m_875799347_0_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int64>::Find(System.Predicate`1<T>)
extern "C"  int64_t List_1_Find_m_724079463_0_gshared (List_1_t529989038_0 * __this, Predicate_1_t_472260735_0 * ___match, const MethodInfo* method);
#define List_1_Find_m_724079463_0(__this, ___match, method) ((  int64_t (*) (List_1_t529989038_0 *, Predicate_1_t_472260735_0 *, const MethodInfo*))List_1_Find_m_724079463_0_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckMatch(System.Predicate`1<T>)
extern "C"  void List_1_CheckMatch_m728553654_0_gshared (Object_t * __this /* static, unused */, Predicate_1_t_472260735_0 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m728553654_0(__this /* static, unused */, ___match, method) ((  void (*) (Object_t * /* static, unused */, Predicate_1_t_472260735_0 *, const MethodInfo*))List_1_CheckMatch_m728553654_0_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int64>::FindAll(System.Predicate`1<T>)
extern "C"  List_1_t529989038_0 * List_1_FindAll_m_164015190_0_gshared (List_1_t529989038_0 * __this, Predicate_1_t_472260735_0 * ___match, const MethodInfo* method);
#define List_1_FindAll_m_164015190_0(__this, ___match, method) ((  List_1_t529989038_0 * (*) (List_1_t529989038_0 *, Predicate_1_t_472260735_0 *, const MethodInfo*))List_1_FindAll_m_164015190_0_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int64>::FindAllStackBits(System.Predicate`1<T>)
extern "C"  List_1_t529989038_0 * List_1_FindAllStackBits_m_87681872_0_gshared (List_1_t529989038_0 * __this, Predicate_1_t_472260735_0 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m_87681872_0(__this, ___match, method) ((  List_1_t529989038_0 * (*) (List_1_t529989038_0 *, Predicate_1_t_472260735_0 *, const MethodInfo*))List_1_FindAllStackBits_m_87681872_0_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int64>::FindAllList(System.Predicate`1<T>)
extern "C"  List_1_t529989038_0 * List_1_FindAllList_m2068622892_0_gshared (List_1_t529989038_0 * __this, Predicate_1_t_472260735_0 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m2068622892_0(__this, ___match, method) ((  List_1_t529989038_0 * (*) (List_1_t529989038_0 *, Predicate_1_t_472260735_0 *, const MethodInfo*))List_1_FindAllList_m2068622892_0_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C"  int32_t List_1_GetIndex_m1911567507_0_gshared (List_1_t529989038_0 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t_472260735_0 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m1911567507_0(__this, ___startIndex, ___count, ___match, method) ((  int32_t (*) (List_1_t529989038_0 *, int32_t, int32_t, Predicate_1_t_472260735_0 *, const MethodInfo*))List_1_GetIndex_m1911567507_0_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int64>::GetEnumerator()
extern "C"  Enumerator_t1693001677_0  List_1_GetEnumerator_m_494770564_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m_494770564_0(__this, method) ((  Enumerator_t1693001677_0  (*) (List_1_t529989038_0 *, const MethodInfo*))List_1_GetEnumerator_m_494770564_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::IndexOf(T)
extern "C"  int32_t List_1_IndexOf_m_3498663_0_gshared (List_1_t529989038_0 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m_3498663_0(__this, ___item, method) ((  int32_t (*) (List_1_t529989038_0 *, int64_t, const MethodInfo*))List_1_IndexOf_m_3498663_0_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Shift(System.Int32,System.Int32)
extern "C"  void List_1_Shift_m_19589596_0_gshared (List_1_t529989038_0 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m_19589596_0(__this, ___start, ___delta, method) ((  void (*) (List_1_t529989038_0 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m_19589596_0_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckIndex(System.Int32)
extern "C"  void List_1_CheckIndex_m_1129432163_0_gshared (List_1_t529989038_0 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m_1129432163_0(__this, ___index, method) ((  void (*) (List_1_t529989038_0 *, int32_t, const MethodInfo*))List_1_CheckIndex_m_1129432163_0_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Insert(System.Int32,T)
extern "C"  void List_1_Insert_m1048920708_0_gshared (List_1_t529989038_0 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define List_1_Insert_m1048920708_0(__this, ___index, ___item, method) ((  void (*) (List_1_t529989038_0 *, int32_t, int64_t, const MethodInfo*))List_1_Insert_m1048920708_0_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void List_1_CheckCollection_m_1638609927_0_gshared (List_1_t529989038_0 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m_1638609927_0(__this, ___collection, method) ((  void (*) (List_1_t529989038_0 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m_1638609927_0_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Remove(T)
extern "C"  bool List_1_Remove_m_1685127046_0_gshared (List_1_t529989038_0 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Remove_m_1685127046_0(__this, ___item, method) ((  bool (*) (List_1_t529989038_0 *, int64_t, const MethodInfo*))List_1_Remove_m_1685127046_0_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::RemoveAll(System.Predicate`1<T>)
extern "C"  int32_t List_1_RemoveAll_m530574428_0_gshared (List_1_t529989038_0 * __this, Predicate_1_t_472260735_0 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m530574428_0(__this, ___match, method) ((  int32_t (*) (List_1_t529989038_0 *, Predicate_1_t_472260735_0 *, const MethodInfo*))List_1_RemoveAll_m530574428_0_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m_1077226422_0_gshared (List_1_t529989038_0 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m_1077226422_0(__this, ___index, method) ((  void (*) (List_1_t529989038_0 *, int32_t, const MethodInfo*))List_1_RemoveAt_m_1077226422_0_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Reverse()
extern "C"  void List_1_Reverse_m148522466_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1_Reverse_m148522466_0(__this, method) ((  void (*) (List_1_t529989038_0 *, const MethodInfo*))List_1_Reverse_m148522466_0_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort()
extern "C"  void List_1_Sort_m1084724480_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1_Sort_m1084724480_0(__this, method) ((  void (*) (List_1_t529989038_0 *, const MethodInfo*))List_1_Sort_m1084724480_0_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C"  void List_1_Sort_m_557231900_0_gshared (List_1_t529989038_0 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m_557231900_0(__this, ___comparer, method) ((  void (*) (List_1_t529989038_0 *, Object_t*, const MethodInfo*))List_1_Sort_m_557231900_0_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Comparison`1<T>)
extern "C"  void List_1_Sort_m_1054875309_0_gshared (List_1_t529989038_0 * __this, Comparison_1_t998310057_0 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m_1054875309_0(__this, ___comparison, method) ((  void (*) (List_1_t529989038_0 *, Comparison_1_t998310057_0 *, const MethodInfo*))List_1_Sort_m_1054875309_0_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int64>::ToArray()
extern "C"  Int64U5BU5D_t1872375604_0* List_1_ToArray_m_893829637_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1_ToArray_m_893829637_0(__this, method) ((  Int64U5BU5D_t1872375604_0* (*) (List_1_t529989038_0 *, const MethodInfo*))List_1_ToArray_m_893829637_0_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::TrimExcess()
extern "C"  void List_1_TrimExcess_m_804064103_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m_804064103_0(__this, method) ((  void (*) (List_1_t529989038_0 *, const MethodInfo*))List_1_TrimExcess_m_804064103_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Capacity()
extern "C"  int32_t List_1_get_Capacity_m_1808121591_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m_1808121591_0(__this, method) ((  int32_t (*) (List_1_t529989038_0 *, const MethodInfo*))List_1_get_Capacity_m_1808121591_0_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Capacity(System.Int32)
extern "C"  void List_1_set_Capacity_m_196690966_0_gshared (List_1_t529989038_0 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m_196690966_0(__this, ___value, method) ((  void (*) (List_1_t529989038_0 *, int32_t, const MethodInfo*))List_1_set_Capacity_m_196690966_0_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Count()
extern "C"  int32_t List_1_get_Count_m_291151038_0_gshared (List_1_t529989038_0 * __this, const MethodInfo* method);
#define List_1_get_Count_m_291151038_0(__this, method) ((  int32_t (*) (List_1_t529989038_0 *, const MethodInfo*))List_1_get_Count_m_291151038_0_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int64>::get_Item(System.Int32)
extern "C"  int64_t List_1_get_Item_m846582384_0_gshared (List_1_t529989038_0 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m846582384_0(__this, ___index, method) ((  int64_t (*) (List_1_t529989038_0 *, int32_t, const MethodInfo*))List_1_get_Item_m846582384_0_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Item(System.Int32,T)
extern "C"  void List_1_set_Item_m505082459_0_gshared (List_1_t529989038_0 * __this, int32_t ___index, int64_t ___value, const MethodInfo* method);
#define List_1_set_Item_m505082459_0(__this, ___index, ___value, method) ((  void (*) (List_1_t529989038_0 *, int32_t, int64_t, const MethodInfo*))List_1_set_Item_m505082459_0_gshared)(__this, ___index, ___value, method)
