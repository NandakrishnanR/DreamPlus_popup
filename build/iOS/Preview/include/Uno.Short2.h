// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Short2.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Short2;}}

namespace g{
namespace Uno{

// public intrinsic struct Short2 :7
// {
uStructType* Short2_typeof();
void Short2__Equals_fn(Short2* __this, uType* __type, uObject* o, bool* __retval);
void Short2__GetHashCode_fn(Short2* __this, uType* __type, int32_t* __retval);
void Short2__ToString_fn(Short2* __this, uType* __type, uString** __retval);

struct Short2
{
    int16_t X;
    int16_t Y;

    bool Equals(uType* __type, uObject* o) { bool __retval; return Short2__Equals_fn(this, __type, o, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return Short2__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Short2__ToString_fn(this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
