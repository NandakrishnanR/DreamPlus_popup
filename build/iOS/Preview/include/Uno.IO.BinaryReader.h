// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/BinaryReader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class BinaryReader :7
// {
struct BinaryReader_type : uType
{
    ::g::Uno::IDisposable interface0;
};

BinaryReader_type* BinaryReader_typeof();
void BinaryReader__ctor__fn(BinaryReader* __this, ::g::Uno::IO::Stream* stream);
void BinaryReader__Dispose_fn(BinaryReader* __this);
void BinaryReader__FillBuffer_fn(BinaryReader* __this, int32_t* byteCount);
void BinaryReader__get_LittleEndian_fn(BinaryReader* __this, bool* __retval);
void BinaryReader__set_LittleEndian_fn(BinaryReader* __this, bool* value);
void BinaryReader__New1_fn(::g::Uno::IO::Stream* stream, BinaryReader** __retval);
void BinaryReader__Read7BitEncodedInt_fn(BinaryReader* __this, int32_t* __retval);
void BinaryReader__ReadBoolean_fn(BinaryReader* __this, bool* __retval);
void BinaryReader__ReadByte_fn(BinaryReader* __this, uint8_t* __retval);
void BinaryReader__ReadBytes_fn(BinaryReader* __this, int32_t* byteCount, uArray** __retval);
void BinaryReader__ReadChar_fn(BinaryReader* __this, char16_t* __retval);
void BinaryReader__ReadDouble_fn(BinaryReader* __this, double* __retval);
void BinaryReader__ReadInt_fn(BinaryReader* __this, int32_t* __retval);
void BinaryReader__ReadString_fn(BinaryReader* __this, uString** __retval);

struct BinaryReader : uObject
{
    uStrong< ::g::Uno::IO::Stream*> _stream;
    uStrong<uArray*> _buffer;
    bool _LittleEndian;

    void ctor_(::g::Uno::IO::Stream* stream);
    void Dispose();
    void FillBuffer(int32_t byteCount);
    bool LittleEndian();
    void LittleEndian(bool value);
    int32_t Read7BitEncodedInt();
    bool ReadBoolean();
    uint8_t ReadByte();
    uArray* ReadBytes(int32_t byteCount);
    char16_t ReadChar();
    double ReadDouble();
    int32_t ReadInt();
    uString* ReadString();
    static BinaryReader* New1(::g::Uno::IO::Stream* stream);
};
// }

}}} // ::g::Uno::IO
