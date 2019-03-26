// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.9.0/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Computer1-1.h>
#include <Uno.String.h>
namespace g{namespace Fuse{struct StringComputer;}}

namespace g{
namespace Fuse{

// internal sealed class StringComputer :77
// {
::g::Fuse::Computer1_type* StringComputer_typeof();
void StringComputer__ctor_2_fn(StringComputer* __this);
void StringComputer__New1_fn(StringComputer** __retval);
void StringComputer__TryOpImpl_fn(StringComputer* __this, int32_t* op, uString* a, uString* b, bool* result, bool* __retval);
void StringComputer__TryOpImpl1_fn(StringComputer* __this, int32_t* op, uString* a, uString* b, uString** result, bool* __retval);

struct StringComputer : ::g::Fuse::Computer1
{
    void ctor_2();
    static StringComputer* New1();
};
// }

}} // ::g::Fuse
