#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t_722972841_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t2081778301_0;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t_1794569106_0;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t1381837959_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t_666665390_0;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t1007804665_0;

#include "mscorlib_System_Reflection_MethodInfo553963095.h"
#include "mscorlib_System_Reflection_MethodAttributes1762357312.h"
#include "mscorlib_System_Reflection_MethodImplAttributes2085808640.h"
#include "mscorlib_System_Reflection_CallingConventions732533990.h"

// System.Reflection.Emit.MethodBuilder
struct  MethodBuilder_t_1298773593_0  : public MethodInfo_t
{
	// System.Type System.Reflection.Emit.MethodBuilder::rtype
	Type_t * ___rtype_0;
	// System.Type[] System.Reflection.Emit.MethodBuilder::parameters
	TypeU5BU5D_t_722972841_0* ___parameters_1;
	// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.Emit.MethodBuilder::iattrs
	int32_t ___iattrs_3;
	// System.String System.Reflection.Emit.MethodBuilder::name
	String_t* ___name_4;
	// System.Int32 System.Reflection.Emit.MethodBuilder::table_idx
	int32_t ___table_idx_5;
	// System.Byte[] System.Reflection.Emit.MethodBuilder::code
	ByteU5BU5D_t_1238178395_0* ___code_6;
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::ilgen
	ILGenerator_t2081778301_0 * ___ilgen_7;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.MethodBuilder::type
	TypeBuilder_t_1794569106_0 * ___type_8;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.MethodBuilder::pinfo
	ParameterBuilderU5BU5D_t1381837959_0* ___pinfo_9;
	// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::override_method
	MethodInfo_t * ___override_method_10;
	// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::call_conv
	int32_t ___call_conv_11;
	// System.Boolean System.Reflection.Emit.MethodBuilder::init_locals
	bool ___init_locals_12;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.MethodBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t_666665390_0* ___generic_params_13;
	// System.Type[] System.Reflection.Emit.MethodBuilder::returnModReq
	TypeU5BU5D_t_722972841_0* ___returnModReq_14;
	// System.Type[] System.Reflection.Emit.MethodBuilder::returnModOpt
	TypeU5BU5D_t_722972841_0* ___returnModOpt_15;
	// System.Type[][] System.Reflection.Emit.MethodBuilder::paramModReq
	TypeU5BU5DU5BU5D_t1007804665_0* ___paramModReq_16;
	// System.Type[][] System.Reflection.Emit.MethodBuilder::paramModOpt
	TypeU5BU5DU5BU5D_t1007804665_0* ___paramModOpt_17;
};
