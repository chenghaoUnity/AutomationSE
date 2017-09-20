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

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t_1274031711_0;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t464806536_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1386885153_0;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t_160275933_0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t393026776_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair__2064968959.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C"  void ThreadSafeDictionary_2__ctor_m72978167_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, ThreadSafeDictionaryValueFactory_2_t464806536_0 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m72978167_0(__this, ___valueFactory, method) ((  void (*) (ThreadSafeDictionary_2_t_1274031711_0 *, ThreadSafeDictionaryValueFactory_2_t464806536_0 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m72978167_0_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m959808064_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m959808064_0(__this, method) ((  Object_t * (*) (ThreadSafeDictionary_2_t_1274031711_0 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m959808064_0_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C"  Object_t * ThreadSafeDictionary_2_Get_m1586953098_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m1586953098_0(__this, ___key, method) ((  Object_t * (*) (ThreadSafeDictionary_2_t_1274031711_0 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m1586953098_0_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C"  Object_t * ThreadSafeDictionary_2_AddValue_m2063887688_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m2063887688_0(__this, ___key, method) ((  Object_t * (*) (ThreadSafeDictionary_2_t_1274031711_0 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m2063887688_0_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C"  void ThreadSafeDictionary_2_Add_m1730523974_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m1730523974_0(__this, ___key, ___value, method) ((  void (*) (ThreadSafeDictionary_2_t_1274031711_0 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m1730523974_0_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C"  Object_t* ThreadSafeDictionary_2_get_Keys_m1760087619_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m1760087619_0(__this, method) ((  Object_t* (*) (ThreadSafeDictionary_2_t_1274031711_0 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m1760087619_0_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool ThreadSafeDictionary_2_TryGetValue_m959591009_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m959591009_0(__this, ___key, ___value, method) ((  bool (*) (ThreadSafeDictionary_2_t_1274031711_0 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m959591009_0_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C"  Object_t* ThreadSafeDictionary_2_get_Values_m1114291935_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m1114291935_0(__this, method) ((  Object_t* (*) (ThreadSafeDictionary_2_t_1274031711_0 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m1114291935_0_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C"  Object_t * ThreadSafeDictionary_2_get_Item_m_1946687148_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m_1946687148_0(__this, ___key, method) ((  Object_t * (*) (ThreadSafeDictionary_2_t_1274031711_0 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m_1946687148_0_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C"  void ThreadSafeDictionary_2_set_Item_m564341199_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m564341199_0(__this, ___key, ___value, method) ((  void (*) (ThreadSafeDictionary_2_t_1274031711_0 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m564341199_0_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void ThreadSafeDictionary_2_Add_m811116383_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, KeyValuePair_2_t_2064968959_0  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m811116383_0(__this, ___item, method) ((  void (*) (ThreadSafeDictionary_2_t_1274031711_0 *, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))ThreadSafeDictionary_2_Add_m811116383_0_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C"  void ThreadSafeDictionary_2_Clear_m1498375802_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m1498375802_0(__this, method) ((  void (*) (ThreadSafeDictionary_2_t_1274031711_0 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m1498375802_0_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool ThreadSafeDictionary_2_Contains_m88270559_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, KeyValuePair_2_t_2064968959_0  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m88270559_0(__this, ___item, method) ((  bool (*) (ThreadSafeDictionary_2_t_1274031711_0 *, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m88270559_0_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void ThreadSafeDictionary_2_CopyTo_m259267971_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, KeyValuePair_2U5BU5D_t_160275933_0* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m259267971_0(__this, ___array, ___arrayIndex, method) ((  void (*) (ThreadSafeDictionary_2_t_1274031711_0 *, KeyValuePair_2U5BU5D_t_160275933_0*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m259267971_0_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C"  int32_t ThreadSafeDictionary_2_get_Count_m_1754070189_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m_1754070189_0(__this, method) ((  int32_t (*) (ThreadSafeDictionary_2_t_1274031711_0 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m_1754070189_0_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C"  bool ThreadSafeDictionary_2_get_IsReadOnly_m295419492_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m295419492_0(__this, method) ((  bool (*) (ThreadSafeDictionary_2_t_1274031711_0 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m295419492_0_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool ThreadSafeDictionary_2_Remove_m332085700_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, KeyValuePair_2_t_2064968959_0  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m332085700_0(__this, ___item, method) ((  bool (*) (ThreadSafeDictionary_2_t_1274031711_0 *, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m332085700_0_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Object_t* ThreadSafeDictionary_2_GetEnumerator_m1068904084_0_gshared (ThreadSafeDictionary_2_t_1274031711_0 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m1068904084_0(__this, method) ((  Object_t* (*) (ThreadSafeDictionary_2_t_1274031711_0 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m1068904084_0_gshared)(__this, method)
