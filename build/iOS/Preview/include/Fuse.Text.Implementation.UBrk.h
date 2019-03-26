// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/UBrk.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct BitArray;}}}}
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct UBrk;}}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal static extern class UBrk :9
// {
uClassType* UBrk_typeof();
void UBrk__GetSoftLineBreaks_fn(::g::Fuse::Text::Substring* text, ::g::Fuse::Text::Implementation::BitArray** __retval);
void UBrk__ubrk_fn(uString* text, int32_t* offset, int32_t* length, uArray* outBitArray, int32_t* __retval);

struct UBrk : uObject
{
    static ::g::Fuse::Text::Implementation::BitArray* GetSoftLineBreaks(::g::Fuse::Text::Substring* text);
    static int32_t ubrk(uString* text, int32_t offset, int32_t length, uArray* outBitArray);
};
// }

}}}} // ::g::Fuse::Text::Implementation
