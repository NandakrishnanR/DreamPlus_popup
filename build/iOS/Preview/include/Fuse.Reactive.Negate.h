// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/UnaryOperator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Negate;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Negate :71
// {
::g::Fuse::Reactive::UnaryOperator_type* Negate_typeof();
void Negate__ctor_4_fn(Negate* __this, ::g::Fuse::Reactive::Expression* operand);
void Negate__New1_fn(::g::Fuse::Reactive::Expression* operand, Negate** __retval);
void Negate__TryCompute1_fn(Negate* __this, uObject* operand, uObject** result, bool* __retval);

struct Negate : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* operand);
    static Negate* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
