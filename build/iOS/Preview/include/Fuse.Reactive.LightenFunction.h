// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Color.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.BinaryColorFunction.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct LightenFunction;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class LightenFunction :153
// {
::g::Fuse::Reactive::BinaryColorFunction_type* LightenFunction_typeof();
void LightenFunction__ctor_5_fn(LightenFunction* __this, ::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* lightness);
void LightenFunction__ColorCompute_fn(LightenFunction* __this, ::g::Uno::Float4* color, float* value, ::g::Uno::Float4* __retval);
void LightenFunction__New1_fn(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* lightness, LightenFunction** __retval);

struct LightenFunction : ::g::Fuse::Reactive::BinaryColorFunction
{
    void ctor_5(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* lightness);
    static LightenFunction* New1(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* lightness);
};
// }

}}} // ::g::Fuse::Reactive
