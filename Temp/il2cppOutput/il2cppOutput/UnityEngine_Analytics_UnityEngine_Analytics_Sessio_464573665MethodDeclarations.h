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

// UnityEngine.Analytics.SessionValues
struct SessionValues_t_464573665_0;
// UnityEngine.Analytics.ICloudService
struct ICloudService_t_1392578160_0;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t379315588_0;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t_293602512_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t_1321712961_0;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Analytics.SessionValues::.ctor(UnityEngine.Analytics.ICloudService,System.String)
extern "C"  void SessionValues__ctor_m1586195_0 (SessionValues_t_464573665_0 * __this, Object_t * ___cloudService, String_t* ___valueFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionValues::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void SessionValues__ctor_m_288189973_0 (SessionValues_t_464573665_0 * __this, Object_t* ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionValues::.ctor(System.String)
extern "C"  void SessionValues__ctor_m1194183761_0 (SessionValues_t_464573665_0 * __this, String_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionValues::PutItems(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void SessionValues_PutItems_m1966795416_0 (SessionValues_t_464573665_0 * __this, Object_t* ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionValues::PutItems(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Boolean)
extern "C"  void SessionValues_PutItems_m2117068261_0 (SessionValues_t_464573665_0 * __this, Object_t* ___items, bool ___saveOnValueChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionValues::PutItem(System.String,System.Object)
extern "C"  void SessionValues_PutItem_m127069567_0 (SessionValues_t_464573665_0 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.SessionValues::PutItem(System.String,System.Object,System.Boolean)
extern "C"  void SessionValues_PutItem_m_1624057826_0 (SessionValues_t_464573665_0 * __this, String_t* ___name, Object_t * ___value, bool ___saveOnValueChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionValues::TryGetBool(System.String,System.Boolean)
extern "C"  bool SessionValues_TryGetBool_m1296924381_0 (SessionValues_t_464573665_0 * __this, String_t* ___name, bool ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionValues::TryGetInt(System.String,System.Int32)
extern "C"  int32_t SessionValues_TryGetInt_m_635419384_0 (SessionValues_t_464573665_0 * __this, String_t* ___name, int32_t ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Analytics.SessionValues::TryGetLong(System.String,System.Int64)
extern "C"  int64_t SessionValues_TryGetLong_m25919055_0 (SessionValues_t_464573665_0 * __this, String_t* ___name, int64_t ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.SessionValues::TryGetString(System.String,System.String)
extern "C"  String_t* SessionValues_TryGetString_m350580258_0 (SessionValues_t_464573665_0 * __this, String_t* ___name, String_t* ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> UnityEngine.Analytics.SessionValues::TryGetStringList(System.String,System.Collections.Generic.List`1<System.String>)
extern "C"  List_1_t_293602512_0 * SessionValues_TryGetStringList_m_660274846_0 (SessionValues_t_464573665_0 * __this, String_t* ___name, List_1_t_293602512_0 * ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Analytics.SessionValues::TryGetStringArray(System.String,System.String[])
extern "C"  StringU5BU5D_t_816028754_0* SessionValues_TryGetStringArray_m_221195937_0 (SessionValues_t_464573665_0 * __this, String_t* ___name, StringU5BU5D_t_816028754_0* ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> UnityEngine.Analytics.SessionValues::TryGetIntList(System.String,System.Collections.Generic.List`1<System.Int32>)
extern "C"  List_1_t_1321712961_0 * SessionValues_TryGetIntList_m_422606726_0 (SessionValues_t_464573665_0 * __this, String_t* ___name, List_1_t_1321712961_0 * ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Analytics.SessionValues::TryGetIntArray(System.String,System.Int32[])
extern "C"  Int32U5BU5D_t1872284309_0* SessionValues_TryGetIntArray_m_232829155_0 (SessionValues_t_464573665_0 * __this, String_t* ___name, Int32U5BU5D_t1872284309_0* ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.SessionValues UnityEngine.Analytics.SessionValues::TryGetValue(System.String)
extern "C"  SessionValues_t_464573665_0 * SessionValues_TryGetValue_m1484383459_0 (SessionValues_t_464573665_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionValues::Restore(System.String)
extern "C"  bool SessionValues_Restore_m1677995279_0 (SessionValues_t_464573665_0 * __this, String_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionValues::Restore()
extern "C"  bool SessionValues_Restore_m753836243_0 (SessionValues_t_464573665_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.SessionValues::Save()
extern "C"  bool SessionValues_Save_m419626234_0 (SessionValues_t_464573665_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Analytics.SessionValues::<TryGetIntArray>m__0(System.Int64)
extern "C"  int32_t SessionValues_U3CTryGetIntArrayU3Em__0_m_1724706315_0 (Object_t * __this /* static, unused */, int64_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
