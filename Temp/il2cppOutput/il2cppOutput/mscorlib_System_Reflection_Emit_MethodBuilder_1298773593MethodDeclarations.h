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

// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t_1298773593_0;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t_1794569106_0;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t_722972841_0;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t1007804665_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t_1161824911_0;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t1890870994_0;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.Globalization.CultureInfo
struct CultureInfo_t_1039475404_0;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t2081778301_0;
// System.Exception
struct Exception_t2143823668_0;
// System.Reflection.Module
struct Module_t_2083915884_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodAttributes1762357312.h"
#include "mscorlib_System_Reflection_CallingConventions732533990.h"
#include "mscorlib_System_RuntimeMethodHandle_762307834.h"
#include "mscorlib_System_Reflection_Emit_MethodToken605038341.h"
#include "mscorlib_System_Reflection_MethodImplAttributes2085808640.h"
#include "mscorlib_System_Reflection_BindingFlags_1175949782.h"

// System.Void System.Reflection.Emit.MethodBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type[],System.Type[],System.Type[][],System.Type[][])
extern "C"  void MethodBuilder__ctor_m531243935_0 (MethodBuilder_t_1298773593_0 * __this, TypeBuilder_t_1794569106_0 * ___tb, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t_722972841_0* ___returnModReq, TypeU5BU5D_t_722972841_0* ___returnModOpt, TypeU5BU5D_t_722972841_0* ___parameterTypes, TypeU5BU5DU5BU5D_t1007804665_0* ___paramModReq, TypeU5BU5DU5BU5D_t1007804665_0* ___paramModOpt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
extern "C"  bool MethodBuilder_get_ContainsGenericParameters_m_874739324_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t_762307834_0  MethodBuilder_get_MethodHandle_m1281364144_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
extern "C"  Type_t * MethodBuilder_get_ReturnType_m1886811394_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
extern "C"  Type_t * MethodBuilder_get_ReflectedType_m_510876768_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
extern "C"  Type_t * MethodBuilder_get_DeclaringType_m258676459_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
extern "C"  String_t* MethodBuilder_get_Name_m_881705268_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
extern "C"  int32_t MethodBuilder_get_Attributes_m2121429796_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
extern "C"  int32_t MethodBuilder_get_CallingConvention_m_538697424_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodToken System.Reflection.Emit.MethodBuilder::GetToken()
extern "C"  MethodToken_t605038341_0  MethodBuilder_GetToken_m920069858_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
extern "C"  MethodInfo_t * MethodBuilder_GetBaseDefinition_m_668974417_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodImplAttributes System.Reflection.Emit.MethodBuilder::GetMethodImplementationFlags()
extern "C"  int32_t MethodBuilder_GetMethodImplementationFlags_m_1588573342_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
extern "C"  ParameterInfoU5BU5D_t_1161824911_0* MethodBuilder_GetParameters_m1297633455_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetParameterCount()
extern "C"  int32_t MethodBuilder_GetParameterCount_m1078755501_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Object_t * MethodBuilder_Invoke_m1851679456_0 (MethodBuilder_t_1298773593_0 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1890870994_0 * ___binder, ObjectU5BU5D_t1774424924_0* ___parameters, CultureInfo_t_1039475404_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool MethodBuilder_IsDefined_m_915210802_0 (MethodBuilder_t_1298773593_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t1774424924_0* MethodBuilder_GetCustomAttributes_m1111063247_0 (MethodBuilder_t_1298773593_0 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1774424924_0* MethodBuilder_GetCustomAttributes_m_1000418244_0 (MethodBuilder_t_1298773593_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::GetILGenerator()
extern "C"  ILGenerator_t2081778301_0 * MethodBuilder_GetILGenerator_m_1367565375_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::GetILGenerator(System.Int32)
extern "C"  ILGenerator_t2081778301_0 * MethodBuilder_GetILGenerator_m281130898_0 (MethodBuilder_t_1298773593_0 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::check_override()
extern "C"  void MethodBuilder_check_override_m_553979560_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::fixup()
extern "C"  void MethodBuilder_fixup_m526432253_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::ToString()
extern "C"  String_t* MethodBuilder_ToString_m_1519980188_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
extern "C"  bool MethodBuilder_Equals_m341293246_0 (MethodBuilder_t_1298773593_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
extern "C"  int32_t MethodBuilder_GetHashCode_m_1964453598_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t MethodBuilder_get_next_table_index_m_663706101_0 (MethodBuilder_t_1298773593_0 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::set_override(System.Reflection.MethodInfo)
extern "C"  void MethodBuilder_set_override_m_899829973_0 (MethodBuilder_t_1298773593_0 * __this, MethodInfo_t * ___mdecl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
extern "C"  Exception_t2143823668_0 * MethodBuilder_NotSupported_m538712043_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
extern "C"  MethodInfo_t * MethodBuilder_MakeGenericMethod_m_1246133832_0 (MethodBuilder_t_1298773593_0 * __this, TypeU5BU5D_t_722972841_0* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
extern "C"  bool MethodBuilder_get_IsGenericMethodDefinition_m_1618805885_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
extern "C"  bool MethodBuilder_get_IsGenericMethod_m_1170628208_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
extern "C"  TypeU5BU5D_t_722972841_0* MethodBuilder_GetGenericArguments_m_1773827926_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
extern "C"  Module_t_2083915884_0 * MethodBuilder_get_Module_m_1570806491_0 (MethodBuilder_t_1298773593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
