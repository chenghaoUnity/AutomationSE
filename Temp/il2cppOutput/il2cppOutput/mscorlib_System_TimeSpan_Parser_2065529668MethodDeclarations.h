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

// System.TimeSpan/Parser
struct Parser_t_2065529668_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan_393459662.h"

// System.Void System.TimeSpan/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m_1509440984_0 (Parser_t_2065529668_0 * __this, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::get_AtEnd()
extern "C"  bool Parser_get_AtEnd_m_68471755_0 (Parser_t_2065529668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan/Parser::ParseWhiteSpace()
extern "C"  void Parser_ParseWhiteSpace_m_535887640_0 (Parser_t_2065529668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::ParseSign()
extern "C"  bool Parser_ParseSign_m_112152186_0 (Parser_t_2065529668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan/Parser::ParseInt(System.Boolean)
extern "C"  int32_t Parser_ParseInt_m_1222745415_0 (Parser_t_2065529668_0 * __this, bool ___optional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::ParseOptDot()
extern "C"  bool Parser_ParseOptDot_m_827204321_0 (Parser_t_2065529668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan/Parser::ParseOptColon()
extern "C"  void Parser_ParseOptColon_m_998324809_0 (Parser_t_2065529668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan/Parser::ParseTicks()
extern "C"  int64_t Parser_ParseTicks_m2032431114_0 (Parser_t_2065529668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan/Parser::Execute()
extern "C"  TimeSpan_t_393459662_0  Parser_Execute_m800979088_0 (Parser_t_2065529668_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
