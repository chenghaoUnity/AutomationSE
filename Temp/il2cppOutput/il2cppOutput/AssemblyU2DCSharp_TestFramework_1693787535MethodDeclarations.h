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

// TestFramework
struct TestFramework_t_1693787535_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// System.Action`1<System.Single>
struct Action_1_t843921128_0;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t_1639587984_0;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityVersion_411449826.h"

// System.Void TestFramework::.ctor()
extern "C"  void TestFramework__ctor_m1645164927_0 (TestFramework_t_1693787535_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestFramework::Start()
extern "C"  void TestFramework_Start_m592302719_0 (TestFramework_t_1693787535_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TestFramework::StartTest()
extern "C"  Object_t * TestFramework_StartTest_m901966841_0 (TestFramework_t_1693787535_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TestFramework::TimedoutTimer(System.Action`1<System.Single>)
extern "C"  Object_t * TestFramework_TimedoutTimer_m_1568065786_0 (TestFramework_t_1693787535_0 * __this, Action_1_t843921128_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TestFramework::ConvertToString(System.Collections.Generic.List`1<System.Object>)
extern "C"  String_t* TestFramework_ConvertToString_m_1587970783_0 (TestFramework_t_1693787535_0 * __this, List_1_t_1639587984_0 * ___Result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TestFramework::isCurrentUnityVersionSupported(UnityVersion)
extern "C"  bool TestFramework_isCurrentUnityVersionSupported_m1093254090_0 (TestFramework_t_1693787535_0 * __this, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestFramework::PushBranch(System.String)
extern "C"  void TestFramework_PushBranch_m_797506207_0 (TestFramework_t_1693787535_0 * __this, String_t* ___BranchInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestFramework::PushScreen(System.String)
extern "C"  void TestFramework_PushScreen_m_1106100905_0 (TestFramework_t_1693787535_0 * __this, String_t* ___Content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TestFramework::PassTest(System.Boolean)
extern "C"  bool TestFramework_PassTest_m1149250475_0 (TestFramework_t_1693787535_0 * __this, bool ___Test, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TestFramework::VerifyServerPayload(System.String,System.Collections.Generic.List`1<System.Object>)
extern "C"  bool TestFramework_VerifyServerPayload_m1173950729_0 (TestFramework_t_1693787535_0 * __this, String_t* ___JsonString, List_1_t_1639587984_0 * ___expectedResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
