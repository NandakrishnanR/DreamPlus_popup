// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Sockets/1.9.0/Socket.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// internal extern struct Socket.SocketHandle :270
// {
uStructType* Socket__SocketHandle_typeof();
void Socket__SocketHandle__op_Equality_fn(int* left, int* right, bool* __retval);

struct Socket__SocketHandle
{
    static int Invalid_;
    static int& Invalid() { return Invalid_; }

    static bool op_Equality(int left, int right);
};
// }

}}}} // ::g::Uno::Net::Sockets
