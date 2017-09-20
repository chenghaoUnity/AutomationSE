#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t_1121238188_0;
// System.Text.RegularExpressions.Mark[]
struct MarkU5BU5D_t_954971582_0;
// System.Text.RegularExpressions.RxInterpreter/RepeatContext
struct RepeatContext_t_175526010_0;

#include "System_System_Text_RegularExpressions_BaseMachine598973635.h"
#include "System_System_Text_RegularExpressions_RxInterpret_1588845401.h"

// System.Text.RegularExpressions.RxInterpreter
struct  RxInterpreter_t621165985_0  : public BaseMachine_t598973635_0
{
	// System.Byte[] System.Text.RegularExpressions.RxInterpreter::program
	ByteU5BU5D_t_1238178395_0* ___program_1;
	// System.String System.Text.RegularExpressions.RxInterpreter::str
	String_t* ___str_2;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::string_start
	int32_t ___string_start_3;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::string_end
	int32_t ___string_end_4;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::group_count
	int32_t ___group_count_5;
	// System.Int32[] System.Text.RegularExpressions.RxInterpreter::groups
	Int32U5BU5D_t1872284309_0* ___groups_6;
	// System.Text.RegularExpressions.EvalDelegate System.Text.RegularExpressions.RxInterpreter::eval_del
	EvalDelegate_t_1121238188_0 * ___eval_del_7;
	// System.Text.RegularExpressions.Mark[] System.Text.RegularExpressions.RxInterpreter::marks
	MarkU5BU5D_t_954971582_0* ___marks_8;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::mark_start
	int32_t ___mark_start_9;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::mark_end
	int32_t ___mark_end_10;
	// System.Text.RegularExpressions.RxInterpreter/IntStack System.Text.RegularExpressions.RxInterpreter::stack
	IntStack_t_1588845401_0  ___stack_11;
	// System.Text.RegularExpressions.RxInterpreter/RepeatContext System.Text.RegularExpressions.RxInterpreter::repeat
	RepeatContext_t_175526010_0 * ___repeat_12;
	// System.Text.RegularExpressions.RxInterpreter/RepeatContext System.Text.RegularExpressions.RxInterpreter::deep
	RepeatContext_t_175526010_0 * ___deep_13;
};
struct RxInterpreter_t621165985_0_StaticFields{
	// System.Boolean System.Text.RegularExpressions.RxInterpreter::trace_rx
	bool ___trace_rx_14;
};
