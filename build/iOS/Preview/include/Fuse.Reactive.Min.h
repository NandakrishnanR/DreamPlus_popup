// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Min;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Min :7
// {
::g::Fuse::Reactive::BinaryOperator_type* Min_typeof();
void Min__ctor_4_fn(Min* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void Min__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Min** __retval);
void Min__TryCompute1_fn(Min* __this, uObject* left, uObject* right, uObject** result, bool* __retval);

struct Min : ::g::Fuse::Reactive::BinaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static Min* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
