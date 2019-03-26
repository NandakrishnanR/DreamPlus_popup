// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.9.0/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Computer1-1.h>
#include <Uno.UX.Size2.h>
namespace g{namespace Fuse{struct Size2Computer;}}

namespace g{
namespace Fuse{

// internal sealed class Size2Computer :196
// {
::g::Fuse::Computer1_type* Size2Computer_typeof();
void Size2Computer__ctor_2_fn(Size2Computer* __this);
void Size2Computer__New1_fn(Size2Computer** __retval);
void Size2Computer__TryOpImpl_fn(Size2Computer* __this, int32_t* op, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, bool* result, bool* __retval);
void Size2Computer__TryOpImpl1_fn(Size2Computer* __this, int32_t* op, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* result, bool* __retval);

struct Size2Computer : ::g::Fuse::Computer1
{
    void ctor_2();
    static Size2Computer* New1();
};
// }

}} // ::g::Fuse
