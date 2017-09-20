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

// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t714200109_0;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t_722972841_0;
// System.Reflection.Module
struct Module_t_2083915884_0;
// System.Delegate
struct Delegate_t_1791715840_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t2081778301_0;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t_1161824911_0;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t1890870994_0;
// System.Globalization.CultureInfo
struct CultureInfo_t_1039475404_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodAttributes1762357312.h"
#include "mscorlib_System_Reflection_CallingConventions732533990.h"
#include "mscorlib_System_Reflection_MethodImplAttributes2085808640.h"
#include "mscorlib_System_Reflection_BindingFlags_1175949782.h"
#include "mscorlib_System_RuntimeMethodHandle_762307834.h"

// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Type,System.Type[],System.Type,System.Boolean)
extern "C"  void DynamicMethod__ctor_m_1646135443_0 (DynamicMethod_t714200109_0 * __this, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t_722972841_0* ___parameterTypes, Type_t * ___owner, bool ___skipVisibility, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type,System.Boolean)
extern "C"  void DynamicMethod__ctor_m859215507_0 (DynamicMethod_t714200109_0 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t_722972841_0* ___parameterTypes, Type_t * ___owner, bool ___skipVisibility, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type,System.Reflection.Module,System.Boolean,System.Boolean)
extern "C"  void DynamicMethod__ctor_m1053671628_0 (DynamicMethod_t714200109_0 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t_722972841_0* ___parameterTypes, Type_t * ___owner, Module_t_2083915884_0 * ___m, bool ___skipVisibility, bool ___anonHosted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::create_dynamic_method(System.Reflection.Emit.DynamicMethod)
extern "C"  void DynamicMethod_create_dynamic_method_m1649915426_0 (DynamicMethod_t714200109_0 * __this, DynamicMethod_t714200109_0 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::destroy_dynamic_method(System.Reflection.Emit.DynamicMethod)
extern "C"  void DynamicMethod_destroy_dynamic_method_m1269513496_0 (DynamicMethod_t714200109_0 * __this, DynamicMethod_t714200109_0 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::CreateDynMethod()
extern "C"  void DynamicMethod_CreateDynMethod_m_856758587_0 (DynamicMethod_t714200109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::Finalize()
extern "C"  void DynamicMethod_Finalize_m_1933230535_0 (DynamicMethod_t714200109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Reflection.Emit.DynamicMethod::CreateDelegate(System.Type)
extern "C"  Delegate_t_1791715840_0 * DynamicMethod_CreateDelegate_m_1862158418_0 (DynamicMethod_t714200109_0 * __this, Type_t * ___delegateType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.DynamicMethod::GetBaseDefinition()
extern "C"  MethodInfo_t * DynamicMethod_GetBaseDefinition_m1000253417_0 (DynamicMethod_t714200109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t1774424924_0* DynamicMethod_GetCustomAttributes_m885664777_0 (DynamicMethod_t714200109_0 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1774424924_0* DynamicMethod_GetCustomAttributes_m1932918_0 (DynamicMethod_t714200109_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::GetILGenerator()
extern "C"  ILGenerator_t2081778301_0 * DynamicMethod_GetILGenerator_m_1114058553_0 (DynamicMethod_t714200109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::GetILGenerator(System.Int32)
extern "C"  ILGenerator_t2081778301_0 * DynamicMethod_GetILGenerator_m222860184_0 (DynamicMethod_t714200109_0 * __this, int32_t ___streamSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodImplAttributes System.Reflection.Emit.DynamicMethod::GetMethodImplementationFlags()
extern "C"  int32_t DynamicMethod_GetMethodImplementationFlags_m_1752154648_0 (DynamicMethod_t714200109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.DynamicMethod::GetParameters()
extern "C"  ParameterInfoU5BU5D_t_1161824911_0* DynamicMethod_GetParameters_m_218209559_0 (DynamicMethod_t714200109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.DynamicMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Object_t * DynamicMethod_Invoke_m1504415078_0 (DynamicMethod_t714200109_0 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1890870994_0 * ___binder, ObjectU5BU5D_t1774424924_0* ___parameters, CultureInfo_t_1039475404_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DynamicMethod::IsDefined(System.Type,System.Boolean)
extern "C"  bool DynamicMethod_IsDefined_m1520191624_0 (DynamicMethod_t714200109_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DynamicMethod::ToString()
extern "C"  String_t* DynamicMethod_ToString_m1996022506_0 (DynamicMethod_t714200109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.DynamicMethod::get_Attributes()
extern "C"  int32_t DynamicMethod_get_Attributes_m_1920030678_0 (DynamicMethod_t714200109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.DynamicMethod::get_CallingConvention()
extern "C"  int32_t DynamicMethod_get_CallingConvention_m_421963414_0 (DynamicMethod_t714200109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_DeclaringType()
extern "C"  Type_t * DynamicMethod_get_DeclaringType_m1927904293_0 (DynamicMethod_t714200109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.DynamicMethod::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t_762307834_0  DynamicMethod_get_MethodHandle_m88284214_0 (DynamicMethod_t714200109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.DynamicMethod::get_Module()
extern "C"  Module_t_2083915884_0 * DynamicMethod_get_Module_m1463487787_0 (DynamicMethod_t714200109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DynamicMethod::get_Name()
extern "C"  String_t* DynamicMethod_get_Name_m_1660669870_0 (DynamicMethod_t714200109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_ReflectedType()
extern "C"  Type_t * DynamicMethod_get_ReflectedType_m1158351066_0 (DynamicMethod_t714200109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_ReturnType()
extern "C"  Type_t * DynamicMethod_get_ReturnType_m2140318216_0 (DynamicMethod_t714200109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethod::AddRef(System.Object)
extern "C"  int32_t DynamicMethod_AddRef_m93074763_0 (DynamicMethod_t714200109_0 * __this, Object_t * ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
