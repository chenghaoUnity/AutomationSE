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

// System.Net.FtpWebResponse
struct FtpWebResponse_t_474528599_0;
// System.Net.FtpWebRequest
struct FtpWebRequest_t1507005735_0;
// System.Uri
struct Uri_t_27263938_0;
// System.String
struct String_t;
// System.Net.FtpStatus
struct FtpStatus_t_2140212610_0;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t_1532305783_0;
// System.IO.Stream
struct Stream_t463444077_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_FtpStatusCode_222976629.h"
#include "mscorlib_System_DateTime_818288618.h"

// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Boolean)
extern "C"  void FtpWebResponse__ctor_m_752777054_0 (FtpWebResponse_t_474528599_0 * __this, FtpWebRequest_t1507005735_0 * ___request, Uri_t_27263938_0 * ___uri, String_t* ___method, bool ___keepAlive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatusCode,System.String)
extern "C"  void FtpWebResponse__ctor_m_2077228554_0 (FtpWebResponse_t_474528599_0 * __this, FtpWebRequest_t1507005735_0 * ___request, Uri_t_27263938_0 * ___uri, String_t* ___method, int32_t ___statusCode, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatus)
extern "C"  void FtpWebResponse__ctor_m287332007_0 (FtpWebResponse_t_474528599_0 * __this, FtpWebRequest_t1507005735_0 * ___request, Uri_t_27263938_0 * ___uri, String_t* ___method, FtpStatus_t_2140212610_0 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebResponse::get_Headers()
extern "C"  WebHeaderCollection_t_1532305783_0 * FtpWebResponse_get_Headers_m584940466_0 (FtpWebResponse_t_474528599_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_LastModified(System.DateTime)
extern "C"  void FtpWebResponse_set_LastModified_m1304868287_0 (FtpWebResponse_t_474528599_0 * __this, DateTime_t_818288618_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_BannerMessage(System.String)
extern "C"  void FtpWebResponse_set_BannerMessage_m1222407647_0 (FtpWebResponse_t_474528599_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_WelcomeMessage(System.String)
extern "C"  void FtpWebResponse_set_WelcomeMessage_m1191478019_0 (FtpWebResponse_t_474528599_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::Close()
extern "C"  void FtpWebResponse_Close_m_418188963_0 (FtpWebResponse_t_474528599_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpWebResponse::GetResponseStream()
extern "C"  Stream_t463444077_0 * FtpWebResponse_GetResponseStream_m_2141932238_0 (FtpWebResponse_t_474528599_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_Stream(System.IO.Stream)
extern "C"  void FtpWebResponse_set_Stream_m_88372111_0 (FtpWebResponse_t_474528599_0 * __this, Stream_t463444077_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::UpdateStatus(System.Net.FtpStatus)
extern "C"  void FtpWebResponse_UpdateStatus_m_2115493068_0 (FtpWebResponse_t_474528599_0 * __this, FtpStatus_t_2140212610_0 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::CheckDisposed()
extern "C"  void FtpWebResponse_CheckDisposed_m_2079470222_0 (FtpWebResponse_t_474528599_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebResponse::IsFinal()
extern "C"  bool FtpWebResponse_IsFinal_m_1770159769_0 (FtpWebResponse_t_474528599_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
