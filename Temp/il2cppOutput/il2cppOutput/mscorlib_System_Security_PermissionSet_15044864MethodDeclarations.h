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

// System.Security.PermissionSet
struct PermissionSet_t_15044864_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Security.IPermission
struct IPermission_t846381381_0;
// System.Array
struct Array_t;
// System.Security.SecurityElement
struct SecurityElement_t117540681_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Type
struct Type_t;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1466995657_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta_144167259.h"

// System.Void System.Security.PermissionSet::.ctor()
extern "C"  void PermissionSet__ctor_m_884083120_0 (PermissionSet_t_15044864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void PermissionSet__ctor_m_495444039_0 (PermissionSet_t_15044864_0 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.Security.PermissionSet)
extern "C"  void PermissionSet__ctor_m_1114430594_0 (PermissionSet_t_15044864_0 * __this, PermissionSet_t_15044864_0 * ___permSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.String)
extern "C"  void PermissionSet__ctor_m1161980594_0 (PermissionSet_t_15044864_0 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.cctor()
extern "C"  void PermissionSet__cctor_m_2118869155_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void PermissionSet_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m1273961510_0 (PermissionSet_t_15044864_0 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::AddPermission(System.Security.IPermission)
extern "C"  Object_t * PermissionSet_AddPermission_m_1237220575_0 (PermissionSet_t_15044864_0 * __this, Object_t * ___perm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Copy()
extern "C"  PermissionSet_t_15044864_0 * PermissionSet_Copy_m_263379494_0 (PermissionSet_t_15044864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::CopyTo(System.Array,System.Int32)
extern "C"  void PermissionSet_CopyTo_m_1245209811_0 (PermissionSet_t_15044864_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::Demand()
extern "C"  void PermissionSet_Demand_m_388038721_0 (PermissionSet_t_15044864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::FromXml(System.Security.SecurityElement)
extern "C"  void PermissionSet_FromXml_m1531635466_0 (PermissionSet_t_15044864_0 * __this, SecurityElement_t117540681_0 * ___et, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.PermissionSet::GetEnumerator()
extern "C"  Object_t * PermissionSet_GetEnumerator_m_370740802_0 (PermissionSet_t_15044864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsSubsetOf(System.Security.PermissionSet)
extern "C"  bool PermissionSet_IsSubsetOf_m_1182661799_0 (PermissionSet_t_15044864_0 * __this, PermissionSet_t_15044864_0 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::GetPermission(System.Type)
extern "C"  Object_t * PermissionSet_GetPermission_m_1311830820_0 (PermissionSet_t_15044864_0 * __this, Type_t * ___permClass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Intersect(System.Security.PermissionSet)
extern "C"  PermissionSet_t_15044864_0 * PermissionSet_Intersect_m_589363438_0 (PermissionSet_t_15044864_0 * __this, PermissionSet_t_15044864_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::InternalIntersect(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Boolean)
extern "C"  void PermissionSet_InternalIntersect_m_856202449_0 (PermissionSet_t_15044864_0 * __this, PermissionSet_t_15044864_0 * ___intersect, PermissionSet_t_15044864_0 * ___a, PermissionSet_t_15044864_0 * ___b, bool ___unrestricted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsEmpty()
extern "C"  bool PermissionSet_IsEmpty_m_1499015501_0 (PermissionSet_t_15044864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsUnrestricted()
extern "C"  bool PermissionSet_IsUnrestricted_m1051292784_0 (PermissionSet_t_15044864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::RemovePermission(System.Type)
extern "C"  Object_t * PermissionSet_RemovePermission_m1209482748_0 (PermissionSet_t_15044864_0 * __this, Type_t * ___permClass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.PermissionSet::ToString()
extern "C"  String_t* PermissionSet_ToString_m958620253_0 (PermissionSet_t_15044864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.PermissionSet::ToXml()
extern "C"  SecurityElement_t117540681_0 * PermissionSet_ToXml_m_1281199344_0 (PermissionSet_t_15044864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Union(System.Security.PermissionSet)
extern "C"  PermissionSet_t_15044864_0 * PermissionSet_Union_m_120172190_0 (PermissionSet_t_15044864_0 * __this, PermissionSet_t_15044864_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::get_Count()
extern "C"  int32_t PermissionSet_get_Count_m735956848_0 (PermissionSet_t_15044864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::get_IsSynchronized()
extern "C"  bool PermissionSet_get_IsSynchronized_m_286486759_0 (PermissionSet_t_15044864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.PermissionSet::get_SyncRoot()
extern "C"  Object_t * PermissionSet_get_SyncRoot_m866164997_0 (PermissionSet_t_15044864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_DeclarativeSecurity(System.Boolean)
extern "C"  void PermissionSet_set_DeclarativeSecurity_m1327442290_0 (PermissionSet_t_15044864_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::Equals(System.Object)
extern "C"  bool PermissionSet_Equals_m_2113788349_0 (PermissionSet_t_15044864_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::GetHashCode()
extern "C"  int32_t PermissionSet_GetHashCode_m_285490917_0 (PermissionSet_t_15044864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyLevel System.Security.PermissionSet::get_Resolver()
extern "C"  PolicyLevel_t1466995657_0 * PermissionSet_get_Resolver_m_1268277315_0 (PermissionSet_t_15044864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_Resolver(System.Security.Policy.PolicyLevel)
extern "C"  void PermissionSet_set_Resolver_m1887663282_0 (PermissionSet_t_15044864_0 * __this, PolicyLevel_t1466995657_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::SetReadOnly(System.Boolean)
extern "C"  void PermissionSet_SetReadOnly_m1922354057_0 (PermissionSet_t_15044864_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::CreateFromBinaryFormat(System.Byte[])
extern "C"  PermissionSet_t_15044864_0 * PermissionSet_CreateFromBinaryFormat_m554196038_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::ReadEncodedInt(System.Byte[],System.Int32&)
extern "C"  int32_t PermissionSet_ReadEncodedInt_m_288698769_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___data, int32_t* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::ProcessAttribute(System.Byte[],System.Int32&)
extern "C"  Object_t * PermissionSet_ProcessAttribute_m_813139673_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t_1238178395_0* ___data, int32_t* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
