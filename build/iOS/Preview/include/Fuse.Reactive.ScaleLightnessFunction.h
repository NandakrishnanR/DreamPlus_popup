// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Color.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.BinaryColorFunction.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct ScaleLightnessFunction;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ScaleLightnessFunction :247
// {
::g::Fuse::Reactive::BinaryColorFunction_type* ScaleLightnessFunction_typeof();
void ScaleLightnessFunction__ctor_5_fn(ScaleLightnessFunction* __this, ::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* factor);
void ScaleLightnessFunction__ColorCompute_fn(ScaleLightnessFunction* __this, ::g::Uno::Float4* color, float* value, ::g::Uno::Float4* __retval);
void ScaleLightnessFunction__New1_fn(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* factor, ScaleLightnessFunction** __retval);

struct ScaleLightnessFunction : ::g::Fuse::Reactive::BinaryColorFunction
{
    void ctor_5(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* factor);
    static ScaleLightnessFunction* New1(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* factor);
};
// }

}}} // ::g::Fuse::Reactive
