#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

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
// MiniJSON.Json/Serializer
struct Serializer_t26705329_0;
// System.Collections.IDictionary
struct IDictionary_t_1514320629_0;
// System.Collections.IList
struct IList_t_1078834989_0;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1621492670.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E_998901731.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E_998901731MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MiniJSON_Json_Parser_779981752.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MiniJSON_Json_Parser_779981752MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MiniJSON_Json_Parse_1909052482.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MiniJSON_Json_Parse_1909052482MethodDeclarations.h"
#include "mscorlib_System_Void_224166001.h"
#include "mscorlib_System_String_756155572.h"
#include "mscorlib_System_Object_887538054MethodDeclarations.h"
#include "mscorlib_System_IO_StringReader_849692831MethodDeclarations.h"
#include "mscorlib_System_Object_887538054.h"
#include "mscorlib_System_IO_StringReader_849692831.h"
#include "mscorlib_System_Boolean_19515315.h"
#include "mscorlib_System_Char_224738991.h"
#include "mscorlib_System_Char_224738991MethodDeclarations.h"
#include "mscorlib_System_String_756155572MethodDeclarations.h"
#include "mscorlib_System_Int321628762099.h"
#include "mscorlib_System_IO_TextReader1262698173.h"
#include "mscorlib_System_IO_TextReader1262698173MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2__1418732973.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2__1418732973MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_1639587984.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_1639587984MethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilder586045924MethodDeclarations.h"
#include "mscorlib_System_Convert867363288MethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilder586045924.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Int641628762194MethodDeclarations.h"
#include "mscorlib_System_Double_1190127860MethodDeclarations.h"
#include "mscorlib_System_Int641628762194.h"
#include "mscorlib_System_Double_1190127860.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2__1305703446MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2__1305703446.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MiniJSON_Json_Serializ26705329.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MiniJSON_Json_Serializ26705329MethodDeclarations.h"
#include "mscorlib_System_Int321628762099MethodDeclarations.h"
#include "mscorlib_System_Single_766435453MethodDeclarations.h"
#include "mscorlib_System_Single_766435453.h"
#include "mscorlib_System_UInt32_738719148.h"
#include "mscorlib_System_SByte1636693376.h"
#include "mscorlib_System_Byte_224751869.h"
#include "mscorlib_System_Int161628762041.h"
#include "mscorlib_System_UInt16_738719206.h"
#include "mscorlib_System_UInt64_738719053.h"
#include "mscorlib_System_Decimal1458036598.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MiniJSON_Json_2073976976.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MiniJSON_Json_2073976976MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MiniJSON.Json/Parser::.ctor(System.String)
extern TypeInfo* StringReader_t_849692831_0_il2cpp_TypeInfo_var;
extern "C"  void Parser__ctor_m959762026_0 (Parser_t_1909052482_0 * __this, String_t* ___jsonString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringReader_t_849692831_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1772956182_0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___jsonString;
		StringReader_t_849692831_0 * L_1 = (StringReader_t_849692831_0 *)il2cpp_codegen_object_new (StringReader_t_849692831_0_il2cpp_TypeInfo_var);
		StringReader__ctor_m1181104909_0(L_1, L_0, /*hidden argument*/NULL);
		__this->___json_1 = L_1;
		return;
	}
}
// System.Boolean MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern TypeInfo* Char_t_224738991_0_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1159302032_0;
extern "C"  bool Parser_IsWordBreak_m_1005521768_0 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t_224738991_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		_stringLiteral1159302032_0 = il2cpp_codegen_string_literal_from_index(4956);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		uint16_t L_0 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t_224738991_0_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsWhiteSpace_m_1549651341_0(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		uint16_t L_2 = ___c;
		NullCheck(_stringLiteral1159302032_0);
		int32_t L_3 = String_IndexOf_m_1519756810_0(_stringLiteral1159302032_0, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return (bool)G_B3_0;
	}
}
// System.Object MiniJSON.Json/Parser::Parse(System.String)
extern TypeInfo* Parser_t_1909052482_0_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t_2098447282_0_il2cpp_TypeInfo_var;
extern "C"  Object_t * Parser_Parse_m373709422_0 (Object_t * __this /* static, unused */, String_t* ___jsonString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Parser_t_1909052482_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1918);
		IDisposable_t_2098447282_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(136);
		s_Il2CppMethodIntialized = true;
	}
	Parser_t_1909052482_0 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t2143823668_0 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t2143823668_0 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___jsonString;
		Parser_t_1909052482_0 * L_1 = (Parser_t_1909052482_0 *)il2cpp_codegen_object_new (Parser_t_1909052482_0_il2cpp_TypeInfo_var);
		Parser__ctor_m959762026_0(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			Parser_t_1909052482_0 * L_2 = V_0;
			NullCheck(L_2);
			Object_t * L_3 = Parser_ParseValue_m1978894815_0(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			IL2CPP_LEAVE(0x25, FINALLY_0018);
		}

IL_0013:
		{
			; // IL_0013: leave IL_0025
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t2143823668_0 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		{
			Parser_t_1909052482_0 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0024;
			}
		}

IL_001e:
		{
			Parser_t_1909052482_0 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t_2098447282_0_il2cpp_TypeInfo_var, L_5);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(24)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t2143823668_0 *)
	}

IL_0025:
	{
		Object_t * L_6 = V_1;
		return L_6;
	}
}
// System.Void MiniJSON.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m_1505735211_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method)
{
	{
		StringReader_t_849692831_0 * L_0 = (__this->___json_1);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void System.IO.TextReader::Dispose() */, L_0);
		__this->___json_1 = (StringReader_t_849692831_0 *)NULL;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> MiniJSON.Json/Parser::ParseObject()
extern TypeInfo* Dictionary_2_t_1418732973_0_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m_1065617629_0_MethodInfo_var;
extern "C"  Dictionary_2_t_1418732973_0 * Parser_ParseObject_m263999556_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t_1418732973_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1590);
		Dictionary_2__ctor_m_1065617629_0_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483778);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t_1418732973_0 * V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = {0};
	{
		Dictionary_2_t_1418732973_0 * L_0 = (Dictionary_2_t_1418732973_0 *)il2cpp_codegen_object_new (Dictionary_2_t_1418732973_0_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m_1065617629_0(L_0, /*hidden argument*/Dictionary_2__ctor_m_1065617629_0_MethodInfo_var);
		V_0 = L_0;
		StringReader_t_849692831_0 * L_1 = (__this->___json_1);
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.StringReader::Read() */, L_1);
	}

