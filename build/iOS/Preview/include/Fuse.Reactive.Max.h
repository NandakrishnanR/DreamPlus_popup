// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Max;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Max :20
// {
::g::Fuse::Reactive::BinaryOperator_type* Max_typeof();
void Max__ctor_4_fn(Max* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void Max__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Max** __retval);
void Max__TryCompute1_fn(Max* __this, uObject* left, uObject* right, uObject** result, bool* __retval);

struct Max : ::g::Fuse::Reactive::BinaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static Max* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
