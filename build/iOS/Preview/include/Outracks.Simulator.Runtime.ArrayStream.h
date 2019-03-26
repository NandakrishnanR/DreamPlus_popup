// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/ArrayStream.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.Stream.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct ArrayStream;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class ArrayStream :9
// {
::g::Uno::IO::Stream_type* ArrayStream_typeof();
void ArrayStream__ctor_1_fn(ArrayStream* __this, uArray* buffer);
void ArrayStream__get_CanRead_fn(ArrayStream* __this, bool* __retval);
void ArrayStream__get_CanSeek_fn(ArrayStream* __this, bool* __retval);
void ArrayStream__get_CanTimeout_fn(ArrayStream* __this, bool* __retval);
void ArrayStream__get_CanWrite_fn(ArrayStream* __this, bool* __retval);
void ArrayStream__get_Capacity_fn(ArrayStream* __this, int32_t* __retval);
void ArrayStream__EnsureCapacity_fn(ArrayStream* __this, int32_t* byteCount);
void ArrayStream__Flush_fn(ArrayStream* __this);
void ArrayStream__GetBuffer_fn(ArrayStream* __this, uArray** __retval);
void ArrayStream__get_Length_fn(ArrayStream* __this, int64_t* __retval);
void ArrayStream__New1_fn(uArray* buffer, ArrayStream** __retval);
void ArrayStream__get_Position_fn(ArrayStream* __this, int64_t* __retval);
void ArrayStream__set_Position_fn(ArrayStream* __this, int64_t* value);
void ArrayStream__Read_fn(ArrayStream* __this, uArray* dst, int32_t* byteOffset, int32_t* byteCount, int32_t* __retval);
void ArrayStream__ResizeTo_fn(ArrayStream* __this, int32_t* newSize);
void ArrayStream__Seek_fn(ArrayStream* __this, int64_t* byteOffset, int32_t* origin, int64_t* __retval);
void ArrayStream__SetLength_fn(ArrayStream* __this, int64_t* value);
void ArrayStream__Write_fn(ArrayStream* __this, uArray* src, int32_t* byteOffset, int32_t* byteCount);

struct ArrayStream : ::g::Uno::IO::Stream
{
    uStrong<uArray*> _buffer;
    int32_t _nextIncrease;
    int64_t _length;
    int64_t _Position;

    void ctor_1(uArray* buffer);
    int32_t Capacity();
    void EnsureCapacity(int32_t byteCount);
    uArray* GetBuffer();
    void ResizeTo(int32_t newSize);
    static ArrayStream* New1(uArray* buffer);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
