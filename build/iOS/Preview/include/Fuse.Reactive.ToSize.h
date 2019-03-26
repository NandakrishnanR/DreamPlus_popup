// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/ConversionFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct ToSize;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ToSize :51
// {
::g::Fuse::Reactive::UnaryOperator_type* ToSize_typeof();
void ToSize__ctor_4_fn(ToSize* __this, ::g::Fuse::Reactive::Expression* operand);
void ToSize__New1_fn(::g::Fuse::Reactive::Expression* operand, ToSize** __retval);
void ToSize__TryCompute1_fn(ToSize* __this, uObject* operand, uObject** result, bool* __retval);

struct ToSize : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* operand);
    static ToSize* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
