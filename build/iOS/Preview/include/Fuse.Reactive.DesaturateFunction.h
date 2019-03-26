// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Color.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.BinaryColorFunction.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct DesaturateFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class DesaturateFunction :176
// {
::g::Fuse::Reactive::BinaryColorFunction_type* DesaturateFunction_typeof();
void DesaturateFunction__ctor_5_fn(DesaturateFunction* __this, ::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* saturation);
void DesaturateFunction__ColorCompute_fn(DesaturateFunction* __this, ::g::Uno::Float4* color, float* value, ::g::Uno::Float4* __retval);
void DesaturateFunction__New1_fn(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* saturation, DesaturateFunction** __retval);

struct DesaturateFunction : ::g::Fuse::Reactive::BinaryColorFunction
{
    void ctor_5(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* saturation);
    static DesaturateFunction* New1(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* saturation);
};
// }

}}} // ::g::Fuse::Reactive
