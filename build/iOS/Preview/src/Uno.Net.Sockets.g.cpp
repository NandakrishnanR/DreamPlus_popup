// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <errno.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.IO.SeekOrigin.h>
#include <Uno.Long.h>
#include <Uno.Net.EndPoint.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.Net.NetworkHelpers.h>
#include <Uno.Net.Sockets.AddressFamily.h>
#include <Uno.Net.Sockets.NetworkStream.h>
#include <Uno.Net.Sockets.ProtocolType.h>
#include <Uno.Net.Sockets.SelectMode.h>
#include <Uno.Net.Sockets.Socket.h>
#include <Uno.Net.Sockets.Socket.SocketHandle.h>
#include <Uno.Net.Sockets.SocketException.h>
#include <Uno.Net.Sockets.SocketFlags.h>
#include <Uno.Net.Sockets.SocketHelpers.h>
#include <Uno.Net.Sockets.SocketShutdown.h>
#include <Uno.Net.Sockets.SocketType.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.9.0/Socket.uno
// --------------------------------------------------------------

// public enum AddressFamily :9
uEnumType* AddressFamily_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.AddressFamily", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "InterNetwork", 2LL,
        "InterNetworkV6", 23LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.9.0/NetworkStream.uno
// ---------------------------------------------------------------------

// public sealed class NetworkStream :10
// {
static void NetworkStream_build(uType* type)
{
    ::STRINGS[0] = uString::Const("sent != byteCount");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::Net::Sockets::Socket_typeof(), offsetof(NetworkStream, _socket), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NetworkStream__New1_fn, 0, true, type, 1, ::g::Uno::Net::Sockets::Socket_typeof()));
}

::g::Uno::IO::Stream_type* NetworkStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::Stream_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NetworkStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Uno.Net.Sockets.NetworkStream", options);
    type->fp_build_ = NetworkStream_build;
    type->fp_get_CanRead = (void(*)(::g::Uno::IO::Stream*, bool*))NetworkStream__get_CanRead_fn;
    type->fp_get_CanSeek = (void(*)(::g::Uno::IO::Stream*, bool*))NetworkStream__get_CanSeek_fn;
    type->fp_get_CanWrite = (void(*)(::g::Uno::IO::Stream*, bool*))NetworkStream__get_CanWrite_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))NetworkStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))NetworkStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))NetworkStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))NetworkStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*, int32_t*))NetworkStream__Read_fn;
    type->fp_Seek = (void(*)(::g::Uno::IO::Stream*, int64_t*, int32_t*, int64_t*))NetworkStream__Seek_fn;
    type->fp_SetLength = (void(*)(::g::Uno::IO::Stream*, int64_t*))NetworkStream__SetLength_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*))NetworkStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public NetworkStream(Uno.Net.Sockets.Socket socket) :16
void NetworkStream__ctor_1_fn(NetworkStream* __this, ::g::Uno::Net::Sockets::Socket* socket)
{
    __this->ctor_1(socket);
}

