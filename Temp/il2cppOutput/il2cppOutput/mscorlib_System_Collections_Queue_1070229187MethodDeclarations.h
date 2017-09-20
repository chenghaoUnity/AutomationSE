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

// System.Collections.Queue
struct Queue_t_1070229187_0;
// System.Collections.ICollection
struct ICollection_t592284435_0;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Queue::.ctor()
extern "C"  void Queue__ctor_m1954446073_0 (Queue_t_1070229187_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Int32)
extern "C"  void Queue__ctor_m748061386_0 (Queue_t_1070229187_0 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Collections.ICollection)
extern "C"  void Queue__ctor_m_484956502_0 (Queue_t_1070229187_0 * __this, Object_t * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Int32,System.Single)
extern "C"  void Queue__ctor_m_1096326097_0 (Queue_t_1070229187_0 * __this, int32_t ___capacity, float ___growFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Queue::get_Count()
extern "C"  int32_t Queue_get_Count_m626402273_0 (Queue_t_1070229187_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Queue::get_IsSynchronized()
extern "C"  bool Queue_get_IsSynchronized_m219192020_0 (Queue_t_1070229187_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::get_SyncRoot()
extern "C"  Object_t * Queue_get_SyncRoot_m109028870_0 (Queue_t_1070229187_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::CopyTo(System.Array,System.Int32)
extern "C"  void Queue_CopyTo_m_434164074_0 (Queue_t_1070229187_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Queue::GetEnumerator()
extern "C"  Object_t * Queue_GetEnumerator_m_1599425669_0 (Queue_t_1070229187_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Clone()
extern "C"  Object_t * Queue_Clone_m_1661723041_0 (Queue_t_1070229187_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::Clear()
extern "C"  void Queue_Clear_m_639420636_0 (Queue_t_1070229187_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Dequeue()
extern "C"  Object_t * Queue_Dequeue_m1667531058_0 (Queue_t_1070229187_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::Enqueue(System.Object)
extern "C"  void Queue_Enqueue_m643439957_0 (Queue_t_1070229187_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Peek()
extern "C"  Object_t * Queue_Peek_m727449659_0 (Queue_t_1070229187_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.Queue::ToArray()
extern "C"  ObjectU5BU5D_t1774424924_0* Queue_ToArray_m1142226178_0 (Queue_t_1070229187_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::grow()
extern "C"  void Queue_grow_m_646687138_0 (Queue_t_1070229187_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
