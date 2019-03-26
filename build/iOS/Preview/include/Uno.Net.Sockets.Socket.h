// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Sockets/1.9.0/Socket.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}
namespace g{namespace Uno{namespace Net{struct EndPoint;}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// public sealed class Socket :263
// {
struct Socket_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Socket_type* Socket_typeof();
void Socket__ctor__fn(Socket* __this, int32_t* addressFamily, int32_t* socketType, int32_t* protocolType);
void Socket__Close_fn(Socket* __this);
void Socket__Connect1_fn(Socket* __this, ::g::Uno::Net::EndPoint* endPoint);
void Socket__Dispose_fn(Socket* __this);
void Socket__Dispose1_fn(Socket* __this, bool* disposing);
void Socket__New1_fn(int32_t* addressFamily, int32_t* socketType, int32_t* protocolType, Socket** __retval);
void Socket__Poll_fn(Socket* __this, int32_t* milliseconds, int32_t* mode, bool* __retval);
void Socket__Receive1_fn(Socket* __this, uArray* buffer, int32_t* offset, int32_t* length, int32_t* flags, int32_t* __retval);
void Socket__Send1_fn(Socket* __this, uArray* buffer, int32_t* offset, int32_t* length, int32_t* flags, int32_t* __retval);
void Socket__Shutdown_fn(Socket* __this, int32_t* how);
void Socket__UpdateLocalEndPoint_fn(Socket* __this);
void Socket__UpdateRemoteEndPoint_fn(Socket* __this);

struct Socket : uObject
{
    int _handle;
    bool _connected;
    uStrong< ::g::Uno::Net::EndPoint*> _localEndPoint;
    uStrong< ::g::Uno::Net::EndPoint*> _remoteEndPoint;

    void ctor_(int32_t addressFamily, int32_t socketType, int32_t protocolType);
    void Close();
    void Connect1(::g::Uno::Net::EndPoint* endPoint);
    void Dispose();
    void Dispose1(bool disposing);
    bool Poll(int32_t milliseconds, int32_t mode);
    int32_t Receive1(uArray* buffer, int32_t offset, int32_t length, int32_t flags);
    int32_t Send1(uArray* buffer, int32_t offset, int32_t length, int32_t flags);
    void Shutdown(int32_t how);
    void UpdateLocalEndPoint();
    void UpdateRemoteEndPoint();
    static Socket* New1(int32_t addressFamily, int32_t socketType, int32_t protocolType);
};
// }

}}}} // ::g::Uno::Net::Sockets
