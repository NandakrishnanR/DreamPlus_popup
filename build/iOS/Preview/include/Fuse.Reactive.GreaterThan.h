// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct GreaterThan;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class GreaterThan :132
// {
::g::Fuse::Reactive::BinaryOperator_type* GreaterThan_typeof();
void GreaterThan__ctor_6_fn(GreaterThan* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void GreaterThan__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, GreaterThan** __retval);
void GreaterThan__TryCompute1_fn(GreaterThan* __this, uObject* left, uObject* right, uObject** result, bool* __retval);

struct GreaterThan : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_6(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static GreaterThan* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
