// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/MemoryStream.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.Stream.h>
namespace g{namespace Uno{namespace IO{struct MemoryStream;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class MemoryStream :7
// {
::g::Uno::IO::Stream_type* MemoryStream_typeof();
void MemoryStream__ctor_1_fn(MemoryStream* __this);
void MemoryStream__ctor_2_fn(MemoryStream* __this, uArray* buffer);
void MemoryStream__ctor_3_fn(MemoryStream* __this, uArray* buffer, bool* writable);
void MemoryStream__get_CanRead_fn(MemoryStream* __this, bool* __retval);
void MemoryStream__get_CanSeek_fn(MemoryStream* __this, bool* __retval);
void MemoryStream__get_CanTimeout_fn(MemoryStream* __this, bool* __retval);
void MemoryStream__get_CanWrite_fn(MemoryStream* __this, bool* __retval);
void MemoryStream__get_Capacity_fn(MemoryStream* __this, int32_t* __retval);
void MemoryStream__EnsureCapacity_fn(MemoryStream* __this, int32_t* byteCount);
void MemoryStream__Flush_fn(MemoryStream* __this);
void MemoryStream__GetBuffer_fn(MemoryStream* __this, uArray** __retval);
void MemoryStream__get_Length_fn(MemoryStream* __this, int64_t* __retval);
void MemoryStream__New1_fn(MemoryStream** __retval);
void MemoryStream__New2_fn(uArray* buffer, MemoryStream** __retval);
void MemoryStream__New3_fn(uArray* buffer, bool* writable, MemoryStream** __retval);
void MemoryStream__get_Position_fn(MemoryStream* __this, int64_t* __retval);
void MemoryStream__set_Position_fn(MemoryStream* __this, int64_t* value);
void MemoryStream__Read_fn(MemoryStream* __this, uArray* dst, int32_t* byteOffset, int32_t* byteCount, int32_t* __retval);
void MemoryStream__ResizeTo_fn(MemoryStream* __this, int32_t* newSize);
void MemoryStream__Seek_fn(MemoryStream* __this, int64_t* byteOffset, int32_t* origin, int64_t* __retval);
void MemoryStream__SetLength_fn(MemoryStream* __this, int64_t* value);
void MemoryStream__Write_fn(MemoryStream* __this, uArray* src, int32_t* byteOffset, int32_t* byteCount);

struct MemoryStream : ::g::Uno::IO::Stream
{
    bool _canWrite;
    bool _canResize;
    uStrong<uArray*> _buffer;
    int32_t _nextIncrease;
    int64_t _length;
    int64_t _Position;

    void ctor_1();
    void ctor_2(uArray* buffer);
    void ctor_3(uArray* buffer, bool writable);
    int32_t Capacity();
    void EnsureCapacity(int32_t byteCount);
    uArray* GetBuffer();
    void ResizeTo(int32_t newSize);
    static MemoryStream* New1();
    static MemoryStream* New2(uArray* buffer);
    static MemoryStream* New3(uArray* buffer, bool writable);
};
// }

}}} // ::g::Uno::IO
