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

// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t379315588_0;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t_1418732973_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Analytics_UnityEngine_Analytics_Analy_1320671926.h"
#include "AssemblyU2DCSharp_UnityEngine_Analytics_Experimenta112420726.h"
#include "AssemblyU2DCSharp_UnityEngine_Analytics_Experimenta197862107.h"
#include "AssemblyU2DCSharp_UnityEngine_Analytics_Experimenta502219299.h"
#include "AssemblyU2DCSharp_UnityEngine_Analytics_Experiment1218597165.h"
#include "AssemblyU2DCSharp_UnityEngine_Analytics_Experiment_532659851.h"
#include "AssemblyU2DCSharp_UnityEngine_Analytics_Experimenta197634351.h"
#include "AssemblyU2DCSharp_UnityEngine_Analytics_Experiment1498288513.h"

// System.Void UnityEngine.Analytics.Experimental.AnalyticsEvent::.cctor()
extern "C"  void AnalyticsEvent__cctor_m_2120363747_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.Experimental.AnalyticsEvent::get_sdkVersion()
extern "C"  String_t* AnalyticsEvent_get_sdkVersion_m1605767128_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Analytics.Experimental.AnalyticsEvent::get_debugMode()
extern "C"  bool AnalyticsEvent_get_debugMode_m_1404706769_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.Experimental.AnalyticsEvent::set_debugMode(System.Boolean)
extern "C"  void AnalyticsEvent_set_debugMode_m418735806_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.Experimental.AnalyticsEvent::OnValidationFailed(System.String)
extern "C"  void AnalyticsEvent_OnValidationFailed_m_868370599_0 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.Experimental.AnalyticsEvent::AddCustomEventData(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void AnalyticsEvent_AddCustomEventData_m743472726_0 (Object_t * __this /* static, unused */, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.Experimental.AnalyticsEvent::SplitCamelCase(System.String)
extern "C"  String_t* AnalyticsEvent_SplitCamelCase_m_1856296923_0 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Analytics.Experimental.AnalyticsEvent::EnumToString(System.Object)
extern "C"  String_t* AnalyticsEvent_EnumToString_m79879446_0 (Object_t * __this /* static, unused */, Object_t * ___enumValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::Custom(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_Custom_m_376009790_0 (Object_t * __this /* static, unused */, String_t* ___eventName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::AchievementStep(System.Int32,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_AchievementStep_m_786408037_0 (Object_t * __this /* static, unused */, int32_t ___stepIndex, String_t* ___achievementId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::AchievementUnlocked(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_AchievementUnlocked_m141916777_0 (Object_t * __this /* static, unused */, String_t* ___achievementId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::AdComplete(System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_AdComplete_m652880166_0 (Object_t * __this /* static, unused */, bool ___rewarded, String_t* ___advertisingNetwork, String_t* ___placementId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::AdComplete(System.Boolean,UnityEngine.Analytics.Experimental.AdvertisingNetwork,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_AdComplete_m1051992581_0 (Object_t * __this /* static, unused */, bool ___rewarded, int32_t ___advertisingNetwork, String_t* ___placementId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::AdOffer(System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_AdOffer_m1326972571_0 (Object_t * __this /* static, unused */, bool ___rewarded, String_t* ___advertisingNetwork, String_t* ___placementId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::AdOffer(System.Boolean,UnityEngine.Analytics.Experimental.AdvertisingNetwork,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_AdOffer_m2128387706_0 (Object_t * __this /* static, unused */, bool ___rewarded, int32_t ___advertisingNetwork, String_t* ___placementId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::AdSkip(System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_AdSkip_m_60261524_0 (Object_t * __this /* static, unused */, bool ___rewarded, String_t* ___advertisingNetwork, String_t* ___placementId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::AdSkip(System.Boolean,UnityEngine.Analytics.Experimental.AdvertisingNetwork,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_AdSkip_m_3918261_0 (Object_t * __this /* static, unused */, bool ___rewarded, int32_t ___advertisingNetwork, String_t* ___placementId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::AdStart(System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_AdStart_m_1473008863_0 (Object_t * __this /* static, unused */, bool ___rewarded, String_t* ___advertisingNetwork, String_t* ___placementId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::AdStart(System.Boolean,UnityEngine.Analytics.Experimental.AdvertisingNetwork,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_AdStart_m_1716335360_0 (Object_t * __this /* static, unused */, bool ___rewarded, int32_t ___advertisingNetwork, String_t* ___placementId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::ChatMessageSent(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_ChatMessageSent_m1127982392_0 (Object_t * __this /* static, unused */, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::CutsceneSkip(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_CutsceneSkip_m_655937270_0 (Object_t * __this /* static, unused */, String_t* ___cutsceneName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::CutsceneStart(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_CutsceneStart_m1442505059_0 (Object_t * __this /* static, unused */, String_t* ___cutsceneName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::FirstInteraction(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_FirstInteraction_m_1415044207_0 (Object_t * __this /* static, unused */, String_t* ___actionId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::GameOver(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_GameOver_m_1194160275_0 (Object_t * __this /* static, unused */, String_t* ___levelName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::GameOver(System.Int32,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_GameOver_m809027566_0 (Object_t * __this /* static, unused */, int32_t ___levelIndex, String_t* ___levelName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::GameStart(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_GameStart_m1488247375_0 (Object_t * __this /* static, unused */, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::IAPTransaction(System.String,System.Single,System.String,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_IAPTransaction_m_607109438_0 (Object_t * __this /* static, unused */, String_t* ___transactionContext, float ___price, String_t* ___itemId, String_t* ___itemType, String_t* ___level, String_t* ___transactionId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::ItemAcquired(UnityEngine.Analytics.Experimental.AcquisitionType,System.String,System.Single,System.String,System.Single,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_ItemAcquired_m380994354_0 (Object_t * __this /* static, unused */, int32_t ___currencyType, String_t* ___transactionContext, float ___amount, String_t* ___itemId, float ___balance, String_t* ___itemType, String_t* ___level, String_t* ___transactionId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::ItemAcquired(UnityEngine.Analytics.Experimental.AcquisitionType,System.String,System.Single,System.String,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_ItemAcquired_m_815161459_0 (Object_t * __this /* static, unused */, int32_t ___currencyType, String_t* ___transactionContext, float ___amount, String_t* ___itemId, String_t* ___itemType, String_t* ___level, String_t* ___transactionId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::ItemSpent(UnityEngine.Analytics.Experimental.AcquisitionType,System.String,System.Single,System.String,System.Single,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_ItemSpent_m1750765828_0 (Object_t * __this /* static, unused */, int32_t ___currencyType, String_t* ___transactionContext, float ___amount, String_t* ___itemId, float ___balance, String_t* ___itemType, String_t* ___level, String_t* ___transactionId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::ItemSpent(UnityEngine.Analytics.Experimental.AcquisitionType,System.String,System.Single,System.String,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_ItemSpent_m_1883020065_0 (Object_t * __this /* static, unused */, int32_t ___currencyType, String_t* ___transactionContext, float ___amount, String_t* ___itemId, String_t* ___itemType, String_t* ___level, String_t* ___transactionId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::LevelComplete(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_LevelComplete_m1172961438_0 (Object_t * __this /* static, unused */, String_t* ___levelName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::LevelComplete(System.Int32,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_LevelComplete_m329750109_0 (Object_t * __this /* static, unused */, int32_t ___levelIndex, String_t* ___levelName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::LevelFail(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_LevelFail_m560417753_0 (Object_t * __this /* static, unused */, String_t* ___levelName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::LevelFail(System.Int32,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_LevelFail_m_2117690622_0 (Object_t * __this /* static, unused */, int32_t ___levelIndex, String_t* ___levelName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::LevelQuit(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_LevelQuit_m14983496_0 (Object_t * __this /* static, unused */, String_t* ___levelName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::LevelQuit(System.Int32,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_LevelQuit_m142987763_0 (Object_t * __this /* static, unused */, int32_t ___levelIndex, String_t* ___levelName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::LevelSkip(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_LevelSkip_m_455066600_0 (Object_t * __this /* static, unused */, String_t* ___levelName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::LevelSkip(System.Int32,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_LevelSkip_m_1545058013_0 (Object_t * __this /* static, unused */, int32_t ___levelIndex, String_t* ___levelName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::LevelStart(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_LevelStart_m_920438763_0 (Object_t * __this /* static, unused */, String_t* ___levelName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::LevelStart(System.Int32,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_LevelStart_m_406491066_0 (Object_t * __this /* static, unused */, int32_t ___levelIndex, String_t* ___levelName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::LevelUp(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_LevelUp_m1535908988_0 (Object_t * __this /* static, unused */, String_t* ___newLevelName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::LevelUp(System.Int32,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_LevelUp_m_433378497_0 (Object_t * __this /* static, unused */, int32_t ___newLevelIndex, String_t* ___newLevelName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::PostAdAction(System.Boolean,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_PostAdAction_m989220195_0 (Object_t * __this /* static, unused */, bool ___rewarded, String_t* ___advertisingNetwork, String_t* ___placementId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::PostAdAction(System.Boolean,UnityEngine.Analytics.Experimental.AdvertisingNetwork,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_PostAdAction_m1593214274_0 (Object_t * __this /* static, unused */, bool ___rewarded, int32_t ___advertisingNetwork, String_t* ___placementId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::PushNotificationClick(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_PushNotificationClick_m_336784936_0 (Object_t * __this /* static, unused */, String_t* ___messageId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::PushNotificationEnable(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_PushNotificationEnable_m1796710671_0 (Object_t * __this /* static, unused */, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::ScreenVisit(UnityEngine.Analytics.Experimental.ScreenName,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_ScreenVisit_m1948095310_0 (Object_t * __this /* static, unused */, int32_t ___screenName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::ScreenVisit(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_ScreenVisit_m1321459580_0 (Object_t * __this /* static, unused */, String_t* ___screenName, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::SocialShare(UnityEngine.Analytics.Experimental.ShareType,UnityEngine.Analytics.Experimental.SocialNetwork,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_SocialShare_m_1568572899_0 (Object_t * __this /* static, unused */, int32_t ___shareType, int32_t ___socialNetwork, String_t* ___senderId, String_t* ___recipientId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::SocialShare(UnityEngine.Analytics.Experimental.ShareType,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_SocialShare_m601892039_0 (Object_t * __this /* static, unused */, int32_t ___shareType, String_t* ___socialNetwork, String_t* ___senderId, String_t* ___recipientId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::SocialShare(System.String,UnityEngine.Analytics.Experimental.SocialNetwork,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_SocialShare_m_1484206329_0 (Object_t * __this /* static, unused */, String_t* ___shareType, int32_t ___socialNetwork, String_t* ___senderId, String_t* ___recipientId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::SocialShare(System.String,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_SocialShare_m_748429283_0 (Object_t * __this /* static, unused */, String_t* ___shareType, String_t* ___socialNetwork, String_t* ___senderId, String_t* ___recipientId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::SocialShareAccept(UnityEngine.Analytics.Experimental.ShareType,UnityEngine.Analytics.Experimental.SocialNetwork,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_SocialShareAccept_m664838261_0 (Object_t * __this /* static, unused */, int32_t ___shareType, int32_t ___socialNetwork, String_t* ___senderId, String_t* ___recipientId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::SocialShareAccept(UnityEngine.Analytics.Experimental.ShareType,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_SocialShareAccept_m1091501423_0 (Object_t * __this /* static, unused */, int32_t ___shareType, String_t* ___socialNetwork, String_t* ___senderId, String_t* ___recipientId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::SocialShareAccept(System.String,UnityEngine.Analytics.Experimental.SocialNetwork,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_SocialShareAccept_m1791693743_0 (Object_t * __this /* static, unused */, String_t* ___shareType, int32_t ___socialNetwork, String_t* ___senderId, String_t* ___recipientId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::SocialShareAccept(System.String,System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_SocialShareAccept_m794262645_0 (Object_t * __this /* static, unused */, String_t* ___shareType, String_t* ___socialNetwork, String_t* ___senderId, String_t* ___recipientId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::StoreItemClick(UnityEngine.Analytics.Experimental.StoreType,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_StoreItemClick_m_354140184_0 (Object_t * __this /* static, unused */, int32_t ___storeType, String_t* ___itemId, String_t* ___itemName, Dictionary_2_t_1418732973_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::StoreOpened(UnityEngine.Analytics.Experimental.StoreType,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_StoreOpened_m_443081655_0 (Object_t * __this /* static, unused */, int32_t ___storeType, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::TutorialComplete(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_TutorialComplete_m2050364_0 (Object_t * __this /* static, unused */, String_t* ___tutorialId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::TutorialSkip(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_TutorialSkip_m_1373467722_0 (Object_t * __this /* static, unused */, String_t* ___tutorialId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::TutorialStart(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_TutorialStart_m673897527_0 (Object_t * __this /* static, unused */, String_t* ___tutorialId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::TutorialStep(System.Int32,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_TutorialStep_m_1926008750_0 (Object_t * __this /* static, unused */, int32_t ___stepIndex, String_t* ___tutorialId, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::UserSignup(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_UserSignup_m394869680_0 (Object_t * __this /* static, unused */, String_t* ___authorizationNetwork, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Experimental.AnalyticsEvent::UserSignup(UnityEngine.Analytics.Experimental.AuthorizationNetwork,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t AnalyticsEvent_UserSignup_m1526209252_0 (Object_t * __this /* static, unused */, int32_t ___authorizationNetwork, Object_t* ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
