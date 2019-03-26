// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.9.0/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Computer1-1.h>
#include <Uno.Double.h>
namespace g{namespace Fuse{struct NumberComputer;}}

namespace g{
namespace Fuse{

// internal sealed class NumberComputer :102
// {
::g::Fuse::Computer1_type* NumberComputer_typeof();
void NumberComputer__ctor_2_fn(NumberComputer* __this);
void NumberComputer__New1_fn(NumberComputer** __retval);
void NumberComputer__TryOpImpl_fn(NumberComputer* __this, int32_t* op, double* a, double* b, bool* result, bool* __retval);
void NumberComputer__TryOpImpl1_fn(NumberComputer* __this, int32_t* op, double* a, double* b, double* result, bool* __retval);

struct NumberComputer : ::g::Fuse::Computer1
{
    void ctor_2();
    static NumberComputer* New1();
};
// }

}} // ::g::Fuse
