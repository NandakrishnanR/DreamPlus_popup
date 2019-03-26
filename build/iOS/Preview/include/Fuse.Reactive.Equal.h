// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Equal;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Equal :174
// {
::g::Fuse::Reactive::BinaryOperator_type* Equal_typeof();
void Equal__ctor_6_fn(Equal* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void Equal__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Equal** __retval);
void Equal__TryCompute1_fn(Equal* __this, uObject* left, uObject* right, uObject** result, bool* __retval);

struct Equal : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_6(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static Equal* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
