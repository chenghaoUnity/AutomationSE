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

// JsonNetwork
struct JsonNetwork_t1175465547_0;
// System.String
struct String_t;
// System.Action`1<System.String>
struct Action_1_t1162597439_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// TestCase
struct TestCase_t573101789_0;

#include "codegen/il2cpp-codegen.h"

// System.Void JsonNetwork::.ctor()
extern "C"  void JsonNetwork__ctor_m_1279899099_0 (JsonNetwork_t1175465547_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JsonNetwork JsonNetwork::GetInstance()
extern "C"  JsonNetwork_t1175465547_0 * JsonNetwork_GetInstance_m_1774510309_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonNetwork::RunServerCommand(System.String,System.Action`1<System.String>)
extern "C"  void JsonNetwork_RunServerCommand_m_1513652132_0 (JsonNetwork_t1175465547_0 * __this, String_t* ___methodName, Action_1_t1162597439_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonNetwork::PostServerCommand(System.String,System.String,System.Action`1<System.String>)
extern "C"  void JsonNetwork_PostServerCommand_m_206883217_0 (JsonNetwork_t1175465547_0 * __this, String_t* ___methodName, String_t* ___Post, Action_1_t1162597439_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator JsonNetwork::GetText(System.String,System.Action`1<System.String>)
extern "C"  Object_t * JsonNetwork_GetText_m_1576512178_0 (JsonNetwork_t1175465547_0 * __this, String_t* ___methodName, Action_1_t1162597439_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator JsonNetwork::PostText(System.String,System.String,System.Action`1<System.String>)
extern "C"  Object_t * JsonNetwork_PostText_m_2127511544_0 (JsonNetwork_t1175465547_0 * __this, String_t* ___methodName, String_t* ___POST, Action_1_t1162597439_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonNetwork::PushResultToServer(System.String,TestCase)
extern "C"  void JsonNetwork_PushResultToServer_m_1395684266_0 (JsonNetwork_t1175465547_0 * __this, String_t* ___BranchInfo, TestCase_t573101789_0 * ___testCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator JsonNetwork::PUT(System.String,System.String)
extern "C"  Object_t * JsonNetwork_PUT_m283973668_0 (JsonNetwork_t1175465547_0 * __this, String_t* ___url, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
