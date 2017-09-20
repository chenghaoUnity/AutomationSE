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

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t809969710_0;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IList_1_t_1248222286_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t_160275933_0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t393026776_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair__2064968959.h"

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C"  void ReadOnlyCollection_1__ctor_m717475891_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, Object_t* ___list, const MethodInfo* method);
#define ReadOnlyCollection_1__ctor_m717475891_0(__this, ___list, method) ((  void (*) (ReadOnlyCollection_1_t809969710_0 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m717475891_0_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C"  void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m2098114717_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, KeyValuePair_2_t_2064968959_0  ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m2098114717_0(__this, ___item, method) ((  void (*) (ReadOnlyCollection_1_t809969710_0 *, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m2098114717_0_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.Clear()
extern "C"  void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m_1671229491_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m_1671229491_0(__this, method) ((  void (*) (ReadOnlyCollection_1_t809969710_0 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m_1671229491_0_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern "C"  void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m808506180_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, int32_t ___index, KeyValuePair_2_t_2064968959_0  ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m808506180_0(__this, ___index, ___item, method) ((  void (*) (ReadOnlyCollection_1_t809969710_0 *, int32_t, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m808506180_0_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.Remove(T)
extern "C"  bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m1959648378_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, KeyValuePair_2_t_2064968959_0  ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m1959648378_0(__this, ___item, method) ((  bool (*) (ReadOnlyCollection_1_t809969710_0 *, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m1959648378_0_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern "C"  void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m_1317640950_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m_1317640950_0(__this, ___index, method) ((  void (*) (ReadOnlyCollection_1_t809969710_0 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m_1317640950_0_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C"  KeyValuePair_2_t_2064968959_0  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m1304507696_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m1304507696_0(__this, ___index, method) ((  KeyValuePair_2_t_2064968959_0  (*) (ReadOnlyCollection_1_t809969710_0 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m1304507696_0_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern "C"  void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m1394955035_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, int32_t ___index, KeyValuePair_2_t_2064968959_0  ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m1394955035_0(__this, ___index, ___value, method) ((  void (*) (ReadOnlyCollection_1_t809969710_0 *, int32_t, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m1394955035_0_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1802093525_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1802093525_0(__this, method) ((  bool (*) (ReadOnlyCollection_1_t809969710_0 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1802093525_0_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m292981602_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m292981602_0(__this, ___array, ___index, method) ((  void (*) (ReadOnlyCollection_1_t809969710_0 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m292981602_0_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m_1859765775_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m_1859765775_0(__this, method) ((  Object_t * (*) (ReadOnlyCollection_1_t809969710_0 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m_1859765775_0_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C"  int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m391221228_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Add_m391221228_0(__this, ___value, method) ((  int32_t (*) (ReadOnlyCollection_1_t809969710_0 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m391221228_0_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Clear()
extern "C"  void ReadOnlyCollection_1_System_Collections_IList_Clear_m_329670032_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m_329670032_0(__this, method) ((  void (*) (ReadOnlyCollection_1_t809969710_0 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m_329670032_0_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C"  bool ReadOnlyCollection_1_System_Collections_IList_Contains_m_2115449644_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m_2115449644_0(__this, ___value, method) ((  bool (*) (ReadOnlyCollection_1_t809969710_0 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m_2115449644_0_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m_1573916604_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m_1573916604_0(__this, ___value, method) ((  int32_t (*) (ReadOnlyCollection_1_t809969710_0 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m_1573916604_0_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void ReadOnlyCollection_1_System_Collections_IList_Insert_m1103848375_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m1103848375_0(__this, ___index, ___value, method) ((  void (*) (ReadOnlyCollection_1_t809969710_0 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m1103848375_0_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C"  void ReadOnlyCollection_1_System_Collections_IList_Remove_m1398638609_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m1398638609_0(__this, ___value, method) ((  void (*) (ReadOnlyCollection_1_t809969710_0 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m1398638609_0_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.RemoveAt(System.Int32)
extern "C"  void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m1993479623_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m1993479623_0(__this, ___index, method) ((  void (*) (ReadOnlyCollection_1_t809969710_0 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m1993479623_0_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m_1310234104_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m_1310234104_0(__this, method) ((  bool (*) (ReadOnlyCollection_1_t809969710_0 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m_1310234104_0_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m_571577478_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m_571577478_0(__this, method) ((  Object_t * (*) (ReadOnlyCollection_1_t809969710_0 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m_571577478_0_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C"  bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m_1636848829_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m_1636848829_0(__this, method) ((  bool (*) (ReadOnlyCollection_1_t809969710_0 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m_1636848829_0_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C"  bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m262659926_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m262659926_0(__this, method) ((  bool (*) (ReadOnlyCollection_1_t809969710_0 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m262659926_0_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m1535469185_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m1535469185_0(__this, ___index, method) ((  Object_t * (*) (ReadOnlyCollection_1_t809969710_0 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m1535469185_0_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void ReadOnlyCollection_1_System_Collections_IList_set_Item_m555318734_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m555318734_0(__this, ___index, ___value, method) ((  void (*) (ReadOnlyCollection_1_t809969710_0 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m555318734_0_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C"  bool ReadOnlyCollection_1_Contains_m_59839553_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, KeyValuePair_2_t_2064968959_0  ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_Contains_m_59839553_0(__this, ___value, method) ((  bool (*) (ReadOnlyCollection_1_t809969710_0 *, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))ReadOnlyCollection_1_Contains_m_59839553_0_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C"  void ReadOnlyCollection_1_CopyTo_m_996422963_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, KeyValuePair_2U5BU5D_t_160275933_0* ___array, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_CopyTo_m_996422963_0(__this, ___array, ___index, method) ((  void (*) (ReadOnlyCollection_1_t809969710_0 *, KeyValuePair_2U5BU5D_t_160275933_0*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m_996422963_0_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C"  Object_t* ReadOnlyCollection_1_GetEnumerator_m838297750_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_GetEnumerator_m838297750_0(__this, method) ((  Object_t* (*) (ReadOnlyCollection_1_t809969710_0 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m838297750_0_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C"  int32_t ReadOnlyCollection_1_IndexOf_m_1752631975_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, KeyValuePair_2_t_2064968959_0  ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_IndexOf_m_1752631975_0(__this, ___value, method) ((  int32_t (*) (ReadOnlyCollection_1_t809969710_0 *, KeyValuePair_2_t_2064968959_0 , const MethodInfo*))ReadOnlyCollection_1_IndexOf_m_1752631975_0_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C"  int32_t ReadOnlyCollection_1_get_Count_m1320291138_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_get_Count_m1320291138_0(__this, method) ((  int32_t (*) (ReadOnlyCollection_1_t809969710_0 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m1320291138_0_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C"  KeyValuePair_2_t_2064968959_0  ReadOnlyCollection_1_get_Item_m_327766288_0_gshared (ReadOnlyCollection_1_t809969710_0 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_get_Item_m_327766288_0(__this, ___index, method) ((  KeyValuePair_2_t_2064968959_0  (*) (ReadOnlyCollection_1_t809969710_0 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m_327766288_0_gshared)(__this, ___index, method)
