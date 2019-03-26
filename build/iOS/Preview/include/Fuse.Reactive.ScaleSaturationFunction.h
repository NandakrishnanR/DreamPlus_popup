// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Color.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.BinaryColorFunction.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct ScaleSaturationFunction;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ScaleSaturationFunction :223
// {
::g::Fuse::Reactive::BinaryColorFunction_type* ScaleSaturationFunction_typeof();
void ScaleSaturationFunction__ctor_5_fn(ScaleSaturationFunction* __this, ::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* factor);
void ScaleSaturationFunction__ColorCompute_fn(ScaleSaturationFunction* __this, ::g::Uno::Float4* color, float* value, ::g::Uno::Float4* __retval);
void ScaleSaturationFunction__New1_fn(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* factor, ScaleSaturationFunction** __retval);

struct ScaleSaturationFunction : ::g::Fuse::Reactive::BinaryColorFunction
{
    void ctor_5(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* factor);
    static ScaleSaturationFunction* New1(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* factor);
};
// }

}}} // ::g::Fuse::Reactive
