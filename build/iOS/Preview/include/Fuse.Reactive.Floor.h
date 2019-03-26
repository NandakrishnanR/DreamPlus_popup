// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFloatOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Floor;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Floor :311
// {
::g::Fuse::Reactive::UnaryOperator_type* Floor_typeof();
void Floor__ctor_5_fn(Floor* __this, ::g::Fuse::Reactive::Expression* operand);
void Floor__New1_fn(::g::Fuse::Reactive::Expression* operand, Floor** __retval);

struct Floor : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_5(::g::Fuse::Reactive::Expression* operand);
    static Floor* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
