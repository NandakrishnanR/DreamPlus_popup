// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/BitArray.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct BitArray;}}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal sealed class BitArray :3
// {
uType* BitArray_typeof();
void BitArray__ctor__fn(BitArray* __this, int32_t* length);
void BitArray__Index_fn(BitArray* __this, int32_t* i, int32_t* __retval);
void BitArray__get_Item_fn(BitArray* __this, int32_t* i, bool* __retval);
void BitArray__set_Item_fn(BitArray* __this, int32_t* i, bool* value);
void BitArray__Mask_fn(BitArray* __this, int32_t* i, uint8_t* __retval);
void BitArray__New1_fn(int32_t* length, BitArray** __retval);

struct BitArray : uObject
{
    uStrong<uArray*> Data;
    int32_t Count;

    void ctor_(int32_t length);
    int32_t Index(int32_t i);
    bool Item(int32_t i);
    void Item(int32_t i, bool value);
    uint8_t Mask(int32_t i);
    static BitArray* New1(int32_t length);
};
// }

}}}} // ::g::Fuse::Text::Implementation
