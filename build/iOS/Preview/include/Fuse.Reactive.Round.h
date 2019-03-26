// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFloatOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Round;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Round :391
// {
::g::Fuse::Reactive::UnaryOperator_type* Round_typeof();
void Round__ctor_5_fn(Round* __this, ::g::Fuse::Reactive::Expression* operand);
void Round__New1_fn(::g::Fuse::Reactive::Expression* operand, Round** __retval);

struct Round : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_5(::g::Fuse::Reactive::Expression* operand);
    static Round* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
