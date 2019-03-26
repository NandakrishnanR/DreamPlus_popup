// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Color.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.BinaryColorFunction.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct AdjustHueFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class AdjustHueFunction :268
// {
::g::Fuse::Reactive::BinaryColorFunction_type* AdjustHueFunction_typeof();
void AdjustHueFunction__ctor_5_fn(AdjustHueFunction* __this, ::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* hue);
void AdjustHueFunction__ColorCompute_fn(AdjustHueFunction* __this, ::g::Uno::Float4* color, float* value, ::g::Uno::Float4* __retval);
void AdjustHueFunction__New1_fn(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* hue, AdjustHueFunction** __retval);

struct AdjustHueFunction : ::g::Fuse::Reactive::BinaryColorFunction
{
    void ctor_5(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* hue);
    static AdjustHueFunction* New1(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* hue);
};
// }

}}} // ::g::Fuse::Reactive