// public override sealed bool get_CanRead() :36
void NetworkStream__get_CanRead_fn(NetworkStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed bool get_CanSeek() :46
void NetworkStream__get_CanSeek_fn(NetworkStream* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public override sealed bool get_CanWrite() :41
void NetworkStream__get_CanWrite_fn(NetworkStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed void Flush() :67
void NetworkStream__Flush_fn(NetworkStream* __this)
{
}

// public override sealed long get_Length() :23
void NetworkStream__get_Length_fn(NetworkStream* __this, int64_t* __retval)
{
    return *__retval = 0LL, void();
}

// public NetworkStream New(Uno.Net.Sockets.Socket socket) :16
void NetworkStream__New1_fn(::g::Uno::Net::Sockets::Socket* socket, NetworkStream** __retval)
{
    *__retval = NetworkStream::New1(socket);
}

// public override sealed long get_Position() :28
void NetworkStream__get_Position_fn(NetworkStream* __this, int64_t* __retval)
{
    return *__retval = 0LL, void();
}

// public override sealed void set_Position(long value) :29
void NetworkStream__set_Position_fn(NetworkStream* __this, int64_t* value)
{
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :49
void NetworkStream__Read_fn(NetworkStream* __this, uArray* dst, int32_t* byteOffset, int32_t* byteCount, int32_t* __retval)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "Read(byte[],int,int)");
    int32_t byteOffset_ = *byteOffset;
    int32_t byteCount_ = *byteCount;
    return *__retval = uPtr(__this->_socket)->Receive1(dst, byteOffset_, byteCount_, 0), void();
}

// public override sealed long Seek(long byteOffset, Uno.IO.SeekOrigin origin) :62
void NetworkStream__Seek_fn(NetworkStream* __this, int64_t* byteOffset, int32_t* origin, int64_t* __retval)
{
    return *__retval = 0LL, void();
}

// public override sealed void SetLength(long value) :32
void NetworkStream__SetLength_fn(NetworkStream* __this, int64_t* value)
{
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :54
void NetworkStream__Write_fn(NetworkStream* __this, uArray* src, int32_t* byteOffset, int32_t* byteCount)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "Write(byte[],int,int)");
    int32_t byteOffset_ = *byteOffset;
    int32_t byteCount_ = *byteCount;
    int32_t sent = uPtr(__this->_socket)->Send1(src, byteOffset_, byteCount_, 0);

    if (sent != byteCount_)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"sent != byt...*/]));
}

// public NetworkStream(Uno.Net.Sockets.Socket socket) [instance] :16
void NetworkStream::ctor_1(::g::Uno::Net::Sockets::Socket* socket)
{
    ctor_();
    _socket = socket;
}

// public NetworkStream New(Uno.Net.Sockets.Socket socket) [static] :16
NetworkStream* NetworkStream::New1(::g::Uno::Net::Sockets::Socket* socket)
{
    NetworkStream* obj1 = (NetworkStream*)uNew(NetworkStream_typeof());
    obj1->ctor_1(socket);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.9.0/Socket.uno
// --------------------------------------------------------------

// public enum ProtocolType :22
uEnumType* ProtocolType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.ProtocolType", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Tcp", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.9.0/Socket.uno
// --------------------------------------------------------------

// public enum SelectMode :28
uEnumType* SelectMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.SelectMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Read", 0LL,
        "Write", 1LL,
        "Error", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.9.0/Socket.uno
// --------------------------------------------------------------

// public sealed class Socket :263
// {
// ~Socket() :560
static void Socket__Finalize_fn(Socket* __this)
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Finalize()");
    __this->Dispose1(false);
}

static void Socket_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Socket_type, interface0));
    type->SetFields(0,
        Socket__SocketHandle_typeof(), offsetof(Socket, _handle), 0,
        ::g::Uno::Bool_typeof(), offsetof(Socket, _connected), 0,
        ::g::Uno::Net::EndPoint_typeof(), offsetof(Socket, _localEndPoint), 0,
        ::g::Uno::Net::EndPoint_typeof(), offsetof(Socket, _remoteEndPoint), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("Close", NULL, (void*)Socket__Close_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Connect", NULL, (void*)Socket__Connect1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Net::EndPoint_typeof()),
        new uFunction("Dispose", NULL, (void*)Socket__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Socket__New1_fn, 0, true, type, 3, ::g::Uno::Net::Sockets::AddressFamily_typeof(), ::g::Uno::Net::Sockets::SocketType_typeof(), ::g::Uno::Net::Sockets::ProtocolType_typeof()),
        new uFunction("Poll", NULL, (void*)Socket__Poll_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Net::Sockets::SelectMode_typeof()),
        new uFunction("Receive", NULL, (void*)Socket__Receive1_fn, 0, false, ::g::Uno::Int_typeof(), 4, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Net::Sockets::SocketFlags_typeof()),
        new uFunction("Send", NULL, (void*)Socket__Send1_fn, 0, false, ::g::Uno::Int_typeof(), 4, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Net::Sockets::SocketFlags_typeof()),
        new uFunction("Shutdown", NULL, (void*)Socket__Shutdown_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Net::Sockets::SocketShutdown_typeof()));
}

Socket_type* Socket_typeof()
{
    static uSStrong<Socket_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Socket);
    options.TypeSize = sizeof(Socket_type);
    type = (Socket_type*)uClassType::New("Uno.Net.Sockets.Socket", options);
    type->fp_build_ = Socket_build;
    type->fp_Finalize = (void(*)(uObject*))Socket__Finalize_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Socket__Dispose_fn;
    return type;
}

