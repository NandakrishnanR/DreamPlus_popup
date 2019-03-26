// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Sockets/1.9.0/Socket.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{struct SocketHelpers;}}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// internal sealed extern class SocketHelpers :56
// {
uType* SocketHelpers_typeof();
void SocketHelpers__Connect_fn(int* sock, int32_t* family, uArray* address, int64_t* scopeId, int32_t* port, int32_t* __retval);
void SocketHelpers__GetFamily_fn(int32_t* addressFamily, int32_t* __retval);
void SocketHelpers__GetLocalEndPoint_fn(int* sock, ::g::Uno::Net::IPEndPoint** __retval);
void SocketHelpers__GetProtocol_fn(int32_t* protocolType, int32_t* __retval);
void SocketHelpers__GetRemoteEndPoint_fn(int* sock, ::g::Uno::Net::IPEndPoint** __retval);
void SocketHelpers__GetSocketShudown_fn(int32_t* socketShutdown, int32_t* __retval);
void SocketHelpers__GetType1_fn(int32_t* socketType, int32_t* __retval);
void SocketHelpers__Poll_fn(int* sock, int32_t* milliseconds, int32_t* mode, int32_t* __retval);
void SocketHelpers__Shutdown_fn(int* sock, int32_t* how, int32_t* __retval);

struct SocketHelpers : uObject
{
    static int32_t Connect(int sock, int32_t family, uArray* address, int64_t scopeId, int32_t port);
    static int32_t GetFamily(int32_t addressFamily);
    static ::g::Uno::Net::IPEndPoint* GetLocalEndPoint(int sock);
    static int32_t GetProtocol(int32_t protocolType);
    static ::g::Uno::Net::IPEndPoint* GetRemoteEndPoint(int sock);
    static int32_t GetSocketShudown(int32_t socketShutdown);
    static int32_t GetType1(int32_t socketType);
    static int32_t Poll(int sock, int32_t milliseconds, int32_t mode);
    static int32_t Shutdown(int sock, int32_t how);
};
// }

}}}} // ::g::Uno::Net::Sockets
