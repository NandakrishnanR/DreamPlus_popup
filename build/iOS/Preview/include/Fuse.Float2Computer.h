// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.9.0/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Computer1-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{struct Float2Computer;}}

namespace g{
namespace Fuse{

// internal sealed class Float2Computer :224
// {
::g::Fuse::Computer1_type* Float2Computer_typeof();
void Float2Computer__ctor_2_fn(Float2Computer* __this);
void Float2Computer__New1_fn(Float2Computer** __retval);
void Float2Computer__TryOpImpl_fn(Float2Computer* __this, int32_t* op, ::g::Uno::Float2* a, ::g::Uno::Float2* b, bool* result, bool* __retval);
void Float2Computer__TryOpImpl1_fn(Float2Computer* __this, int32_t* op, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* result, bool* __retval);

struct Float2Computer : ::g::Fuse::Computer1
{
    void ctor_2();
    static Float2Computer* New1();
};
// }

}} // ::g::Fuse
