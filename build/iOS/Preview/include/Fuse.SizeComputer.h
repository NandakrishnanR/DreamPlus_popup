// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.9.0/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Computer1-1.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{struct SizeComputer;}}

namespace g{
namespace Fuse{

// internal sealed class SizeComputer :158
// {
::g::Fuse::Computer1_type* SizeComputer_typeof();
void SizeComputer__ctor_2_fn(SizeComputer* __this);
void SizeComputer__New1_fn(SizeComputer** __retval);
void SizeComputer__TryOpImpl_fn(SizeComputer* __this, int32_t* op, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, bool* result, bool* __retval);
void SizeComputer__TryOpImpl1_fn(SizeComputer* __this, int32_t* op, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* result, bool* __retval);

struct SizeComputer : ::g::Fuse::Computer1
{
    void ctor_2();
    static SizeComputer* New1();
};
// }

}} // ::g::Fuse
