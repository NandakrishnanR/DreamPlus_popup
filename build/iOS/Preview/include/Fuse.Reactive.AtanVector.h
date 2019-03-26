// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct AtanVector;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class AtanVector :266
// {
::g::Fuse::Reactive::UnaryOperator_type* AtanVector_typeof();
void AtanVector__ctor_4_fn(AtanVector* __this, ::g::Fuse::Reactive::Expression* operand);
void AtanVector__New1_fn(::g::Fuse::Reactive::Expression* operand, AtanVector** __retval);
void AtanVector__TryCompute1_fn(AtanVector* __this, uObject* operand, uObject** result, bool* __retval);

struct AtanVector : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* operand);
    static AtanVector* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
