// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.9.0/Internal/BufferCollections.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct MultiBuffer;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct MultiBuffer__Setter;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// public sealed class MultiBuffer.Setter :313
// {
uType* MultiBuffer__Setter_typeof();
void MultiBuffer__Setter__ctor__fn(MultiBuffer__Setter* __this, ::g::Fuse::Drawing::Internal::MultiBuffer* owner1, int32_t* index1);
void MultiBuffer__Setter__New1_fn(::g::Fuse::Drawing::Internal::MultiBuffer* owner1, int32_t* index1, MultiBuffer__Setter** __retval);

struct MultiBuffer__Setter : uObject
{
    uStrong< ::g::Fuse::Drawing::Internal::MultiBuffer*> owner;
    int32_t index;
    int32_t baseP;

    void ctor_(::g::Fuse::Drawing::Internal::MultiBuffer* owner1, int32_t index1);
    static MultiBuffer__Setter* New1(::g::Fuse::Drawing::Internal::MultiBuffer* owner1, int32_t index1);
};
// }

}}}} // ::g::Fuse::Drawing::Internal
