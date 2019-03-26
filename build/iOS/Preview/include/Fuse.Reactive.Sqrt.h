// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFloatOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Sqrt;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Sqrt :295
// {
::g::Fuse::Reactive::UnaryOperator_type* Sqrt_typeof();
void Sqrt__ctor_5_fn(Sqrt* __this, ::g::Fuse::Reactive::Expression* operand);
void Sqrt__New1_fn(::g::Fuse::Reactive::Expression* operand, Sqrt** __retval);

struct Sqrt : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_5(::g::Fuse::Reactive::Expression* operand);
    static Sqrt* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
