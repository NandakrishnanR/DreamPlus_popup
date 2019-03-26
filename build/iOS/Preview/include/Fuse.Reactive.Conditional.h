// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.TernaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Conditional;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Conditional :98
// {
::g::Fuse::Reactive::TernaryOperator_type* Conditional_typeof();
void Conditional__ctor_3_fn(Conditional* __this, ::g::Fuse::Reactive::Expression* condition, ::g::Fuse::Reactive::Expression* trueValue, ::g::Fuse::Reactive::Expression* falseValue);
void Conditional__New1_fn(::g::Fuse::Reactive::Expression* condition, ::g::Fuse::Reactive::Expression* trueValue, ::g::Fuse::Reactive::Expression* falseValue, Conditional** __retval);
void Conditional__ToString_fn(Conditional* __this, uString** __retval);
void Conditional__TryCompute1_fn(Conditional* __this, uObject* cond, uObject* trueVal, uObject* falseVal, uObject** result, bool* __retval);

struct Conditional : ::g::Fuse::Reactive::TernaryOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* condition, ::g::Fuse::Reactive::Expression* trueValue, ::g::Fuse::Reactive::Expression* falseValue);
    static Conditional* New1(::g::Fuse::Reactive::Expression* condition, ::g::Fuse::Reactive::Expression* trueValue, ::g::Fuse::Reactive::Expression* falseValue);
};
// }

}}} // ::g::Fuse::Reactive
