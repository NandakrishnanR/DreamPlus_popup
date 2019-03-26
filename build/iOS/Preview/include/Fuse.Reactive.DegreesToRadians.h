// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFloatOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct DegreesToRadians;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class DegreesToRadians :319
// {
::g::Fuse::Reactive::UnaryOperator_type* DegreesToRadians_typeof();
void DegreesToRadians__ctor_5_fn(DegreesToRadians* __this, ::g::Fuse::Reactive::Expression* operand);
void DegreesToRadians__New1_fn(::g::Fuse::Reactive::Expression* operand, DegreesToRadians** __retval);

struct DegreesToRadians : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_5(::g::Fuse::Reactive::Expression* operand);
    static DegreesToRadians* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
