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

// System.Reflection.Emit.DerivedType
struct DerivedType_t_1674310556_0;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t_722972841_0;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.String
struct String_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1007324674_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Binder
struct Binder_t1890870994_0;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t836130010_0;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t_217407495_0;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t_1243481107_0;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1048289184_0;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t_1911405822_0;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.Globalization.CultureInfo
struct CultureInfo_t_1039475404_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Reflection.Assembly
struct Assembly_t_957553394_0;
// System.Reflection.Module
struct Module_t_2083915884_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_BindingFlags_1175949782.h"
#include "mscorlib_System_Reflection_CallingConventions732533990.h"
#include "mscorlib_System_Reflection_TypeAttributes_156336807.h"
#include "mscorlib_System_RuntimeTypeHandle_1394772513.h"

// System.Void System.Reflection.Emit.DerivedType::.ctor(System.Type)
extern "C"  void DerivedType__ctor_m_2143237049_0 (DerivedType_t_1674310556_0 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DerivedType::create_unmanaged_type(System.Type)
extern "C"  void DerivedType_create_unmanaged_type_m_1980103821_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.DerivedType::GetInterfaces()
extern "C"  TypeU5BU5D_t_722972841_0* DerivedType_GetInterfaces_m_1953781720_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::GetElementType()
extern "C"  Type_t * DerivedType_GetElementType_m_322085108_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.DerivedType::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * DerivedType_GetEvent_m1455460899_0 (DerivedType_t_1674310556_0 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.DerivedType::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * DerivedType_GetField_m1258528291_0 (DerivedType_t_1674310556_0 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.DerivedType::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t1007324674_0* DerivedType_GetFields_m_1723789908_0 (DerivedType_t_1674310556_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.DerivedType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * DerivedType_GetMethodImpl_m_463426024_0 (DerivedType_t_1674310556_0 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1890870994_0 * ___binder, int32_t ___callConvention, TypeU5BU5D_t_722972841_0* ___types, ParameterModifierU5BU5D_t836130010_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.DerivedType::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t_217407495_0* DerivedType_GetMethods_m144137694_0 (DerivedType_t_1674310556_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.DerivedType::GetProperties(System.Reflection.BindingFlags)
extern "C"  PropertyInfoU5BU5D_t_1243481107_0* DerivedType_GetProperties_m1138411857_0 (DerivedType_t_1674310556_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.DerivedType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * DerivedType_GetPropertyImpl_m_2009599467_0 (DerivedType_t_1674310556_0 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1890870994_0 * ___binder, Type_t * ___returnType, TypeU5BU5D_t_722972841_0* ___types, ParameterModifierU5BU5D_t836130010_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.DerivedType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t1048289184_0 * DerivedType_GetConstructorImpl_m854653258_0 (DerivedType_t_1674310556_0 * __this, int32_t ___bindingAttr, Binder_t1890870994_0 * ___binder, int32_t ___callConvention, TypeU5BU5D_t_722972841_0* ___types, ParameterModifierU5BU5D_t836130010_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.DerivedType::GetAttributeFlagsImpl()
extern "C"  int32_t DerivedType_GetAttributeFlagsImpl_m1287185819_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::HasElementTypeImpl()
extern "C"  bool DerivedType_HasElementTypeImpl_m1373316336_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsArrayImpl()
extern "C"  bool DerivedType_IsArrayImpl_m_156876451_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsByRefImpl()
extern "C"  bool DerivedType_IsByRefImpl_m1668118912_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsPointerImpl()
extern "C"  bool DerivedType_IsPointerImpl_m835779969_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsPrimitiveImpl()
extern "C"  bool DerivedType_IsPrimitiveImpl_m_1400422421_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.DerivedType::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t_1911405822_0* DerivedType_GetConstructors_m699314604_0 (DerivedType_t_1674310556_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.DerivedType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Object_t * DerivedType_InvokeMember_m_1599056825_0 (DerivedType_t_1674310556_0 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1890870994_0 * ___binder, Object_t * ___target, ObjectU5BU5D_t1774424924_0* ___args, ParameterModifierU5BU5D_t836130010_0* ___modifiers, CultureInfo_t_1039475404_0 * ___culture, StringU5BU5D_t_816028754_0* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsInstanceOfType(System.Object)
extern "C"  bool DerivedType_IsInstanceOfType_m_1807160688_0 (DerivedType_t_1674310556_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsAssignableFrom(System.Type)
extern "C"  bool DerivedType_IsAssignableFrom_m713635112_0 (DerivedType_t_1674310556_0 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::get_ContainsGenericParameters()
extern "C"  bool DerivedType_get_ContainsGenericParameters_m_2121428313_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::MakeGenericType(System.Type[])
extern "C"  Type_t * DerivedType_MakeGenericType_m_589511842_0 (DerivedType_t_1674310556_0 * __this, TypeU5BU5D_t_722972841_0* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::MakeByRefType()
extern "C"  Type_t * DerivedType_MakeByRefType_m1894284926_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::ToString()
extern "C"  String_t* DerivedType_ToString_m888495265_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.DerivedType::get_Assembly()
extern "C"  Assembly_t_957553394_0 * DerivedType_get_Assembly_m1584566050_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_AssemblyQualifiedName()
extern "C"  String_t* DerivedType_get_AssemblyQualifiedName_m1387368997_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_FullName()
extern "C"  String_t* DerivedType_get_FullName_m2024958712_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_Name()
extern "C"  String_t* DerivedType_get_Name_m1526770185_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.DerivedType::get_Module()
extern "C"  Module_t_2083915884_0 * DerivedType_get_Module_m1872511778_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_Namespace()
extern "C"  String_t* DerivedType_get_Namespace_m_1437201281_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.DerivedType::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t_1394772513_0  DerivedType_get_TypeHandle_m1080433997_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::get_UnderlyingSystemType()
extern "C"  Type_t * DerivedType_get_UnderlyingSystemType_m1568542971_0 (DerivedType_t_1674310556_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsDefined(System.Type,System.Boolean)
extern "C"  bool DerivedType_IsDefined_m166944945_0 (DerivedType_t_1674310556_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DerivedType::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t1774424924_0* DerivedType_GetCustomAttributes_m_204209614_0 (DerivedType_t_1674310556_0 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DerivedType::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1774424924_0* DerivedType_GetCustomAttributes_m873619231_0 (DerivedType_t_1674310556_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
