// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Color.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct HslaToRgbaFunction;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class HslaToRgbaFunction :318
// {
::g::Fuse::Reactive::UnaryOperator_type* HslaToRgbaFunction_typeof();
void HslaToRgbaFunction__ctor_4_fn(HslaToRgbaFunction* __this, ::g::Fuse::Reactive::Expression* color);
void HslaToRgbaFunction__New1_fn(::g::Fuse::Reactive::Expression* color, HslaToRgbaFunction** __retval);
void HslaToRgbaFunction__TryCompute1_fn(HslaToRgbaFunction* __this, uObject* color_, uObject** result, bool* __retval);

struct HslaToRgbaFunction : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* color);
    static HslaToRgbaFunction* New1(::g::Fuse::Reactive::Expression* color);
};
// }

}}} // ::g::Fuse::Reactive