// public Socket(Uno.Net.Sockets.AddressFamily addressFamily, Uno.Net.Sockets.SocketType socketType, Uno.Net.Sockets.ProtocolType protocolType) :287
void Socket__ctor__fn(Socket* __this, int32_t* addressFamily, int32_t* socketType, int32_t* protocolType)
{
    __this->ctor_(*addressFamily, *socketType, *protocolType);
}

// public void Close() :531
void Socket__Close_fn(Socket* __this)
{
    __this->Close();
}

// public void Connect(Uno.Net.EndPoint endPoint) :382
void Socket__Connect1_fn(Socket* __this, ::g::Uno::Net::EndPoint* endPoint)
{
    __this->Connect1(endPoint);
}

// public void Dispose() :555
void Socket__Dispose_fn(Socket* __this)
{
    __this->Dispose();
}

// protected void Dispose(bool disposing) :536
void Socket__Dispose1_fn(Socket* __this, bool* disposing)
{
    __this->Dispose1(*disposing);
}

// public Socket New(Uno.Net.Sockets.AddressFamily addressFamily, Uno.Net.Sockets.SocketType socketType, Uno.Net.Sockets.ProtocolType protocolType) :287
void Socket__New1_fn(int32_t* addressFamily, int32_t* socketType, int32_t* protocolType, Socket** __retval)
{
    *__retval = Socket::New1(*addressFamily, *socketType, *protocolType);
}

// public bool Poll(int milliseconds, Uno.Net.Sockets.SelectMode mode) :489
void Socket__Poll_fn(Socket* __this, int32_t* milliseconds, int32_t* mode, bool* __retval)
{
    *__retval = __this->Poll(*milliseconds, *mode);
}

// public int Receive(byte[] buffer, int offset, int length, Uno.Net.Sockets.SocketFlags flags) :432
void Socket__Receive1_fn(Socket* __this, uArray* buffer, int32_t* offset, int32_t* length, int32_t* flags, int32_t* __retval)
{
    *__retval = __this->Receive1(buffer, *offset, *length, *flags);
}

// public int Send(byte[] buffer, int offset, int length, Uno.Net.Sockets.SocketFlags flags) :414
void Socket__Send1_fn(Socket* __this, uArray* buffer, int32_t* offset, int32_t* length, int32_t* flags, int32_t* __retval)
{
    *__retval = __this->Send1(buffer, *offset, *length, *flags);
}

// public void Shutdown(Uno.Net.Sockets.SocketShutdown how) :502
void Socket__Shutdown_fn(Socket* __this, int32_t* how)
{
    __this->Shutdown(*how);
}

// private void UpdateLocalEndPoint() :353
void Socket__UpdateLocalEndPoint_fn(Socket* __this)
{
    __this->UpdateLocalEndPoint();
}

// private void UpdateRemoteEndPoint() :343
void Socket__UpdateRemoteEndPoint_fn(Socket* __this)
{
    __this->UpdateRemoteEndPoint();
}

// public Socket(Uno.Net.Sockets.AddressFamily addressFamily, Uno.Net.Sockets.SocketType socketType, Uno.Net.Sockets.ProtocolType protocolType) [instance] :287
void Socket::ctor_(int32_t addressFamily, int32_t socketType, int32_t protocolType)
{
    uStackFrame __("Uno.Net.Sockets.Socket", ".ctor(Uno.Net.Sockets.AddressFamily,Uno.Net.Sockets.SocketType,Uno.Net.Sockets.ProtocolType)");
    int32_t family = ::g::Uno::Net::Sockets::SocketHelpers::GetFamily(addressFamily);
    int32_t type = ::g::Uno::Net::Sockets::SocketHelpers::GetType1(socketType);
    int32_t protocol = ::g::Uno::Net::Sockets::SocketHelpers::GetProtocol(protocolType);
    _handle = socket(family, type, protocol);

    if (Socket__SocketHandle::op_Equality(_handle, Socket__SocketHandle::Invalid_))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::Net::NetworkHelpers::GetError()));
}

// public void Close() [instance] :531
void Socket::Close()
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Close()");
    Dispose();
}

