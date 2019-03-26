// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFloatOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Sin;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Sin :195
// {
::g::Fuse::Reactive::UnaryOperator_type* Sin_typeof();
void Sin__ctor_5_fn(Sin* __this, ::g::Fuse::Reactive::Expression* operand);
void Sin__New1_fn(::g::Fuse::Reactive::Expression* operand, Sin** __retval);

struct Sin : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_5(::g::Fuse::Reactive::Expression* operand);
    static Sin* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
