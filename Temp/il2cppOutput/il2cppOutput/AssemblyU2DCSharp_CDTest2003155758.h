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
// System.Collections.Generic.List`1<System.Object>
struct List_1_t_1639587984_0;

#include "mscorlib_System_Attribute675283329.h"
#include "AssemblyU2DCSharp_Assert1990226433.h"
#include "AssemblyU2DCSharp_UnityVersion_411449826.h"

// CDTest
struct  CDTest_t2003155758_0  : public Attribute_t675283329_0
{
	// Assert CDTest::compareType
	int32_t ___compareType_0;
	// System.String CDTest::title
	String_t* ___title_1;
	// System.Collections.Generic.List`1<System.Object> CDTest::expectedResult
	List_1_t_1639587984_0 * ___expectedResult_2;
	// System.String CDTest::testrail_CaseNumber
	String_t* ___testrail_CaseNumber_3;
	// UnityVersion CDTest::unityVersion
	int32_t ___unityVersion_4;
};