IL_0012:
	{
		int32_t L_2 = Parser_get_NextToken_m_285462289_0(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		if (L_3 == 0)
		{
			goto IL_0037;
		}
		if (L_3 == 1)
		{
			goto IL_002b;
		}
		if (L_3 == 2)
		{
			goto IL_003e;
		}
	}

IL_002b:
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)6)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0040;
	}

IL_0037:
	{
		return (Dictionary_2_t_1418732973_0 *)NULL;
	}

IL_0039:
	{
		goto IL_0012;
	}

IL_003e:
	{
		Dictionary_2_t_1418732973_0 * L_5 = V_0;
		return L_5;
	}

IL_0040:
	{
		String_t* L_6 = Parser_ParseString_m341559959_0(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		String_t* L_7 = V_1;
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		return (Dictionary_2_t_1418732973_0 *)NULL;
	}

IL_004f:
	{
		int32_t L_8 = Parser_get_NextToken_m_285462289_0(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)5)))
		{
			goto IL_005d;
		}
	}
	{
		return (Dictionary_2_t_1418732973_0 *)NULL;
	}

IL_005d:
	{
		StringReader_t_849692831_0 * L_9 = (__this->___json_1);
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.StringReader::Read() */, L_9);
		Dictionary_2_t_1418732973_0 * L_10 = V_0;
		String_t* L_11 = V_1;
		Object_t * L_12 = Parser_ParseValue_m1978894815_0(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_10, L_11, L_12);
		goto IL_007b;
	}

IL_007b:
	{
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> MiniJSON.Json/Parser::ParseArray()
extern TypeInfo* List_1_t_1639587984_0_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m_1195202010_0_MethodInfo_var;
extern "C"  List_1_t_1639587984_0 * Parser_ParseArray_m_2136518119_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t_1639587984_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1589);
		List_1__ctor_m_1195202010_0_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483777);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t_1639587984_0 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	Object_t * V_3 = {0};
	int32_t V_4 = {0};
	{
		List_1_t_1639587984_0 * L_0 = (List_1_t_1639587984_0 *)il2cpp_codegen_object_new (List_1_t_1639587984_0_il2cpp_TypeInfo_var);
		List_1__ctor_m_1195202010_0(L_0, /*hidden argument*/List_1__ctor_m_1195202010_0_MethodInfo_var);
		V_0 = L_0;
		StringReader_t_849692831_0 * L_1 = (__this->___json_1);
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.StringReader::Read() */, L_1);
		V_1 = (bool)1;
		goto IL_0066;
	}

IL_0019:
	{
		int32_t L_2 = Parser_get_NextToken_m_285462289_0(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		V_4 = L_3;
		int32_t L_4 = V_4;
		if (((int32_t)((int32_t)L_4-(int32_t)4)) == 0)
		{
			goto IL_004b;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)4)) == 1)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)4)) == 2)
		{
			goto IL_0046;
		}
	}

IL_0038:
	{
		int32_t L_5 = V_4;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		goto IL_0052;
	}

IL_0044:
	{
		return (List_1_t_1639587984_0 *)NULL;
	}

IL_0046:
	{
		goto IL_0066;
	}

IL_004b:
	{
		V_1 = (bool)0;
		goto IL_0066;
	}

IL_0052:
	{
		int32_t L_6 = V_2;
		Object_t * L_7 = Parser_ParseByToken_m_709219633_0(__this, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		List_1_t_1639587984_0 * L_8 = V_0;
		Object_t * L_9 = V_3;
		NullCheck(L_8);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_8, L_9);
		goto IL_0066;
	}

