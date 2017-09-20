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

// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707053611_0;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t_1471708465_0;
// Mono.Xml.Schema.XsdInvalidValidationState
struct XsdInvalidValidationState_t173315246_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.Schema.XsdValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdValidationState__ctor_m_1110781369_0 (XsdValidationState_t707053611_0 * __this, XsdParticleStateManager_t_1471708465_0 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationState::.cctor()
extern "C"  void XsdValidationState__cctor_m1296536962_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdInvalidValidationState Mono.Xml.Schema.XsdValidationState::get_Invalid()
extern "C"  XsdInvalidValidationState_t173315246_0 * XsdValidationState_get_Invalid_m_577822237_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidationState::get_Manager()
extern "C"  XsdParticleStateManager_t_1471708465_0 * XsdValidationState_get_Manager_m_926814726_0 (XsdValidationState_t707053611_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidationState::get_Occured()
extern "C"  int32_t XsdValidationState_get_Occured_m1460368425_0 (XsdValidationState_t707053611_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidationState::get_OccuredInternal()
extern "C"  int32_t XsdValidationState_get_OccuredInternal_m181973958_0 (XsdValidationState_t707053611_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationState::set_OccuredInternal(System.Int32)
extern "C"  void XsdValidationState_set_OccuredInternal_m_419210555_0 (XsdValidationState_t707053611_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
