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

// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandle469075048.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandleTy1668617154.h"

// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.IntPtr)
extern "C"  void GCHandle__ctor_m389774252_0 (GCHandle_t469075048_0 * __this, IntPtr_t ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object)
extern "C"  void GCHandle__ctor_m1067653356_0 (GCHandle_t469075048_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C"  void GCHandle__ctor_m396637490_0 (GCHandle_t469075048_0 * __this, Object_t * ___value, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C"  bool GCHandle_get_IsAllocated_m1991616348_0 (GCHandle_t469075048_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern "C"  Object_t * GCHandle_get_Target_m1356841761_0 (GCHandle_t469075048_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
extern "C"  GCHandle_t469075048_0  GCHandle_Alloc_m_938311726_0 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C"  GCHandle_t469075048_0  GCHandle_Alloc_m_276735208_0 (Object_t * __this /* static, unused */, Object_t * ___value, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C"  void GCHandle_Free_m_1416664568_0 (GCHandle_t469075048_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::CheckCurrentDomain(System.Int32)
extern "C"  bool GCHandle_CheckCurrentDomain_m287479968_0 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)
extern "C"  Object_t * GCHandle_GetTarget_m385786707_0 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)
extern "C"  int32_t GCHandle_GetTargetHandle_m414463034_0 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___handle, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)
extern "C"  void GCHandle_FreeHandle_m_1687040415_0 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::Equals(System.Object)
extern "C"  bool GCHandle_Equals_m_1557203685_0 (GCHandle_t469075048_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.GCHandle::GetHashCode()
extern "C"  int32_t GCHandle_GetHashCode_m_1121611917_0 (GCHandle_t469075048_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
extern "C"  GCHandle_t469075048_0  GCHandle_FromIntPtr_m_1951460330_0 (Object_t * __this /* static, unused */, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
extern "C"  IntPtr_t GCHandle_ToIntPtr_m756840421_0 (Object_t * __this /* static, unused */, GCHandle_t469075048_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
extern "C"  IntPtr_t GCHandle_op_Explicit_m_1597273223_0 (Object_t * __this /* static, unused */, GCHandle_t469075048_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
extern "C"  GCHandle_t469075048_0  GCHandle_op_Explicit_m1878324757_0 (Object_t * __this /* static, unused */, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