IL_0066:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t_1639587984_0 * L_11 = V_0;
		return L_11;
	}
}
// System.Object MiniJSON.Json/Parser::ParseValue()
extern "C"  Object_t * Parser_ParseValue_m1978894815_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = Parser_get_NextToken_m_285462289_0(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		Object_t * L_2 = Parser_ParseByToken_m_709219633_0(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object MiniJSON.Json/Parser::ParseByToken(MiniJSON.Json/Parser/TOKEN)
extern TypeInfo* Boolean_t_19515315_0_il2cpp_TypeInfo_var;
extern "C"  Object_t * Parser_ParseByToken_m_709219633_0 (Parser_t_1909052482_0 * __this, int32_t ___token, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t_19515315_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___token;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0049;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0067;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_0067;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_0067;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_0067;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_0042;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 8)
		{
			goto IL_0057;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 9)
		{
			goto IL_005e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 10)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0067;
	}

IL_003b:
	{
		String_t* L_2 = Parser_ParseString_m341559959_0(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0042:
	{
		Object_t * L_3 = Parser_ParseNumber_m739974141_0(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_0049:
	{
		Dictionary_2_t_1418732973_0 * L_4 = Parser_ParseObject_m263999556_0(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0050:
	{
		List_1_t_1639587984_0 * L_5 = Parser_ParseArray_m_2136518119_0(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_0057:
	{
		bool L_6 = ((bool)1);
		Object_t * L_7 = Box(Boolean_t_19515315_0_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_005e:
	{
		bool L_8 = ((bool)0);
		Object_t * L_9 = Box(Boolean_t_19515315_0_il2cpp_TypeInfo_var, &L_8);
		return L_9;
	}

IL_0065:
	{
		return NULL;
	}

IL_0067:
	{
		return NULL;
	}
}
// System.String MiniJSON.Json/Parser::ParseString()
extern TypeInfo* StringBuilder_t586045924_0_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t_1225802637_0_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t867363288_0_il2cpp_TypeInfo_var;
extern "C"  String_t* Parser_ParseString_m341559959_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t586045924_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		CharU5BU5D_t_1225802637_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Convert_t867363288_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t586045924_0 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t_1225802637_0* V_3 = {0};
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	uint16_t V_6 = 0x0;
	{
		StringBuilder_t586045924_0 * L_0 = (StringBuilder_t586045924_0 *)il2cpp_codegen_object_new (StringBuilder_t586045924_0_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m135953004_0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringReader_t_849692831_0 * L_1 = (__this->___json_1);
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.StringReader::Read() */, L_1);
		V_2 = (bool)1;
		goto IL_017c;
	}

IL_0019:
	{
		StringReader_t_849692831_0 * L_2 = (__this->___json_1);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.StringReader::Peek() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0182;
	}

IL_0031:
	{
		uint16_t L_4 = Parser_get_NextChar_m_1710229924_0(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		uint16_t L_5 = V_1;
		V_5 = L_5;
		uint16_t L_6 = V_5;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0052;
		}
	}
	{
		uint16_t L_7 = V_5;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_0059;
		}
	}
	{
		goto IL_016f;
	}

IL_0052:
	{
		V_2 = (bool)0;
		goto IL_017c;
	}

IL_0059:
	{
		StringReader_t_849692831_0 * L_8 = (__this->___json_1);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.StringReader::Peek() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0071;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_017c;
	}

IL_0071:
	{
		uint16_t L_10 = Parser_get_NextChar_m_1710229924_0(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		uint16_t L_11 = V_1;
		V_6 = L_11;
		uint16_t L_12 = V_6;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 0)
		{
			goto IL_00ff;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 1)
		{
			goto IL_00a5;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 2)
		{
			goto IL_00a5;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 3)
		{
			goto IL_00a5;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 4)
		{
			goto IL_010d;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 5)
		{
			goto IL_00a5;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 6)
		{
			goto IL_011b;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 7)
		{
			goto IL_0129;
		}
	}

IL_00a5:
	{
		uint16_t L_13 = V_6;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)34))))
		{
			goto IL_00d7;
		}
	}
	{
		uint16_t L_14 = V_6;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)47))))
		{
			goto IL_00d7;
		}
	}
	{
		uint16_t L_15 = V_6;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)92))))
		{
			goto IL_00d7;
		}
	}
	{
		uint16_t L_16 = V_6;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)98))))
		{
			goto IL_00e4;
		}
	}
	{
		uint16_t L_17 = V_6;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)102))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_016a;
	}

IL_00d7:
	{
		StringBuilder_t586045924_0 * L_18 = V_0;
		uint16_t L_19 = V_1;
		NullCheck(L_18);
		StringBuilder_Append_m2143093878_0(L_18, L_19, /*hidden argument*/NULL);
		goto IL_016a;
	}

IL_00e4:
	{
		StringBuilder_t586045924_0 * L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_Append_m2143093878_0(L_20, 8, /*hidden argument*/NULL);
		goto IL_016a;
	}