// public void Connect(Uno.Net.EndPoint endPoint) [instance] :382
void Socket::Connect1(::g::Uno::Net::EndPoint* endPoint)
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Connect(Uno.Net.EndPoint)");
    ::g::Uno::Net::IPEndPoint* ipEndPoint = uAs< ::g::Uno::Net::IPEndPoint*>(endPoint, ::g::Uno::Net::IPEndPoint_typeof());

    if (ipEndPoint != NULL)
    {
        int32_t result = ::g::Uno::Net::Sockets::SocketHelpers::Connect(_handle, ::g::Uno::Net::Sockets::SocketHelpers::GetFamily(uPtr(ipEndPoint)->AddressFamily()), uPtr(uPtr(ipEndPoint)->Address())->GetAddressBytes(), uPtr(uPtr(ipEndPoint)->Address())->ScopeId(), uPtr(ipEndPoint)->Port());

        if (result < 0)
            U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));

        UpdateLocalEndPoint();
    }
    else
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(uString::Const("EndPoint not supported: "), endPoint)));

    UpdateRemoteEndPoint();
    _connected = true;
}

// public void Dispose() [instance] :555
void Socket::Dispose()
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Dispose()");
    Dispose1(true);
}

// protected void Dispose(bool disposing) [instance] :536
void Socket::Dispose1(bool disposing)
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Dispose(bool)");
    bool disposing_ = disposing;

    if (!disposing_)
        return;

    int32_t result;
    result = close(_handle);

    if (result < 0)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));
}

// public bool Poll(int milliseconds, Uno.Net.Sockets.SelectMode mode) [instance] :489
bool Socket::Poll(int32_t milliseconds, int32_t mode)
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Poll(int,Uno.Net.Sockets.SelectMode)");
    int32_t result = ::g::Uno::Net::Sockets::SocketHelpers::Poll(_handle, milliseconds, mode);

    if (result < 0)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));

    return result > 0;
}

// public int Receive(byte[] buffer, int offset, int length, Uno.Net.Sockets.SocketFlags flags) [instance] :432
int32_t Socket::Receive1(uArray* buffer, int32_t offset, int32_t length, int32_t flags)
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Receive(byte[],int,int,Uno.Net.Sockets.SocketFlags)");

    if ((offset + length) > uPtr(buffer)->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(uString::Const("Offset and length out of range")));

    int32_t ret = recv(_handle, (char *)buffer->Ptr() + offset, length, 0);

    if (ret < 0)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));

    return ret;
}

// public int Send(byte[] buffer, int offset, int length, Uno.Net.Sockets.SocketFlags flags) [instance] :414
int32_t Socket::Send1(uArray* buffer, int32_t offset, int32_t length, int32_t flags)
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Send(byte[],int,int,Uno.Net.Sockets.SocketFlags)");
    int32_t ret = send(_handle, (char *)buffer->Ptr() + offset, length, 0);

    if (ret < 0)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));

    return ret;
}

// public void Shutdown(Uno.Net.Sockets.SocketShutdown how) [instance] :502
void Socket::Shutdown(int32_t how)
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Shutdown(Uno.Net.Sockets.SocketShutdown)");

    if (!_connected)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(uString::Const("Not connected!")));

    int32_t result = ::g::Uno::Net::Sockets::SocketHelpers::Shutdown(_handle, ::g::Uno::Net::Sockets::SocketHelpers::GetSocketShudown(how));

    if (result < 0)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));

    _connected = false;
}

// private void UpdateLocalEndPoint() [instance] :353
void Socket::UpdateLocalEndPoint()
{
    uStackFrame __("Uno.Net.Sockets.Socket", "UpdateLocalEndPoint()");
    _localEndPoint = ::g::Uno::Net::Sockets::SocketHelpers::GetLocalEndPoint(_handle);

    if (_localEndPoint == NULL)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));
}

// private void UpdateRemoteEndPoint() [instance] :343
void Socket::UpdateRemoteEndPoint()
{
    uStackFrame __("Uno.Net.Sockets.Socket", "UpdateRemoteEndPoint()");
    _remoteEndPoint = ::g::Uno::Net::Sockets::SocketHelpers::GetRemoteEndPoint(_handle);

    if (_remoteEndPoint == NULL)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));
}

