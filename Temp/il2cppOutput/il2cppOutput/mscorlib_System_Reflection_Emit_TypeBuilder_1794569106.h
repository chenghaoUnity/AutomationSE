#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t_722972841_0;
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t1714063177_0;
// System.Reflection.Emit.ConstructorBuilder[]
struct ConstructorBuilderU5BU5D_t_2006343018_0;
// System.Reflection.Emit.PropertyBuilder[]
struct PropertyBuilderU5BU5D_t1581827477_0;
// System.Reflection.Emit.FieldBuilder[]
struct FieldBuilderU5BU5D_t416914390_0;
// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t1995945040_0;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t_1005964868_0;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t_666665390_0;

#include "mscorlib_System_Type_224215755.h"
#include "mscorlib_System_Reflection_TypeAttributes_156336807.h"
#include "mscorlib_System_Reflection_Emit_PackingSize1163572279.h"

// System.Reflection.Emit.TypeBuilder
struct  TypeBuilder_t_1794569106_0  : public Type_t
{
	// System.String System.Reflection.Emit.TypeBuilder::tname
	String_t* ___tname_8;
	// System.String System.Reflection.Emit.TypeBuilder::nspace
	String_t* ___nspace_9;
	// System.Type System.Reflection.Emit.TypeBuilder::parent
	Type_t * ___parent_10;
	// System.Type System.Reflection.Emit.TypeBuilder::nesting_type
	Type_t * ___nesting_type_11;
	// System.Type[] System.Reflection.Emit.TypeBuilder::interfaces
	TypeU5BU5D_t_722972841_0* ___interfaces_12;
	// System.Int32 System.Reflection.Emit.TypeBuilder::num_methods
	int32_t ___num_methods_13;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.TypeBuilder::methods
	MethodBuilderU5BU5D_t1714063177_0* ___methods_14;
	// System.Reflection.Emit.ConstructorBuilder[] System.Reflection.Emit.TypeBuilder::ctors
	ConstructorBuilderU5BU5D_t_2006343018_0* ___ctors_15;
	// System.Reflection.Emit.PropertyBuilder[] System.Reflection.Emit.TypeBuilder::properties
	PropertyBuilderU5BU5D_t1581827477_0* ___properties_16;
	// System.Reflection.Emit.FieldBuilder[] System.Reflection.Emit.TypeBuilder::fields
	FieldBuilderU5BU5D_t416914390_0* ___fields_17;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.TypeBuilder::subtypes
	TypeBuilderU5BU5D_t1995945040_0* ___subtypes_18;
	// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::attrs
	int32_t ___attrs_19;
	// System.Int32 System.Reflection.Emit.TypeBuilder::table_idx
	int32_t ___table_idx_20;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.TypeBuilder::pmodule
	ModuleBuilder_t_1005964868_0 * ___pmodule_21;
	// System.Int32 System.Reflection.Emit.TypeBuilder::class_size
	int32_t ___class_size_22;
	// System.Reflection.Emit.PackingSize System.Reflection.Emit.TypeBuilder::packing_size
	int32_t ___packing_size_23;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.TypeBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t_666665390_0* ___generic_params_24;
	// System.Type System.Reflection.Emit.TypeBuilder::created
	Type_t * ___created_25;
	// System.String System.Reflection.Emit.TypeBuilder::fullname
	String_t* ___fullname_26;
	// System.Boolean System.Reflection.Emit.TypeBuilder::createTypeCalled
	bool ___createTypeCalled_27;
	// System.Type System.Reflection.Emit.TypeBuilder::underlying_type
	Type_t * ___underlying_type_28;
};
