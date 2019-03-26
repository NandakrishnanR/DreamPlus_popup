// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Add;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Add :49
// {
::g::Fuse::Reactive::BinaryOperator_type* Add_typeof();
void Add__ctor_6_fn(Add* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void Add__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Add** __retval);
void Add__TryCompute1_fn(Add* __this, uObject* left, uObject* right, uObject** result, bool* __retval);

struct Add : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_6(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static Add* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
