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

// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t_1740558255_0;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1048289184_0;
// System.Type[]
struct TypeU5BU5D_t_722972841_0;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t_140162176_0;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t_461174895_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t2040409141_0;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t_437863023_0;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
struct SetDelegate_t_526442851_0;

#include "codegen/il2cpp-codegen.h"

// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern "C"  void ReflectionUtils__cctor_m2088930786_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C"  Object_t* ReflectionUtils_GetConstructors_m1067993841_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern "C"  ConstructorInfo_t1048289184_0 * ReflectionUtils_GetConstructorInfo_m_695575058_0 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t_722972841_0* ___argsType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C"  Object_t* ReflectionUtils_GetProperties_m1583223718_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C"  Object_t* ReflectionUtils_GetFields_m973867185_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C"  MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m994959470_0 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C"  MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m_254970142_0 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern "C"  ConstructorDelegate_t2040409141_0 * ReflectionUtils_GetContructor_m_301994922_0 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t_722972841_0* ___argsType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern "C"  ConstructorDelegate_t2040409141_0 * ReflectionUtils_GetConstructorByReflection_m_737822725_0 (Object_t * __this /* static, unused */, ConstructorInfo_t1048289184_0 * ___constructorInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern "C"  ConstructorDelegate_t2040409141_0 * ReflectionUtils_GetConstructorByReflection_m_513482345_0 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t_722972841_0* ___argsType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern "C"  GetDelegate_t_437863023_0 * ReflectionUtils_GetGetMethod_m65760451_0 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern "C"  GetDelegate_t_437863023_0 * ReflectionUtils_GetGetMethod_m1368925476_0 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern "C"  GetDelegate_t_437863023_0 * ReflectionUtils_GetGetMethodByReflection_m1893214021_0 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern "C"  GetDelegate_t_437863023_0 * ReflectionUtils_GetGetMethodByReflection_m134171106_0 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern "C"  SetDelegate_t_526442851_0 * ReflectionUtils_GetSetMethod_m2126017499_0 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern "C"  SetDelegate_t_526442851_0 * ReflectionUtils_GetSetMethod_m_683264756_0 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern "C"  SetDelegate_t_526442851_0 * ReflectionUtils_GetSetMethodByReflection_m295389789_0 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern "C"  SetDelegate_t_526442851_0 * ReflectionUtils_GetSetMethodByReflection_m1288486346_0 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
