// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.9.0/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Computer1-1.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{struct Float4Computer;}}

namespace g{
namespace Fuse{

// internal sealed class Float4Computer :280
// {
::g::Fuse::Computer1_type* Float4Computer_typeof();
void Float4Computer__ctor_2_fn(Float4Computer* __this);
void Float4Computer__New1_fn(Float4Computer** __retval);
void Float4Computer__TryOpImpl_fn(Float4Computer* __this, int32_t* op, ::g::Uno::Float4* a, ::g::Uno::Float4* b, bool* result, bool* __retval);
void Float4Computer__TryOpImpl1_fn(Float4Computer* __this, int32_t* op, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* result, bool* __retval);

struct Float4Computer : ::g::Fuse::Computer1
{
    void ctor_2();
    static Float4Computer* New1();
};
// }

}} // ::g::Fuse