IL_00f1:
	{
		StringBuilder_t586045924_0 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m2143093878_0(L_21, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_016a;
	}

IL_00ff:
	{
		StringBuilder_t586045924_0 * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m2143093878_0(L_22, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_016a;
	}

IL_010d:
	{
		StringBuilder_t586045924_0 * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_m2143093878_0(L_23, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_016a;
	}

IL_011b:
	{
		StringBuilder_t586045924_0 * L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_Append_m2143093878_0(L_24, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_016a;
	}

IL_0129:
	{
		V_3 = ((CharU5BU5D_t_1225802637_0*)SZArrayNew(CharU5BU5D_t_1225802637_0_il2cpp_TypeInfo_var, (uint32_t)4));
		V_4 = 0;
		goto IL_0148;
	}

IL_0138:
	{
		CharU5BU5D_t_1225802637_0* L_25 = V_3;
		int32_t L_26 = V_4;
		uint16_t L_27 = Parser_get_NextChar_m_1710229924_0(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_25, L_26, sizeof(uint16_t))) = (uint16_t)L_27;
		int32_t L_28 = V_4;
		V_4 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_0148:
	{
		int32_t L_29 = V_4;
		if ((((int32_t)L_29) < ((int32_t)4)))
		{
			goto IL_0138;
		}
	}
	{
		StringBuilder_t586045924_0 * L_30 = V_0;
		CharU5BU5D_t_1225802637_0* L_31 = V_3;
		String_t* L_32 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_32 = String_CreateString_m578950865_0(L_32, L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t867363288_0_il2cpp_TypeInfo_var);
		int32_t L_33 = Convert_ToInt32_m_1649531480_0(NULL /*static, unused*/, L_32, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m2143093878_0(L_30, (((int32_t)((uint16_t)L_33))), /*hidden argument*/NULL);
		goto IL_016a;
	}

IL_016a:
	{
		goto IL_017c;
	}

IL_016f:
	{
		StringBuilder_t586045924_0 * L_34 = V_0;
		uint16_t L_35 = V_1;
		NullCheck(L_34);
		StringBuilder_Append_m2143093878_0(L_34, L_35, /*hidden argument*/NULL);
		goto IL_017c;
	}

IL_017c:
	{
		bool L_36 = V_2;
		if (L_36)
		{
			goto IL_0019;
		}
	}

IL_0182:
	{
		StringBuilder_t586045924_0 * L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38 = StringBuilder_ToString_m350379841_0(L_37, /*hidden argument*/NULL);
		return L_38;
	}
}
// System.Object MiniJSON.Json/Parser::ParseNumber()
extern TypeInfo* Int64_t1628762194_0_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t_1190127860_0_il2cpp_TypeInfo_var;
extern "C"  Object_t * Parser_ParseNumber_m739974141_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t1628762194_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		Double_t_1190127860_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int64_t V_1 = 0;
	double V_2 = 0.0;
	{
		String_t* L_0 = Parser_get_NextWord_m1317052213_0(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_m_1519756810_0(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_0;
		Int64_TryParse_m2106581948_0(NULL /*static, unused*/, L_3, (&V_1), /*hidden argument*/NULL);
		int64_t L_4 = V_1;
		int64_t L_5 = L_4;
		Object_t * L_6 = Box(Int64_t1628762194_0_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0025:
	{
		String_t* L_7 = V_0;
		Double_TryParse_m_1585024764_0(NULL /*static, unused*/, L_7, (&V_2), /*hidden argument*/NULL);
		double L_8 = V_2;
		double L_9 = L_8;
		Object_t * L_10 = Box(Double_t_1190127860_0_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}
}
// System.Void MiniJSON.Json/Parser::EatWhitespace()
extern TypeInfo* Char_t_224738991_0_il2cpp_TypeInfo_var;
extern "C"  void Parser_EatWhitespace_m_1787491733_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t_224738991_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		goto IL_0027;
	}

IL_0005:
	{
		StringReader_t_849692831_0 * L_0 = (__this->___json_1);
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.StringReader::Read() */, L_0);
		StringReader_t_849692831_0 * L_1 = (__this->___json_1);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.StringReader::Peek() */, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0037;
	}

IL_0027:
	{
		uint16_t L_3 = Parser_get_PeekChar_m_254513468_0(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t_224738991_0_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsWhiteSpace_m_1549651341_0(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0005;
		}
	}

IL_0037:
	{
		return;
	}
}
// System.Char MiniJSON.Json/Parser::get_PeekChar()
extern TypeInfo* Convert_t867363288_0_il2cpp_TypeInfo_var;
extern "C"  uint16_t Parser_get_PeekChar_m_254513468_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t867363288_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringReader_t_849692831_0 * L_0 = (__this->___json_1);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.StringReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t867363288_0_il2cpp_TypeInfo_var);
		uint16_t L_2 = Convert_ToChar_m353236550_0(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char MiniJSON.Json/Parser::get_NextChar()
extern TypeInfo* Convert_t867363288_0_il2cpp_TypeInfo_var;
extern "C"  uint16_t Parser_get_NextChar_m_1710229924_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t867363288_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringReader_t_849692831_0 * L_0 = (__this->___json_1);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.StringReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t867363288_0_il2cpp_TypeInfo_var);
		uint16_t L_2 = Convert_ToChar_m353236550_0(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String MiniJSON.Json/Parser::get_NextWord()
extern TypeInfo* StringBuilder_t586045924_0_il2cpp_TypeInfo_var;
extern "C"  String_t* Parser_get_NextWord_m1317052213_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t586045924_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t586045924_0 * V_0 = {0};
	{
		StringBuilder_t586045924_0 * L_0 = (StringBuilder_t586045924_0 *)il2cpp_codegen_object_new (StringBuilder_t586045924_0_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m135953004_0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_002e;
	}

IL_000b:
	{
		StringBuilder_t586045924_0 * L_1 = V_0;
		uint16_t L_2 = Parser_get_NextChar_m_1710229924_0(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m2143093878_0(L_1, L_2, /*hidden argument*/NULL);
		StringReader_t_849692831_0 * L_3 = (__this->___json_1);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.StringReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_003e;
	}

IL_002e:
	{
		uint16_t L_5 = Parser_get_PeekChar_m_254513468_0(__this, /*hidden argument*/NULL);
		bool L_6 = Parser_IsWordBreak_m_1005521768_0(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_000b;
		}
	}

IL_003e:
	{
		StringBuilder_t586045924_0 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = StringBuilder_ToString_m350379841_0(L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// MiniJSON.Json/Parser/TOKEN MiniJSON.Json/Parser::get_NextToken()
extern TypeInfo* Parser_t_1909052482_0_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t_1305703446_0_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1958628151_0_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral97196323_0;
extern Il2CppCodeGenString* _stringLiteral3569038_0;
extern Il2CppCodeGenString* _stringLiteral3392903_0;
extern "C"  int32_t Parser_get_NextToken_m_285462289_0 (Parser_t_1909052482_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Parser_t_1909052482_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1918);
		Dictionary_2_t_1305703446_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(119);
		Dictionary_2__ctor_m1958628151_0_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		_stringLiteral97196323_0 = il2cpp_codegen_string_literal_from_index(2825);
		_stringLiteral3569038_0 = il2cpp_codegen_string_literal_from_index(1673);
		_stringLiteral3392903_0 = il2cpp_codegen_string_literal_from_index(3563);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	String_t* V_1 = {0};
	Dictionary_2_t_1305703446_0 * V_2 = {0};
	int32_t V_3 = 0;
	{
		Parser_EatWhitespace_m_1787491733_0(__this, /*hidden argument*/NULL);
		StringReader_t_849692831_0 * L_0 = (__this->___json_1);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.StringReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0019;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0019:
	{
		uint16_t L_2 = Parser_get_PeekChar_m_254513468_0(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		uint16_t L_3 = V_0;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00ea;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 6)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 7)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 8)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 9)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 10)
		{
			goto IL_00dc;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 11)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 12)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 13)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 14)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 15)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 16)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 17)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 18)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 19)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 20)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 21)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 22)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 23)
		{
			goto IL_00ee;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)34))) == 24)
		{
			goto IL_00ec;
		}
	}

IL_008d:
	{
		uint16_t L_4 = V_0;
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00cc;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_00a2;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00ce;
		}
	}

IL_00a2:
	{
		uint16_t L_5 = V_0;
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00f0;
	}

IL_00bc:
	{
		return (int32_t)(1);
	}

IL_00be:
	{
		StringReader_t_849692831_0 * L_6 = (__this->___json_1);
		NullCheck(L_6);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.StringReader::Read() */, L_6);
		return (int32_t)(2);
	}

IL_00cc:
	{
		return (int32_t)(3);
	}

IL_00ce:
	{
		StringReader_t_849692831_0 * L_7 = (__this->___json_1);
		NullCheck(L_7);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.StringReader::Read() */, L_7);
		return (int32_t)(4);
	}

