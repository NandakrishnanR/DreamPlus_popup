// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Sockets/1.9.0/IPAddress.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Net.EndPoint.h>
namespace g{namespace Uno{namespace Net{struct IPAddress;}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}

namespace g{
namespace Uno{
namespace Net{

// public sealed class IPEndPoint :24
// {
uType* IPEndPoint_typeof();
void IPEndPoint__ctor_1_fn(IPEndPoint* __this, ::g::Uno::Net::IPAddress* address, int32_t* port);
void IPEndPoint__get_Address_fn(IPEndPoint* __this, ::g::Uno::Net::IPAddress** __retval);
void IPEndPoint__set_Address_fn(IPEndPoint* __this, ::g::Uno::Net::IPAddress* value);
void IPEndPoint__New1_fn(::g::Uno::Net::IPAddress* address, int32_t* port, IPEndPoint** __retval);
void IPEndPoint__get_Port_fn(IPEndPoint* __this, int32_t* __retval);
void IPEndPoint__set_Port_fn(IPEndPoint* __this, int32_t* value);
void IPEndPoint__ToString_fn(IPEndPoint* __this, uString** __retval);

struct IPEndPoint : ::g::Uno::Net::EndPoint
{
    uStrong< ::g::Uno::Net::IPAddress*> _Address;
    int32_t _Port;

    void ctor_1(::g::Uno::Net::IPAddress* address, int32_t port);
    ::g::Uno::Net::IPAddress* Address();
    void Address(::g::Uno::Net::IPAddress* value);
    int32_t Port();
    void Port(int32_t value);
    static IPEndPoint* New1(::g::Uno::Net::IPAddress* address, int32_t port);
};
// }

}}} // ::g::Uno::Net
