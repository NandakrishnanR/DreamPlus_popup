// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.9.0/Internal/BufferCollections.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Internal.TypedBuffer.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct UShortBuffer;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// public sealed class UShortBuffer :167
// {
uType* UShortBuffer_typeof();
void UShortBuffer__ctor_2_fn(UShortBuffer* __this);
void UShortBuffer__Append_fn(UShortBuffer* __this, int32_t* value);
void UShortBuffer__Append1_fn(UShortBuffer* __this, uint16_t* value);
void UShortBuffer__AppendTri_fn(UShortBuffer* __this, int32_t* a, int32_t* b, int32_t* c);
void UShortBuffer__New3_fn(UShortBuffer** __retval);
void UShortBuffer__Set_fn(UShortBuffer* __this, int32_t* offset, uint16_t* value);

struct UShortBuffer : ::g::Fuse::Drawing::Internal::TypedBuffer
{
    void ctor_2();
    void Append(int32_t value);
    void Append1(uint16_t value);
    void AppendTri(int32_t a, int32_t b, int32_t c);
    void Set(int32_t offset, uint16_t value);
    static UShortBuffer* New3();
};
// }

}}}} // ::g::Fuse::Drawing::Internal
