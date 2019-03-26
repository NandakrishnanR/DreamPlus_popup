// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.9.0/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Computer1-1.h>
#include <Uno.Float3.h>
namespace g{namespace Fuse{struct Float3Computer;}}

namespace g{
namespace Fuse{

// internal sealed class Float3Computer :252
// {
::g::Fuse::Computer1_type* Float3Computer_typeof();
void Float3Computer__ctor_2_fn(Float3Computer* __this);
void Float3Computer__New1_fn(Float3Computer** __retval);
void Float3Computer__TryOpImpl_fn(Float3Computer* __this, int32_t* op, ::g::Uno::Float3* a, ::g::Uno::Float3* b, bool* result, bool* __retval);
void Float3Computer__TryOpImpl1_fn(Float3Computer* __this, int32_t* op, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* result, bool* __retval);

struct Float3Computer : ::g::Fuse::Computer1
{
    void ctor_2();
    static Float3Computer* New1();
};
// }

}} // ::g::Fuse
