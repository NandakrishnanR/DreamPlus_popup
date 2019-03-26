// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFloatOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Trunc;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Trunc :400
// {
::g::Fuse::Reactive::UnaryOperator_type* Trunc_typeof();
void Trunc__ctor_5_fn(Trunc* __this, ::g::Fuse::Reactive::Expression* operand);
void Trunc__New1_fn(::g::Fuse::Reactive::Expression* operand, Trunc** __retval);
void Trunc__Op_fn(double* v, double* __retval);

struct Trunc : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_5(::g::Fuse::Reactive::Expression* operand);
    static Trunc* New1(::g::Fuse::Reactive::Expression* operand);
    static double Op(double v);
};
// }

}}} // ::g::Fuse::Reactive
