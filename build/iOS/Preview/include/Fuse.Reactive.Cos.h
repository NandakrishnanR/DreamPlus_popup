// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFloatOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Cos;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Cos :204
// {
::g::Fuse::Reactive::UnaryOperator_type* Cos_typeof();
void Cos__ctor_5_fn(Cos* __this, ::g::Fuse::Reactive::Expression* operand);
void Cos__New1_fn(::g::Fuse::Reactive::Expression* operand, Cos** __retval);

struct Cos : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_5(::g::Fuse::Reactive::Expression* operand);
    static Cos* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
