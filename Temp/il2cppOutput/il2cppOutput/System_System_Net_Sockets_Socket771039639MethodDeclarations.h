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

// System.Net.Sockets.Socket
struct Socket_t771039639_0;
// System.Net.SocketAddress
struct SocketAddress_t_1639988597_0;
// System.Net.EndPoint
struct EndPoint_t_1941440085_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t2143823668_0;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily1922836948.h"
#include "System_System_Net_Sockets_SocketType83132785.h"
#include "System_System_Net_Sockets_ProtocolType_1541579498.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "System_System_Net_Sockets_SocketFlags_1731181776.h"
#include "System_System_Net_Sockets_SocketError_1731909967.h"
#include "System_System_Net_Sockets_SelectMode_1604299549.h"
#include "System_System_Net_Sockets_SocketOptionLevel_1275161096.h"
#include "System_System_Net_Sockets_SocketOptionName374563223.h"
#include "System_System_Net_Sockets_SocketShutdown_1453062899.h"

// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.IntPtr)
extern "C"  void Socket__ctor_m1430234506_0 (Socket_t771039639_0 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, IntPtr_t ___sock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
extern "C"  void Socket__ctor_m_987995908_0 (Socket_t771039639_0 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.cctor()
extern "C"  void Socket__cctor_m_577956940_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::System.IDisposable.Dispose()
extern "C"  void Socket_System_IDisposable_Dispose_m72207910_0 (Socket_t771039639_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SocketDefaults()
extern "C"  void Socket_SocketDefaults_m1415181360_0 (Socket_t771039639_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_DontFragment(System.Boolean)
extern "C"  void Socket_set_DontFragment_m_615363584_0 (Socket_t771039639_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.Sockets.Socket::LocalEndPoint_internal(System.IntPtr,System.Int32&)
extern "C"  SocketAddress_t_1639988597_0 * Socket_LocalEndPoint_internal_m842593232_0 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
extern "C"  EndPoint_t_1941440085_0 * Socket_get_LocalEndPoint_m_1941313572_0 (Socket_t771039639_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketType System.Net.Sockets.Socket::get_SocketType()
extern "C"  int32_t Socket_get_SocketType_m179480281_0 (Socket_t771039639_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_SendTimeout()
extern "C"  int32_t Socket_get_SendTimeout_m1516554807_0 (Socket_t771039639_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_ReceiveTimeout()
extern "C"  int32_t Socket_get_ReceiveTimeout_m432366242_0 (Socket_t771039639_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Accept_internal(System.IntPtr,System.Int32&,System.Boolean)
extern "C"  IntPtr_t Socket_Accept_internal_m_649023180_0 (Object_t * __this /* static, unused */, IntPtr_t ___sock, int32_t* ___error, bool ___blocking, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::Accept()
extern "C"  Socket_t771039639_0 * Socket_Accept_m2109262001_0 (Socket_t771039639_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern "C"  Object_t * Socket_BeginReceive_m_1425242902_0 (Socket_t771039639_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern "C"  Object_t * Socket_BeginSend_m1029323647_0 (Socket_t771039639_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Bind_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C"  void Socket_Bind_internal_m1752844684_0 (Object_t * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t_1639988597_0 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
extern "C"  void Socket_Bind_m_39347611_0 (Socket_t771039639_0 * __this, EndPoint_t_1941440085_0 * ___local_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
extern "C"  int32_t Socket_EndReceive_m563580960_0 (Socket_t771039639_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern "C"  int32_t Socket_EndReceive_m151806749_0 (Socket_t771039639_0 * __this, Object_t * ___asyncResult, int32_t* ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult)
extern "C"  int32_t Socket_EndSend_m_401123207_0 (Socket_t771039639_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern "C"  int32_t Socket_EndSend_m1584170870_0 (Socket_t771039639_0 * __this, Object_t * ___asyncResult, int32_t* ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.Sockets.Socket::InvalidAsyncOp(System.String)
extern "C"  Exception_t2143823668_0 * Socket_InvalidAsyncOp_m521531680_0 (Socket_t771039639_0 * __this, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Listen_internal(System.IntPtr,System.Int32,System.Int32&)
extern "C"  void Socket_Listen_internal_m526300996_0 (Object_t * __this /* static, unused */, IntPtr_t ___sock, int32_t ___backlog, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Listen(System.Int32)
extern "C"  void Socket_Listen_m2133463779_0 (Socket_t771039639_0 * __this, int32_t ___backlog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
extern "C"  bool Socket_Poll_m_398706828_0 (Socket_t771039639_0 * __this, int32_t ___time_us, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C"  int32_t Socket_Receive_m1175719569_0 (Socket_t771039639_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::RecvFrom_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&)
extern "C"  int32_t Socket_RecvFrom_internal_m548074296_0 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t_1639988597_0 ** ___sockaddr, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
extern "C"  int32_t Socket_ReceiveFrom_nochecks_m1640775589_0 (Socket_t771039639_0 * __this, ByteU5BU5D_t_1238178395_0* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t_1941440085_0 ** ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks_exc(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.Boolean,System.Int32&)
extern "C"  int32_t Socket_ReceiveFrom_nochecks_exc_m1710579486_0 (Socket_t771039639_0 * __this, ByteU5BU5D_t_1238178395_0* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t_1941440085_0 ** ___remote_end, bool ___throwOnError, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C"  int32_t Socket_Send_m158307626_0 (Socket_t771039639_0 * __this, ByteU5BU5D_t_1238178395_0* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal_real(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
extern "C"  int32_t Socket_SendTo_internal_real_m1099307538_0 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t_1639988597_0 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
extern "C"  int32_t Socket_SendTo_internal_m1277507089_0 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t_1639988597_0 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
extern "C"  int32_t Socket_SendTo_nochecks_m_964232995_0 (Socket_t771039639_0 * __this, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t_1941440085_0 * ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::CheckProtocolSupport()
extern "C"  void Socket_CheckProtocolSupport_m1469859642_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv4()
extern "C"  bool Socket_get_SupportsIPv4_m1110590311_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv6()
extern "C"  bool Socket_get_SupportsIPv6_m1110592233_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Socket_internal(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Int32&)
extern "C"  IntPtr_t Socket_Socket_internal_m_1855510163_0 (Socket_t771039639_0 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Finalize()
extern "C"  void Socket_Finalize_m_1825340759_0 (Socket_t771039639_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
extern "C"  int32_t Socket_get_AddressFamily_m794897675_0 (Socket_t771039639_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Blocking_internal(System.IntPtr,System.Boolean,System.Int32&)
extern "C"  void Socket_Blocking_internal_m_440266180_0 (Object_t * __this /* static, unused */, IntPtr_t ___socket, bool ___block, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Blocking()
extern "C"  bool Socket_get_Blocking_m686821555_0 (Socket_t771039639_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_Blocking(System.Boolean)
extern "C"  void Socket_set_Blocking_m1232454324_0 (Socket_t771039639_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Connected()
extern "C"  bool Socket_get_Connected_m32348333_0 (Socket_t771039639_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::get_ProtocolType()
extern "C"  int32_t Socket_get_ProtocolType_m1063510627_0 (Socket_t771039639_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
extern "C"  void Socket_set_NoDelay_m320978003_0 (Socket_t771039639_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Linger(System.IntPtr)
extern "C"  void Socket_Linger_m_323908570_0 (Socket_t771039639_0 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose(System.Boolean)
extern "C"  void Socket_Dispose_m1498201101_0 (Socket_t771039639_0 * __this, bool ___explicitDisposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close_internal(System.IntPtr,System.Int32&)
extern "C"  void Socket_Close_internal_m712534810_0 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close()
extern "C"  void Socket_Close_m183746607_0 (Socket_t771039639_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal_real(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C"  void Socket_Connect_internal_real_m_2056241832_0 (Object_t * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t_1639988597_0 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern "C"  void Socket_Connect_internal_m_2079115254_0 (Object_t * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t_1639988597_0 * ___sa, int32_t* ___error, bool ___requireSocketPolicyFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::CheckEndPoint(System.Net.SocketAddress)
extern "C"  bool Socket_CheckEndPoint_m44041593_0 (Object_t * __this /* static, unused */, SocketAddress_t_1639988597_0 * ___sa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Net.Sockets.Socket::GetUnityCrossDomainHelperMethod(System.String)
extern "C"  MethodInfo_t * Socket_GetUnityCrossDomainHelperMethod_m_6918229_0 (Object_t * __this /* static, unused */, String_t* ___methodname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
extern "C"  void Socket_Connect_m_851817300_0 (Socket_t771039639_0 * __this, EndPoint_t_1941440085_0 * ___remoteEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint,System.Boolean)
extern "C"  void Socket_Connect_m_1096443567_0 (Socket_t771039639_0 * __this, EndPoint_t_1941440085_0 * ___remoteEP, bool ___requireSocketPolicy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll_internal(System.IntPtr,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
extern "C"  bool Socket_Poll_internal_m1151471955_0 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___mode, int32_t ___timeout, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
extern "C"  int32_t Socket_Receive_internal_m2102825858_0 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t_1238178395_0* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C"  int32_t Socket_Receive_nochecks_m_1529643801_0 (Socket_t771039639_0 * __this, ByteU5BU5D_t_1238178395_0* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern "C"  void Socket_GetSocketOption_obj_internal_m_934507021_0 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___level, int32_t ___name, Object_t ** ___obj_val, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
extern "C"  int32_t Socket_Send_internal_m_1355388791_0 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t_1238178395_0* ___buf, int32_t ___offset, int32_t ___count, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C"  int32_t Socket_Send_nochecks_m_1994164626_0 (Socket_t771039639_0 * __this, ByteU5BU5D_t_1238178395_0* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName)
extern "C"  Object_t * Socket_GetSocketOption_m_1136303577_0 (Socket_t771039639_0 * __this, int32_t ___optionLevel, int32_t ___optionName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Shutdown_internal(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
extern "C"  void Socket_Shutdown_internal_m2019310737_0 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___how, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern "C"  void Socket_SetSocketOption_internal_m111805231_0 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___level, int32_t ___name, Object_t * ___obj_val, ByteU5BU5D_t_1238178395_0* ___byte_val, int32_t ___int_val, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
extern "C"  void Socket_SetSocketOption_m225156057_0 (Socket_t771039639_0 * __this, int32_t ___optionLevel, int32_t ___optionName, int32_t ___optionValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::ThrowIfUpd()
extern "C"  void Socket_ThrowIfUpd_m253258129_0 (Socket_t771039639_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
