// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.9.0/WindingRules.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct WindingRules;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public static class WindingRules :3
// {
uClassType* WindingRules_typeof();
void WindingRules__AbsoluteGreaterOrEqualsTwo_fn(int32_t* n, bool* __retval);
void WindingRules__Negative_fn(int32_t* n, bool* __retval);
void WindingRules__NonZero_fn(int32_t* n, bool* __retval);
void WindingRules__Odd_fn(int32_t* n, bool* __retval);
void WindingRules__Positive_fn(int32_t* n, bool* __retval);

struct WindingRules : uObject
{
    static bool AbsoluteGreaterOrEqualsTwo(int32_t n);
    static bool Negative(int32_t n);
    static bool NonZero(int32_t n);
    static bool Odd(int32_t n);
    static bool Positive(int32_t n);
};
// }

}}} // ::g::Fuse::Drawing
