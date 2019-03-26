// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFloatOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Tan;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Tan :213
// {
::g::Fuse::Reactive::UnaryOperator_type* Tan_typeof();
void Tan__ctor_5_fn(Tan* __this, ::g::Fuse::Reactive::Expression* operand);
void Tan__New1_fn(::g::Fuse::Reactive::Expression* operand, Tan** __retval);

struct Tan : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_5(::g::Fuse::Reactive::Expression* operand);
    static Tan* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
