// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Byte2.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Byte2;}}

namespace g{
namespace Uno{

// public intrinsic struct Byte2 :6
// {
uStructType* Byte2_typeof();
void Byte2__Equals_fn(Byte2* __this, uType* __type, uObject* o, bool* __retval);
void Byte2__GetHashCode_fn(Byte2* __this, uType* __type, int32_t* __retval);
void Byte2__ToString_fn(Byte2* __this, uType* __type, uString** __retval);

struct Byte2
{
    uint8_t X;
    uint8_t Y;

    bool Equals(uType* __type, uObject* o) { bool __retval; return Byte2__Equals_fn(this, __type, o, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return Byte2__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Byte2__ToString_fn(this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
