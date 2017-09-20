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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t_399939869_0;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t_177649431_0;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Reflection.Emit.Label>
struct IDictionary_2_t1264115738_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t_437366592_0;
// System.Collections.Generic.ICollection`1<System.Reflection.Emit.Label>
struct ICollection_1_t130817618_0;
// System.Collections.ICollection
struct ICollection_t592284435_0;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>[]
struct KeyValuePair_2U5BU5D_t1824676985_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>
struct IEnumerator_1_t_1891677054_0;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t_855216337_0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Reflection.Emit.Label>
struct KeyCollection_t_2042588641_0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>
struct ValueCollection_t_1776341171_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_109161175.h"
#include "mscorlib_System_Reflection_Emit_Label_1261953503.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2__1406740832.h"
#include "mscorlib_System_Collections_DictionaryEntry_1842557272.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor()
extern "C"  void Dictionary_2__ctor_m1010207571_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1010207571_0(__this, method) ((  void (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2__ctor_m1010207571_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m_178701216_0_gshared (Dictionary_2_t_399939869_0 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m_178701216_0(__this, ___comparer, method) ((  void (*) (Dictionary_2_t_399939869_0 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m_178701216_0_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m_1229044529_0_gshared (Dictionary_2_t_399939869_0 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m_1229044529_0(__this, ___dictionary, method) ((  void (*) (Dictionary_2_t_399939869_0 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m_1229044529_0_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m1972811834_0_gshared (Dictionary_2_t_399939869_0 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1972811834_0(__this, ___capacity, method) ((  void (*) (Dictionary_2_t_399939869_0 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1972811834_0_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m801873550_0_gshared (Dictionary_2_t_399939869_0 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m801873550_0(__this, ___dictionary, ___comparer, method) ((  void (*) (Dictionary_2_t_399939869_0 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m801873550_0_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m_1943270870_0_gshared (Dictionary_2_t_399939869_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m_1943270870_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t_399939869_0 *, SerializationInfo_t526833679_0 *, StreamingContext_t_1216992900_0 , const MethodInfo*))Dictionary_2__ctor_m_1943270870_0_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1123521925_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1123521925_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1123521925_0_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m922440709_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m922440709_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m922440709_0_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Keys()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m569812719_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m569812719_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m569812719_0_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Values()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m201763869_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m201763869_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m201763869_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m_850432449_0_gshared (Dictionary_2_t_399939869_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m_850432449_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t_399939869_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m_850432449_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m_811906716_0_gshared (Dictionary_2_t_399939869_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m_811906716_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_399939869_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m_811906716_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m1846781549_0_gshared (Dictionary_2_t_399939869_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1846781549_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_399939869_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1846781549_0_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m177166441_0_gshared (Dictionary_2_t_399939869_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m177166441_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_399939869_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m177166441_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m_684389470_0_gshared (Dictionary_2_t_399939869_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m_684389470_0(__this, ___key, method) ((  void (*) (Dictionary_2_t_399939869_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m_684389470_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m_601204853_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m_601204853_0(__this, method) ((  bool (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m_601204853_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m793724535_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m793724535_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m793724535_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m366590991_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m366590991_0(__this, method) ((  bool (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m366590991_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m35979064_0_gshared (Dictionary_2_t_399939869_0 * __this, KeyValuePair_2_t109161175_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m35979064_0(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t_399939869_0 *, KeyValuePair_2_t109161175_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m35979064_0_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1771881098_0_gshared (Dictionary_2_t_399939869_0 * __this, KeyValuePair_2_t109161175_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1771881098_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t_399939869_0 *, KeyValuePair_2_t109161175_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1771881098_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m_1025142500_0_gshared (Dictionary_2_t_399939869_0 * __this, KeyValuePair_2U5BU5D_t1824676985_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m_1025142500_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_399939869_0 *, KeyValuePair_2U5BU5D_t1824676985_0*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m_1025142500_0_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1705903151_0_gshared (Dictionary_2_t_399939869_0 * __this, KeyValuePair_2_t109161175_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1705903151_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t_399939869_0 *, KeyValuePair_2_t109161175_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1705903151_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m_2083569413_0_gshared (Dictionary_2_t_399939869_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m_2083569413_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_399939869_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m_2083569413_0_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1563899594_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1563899594_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1563899594_0_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1468286579_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1468286579_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1468286579_0_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2111275854_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2111275854_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2111275854_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m1667138641_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1667138641_0(__this, method) ((  int32_t (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2_get_Count_m1667138641_0_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Item(TKey)
extern "C"  Label_t_1261953503_0  Dictionary_2_get_Item_m1877134074_0_gshared (Dictionary_2_t_399939869_0 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1877134074_0(__this, ___key, method) ((  Label_t_1261953503_0  (*) (Dictionary_2_t_399939869_0 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m1877134074_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m_1597496727_0_gshared (Dictionary_2_t_399939869_0 * __this, int32_t ___key, Label_t_1261953503_0  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m_1597496727_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_399939869_0 *, int32_t, Label_t_1261953503_0 , const MethodInfo*))Dictionary_2_set_Item_m_1597496727_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m_2138282015_0_gshared (Dictionary_2_t_399939869_0 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m_2138282015_0(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t_399939869_0 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m_2138282015_0_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m475759094_0_gshared (Dictionary_2_t_399939869_0 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m475759094_0(__this, ___size, method) ((  void (*) (Dictionary_2_t_399939869_0 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m475759094_0_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m_1778337934_0_gshared (Dictionary_2_t_399939869_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m_1778337934_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_399939869_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m_1778337934_0_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t109161175_0  Dictionary_2_make_pair_m_1404261954_0_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t_1261953503_0  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m_1404261954_0(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t109161175_0  (*) (Object_t * /* static, unused */, int32_t, Label_t_1261953503_0 , const MethodInfo*))Dictionary_2_make_pair_m_1404261954_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::pick_key(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_key_m_43177608_0_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t_1261953503_0  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m_43177608_0(__this /* static, unused */, ___key, ___value, method) ((  int32_t (*) (Object_t * /* static, unused */, int32_t, Label_t_1261953503_0 , const MethodInfo*))Dictionary_2_pick_key_m_43177608_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::pick_value(TKey,TValue)
extern "C"  Label_t_1261953503_0  Dictionary_2_pick_value_m_382806344_0_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t_1261953503_0  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m_382806344_0(__this /* static, unused */, ___key, ___value, method) ((  Label_t_1261953503_0  (*) (Object_t * /* static, unused */, int32_t, Label_t_1261953503_0 , const MethodInfo*))Dictionary_2_pick_value_m_382806344_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m_698449891_0_gshared (Dictionary_2_t_399939869_0 * __this, KeyValuePair_2U5BU5D_t1824676985_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m_698449891_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_399939869_0 *, KeyValuePair_2U5BU5D_t1824676985_0*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m_698449891_0_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Resize()
extern "C"  void Dictionary_2_Resize_m_1781687057_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m_1781687057_0(__this, method) ((  void (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2_Resize_m_1781687057_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m_1906687380_0_gshared (Dictionary_2_t_399939869_0 * __this, int32_t ___key, Label_t_1261953503_0  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m_1906687380_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_399939869_0 *, int32_t, Label_t_1261953503_0 , const MethodInfo*))Dictionary_2_Add_m_1906687380_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Clear()
extern "C"  void Dictionary_2_Clear_m_990636908_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m_990636908_0(__this, method) ((  void (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2_Clear_m_990636908_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m_981992454_0_gshared (Dictionary_2_t_399939869_0 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m_981992454_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_399939869_0 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m_981992454_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m86033146_0_gshared (Dictionary_2_t_399939869_0 * __this, Label_t_1261953503_0  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m86033146_0(__this, ___value, method) ((  bool (*) (Dictionary_2_t_399939869_0 *, Label_t_1261953503_0 , const MethodInfo*))Dictionary_2_ContainsValue_m86033146_0_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m536708999_0_gshared (Dictionary_2_t_399939869_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m536708999_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t_399939869_0 *, SerializationInfo_t526833679_0 *, StreamingContext_t_1216992900_0 , const MethodInfo*))Dictionary_2_GetObjectData_m536708999_0_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m34251069_0_gshared (Dictionary_2_t_399939869_0 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m34251069_0(__this, ___sender, method) ((  void (*) (Dictionary_2_t_399939869_0 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m34251069_0_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m_746248010_0_gshared (Dictionary_2_t_399939869_0 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m_746248010_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_399939869_0 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m_746248010_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1370339923_0_gshared (Dictionary_2_t_399939869_0 * __this, int32_t ___key, Label_t_1261953503_0 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1370339923_0(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t_399939869_0 *, int32_t, Label_t_1261953503_0 *, const MethodInfo*))Dictionary_2_TryGetValue_m1370339923_0_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Keys()
extern "C"  KeyCollection_t_2042588641_0 * Dictionary_2_get_Keys_m_1702751988_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m_1702751988_0(__this, method) ((  KeyCollection_t_2042588641_0 * (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2_get_Keys_m_1702751988_0_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Values()
extern "C"  ValueCollection_t_1776341171_0 * Dictionary_2_get_Values_m_1974755572_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m_1974755572_0(__this, method) ((  ValueCollection_t_1776341171_0 * (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2_get_Values_m_1974755572_0_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ToTKey(System.Object)
extern "C"  int32_t Dictionary_2_ToTKey_m_593318701_0_gshared (Dictionary_2_t_399939869_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m_593318701_0(__this, ___key, method) ((  int32_t (*) (Dictionary_2_t_399939869_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m_593318701_0_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ToTValue(System.Object)
extern "C"  Label_t_1261953503_0  Dictionary_2_ToTValue_m_2070492205_0_gshared (Dictionary_2_t_399939869_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m_2070492205_0(__this, ___value, method) ((  Label_t_1261953503_0  (*) (Dictionary_2_t_399939869_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m_2070492205_0_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m_1635408231_0_gshared (Dictionary_2_t_399939869_0 * __this, KeyValuePair_2_t109161175_0  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m_1635408231_0(__this, ___pair, method) ((  bool (*) (Dictionary_2_t_399939869_0 *, KeyValuePair_2_t109161175_0 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m_1635408231_0_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::GetEnumerator()
extern "C"  Enumerator_t_1406740832_0  Dictionary_2_GetEnumerator_m_281779026_0_gshared (Dictionary_2_t_399939869_0 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m_281779026_0(__this, method) ((  Enumerator_t_1406740832_0  (*) (Dictionary_2_t_399939869_0 *, const MethodInfo*))Dictionary_2_GetEnumerator_m_281779026_0_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::<CopyTo>m__2(TKey,TValue)
extern "C"  DictionaryEntry_t_1842557272_0  Dictionary_2_U3CCopyToU3Em__2_m_481939013_0_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t_1261953503_0  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m_481939013_0(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t_1842557272_0  (*) (Object_t * /* static, unused */, int32_t, Label_t_1261953503_0 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m_481939013_0_gshared)(__this /* static, unused */, ___key, ___value, method)
