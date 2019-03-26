// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Color.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.BinaryColorFunction.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct SaturateFunction;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class SaturateFunction :199
// {
::g::Fuse::Reactive::BinaryColorFunction_type* SaturateFunction_typeof();
void SaturateFunction__ctor_5_fn(SaturateFunction* __this, ::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* saturation);
void SaturateFunction__ColorCompute_fn(SaturateFunction* __this, ::g::Uno::Float4* color, float* value, ::g::Uno::Float4* __retval);
void SaturateFunction__New1_fn(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* saturation, SaturateFunction** __retval);

struct SaturateFunction : ::g::Fuse::Reactive::BinaryColorFunction
{
    void ctor_5(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* saturation);
    static SaturateFunction* New1(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* saturation);
};
// }

}}} // ::g::Fuse::Reactive