// public Socket New(Uno.Net.Sockets.AddressFamily addressFamily, Uno.Net.Sockets.SocketType socketType, Uno.Net.Sockets.ProtocolType protocolType) [static] :287
Socket* Socket::New1(int32_t addressFamily, int32_t socketType, int32_t protocolType)
{
    Socket* obj1 = (Socket*)uNew(Socket_typeof());
    obj1->ctor_(addressFamily, socketType, protocolType);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.9.0/Socket.uno
// --------------------------------------------------------------

// public sealed class SocketException :567
// {
static void SocketException_build(uType* type)
{
    type->SetFields(4);
}

::g::Uno::Exception_type* SocketException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(SocketException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Sockets.SocketException", options);
    type->fp_build_ = SocketException_build;
    return type;
}

// internal SocketException(string message) :569
void SocketException__ctor_3_fn(SocketException* __this, uString* message)
{
    __this->ctor_3(message);
}

// internal SocketException New(string message) :569
void SocketException__New4_fn(uString* message, SocketException** __retval)
{
    *__retval = SocketException::New4(message);
}

// internal SocketException(string message) [instance] :569
void SocketException::ctor_3(uString* message)
{
    ctor_1(message);
}

// internal SocketException New(string message) [static] :569
SocketException* SocketException::New4(uString* message)
{
    SocketException* obj1 = (SocketException*)uNew(SocketException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.9.0/Socket.uno
// --------------------------------------------------------------

// public enum SocketFlags :45
uEnumType* SocketFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.SocketFlags", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "None", 0LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.9.0/Socket.uno
// --------------------------------------------------------------

// internal extern struct Socket.SocketHandle :270
// {
static void Socket__SocketHandle_build(uType* type)
{
}

uStructType* Socket__SocketHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(int);
    options.ValueSize = sizeof(int);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Net.Sockets.Socket.SocketHandle", options);
    type->fp_build_ = Socket__SocketHandle_build;
    return type;
}

// public static operator ==(Uno.Net.Sockets.Socket.SocketHandle left, Uno.Net.Sockets.Socket.SocketHandle right) :274
void Socket__SocketHandle__op_Equality_fn(int* left, int* right, bool* __retval)
{
    *__retval = Socket__SocketHandle::op_Equality(*left, *right);
}

int Socket__SocketHandle::Invalid_;

// public static operator ==(Uno.Net.Sockets.Socket.SocketHandle left, Uno.Net.Sockets.Socket.SocketHandle right) [static] :274
bool Socket__SocketHandle::op_Equality(int left, int right)
{
    return left == right;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.9.0/Socket.uno
// --------------------------------------------------------------

// internal sealed extern class SocketHelpers :56
// {
static void SocketHelpers_build(uType* type)
{
}

uType* SocketHelpers_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(SocketHelpers);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Sockets.SocketHelpers", options);
    type->fp_build_ = SocketHelpers_build;
    return type;
}

// public static int Connect(Uno.Net.Sockets.Socket.SocketHandle sock, int family, byte[] address, long scopeId, int port) :147
void SocketHelpers__Connect_fn(int* sock, int32_t* family, uArray* address, int64_t* scopeId, int32_t* port, int32_t* __retval)
{
    *__retval = SocketHelpers::Connect(*sock, *family, address, *scopeId, *port);
}

// public static int GetFamily(Uno.Net.Sockets.AddressFamily addressFamily) :58
void SocketHelpers__GetFamily_fn(int32_t* addressFamily, int32_t* __retval)
{
    *__retval = SocketHelpers::GetFamily(*addressFamily);
}

// public static Uno.Net.IPEndPoint GetLocalEndPoint(Uno.Net.Sockets.Socket.SocketHandle sock) :97
void SocketHelpers__GetLocalEndPoint_fn(int* sock, ::g::Uno::Net::IPEndPoint** __retval)
{
    *__retval = SocketHelpers::GetLocalEndPoint(*sock);
}

// public static int GetProtocol(Uno.Net.Sockets.ProtocolType protocolType) :77
void SocketHelpers__GetProtocol_fn(int32_t* protocolType, int32_t* __retval)
{
    *__retval = SocketHelpers::GetProtocol(*protocolType);
}

// public static Uno.Net.IPEndPoint GetRemoteEndPoint(Uno.Net.Sockets.Socket.SocketHandle sock) :122
void SocketHelpers__GetRemoteEndPoint_fn(int* sock, ::g::Uno::Net::IPEndPoint** __retval)
{
    *__retval = SocketHelpers::GetRemoteEndPoint(*sock);
}

// public static int GetSocketShudown(Uno.Net.Sockets.SocketShutdown socketShutdown) :86
void SocketHelpers__GetSocketShudown_fn(int32_t* socketShutdown, int32_t* __retval)
{
    *__retval = SocketHelpers::GetSocketShudown(*socketShutdown);
}

// public static int GetType(Uno.Net.Sockets.SocketType socketType) :68
void SocketHelpers__GetType1_fn(int32_t* socketType, int32_t* __retval)
{
    *__retval = SocketHelpers::GetType1(*socketType);
}

// public static int Poll(Uno.Net.Sockets.Socket.SocketHandle sock, int milliseconds, Uno.Net.Sockets.SelectMode mode) :199
void SocketHelpers__Poll_fn(int* sock, int32_t* milliseconds, int32_t* mode, int32_t* __retval)
{
    *__retval = SocketHelpers::Poll(*sock, *milliseconds, *mode);
}

// public static extern int Shutdown(Uno.Net.Sockets.Socket.SocketHandle sock, int how) :244
void SocketHelpers__Shutdown_fn(int* sock, int32_t* how, int32_t* __retval)
{
    *__retval = SocketHelpers::Shutdown(*sock, *how);
}

// public static int Connect(Uno.Net.Sockets.Socket.SocketHandle sock, int family, byte[] address, long scopeId, int port) [static] :147
int32_t SocketHelpers::Connect(int sock, int32_t family, uArray* address, int64_t scopeId, int32_t port)
{
    sockaddr_storage ss = { 0 };
    socklen_t size;
    
    if (family == AF_INET)
    {
        sockaddr_in *sa = (sockaddr_in *)&ss;
        size = sizeof(*sa);
        sa->sin_family = family;
        sa->sin_port = htons(port);
        memcpy(&sa->sin_addr.s_addr, address->Ptr(), 4);
    }
    else
    {
        sockaddr_in6 *sa = (sockaddr_in6 *)&ss;
        size = sizeof(*sa);
        sa->sin6_family = family;
        sa->sin6_port = htons(port);
        memcpy(&sa->sin6_addr, address->Ptr(), 16);
        sa->sin6_scope_id = (unsigned long)scopeId;
    }
    
    return connect(sock, (sockaddr *)&ss, size);
}

// public static int GetFamily(Uno.Net.Sockets.AddressFamily addressFamily) [static] :58
int32_t SocketHelpers::GetFamily(int32_t addressFamily)
{
    switch (addressFamily)
    {
        case 2: return AF_INET;
        case 23: return AF_INET6;
        default: U_THROW(::g::Uno::Exception::New2(uString::Utf8("Invalid value for AddressFamily")));
    }
}

// public static Uno.Net.IPEndPoint GetLocalEndPoint(Uno.Net.Sockets.Socket.SocketHandle sock) [static] :97
::g::Uno::Net::IPEndPoint* SocketHelpers::GetLocalEndPoint(int sock)
{
    sockaddr_storage ss = { 0 };
    socklen_t len = sizeof(ss);
    
    int result = getsockname(sock, (sockaddr *)&ss, &len);
    if (result < 0)
        return NULL;
    
    sockaddr_in *sa = (sockaddr_in *)&ss;
    ::g::Uno::Net::IPAddress* ipAddress;
    if (sa->sin_family == AF_INET)
    {
        uArray* tmp = uArray::New(::g::Uno::Byte_typeof()->Array(), 4, &sa->sin_addr.s_addr);
        ipAddress = ::g::Uno::Net::IPAddress::New1(tmp);
    }
    else
    {
        sockaddr_in6 *sa6 = (sockaddr_in6 *)&ss;
        uArray* tmp = uArray::New(::g::Uno::Byte_typeof()->Array(), 16, &sa6->sin6_addr);
        ipAddress = ::g::Uno::Net::IPAddress::New2(tmp, sa6->sin6_scope_id);
    }
    return ::g::Uno::Net::IPEndPoint::New1(ipAddress, ntohs(sa->sin_port));
}

// public static int GetProtocol(Uno.Net.Sockets.ProtocolType protocolType) [static] :77
int32_t SocketHelpers::GetProtocol(int32_t protocolType)
{
    switch (protocolType)
    {
        case 6: return IPPROTO_TCP;
        default: U_THROW(::g::Uno::Exception::New2(uString::Utf8("Invalid value for ProtocolType")));
    }
}

// public static Uno.Net.IPEndPoint GetRemoteEndPoint(Uno.Net.Sockets.Socket.SocketHandle sock) [static] :122
::g::Uno::Net::IPEndPoint* SocketHelpers::GetRemoteEndPoint(int sock)
{
    sockaddr_storage ss = { 0 };
    socklen_t len = sizeof(ss);
    
    int result = getpeername(sock, (sockaddr *)&ss, &len);
    if (result < 0)
        return NULL;
    
    sockaddr_in *sa = (sockaddr_in *)&ss;
    ::g::Uno::Net::IPAddress* ipAddress;
    if (sa->sin_family == AF_INET)
    {
        uArray* tmp = uArray::New(::g::Uno::Byte_typeof()->Array(), 4, &sa->sin_addr.s_addr);
        ipAddress = ::g::Uno::Net::IPAddress::New1(tmp);
    }
    else
    {
        sockaddr_in6 *sa6 = (sockaddr_in6 *)&ss;
        uArray* tmp = uArray::New(::g::Uno::Byte_typeof()->Array(), 16, &sa6->sin6_addr);
        ipAddress = ::g::Uno::Net::IPAddress::New2(tmp, sa6->sin6_scope_id);
    }
    return ::g::Uno::Net::IPEndPoint::New1(ipAddress, ntohs(sa->sin_port));
}

// public static int GetSocketShudown(Uno.Net.Sockets.SocketShutdown socketShutdown) [static] :86
int32_t SocketHelpers::GetSocketShudown(int32_t socketShutdown)
{
    switch (socketShutdown)
    {
        case 0: return SHUT_RD;
        case 1: return SHUT_WR;
        case 2: return SHUT_RDWR;
        default: U_THROW(::g::Uno::Exception::New2(uString::Utf8("Invalid value for SocketShutdown")));
    }
}

// public static int GetType(Uno.Net.Sockets.SocketType socketType) [static] :68
int32_t SocketHelpers::GetType1(int32_t socketType)
{
    switch (socketType)
    {
        case 1: return SOCK_STREAM;
        default: U_THROW(::g::Uno::Exception::New2(uString::Utf8("Invalid value for SocketType")));
    }
}

// public static int Poll(Uno.Net.Sockets.Socket.SocketHandle sock, int milliseconds, Uno.Net.Sockets.SelectMode mode) [static] :199
int32_t SocketHelpers::Poll(int sock, int32_t milliseconds, int32_t mode)
{
    timeval timeout = { 0 };
    timeout.tv_usec = milliseconds % 1000000;
    timeout.tv_sec = milliseconds / 1000000;
    
    fd_set fds;
    FD_ZERO(&fds);
    FD_SET(sock, &fds);
    
    switch (mode)
    {
        case 0:  return select(sock + 1, &fds, NULL, NULL, &timeout);
        case 1: return select(sock + 1, NULL, &fds, NULL, &timeout);
        case 2: return select(sock + 1, NULL, NULL, &fds, &timeout);
        default: U_THROW(::g::Uno::Exception::New2(uString::Utf8("Invalid value for ProtocolType")));
    }
}

// public static extern int Shutdown(Uno.Net.Sockets.Socket.SocketHandle sock, int how) [static] :244
int32_t SocketHelpers::Shutdown(int sock, int32_t how)
{
    int result = shutdown(sock, how);
    if (result < 0 && errno == ENOTCONN)
        return 0;
    return result;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.9.0/Socket.uno
// --------------------------------------------------------------

// public enum SocketShutdown :36
uEnumType* SocketShutdown_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.SocketShutdown", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Receive", 0LL,
        "Send", 1LL,
        "Both", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.9.0/Socket.uno
// --------------------------------------------------------------

// public enum SocketType :16
uEnumType* SocketType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.SocketType", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Stream", 1LL);
    return type;
}

}}}} // ::g::Uno::Net::Sockets
