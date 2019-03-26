// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/IsDefined.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct IsNull;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class IsNull :44
// {
::g::Fuse::Reactive::UnaryOperator_type* IsNull_typeof();
void IsNull__ctor_4_fn(IsNull* __this, ::g::Fuse::Reactive::Expression* operand);
void IsNull__New1_fn(::g::Fuse::Reactive::Expression* operand, IsNull** __retval);
void IsNull__TryCompute1_fn(IsNull* __this, uObject* operand, uObject** result, bool* __retval);

struct IsNull : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* operand);
    static IsNull* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
