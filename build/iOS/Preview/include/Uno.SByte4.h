// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/SByte4.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct SByte4;}}

namespace g{
namespace Uno{

// public intrinsic struct SByte4 :7
// {
uStructType* SByte4_typeof();
void SByte4__Equals_fn(SByte4* __this, uType* __type, uObject* o, bool* __retval);
void SByte4__GetHashCode_fn(SByte4* __this, uType* __type, int32_t* __retval);
void SByte4__ToString_fn(SByte4* __this, uType* __type, uString** __retval);

struct SByte4
{
    int8_t X;
    int8_t Y;
    int8_t Z;
    int8_t W;

    bool Equals(uType* __type, uObject* o) { bool __retval; return SByte4__Equals_fn(this, __type, o, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return SByte4__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return SByte4__ToString_fn(this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
