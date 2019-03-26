// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Sockets/1.9.0/IPAddress.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{struct EndPoint;}}}

namespace g{
namespace Uno{
namespace Net{

// public abstract class EndPoint :9
// {
uType* EndPoint_typeof();
void EndPoint__ctor__fn(EndPoint* __this, int32_t* addressFamily);
void EndPoint__get_AddressFamily_fn(EndPoint* __this, int32_t* __retval);
void EndPoint__set_AddressFamily_fn(EndPoint* __this, int32_t* value);

struct EndPoint : uObject
{
    int32_t _AddressFamily;

    void ctor_(int32_t addressFamily);
    int32_t AddressFamily();
    void AddressFamily(int32_t value);
};
// }

}}} // ::g::Uno::Net
