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

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1222423012_0;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t_555839492_0;
// System.Collections.IComparer
struct IComparer_t622777826_0;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t_124535839_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t2107895645_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.String
struct String_t;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t_1254169345_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCo_1216992900.h"

// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
extern "C"  void NameObjectCollectionBase__ctor_m1741929684_0 (NameObjectCollectionBase_t1222423012_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer,System.Collections.IComparer,System.Collections.IHashCodeProvider)
extern "C"  void NameObjectCollectionBase__ctor_m_1871978723_0 (NameObjectCollectionBase_t1222423012_0 * __this, Object_t * ___equalityComparer, Object_t * ___comparer, Object_t * ___hcp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer)
extern "C"  void NameObjectCollectionBase__ctor_m1083291668_0 (NameObjectCollectionBase_t1222423012_0 * __this, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void NameObjectCollectionBase__ctor_m355604501_0 (NameObjectCollectionBase_t1222423012_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void NameObjectCollectionBase__ctor_m1688066724_0 (NameObjectCollectionBase_t1222423012_0 * __this, int32_t ___capacity, Object_t * ___hashProvider, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_m_2098098_0 (NameObjectCollectionBase_t1222423012_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m625351596_0 (NameObjectCollectionBase_t1222423012_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_m606865136_0 (NameObjectCollectionBase_t1222423012_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::get_Comparer()
extern "C"  Object_t * NameObjectCollectionBase_get_Comparer_m1330669861_0 (NameObjectCollectionBase_t1222423012_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::get_HashCodeProvider()
extern "C"  Object_t * NameObjectCollectionBase_get_HashCodeProvider_m778027875_0 (NameObjectCollectionBase_t1222423012_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Init()
extern "C"  void NameObjectCollectionBase_Init_m_1100650752_0 (NameObjectCollectionBase_t1222423012_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys()
extern "C"  KeysCollection_t2107895645_0 * NameObjectCollectionBase_get_Keys_m411623033_0 (NameObjectCollectionBase_t1222423012_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
extern "C"  Object_t * NameObjectCollectionBase_GetEnumerator_m2097604182_0 (NameObjectCollectionBase_t1222423012_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void NameObjectCollectionBase_GetObjectData_m_679970190_0 (NameObjectCollectionBase_t1222423012_0 * __this, SerializationInfo_t526833679_0 * ___info, StreamingContext_t_1216992900_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
extern "C"  int32_t NameObjectCollectionBase_get_Count_m_1696318712_0 (NameObjectCollectionBase_t1222423012_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
extern "C"  void NameObjectCollectionBase_OnDeserialization_m_1198228686_0 (NameObjectCollectionBase_t1222423012_0 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
extern "C"  bool NameObjectCollectionBase_get_IsReadOnly_m911678543_0 (NameObjectCollectionBase_t1222423012_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
extern "C"  void NameObjectCollectionBase_BaseAdd_m915764854_0 (NameObjectCollectionBase_t1222423012_0 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseClear()
extern "C"  void NameObjectCollectionBase_BaseClear_m481553478_0 (NameObjectCollectionBase_t1222423012_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
extern "C"  Object_t * NameObjectCollectionBase_BaseGet_m1942289941_0 (NameObjectCollectionBase_t1222423012_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
extern "C"  Object_t * NameObjectCollectionBase_BaseGet_m538144446_0 (NameObjectCollectionBase_t1222423012_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
extern "C"  String_t* NameObjectCollectionBase_BaseGetKey_m_861828136_0 (NameObjectCollectionBase_t1222423012_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemove(System.String)
extern "C"  void NameObjectCollectionBase_BaseRemove_m2142355669_0 (NameObjectCollectionBase_t1222423012_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
extern "C"  void NameObjectCollectionBase_BaseSet_m_374507947_0 (NameObjectCollectionBase_t1222423012_0 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::FindFirstMatchedItem(System.String)
extern "C"  _Item_t_1254169345_0 * NameObjectCollectionBase_FindFirstMatchedItem_m_362397204_0 (NameObjectCollectionBase_t1222423012_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::Equals(System.String,System.String)
extern "C"  bool NameObjectCollectionBase_Equals_m_1509982267_0 (NameObjectCollectionBase_t1222423012_0 * __this, String_t* ___s1, String_t* ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