IL_00dc:
	{
		StringReader_t_849692831_0 * L_8 = (__this->___json_1);
		NullCheck(L_8);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.StringReader::Read() */, L_8);
		return (int32_t)(6);
	}

IL_00ea:
	{
		return (int32_t)(7);
	}

IL_00ec:
	{
		return (int32_t)(5);
	}

IL_00ee:
	{
		return (int32_t)(8);
	}

IL_00f0:
	{
		String_t* L_9 = Parser_get_NextWord_m1317052213_0(__this, /*hidden argument*/NULL);
		V_1 = L_9;
		String_t* L_10 = V_1;
		if (!L_10)
		{
			goto IL_016a;
		}
	}
	{
		Dictionary_2_t_1305703446_0 * L_11 = ((Parser_t_1909052482_0_StaticFields*)Parser_t_1909052482_0_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_2;
		if (L_11)
		{
			goto IL_0138;
		}
	}
	{
		Dictionary_2_t_1305703446_0 * L_12 = (Dictionary_2_t_1305703446_0 *)il2cpp_codegen_object_new (Dictionary_2_t_1305703446_0_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1958628151_0(L_12, 3, /*hidden argument*/Dictionary_2__ctor_m1958628151_0_MethodInfo_var);
		V_2 = L_12;
		Dictionary_2_t_1305703446_0 * L_13 = V_2;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_13, _stringLiteral97196323_0, 0);
		Dictionary_2_t_1305703446_0 * L_14 = V_2;
		NullCheck(L_14);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_14, _stringLiteral3569038_0, 1);
		Dictionary_2_t_1305703446_0 * L_15 = V_2;
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_15, _stringLiteral3392903_0, 2);
		Dictionary_2_t_1305703446_0 * L_16 = V_2;
		((Parser_t_1909052482_0_StaticFields*)Parser_t_1909052482_0_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_2 = L_16;
	}

IL_0138:
	{
		Dictionary_2_t_1305703446_0 * L_17 = ((Parser_t_1909052482_0_StaticFields*)Parser_t_1909052482_0_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_2;
		String_t* L_18 = V_1;
		NullCheck(L_17);
		bool L_19 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_17, L_18, (&V_3));
		if (!L_19)
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_20 = V_3;
		if (L_20 == 0)
		{
			goto IL_0161;
		}
		if (L_20 == 1)
		{
			goto IL_0164;
		}
		if (L_20 == 2)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_016a;
	}

IL_0161:
	{
		return (int32_t)(((int32_t)10));
	}

IL_0164:
	{
		return (int32_t)(((int32_t)9));
	}

IL_0167:
	{
		return (int32_t)(((int32_t)11));
	}

