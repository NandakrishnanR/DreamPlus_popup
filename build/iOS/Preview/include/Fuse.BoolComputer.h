// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.9.0/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Computer1-1.h>
#include <Uno.Bool.h>
namespace g{namespace Fuse{struct BoolComputer;}}

namespace g{
namespace Fuse{

// internal sealed class BoolComputer :136
// {
::g::Fuse::Computer1_type* BoolComputer_typeof();
void BoolComputer__ctor_2_fn(BoolComputer* __this);
void BoolComputer__New1_fn(BoolComputer** __retval);
void BoolComputer__TryOpImpl_fn(BoolComputer* __this, int32_t* op, bool* a, bool* b, bool* result, bool* __retval);
void BoolComputer__TryOpImpl1_fn(BoolComputer* __this, int32_t* op, bool* a, bool* b, bool* result, bool* __retval);

struct BoolComputer : ::g::Fuse::Computer1
{
    void ctor_2();
    static BoolComputer* New1();
};
// }

}} // ::g::Fuse
