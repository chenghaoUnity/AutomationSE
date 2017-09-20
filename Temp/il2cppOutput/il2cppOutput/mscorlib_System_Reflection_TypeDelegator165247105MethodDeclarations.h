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

// System.Reflection.TypeDelegator
struct TypeDelegator_t165247105_0;
// System.Reflection.Assembly
struct Assembly_t_957553394_0;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t_2083915884_0;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1048289184_0;
// System.Reflection.Binder
struct Binder_t1890870994_0;
// System.Type[]
struct TypeU5BU5D_t_722972841_0;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t836130010_0;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t_1911405822_0;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1007324674_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t_217407495_0;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t_1243481107_0;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t_1039475404_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeTypeHandle_1394772513.h"
#include "mscorlib_System_Reflection_TypeAttributes_156336807.h"
#include "mscorlib_System_Reflection_BindingFlags_1175949782.h"
#include "mscorlib_System_Reflection_CallingConventions732533990.h"

// System.Void System.Reflection.TypeDelegator::.ctor()
extern "C"  void TypeDelegator__ctor_m_316731729_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.TypeDelegator::get_Assembly()
extern "C"  Assembly_t_957553394_0 * TypeDelegator_get_Assembly_m793822499_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_AssemblyQualifiedName()
extern "C"  String_t* TypeDelegator_get_AssemblyQualifiedName_m1620996616_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.TypeDelegator::get_BaseType()
extern "C"  Type_t * TypeDelegator_get_BaseType_m_1560071729_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_FullName()
extern "C"  String_t* TypeDelegator_get_FullName_m_536316363_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.TypeDelegator::get_Module()
extern "C"  Module_t_2083915884_0 * TypeDelegator_get_Module_m945912623_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_Name()
extern "C"  String_t* TypeDelegator_get_Name_m_1796219962_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_Namespace()
extern "C"  String_t* TypeDelegator_get_Namespace_m767650018_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.TypeDelegator::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t_1394772513_0  TypeDelegator_get_TypeHandle_m_1978474032_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.TypeDelegator::get_UnderlyingSystemType()
extern "C"  Type_t * TypeDelegator_get_UnderlyingSystemType_m_485172694_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.TypeDelegator::GetAttributeFlagsImpl()
extern "C"  int32_t TypeDelegator_GetAttributeFlagsImpl_m239890692_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.TypeDelegator::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t1048289184_0 * TypeDelegator_GetConstructorImpl_m1507578863_0 (TypeDelegator_t165247105_0 * __this, int32_t ___bindingAttr, Binder_t1890870994_0 * ___binder, int32_t ___callConvention, TypeU5BU5D_t_722972841_0* ___types, ParameterModifierU5BU5D_t836130010_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.TypeDelegator::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t_1911405822_0* TypeDelegator_GetConstructors_m1969957987_0 (TypeDelegator_t165247105_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.TypeDelegator::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t1774424924_0* TypeDelegator_GetCustomAttributes_m1964226805_0 (TypeDelegator_t165247105_0 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.TypeDelegator::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1774424924_0* TypeDelegator_GetCustomAttributes_m_1556149918_0 (TypeDelegator_t165247105_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.TypeDelegator::GetElementType()
extern "C"  Type_t * TypeDelegator_GetElementType_m_1236924677_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.TypeDelegator::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * TypeDelegator_GetEvent_m939809480_0 (TypeDelegator_t165247105_0 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.TypeDelegator::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * TypeDelegator_GetField_m967065480_0 (TypeDelegator_t165247105_0 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.TypeDelegator::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t1007324674_0* TypeDelegator_GetFields_m_86808669_0 (TypeDelegator_t165247105_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.TypeDelegator::GetInterfaces()
extern "C"  TypeU5BU5D_t_722972841_0* TypeDelegator_GetInterfaces_m1212899157_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.TypeDelegator::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * TypeDelegator_GetMethodImpl_m1514695301_0 (TypeDelegator_t165247105_0 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1890870994_0 * ___binder, int32_t ___callConvention, TypeU5BU5D_t_722972841_0* ___types, ParameterModifierU5BU5D_t836130010_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.TypeDelegator::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t_217407495_0* TypeDelegator_GetMethods_m_715667179_0 (TypeDelegator_t165247105_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.TypeDelegator::GetProperties(System.Reflection.BindingFlags)
extern "C"  PropertyInfoU5BU5D_t_1243481107_0* TypeDelegator_GetProperties_m1103738194_0 (TypeDelegator_t165247105_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.TypeDelegator::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * TypeDelegator_GetPropertyImpl_m162740912_0 (TypeDelegator_t165247105_0 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1890870994_0 * ___binder, Type_t * ___returnType, TypeU5BU5D_t_722972841_0* ___types, ParameterModifierU5BU5D_t836130010_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::HasElementTypeImpl()
extern "C"  bool TypeDelegator_HasElementTypeImpl_m454977167_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.TypeDelegator::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Object_t * TypeDelegator_InvokeMember_m_144485536_0 (TypeDelegator_t165247105_0 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1890870994_0 * ___binder, Object_t * ___target, ObjectU5BU5D_t1774424924_0* ___args, ParameterModifierU5BU5D_t836130010_0* ___modifiers, CultureInfo_t_1039475404_0 * ___culture, StringU5BU5D_t_816028754_0* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsArrayImpl()
extern "C"  bool TypeDelegator_IsArrayImpl_m_1226963810_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsByRefImpl()
extern "C"  bool TypeDelegator_IsByRefImpl_m598031553_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsDefined(System.Type,System.Boolean)
extern "C"  bool TypeDelegator_IsDefined_m_1340755726_0 (TypeDelegator_t165247105_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsPointerImpl()
extern "C"  bool TypeDelegator_IsPointerImpl_m_1020988286_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsPrimitiveImpl()
extern "C"  bool TypeDelegator_IsPrimitiveImpl_m951679660_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsValueTypeImpl()
extern "C"  bool TypeDelegator_IsValueTypeImpl_m1433978640_0 (TypeDelegator_t165247105_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