IL_016a:
	{
		return (int32_t)(0);
	}
}
// System.Void MiniJSON.Json/Serializer::.ctor()
extern TypeInfo* StringBuilder_t586045924_0_il2cpp_TypeInfo_var;
extern "C"  void Serializer__ctor_m425022853_0 (Serializer_t26705329_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t586045924_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1772956182_0(__this, /*hidden argument*/NULL);
		StringBuilder_t586045924_0 * L_0 = (StringBuilder_t586045924_0 *)il2cpp_codegen_object_new (StringBuilder_t586045924_0_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m135953004_0(L_0, /*hidden argument*/NULL);
		__this->___builder_0 = L_0;
		return;
	}
}
// System.String MiniJSON.Json/Serializer::Serialize(System.Object)
extern TypeInfo* Serializer_t26705329_0_il2cpp_TypeInfo_var;
extern "C"  String_t* Serializer_Serialize_m_1920848300_0 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Serializer_t26705329_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1919);
		s_Il2CppMethodIntialized = true;
	}
	Serializer_t26705329_0 * V_0 = {0};
	{
		Serializer_t26705329_0 * L_0 = (Serializer_t26705329_0 *)il2cpp_codegen_object_new (Serializer_t26705329_0_il2cpp_TypeInfo_var);
		Serializer__ctor_m425022853_0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Serializer_t26705329_0 * L_1 = V_0;
		Object_t * L_2 = ___obj;
		NullCheck(L_1);
		Serializer_SerializeValue_m124993476_0(L_1, L_2, /*hidden argument*/NULL);
		Serializer_t26705329_0 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t586045924_0 * L_4 = (L_3->___builder_0);
		NullCheck(L_4);
		String_t* L_5 = StringBuilder_ToString_m350379841_0(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t_19515315_0_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t_1078834989_0_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t_1514320629_0_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t_224738991_0_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3392903_0;
extern Il2CppCodeGenString* _stringLiteral3569038_0;
extern Il2CppCodeGenString* _stringLiteral97196323_0;
extern "C"  void Serializer_SerializeValue_m124993476_0 (Serializer_t26705329_0 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Boolean_t_19515315_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		IList_t_1078834989_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(70);
		IDictionary_t_1514320629_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		Char_t_224738991_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		_stringLiteral3392903_0 = il2cpp_codegen_string_literal_from_index(3563);
		_stringLiteral3569038_0 = il2cpp_codegen_string_literal_from_index(1673);
		_stringLiteral97196323_0 = il2cpp_codegen_string_literal_from_index(2825);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	String_t* V_2 = {0};
	StringBuilder_t586045924_0 * G_B7_0 = {0};
	StringBuilder_t586045924_0 * G_B6_0 = {0};
	String_t* G_B8_0 = {0};
	StringBuilder_t586045924_0 * G_B8_1 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t586045924_0 * L_1 = (__this->___builder_0);
		NullCheck(L_1);
		StringBuilder_Append_m_396877221_0(L_1, _stringLiteral3392903_0, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_001c:
	{
		Object_t * L_2 = ___value;
		String_t* L_3 = ((String_t*)IsInstSealed(L_2, String_t_il2cpp_TypeInfo_var));
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_4 = V_2;
		Serializer_SerializeString_m_16455538_0(__this, L_4, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_0035:
	{
		Object_t * L_5 = ___value;
		if (!((Object_t *)IsInstSealed(L_5, Boolean_t_19515315_0_il2cpp_TypeInfo_var)))
		{
			goto IL_006b;
		}
	}
	{
		StringBuilder_t586045924_0 * L_6 = (__this->___builder_0);
		Object_t * L_7 = ___value;
		G_B6_0 = L_6;
		if (!((*(bool*)((bool*)UnBox (L_7, Boolean_t_19515315_0_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_6;
			goto IL_005b;
		}
	}
	{
		G_B8_0 = _stringLiteral3569038_0;
		G_B8_1 = G_B6_0;
		goto IL_0060;
	}

IL_005b:
	{
		G_B8_0 = _stringLiteral97196323_0;
		G_B8_1 = G_B7_0;
	}

IL_0060:
	{
		NullCheck(G_B8_1);
		StringBuilder_Append_m_396877221_0(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_006b:
	{
		Object_t * L_8 = ___value;
		Object_t * L_9 = ((Object_t *)IsInst(L_8, IList_t_1078834989_0_il2cpp_TypeInfo_var));
		V_0 = L_9;
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		Object_t * L_10 = V_0;
		Serializer_SerializeArray_m472320681_0(__this, L_10, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_0084:
	{
		Object_t * L_11 = ___value;
		Object_t * L_12 = ((Object_t *)IsInst(L_11, IDictionary_t_1514320629_0_il2cpp_TypeInfo_var));
		V_1 = L_12;
		if (!L_12)
		{
			goto IL_009d;
		}
	}
	{
		Object_t * L_13 = V_1;
		Serializer_SerializeObject_m_286560869_0(__this, L_13, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_009d:
	{
		Object_t * L_14 = ___value;
		if (!((Object_t *)IsInstSealed(L_14, Char_t_224738991_0_il2cpp_TypeInfo_var)))
		{
			goto IL_00bf;
		}
	}
	{
		Object_t * L_15 = ___value;
		String_t* L_16 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_16 = String_CreateString_m356585284_0(L_16, ((*(uint16_t*)((uint16_t*)UnBox (L_15, Char_t_224738991_0_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_m_16455538_0(__this, L_16, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_00bf:
	{
		Object_t * L_17 = ___value;
		Serializer_SerializeOther_m1294893125_0(__this, L_17, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		return;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern TypeInfo* IDictionary_t_1514320629_0_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t1412919357_0_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t1412936761_0_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t_2098447282_0_il2cpp_TypeInfo_var;
extern "C"  void Serializer_SerializeObject_m_286560869_0 (Serializer_t26705329_0 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t_1514320629_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		IEnumerable_t1412919357_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		IEnumerator_t1412936761_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		IDisposable_t_2098447282_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(136);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t2143823668_0 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t2143823668_0 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		StringBuilder_t586045924_0 * L_0 = (__this->___builder_0);
		NullCheck(L_0);
		StringBuilder_Append_m2143093878_0(L_0, ((int32_t)123), /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t_1514320629_0_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1412919357_0_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0065;
		}

IL_0021:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1412936761_0_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_003c;
			}
		}

IL_002e:
		{
			StringBuilder_t586045924_0 * L_7 = (__this->___builder_0);
			NullCheck(L_7);
			StringBuilder_Append_m2143093878_0(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_003c:
		{
			Object_t * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_SerializeString_m_16455538_0(__this, L_9, /*hidden argument*/NULL);
			StringBuilder_t586045924_0 * L_10 = (__this->___builder_0);
			NullCheck(L_10);
			StringBuilder_Append_m2143093878_0(L_10, ((int32_t)58), /*hidden argument*/NULL);
			Object_t * L_11 = ___obj;
			Object_t * L_12 = V_1;
			NullCheck(L_11);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t_1514320629_0_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_SerializeValue_m124993476_0(__this, L_13, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0065:
		{
			Object_t * L_14 = V_2;
			NullCheck(L_14);
			bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1412936761_0_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0021;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x87, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t2143823668_0 *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		{
			Object_t * L_16 = V_2;
			V_3 = ((Object_t *)IsInst(L_16, IDisposable_t_2098447282_0_il2cpp_TypeInfo_var));
			Object_t * L_17 = V_3;
			if (L_17)
			{
				goto IL_0080;
			}
		}

IL_007f:
		{
			IL2CPP_END_FINALLY(117)
		}

IL_0080:
		{
			Object_t * L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t_2098447282_0_il2cpp_TypeInfo_var, L_18);
			IL2CPP_END_FINALLY(117)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x87, IL_0087)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t2143823668_0 *)
	}

IL_0087:
	{
		StringBuilder_t586045924_0 * L_19 = (__this->___builder_0);
		NullCheck(L_19);
		StringBuilder_Append_m2143093878_0(L_19, ((int32_t)125), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern TypeInfo* IEnumerable_t1412919357_0_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t1412936761_0_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t_2098447282_0_il2cpp_TypeInfo_var;
extern "C"  void Serializer_SerializeArray_m472320681_0 (Serializer_t26705329_0 * __this, Object_t * ___anArray, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t1412919357_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		IEnumerator_t1412936761_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		IDisposable_t_2098447282_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(136);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t2143823668_0 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t2143823668_0 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t586045924_0 * L_0 = (__this->___builder_0);
		NullCheck(L_0);
		StringBuilder_Append_m2143093878_0(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = (bool)1;
		Object_t * L_1 = ___anArray;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1412919357_0_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_001c:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1412936761_0_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0037;
			}
		}

IL_0029:
		{
			StringBuilder_t586045924_0 * L_6 = (__this->___builder_0);
			NullCheck(L_6);
			StringBuilder_Append_m2143093878_0(L_6, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0037:
		{
			Object_t * L_7 = V_1;
			Serializer_SerializeValue_m124993476_0(__this, L_7, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0040:
		{
			Object_t * L_8 = V_2;
			NullCheck(L_8);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1412936761_0_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_001c;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x62, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t2143823668_0 *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			Object_t * L_10 = V_2;
			V_3 = ((Object_t *)IsInst(L_10, IDisposable_t_2098447282_0_il2cpp_TypeInfo_var));
			Object_t * L_11 = V_3;
			if (L_11)
			{
				goto IL_005b;
			}
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(80)
		}

IL_005b:
		{
			Object_t * L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t_2098447282_0_il2cpp_TypeInfo_var, L_12);
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t2143823668_0 *)
	}

IL_0062:
	{
		StringBuilder_t586045924_0 * L_13 = (__this->___builder_0);
		NullCheck(L_13);
		StringBuilder_Append_m2143093878_0(L_13, ((int32_t)93), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeString(System.String)
extern TypeInfo* Convert_t867363288_0_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2886_0;
extern Il2CppCodeGenString* _stringLiteral2944_0;
extern Il2CppCodeGenString* _stringLiteral2950_0;
extern Il2CppCodeGenString* _stringLiteral2954_0;
extern Il2CppCodeGenString* _stringLiteral2962_0;
extern Il2CppCodeGenString* _stringLiteral2966_0;
extern Il2CppCodeGenString* _stringLiteral2968_0;
extern Il2CppCodeGenString* _stringLiteral2969_0;
extern Il2CppCodeGenString* _stringLiteral3772_0;
extern "C"  void Serializer_SerializeString_m_16455538_0 (Serializer_t26705329_0 * __this, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t867363288_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		_stringLiteral2886_0 = il2cpp_codegen_string_literal_from_index(4681);
		_stringLiteral2944_0 = il2cpp_codegen_string_literal_from_index(328);
		_stringLiteral2950_0 = il2cpp_codegen_string_literal_from_index(4682);
		_stringLiteral2954_0 = il2cpp_codegen_string_literal_from_index(4683);
		_stringLiteral2962_0 = il2cpp_codegen_string_literal_from_index(4684);
		_stringLiteral2966_0 = il2cpp_codegen_string_literal_from_index(4685);
		_stringLiteral2968_0 = il2cpp_codegen_string_literal_from_index(4686);
		_stringLiteral2969_0 = il2cpp_codegen_string_literal_from_index(4675);
		_stringLiteral3772_0 = il2cpp_codegen_string_literal_from_index(134);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t_1225802637_0* V_0 = {0};
	uint16_t V_1 = 0x0;
	CharU5BU5D_t_1225802637_0* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	{
		StringBuilder_t586045924_0 * L_0 = (__this->___builder_0);
		NullCheck(L_0);
		StringBuilder_Append_m2143093878_0(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_1 = ___str;
		NullCheck(L_1);
		CharU5BU5D_t_1225802637_0* L_2 = String_ToCharArray_m1208288742_0(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CharU5BU5D_t_1225802637_0* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_0155;
	}

IL_001e:
	{
		CharU5BU5D_t_1225802637_0* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6, sizeof(uint16_t)));
		uint16_t L_7 = V_1;
		V_5 = L_7;
		uint16_t L_8 = V_5;
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 0)
		{
			goto IL_0089;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 1)
		{
			goto IL_00e1;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 2)
		{
			goto IL_00b5;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 3)
		{
			goto IL_0046;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 4)
		{
			goto IL_009f;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 5)
		{
			goto IL_00cb;
		}
	}

IL_0046:
	{
		uint16_t L_9 = V_5;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_005d;
		}
	}
	{
		uint16_t L_10 = V_5;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0073;
		}
	}
	{
		goto IL_00f7;
	}

IL_005d:
	{
		StringBuilder_t586045924_0 * L_11 = (__this->___builder_0);
		NullCheck(L_11);
		StringBuilder_Append_m_396877221_0(L_11, _stringLiteral2886_0, /*hidden argument*/NULL);
		goto IL_0151;
	}

IL_0073:
	{
		StringBuilder_t586045924_0 * L_12 = (__this->___builder_0);
		NullCheck(L_12);
		StringBuilder_Append_m_396877221_0(L_12, _stringLiteral2944_0, /*hidden argument*/NULL);
		goto IL_0151;
	}

IL_0089:
	{
		StringBuilder_t586045924_0 * L_13 = (__this->___builder_0);
		NullCheck(L_13);
		StringBuilder_Append_m_396877221_0(L_13, _stringLiteral2950_0, /*hidden argument*/NULL);
		goto IL_0151;
	}

IL_009f:
	{
		StringBuilder_t586045924_0 * L_14 = (__this->___builder_0);
		NullCheck(L_14);
		StringBuilder_Append_m_396877221_0(L_14, _stringLiteral2954_0, /*hidden argument*/NULL);
		goto IL_0151;
	}

IL_00b5:
	{
		StringBuilder_t586045924_0 * L_15 = (__this->___builder_0);
		NullCheck(L_15);
		StringBuilder_Append_m_396877221_0(L_15, _stringLiteral2962_0, /*hidden argument*/NULL);
		goto IL_0151;
	}

IL_00cb:
	{
		StringBuilder_t586045924_0 * L_16 = (__this->___builder_0);
		NullCheck(L_16);
		StringBuilder_Append_m_396877221_0(L_16, _stringLiteral2966_0, /*hidden argument*/NULL);
		goto IL_0151;
	}

IL_00e1:
	{
		StringBuilder_t586045924_0 * L_17 = (__this->___builder_0);
		NullCheck(L_17);
		StringBuilder_Append_m_396877221_0(L_17, _stringLiteral2968_0, /*hidden argument*/NULL);
		goto IL_0151;
	}

IL_00f7:
	{
		uint16_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t867363288_0_il2cpp_TypeInfo_var);
		int32_t L_19 = Convert_ToInt32_m100832938_0(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)32))))
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)126))))
		{
			goto IL_0123;
		}
	}
	{
		StringBuilder_t586045924_0 * L_22 = (__this->___builder_0);
		uint16_t L_23 = V_1;
		NullCheck(L_22);
		StringBuilder_Append_m2143093878_0(L_22, L_23, /*hidden argument*/NULL);
		goto IL_014c;
	}

IL_0123:
	{
		StringBuilder_t586045924_0 * L_24 = (__this->___builder_0);
		NullCheck(L_24);
		StringBuilder_Append_m_396877221_0(L_24, _stringLiteral2969_0, /*hidden argument*/NULL);
		StringBuilder_t586045924_0 * L_25 = (__this->___builder_0);
		String_t* L_26 = Int32_ToString_m_441481390_0((&V_4), _stringLiteral3772_0, /*hidden argument*/NULL);
		NullCheck(L_25);
		StringBuilder_Append_m_396877221_0(L_25, L_26, /*hidden argument*/NULL);
	}

IL_014c:
	{
		goto IL_0151;
	}

IL_0151:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_0155:
	{
		int32_t L_28 = V_3;
		CharU5BU5D_t_1225802637_0* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_29)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		StringBuilder_t586045924_0 * L_30 = (__this->___builder_0);
		NullCheck(L_30);
		StringBuilder_Append_m2143093878_0(L_30, ((int32_t)34), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern TypeInfo* Single_t_766435453_0_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t1628762099_0_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t_738719148_0_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t1628762194_0_il2cpp_TypeInfo_var;
extern TypeInfo* SByte_t1636693376_0_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t_224751869_0_il2cpp_TypeInfo_var;
extern TypeInfo* Int16_t1628762041_0_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t_738719206_0_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t_738719053_0_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t_1190127860_0_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t1458036598_0_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t867363288_0_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral82_0;
extern "C"  void Serializer_SerializeOther_m1294893125_0 (Serializer_t26705329_0 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t_766435453_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		Int32_t1628762099_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		UInt32_t_738719148_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Int64_t1628762194_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		SByte_t1636693376_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Byte_t_224751869_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Int16_t1628762041_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		UInt16_t_738719206_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		UInt64_t_738719053_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		Double_t_1190127860_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		Decimal_t1458036598_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Convert_t867363288_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		_stringLiteral82_0 = il2cpp_codegen_string_literal_from_index(3919);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		Object_t * L_0 = ___value;
		if (!((Object_t *)IsInstSealed(L_0, Single_t_766435453_0_il2cpp_TypeInfo_var)))
		{
			goto IL_002f;
		}
	}
	{
		StringBuilder_t586045924_0 * L_1 = (__this->___builder_0);
		Object_t * L_2 = ___value;
		V_0 = ((*(float*)((float*)UnBox (L_2, Single_t_766435453_0_il2cpp_TypeInfo_var))));
		String_t* L_3 = Single_ToString_m639595682_0((&V_0), _stringLiteral82_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m_396877221_0(L_1, L_3, /*hidden argument*/NULL);
		goto IL_00df;
	}

IL_002f:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInstSealed(L_4, Int32_t1628762099_0_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		Object_t * L_5 = ___value;
		if (((Object_t *)IsInstSealed(L_5, UInt32_t_738719148_0_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		Object_t * L_6 = ___value;
		if (((Object_t *)IsInstSealed(L_6, Int64_t1628762194_0_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		Object_t * L_7 = ___value;
		if (((Object_t *)IsInstSealed(L_7, SByte_t1636693376_0_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		Object_t * L_8 = ___value;
		if (((Object_t *)IsInstSealed(L_8, Byte_t_224751869_0_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		Object_t * L_9 = ___value;
		if (((Object_t *)IsInstSealed(L_9, Int16_t1628762041_0_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		Object_t * L_10 = ___value;
		if (((Object_t *)IsInstSealed(L_10, UInt16_t_738719206_0_il2cpp_TypeInfo_var)))
		{
			goto IL_0087;
		}
	}
	{
		Object_t * L_11 = ___value;
		if (!((Object_t *)IsInstSealed(L_11, UInt64_t_738719053_0_il2cpp_TypeInfo_var)))
		{
			goto IL_0099;
		}
	}

IL_0087:
	{
		StringBuilder_t586045924_0 * L_12 = (__this->___builder_0);
		Object_t * L_13 = ___value;
		NullCheck(L_12);
		StringBuilder_Append_m_174766867_0(L_12, L_13, /*hidden argument*/NULL);
		goto IL_00df;
	}

IL_0099:
	{
		Object_t * L_14 = ___value;
		if (((Object_t *)IsInstSealed(L_14, Double_t_1190127860_0_il2cpp_TypeInfo_var)))
		{
			goto IL_00af;
		}
	}
	{
		Object_t * L_15 = ___value;
		if (!((Object_t *)IsInstSealed(L_15, Decimal_t1458036598_0_il2cpp_TypeInfo_var)))
		{
			goto IL_00d3;
		}
	}

IL_00af:
	{
		StringBuilder_t586045924_0 * L_16 = (__this->___builder_0);
		Object_t * L_17 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t867363288_0_il2cpp_TypeInfo_var);
		double L_18 = Convert_ToDouble_m1941295007_0(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		String_t* L_19 = Double_ToString_m1570887993_0((&V_1), _stringLiteral82_0, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_m_396877221_0(L_16, L_19, /*hidden argument*/NULL);
		goto IL_00df;
	}

IL_00d3:
	{
		Object_t * L_20 = ___value;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		Serializer_SerializeString_m_16455538_0(__this, L_21, /*hidden argument*/NULL);
	}

IL_00df:
	{
		return;
	}
}
// System.Object MiniJSON.Json::Deserialize(System.String)
extern "C"  Object_t * Json_Deserialize_m1280314256_0 (Object_t * __this /* static, unused */, String_t* ___json, const MethodInfo* method)
{
	{
		String_t* L_0 = ___json;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return NULL;
	}

IL_0008:
	{
		String_t* L_1 = ___json;
		Object_t * L_2 = Parser_Parse_m373709422_0(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String MiniJSON.Json::Serialize(System.Object)
extern "C"  String_t* Json_Serialize_m_719432973_0 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		String_t* L_1 = Serializer_Serialize_m_1920848300_0(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
