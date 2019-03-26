// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Color.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct RgbaToHslaFunction;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class RgbaToHslaFunction :293
// {
::g::Fuse::Reactive::UnaryOperator_type* RgbaToHslaFunction_typeof();
void RgbaToHslaFunction__ctor_4_fn(RgbaToHslaFunction* __this, ::g::Fuse::Reactive::Expression* color);
void RgbaToHslaFunction__New1_fn(::g::Fuse::Reactive::Expression* color, RgbaToHslaFunction** __retval);
void RgbaToHslaFunction__TryCompute1_fn(RgbaToHslaFunction* __this, uObject* color_, uObject** result, bool* __retval);

struct RgbaToHslaFunction : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* color);
    static RgbaToHslaFunction* New1(::g::Fuse::Reactive::Expression* color);
};
// }

}}} // ::g::Fuse::Reactive
