// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFloatOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Log2;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Log2 :367
// {
::g::Fuse::Reactive::UnaryOperator_type* Log2_typeof();
void Log2__ctor_5_fn(Log2* __this, ::g::Fuse::Reactive::Expression* operand);
void Log2__New1_fn(::g::Fuse::Reactive::Expression* operand, Log2** __retval);

struct Log2 : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_5(::g::Fuse::Reactive::Expression* operand);
    static Log2* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
