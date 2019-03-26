// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/ConversionFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct ToString;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ToString :22
// {
::g::Fuse::Reactive::UnaryOperator_type* ToString_typeof();
void ToString__ctor_4_fn(ToString* __this, ::g::Fuse::Reactive::Expression* operand);
void ToString__New1_fn(::g::Fuse::Reactive::Expression* operand, ToString** __retval);
void ToString__TryCompute1_fn(ToString* __this, uObject* operand, uObject** result, bool* __retval);

struct ToString : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* operand);
    static ToString* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
