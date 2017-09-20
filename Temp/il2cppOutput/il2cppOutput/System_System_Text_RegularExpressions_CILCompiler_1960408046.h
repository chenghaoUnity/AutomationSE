#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.DynamicMethod[]
struct DynamicMethodU5BU5D_t_64421851_0;
// System.Boolean[]
struct BooleanU5BU5D_t_1574345617_0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t_1201087663_0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t_399939869_0;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t_633934365_0;

#include "System_System_Text_RegularExpressions_RxCompiler743214808.h"

// System.Text.RegularExpressions.CILCompiler
struct  CILCompiler_t_1960408046_0  : public RxCompiler_t743214808_0
{
	// System.Reflection.Emit.DynamicMethod[] System.Text.RegularExpressions.CILCompiler::eval_methods
	DynamicMethodU5BU5D_t_64421851_0* ___eval_methods_2;
	// System.Boolean[] System.Text.RegularExpressions.CILCompiler::eval_methods_defined
	BooleanU5BU5D_t_1574345617_0* ___eval_methods_defined_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> System.Text.RegularExpressions.CILCompiler::generic_ops
	Dictionary_2_t_1201087663_0 * ___generic_ops_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> System.Text.RegularExpressions.CILCompiler::op_flags
	Dictionary_2_t_1201087663_0 * ___op_flags_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label> System.Text.RegularExpressions.CILCompiler::labels
	Dictionary_2_t_399939869_0 * ___labels_6;
	// System.Reflection.Emit.LocalBuilder System.Text.RegularExpressions.CILCompiler::local_textinfo
	LocalBuilder_t_633934365_0 * ___local_textinfo_33;
};
struct CILCompiler_t_1960408046_0_StaticFields{
	// System.Reflection.FieldInfo System.Text.RegularExpressions.CILCompiler::fi_str
	FieldInfo_t * ___fi_str_7;
	// System.Reflection.FieldInfo System.Text.RegularExpressions.CILCompiler::fi_string_start
	FieldInfo_t * ___fi_string_start_8;
	// System.Reflection.FieldInfo System.Text.RegularExpressions.CILCompiler::fi_string_end
	FieldInfo_t * ___fi_string_end_9;
	// System.Reflection.FieldInfo System.Text.RegularExpressions.CILCompiler::fi_program
	FieldInfo_t * ___fi_program_10;
	// System.Reflection.FieldInfo System.Text.RegularExpressions.CILCompiler::fi_marks
	FieldInfo_t * ___fi_marks_11;
	// System.Reflection.FieldInfo System.Text.RegularExpressions.CILCompiler::fi_groups
	FieldInfo_t * ___fi_groups_12;
	// System.Reflection.FieldInfo System.Text.RegularExpressions.CILCompiler::fi_deep
	FieldInfo_t * ___fi_deep_13;
	// System.Reflection.FieldInfo System.Text.RegularExpressions.CILCompiler::fi_stack
	FieldInfo_t * ___fi_stack_14;
	// System.Reflection.FieldInfo System.Text.RegularExpressions.CILCompiler::fi_mark_start
	FieldInfo_t * ___fi_mark_start_15;
	// System.Reflection.FieldInfo System.Text.RegularExpressions.CILCompiler::fi_mark_end
	FieldInfo_t * ___fi_mark_end_16;
	// System.Reflection.FieldInfo System.Text.RegularExpressions.CILCompiler::fi_mark_index
	FieldInfo_t * ___fi_mark_index_17;
	// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::mi_stack_get_count
	MethodInfo_t * ___mi_stack_get_count_18;
	// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::mi_stack_set_count
	MethodInfo_t * ___mi_stack_set_count_19;
	// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::mi_stack_push
	MethodInfo_t * ___mi_stack_push_20;
	// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::mi_stack_pop
	MethodInfo_t * ___mi_stack_pop_21;
	// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::mi_set_start_of_match
	MethodInfo_t * ___mi_set_start_of_match_22;
	// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::mi_is_word_char
	MethodInfo_t * ___mi_is_word_char_23;
	// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::mi_reset_groups
	MethodInfo_t * ___mi_reset_groups_24;
	// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::mi_checkpoint
	MethodInfo_t * ___mi_checkpoint_25;
	// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::mi_backtrack
	MethodInfo_t * ___mi_backtrack_26;
	// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::mi_open
	MethodInfo_t * ___mi_open_27;
	// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::mi_close
	MethodInfo_t * ___mi_close_28;
	// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::mi_get_last_defined
	MethodInfo_t * ___mi_get_last_defined_29;
	// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::mi_mark_get_index
	MethodInfo_t * ___mi_mark_get_index_30;
	// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::mi_mark_get_length
	MethodInfo_t * ___mi_mark_get_length_31;
	// System.Boolean System.Text.RegularExpressions.CILCompiler::trace_compile
	bool ___trace_compile_32;
};
