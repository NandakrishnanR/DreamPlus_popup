// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.9.0/Internal/BufferCollections.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct MultiBuffer;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct MultiBuffer__Field;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// public sealed class MultiBuffer.Field :193
// {
uType* MultiBuffer__Field_typeof();
void MultiBuffer__Field__ctor__fn(MultiBuffer__Field* __this);
void MultiBuffer__Field__New1_fn(MultiBuffer__Field** __retval);

struct MultiBuffer__Field : uObject
{
    int32_t Type;
    int32_t Offset;
    uStrong< ::g::Fuse::Drawing::Internal::MultiBuffer*> _owner;

    void ctor_();
    static MultiBuffer__Field* New1();
};
// }

}}}} // ::g::Fuse::Drawing::Internal
