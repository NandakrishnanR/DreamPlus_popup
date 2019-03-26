// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Short4.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Short4;}}

namespace g{
namespace Uno{

// public intrinsic struct Short4 :7
// {
uStructType* Short4_typeof();
void Short4__Equals_fn(Short4* __this, uType* __type, uObject* o, bool* __retval);
void Short4__GetHashCode_fn(Short4* __this, uType* __type, int32_t* __retval);
void Short4__ToString_fn(Short4* __this, uType* __type, uString** __retval);

struct Short4
{
    int16_t X;
    int16_t Y;
    int16_t Z;
    int16_t W;

    bool Equals(uType* __type, uObject* o) { bool __retval; return Short4__Equals_fn(this, __type, o, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return Short4__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Short4__ToString_fn(this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
