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
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t_1298773593_0;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t_1794569106_0;

#include "mscorlib_System_Reflection_PropertyInfo_1775593653.h"
#include "mscorlib_System_Reflection_PropertyAttributes_131354060.h"

// System.Reflection.Emit.PropertyBuilder
struct  PropertyBuilder_t_1584944397_0  : public PropertyInfo_t
{
	// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::attrs
	int32_t ___attrs_0;
	// System.String System.Reflection.Emit.PropertyBuilder::name
	String_t* ___name_1;
	// System.Type System.Reflection.Emit.PropertyBuilder::type
	Type_t * ___type_2;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.PropertyBuilder::set_method
	MethodBuilder_t_1298773593_0 * ___set_method_3;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.PropertyBuilder::get_method
	MethodBuilder_t_1298773593_0 * ___get_method_4;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.PropertyBuilder::typeb
	TypeBuilder_t_1794569106_0 * ___typeb_5;
};
