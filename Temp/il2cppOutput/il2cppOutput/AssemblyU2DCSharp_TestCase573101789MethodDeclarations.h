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

// TestCase
struct TestCase_t573101789_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_818288618.h"

// System.Void TestCase::.ctor()
extern "C"  void TestCase__ctor_m_819297831_0 (TestCase_t573101789_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestCase::.ctor(System.String,System.Boolean,System.String,System.DateTime,System.String)
extern "C"  void TestCase__ctor_m843922814_0 (TestCase_t573101789_0 * __this, String_t* ___descitpion, bool ___result, String_t* ___failReason, DateTime_t_818288618_0  ___date, String_t* ___caseLink, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TestCase::getFailReason()
extern "C"  String_t* TestCase_getFailReason_m_1165517492_0 (TestCase_t573101789_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TestCase::getResult()
extern "C"  bool TestCase_getResult_m_1240281034_0 (TestCase_t573101789_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TestCase::getDescitpion()
extern "C"  String_t* TestCase_getDescitpion_m_621680418_0 (TestCase_t573101789_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime TestCase::getDate()
extern "C"  DateTime_t_818288618_0  TestCase_getDate_m1530962754_0 (TestCase_t573101789_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TestCase::getCaseLink()
extern "C"  String_t* TestCase_getCaseLink_m_113505836_0 (TestCase_t573101789_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
