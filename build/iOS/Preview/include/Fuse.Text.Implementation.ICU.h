// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/ICU.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct ICU;}}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal static extern class ICU :23
// {
uClassType* ICU_typeof();
void ICU__CheckError_fn(int32_t* errorCode);
void ICU__ErrorCString_fn(int32_t* errorCode, void** __retval);
void ICU__IsFailure_fn(int32_t* errorCode, int32_t* __retval);

struct ICU : uObject
{
    static void CheckError(int32_t errorCode);
    static void* ErrorCString(int32_t errorCode);
    static int32_t IsFailure(int32_t errorCode);
};
// }

}}}} // ::g::Fuse::Text::Implementation
