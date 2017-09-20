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

// MiniJSON.Json/Parser
struct Parser_t_1909052482_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t_1418732973_0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t_1639587984_0;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MiniJSON_Json_Parser_779981752.h"

// System.Void MiniJSON.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m959762026_0 (Parser_t_1909052482_0 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C"  bool Parser_IsWordBreak_m_1005521768_0 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSON.Json/Parser::Parse(System.String)
extern "C"  Object_t * Parser_Parse_m373709422_0 (Object_t * __this /* static, unused */, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m_1505735211_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> MiniJSON.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t_1418732973_0 * Parser_ParseObject_m263999556_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> MiniJSON.Json/Parser::ParseArray()
extern "C"  List_1_t_1639587984_0 * Parser_ParseArray_m_2136518119_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSON.Json/Parser::ParseValue()
extern "C"  Object_t * Parser_ParseValue_m1978894815_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSON.Json/Parser::ParseByToken(MiniJSON.Json/Parser/TOKEN)
extern "C"  Object_t * Parser_ParseByToken_m_709219633_0 (Parser_t_1909052482_0 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJSON.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m341559959_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSON.Json/Parser::ParseNumber()
extern "C"  Object_t * Parser_ParseNumber_m739974141_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m_1787491733_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char MiniJSON.Json/Parser::get_PeekChar()
extern "C"  uint16_t Parser_get_PeekChar_m_254513468_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char MiniJSON.Json/Parser::get_NextChar()
extern "C"  uint16_t Parser_get_NextChar_m_1710229924_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJSON.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m1317052213_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MiniJSON.Json/Parser/TOKEN MiniJSON.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m_285462289_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
