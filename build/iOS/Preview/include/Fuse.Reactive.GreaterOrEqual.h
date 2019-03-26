// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct GreaterOrEqual;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class GreaterOrEqual :146
// {
::g::Fuse::Reactive::BinaryOperator_type* GreaterOrEqual_typeof();
void GreaterOrEqual__ctor_6_fn(GreaterOrEqual* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void GreaterOrEqual__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, GreaterOrEqual** __retval);
void GreaterOrEqual__TryCompute1_fn(GreaterOrEqual* __this, uObject* left, uObject* right, uObject** result, bool* __retval);

struct GreaterOrEqual : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_6(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static GreaterOrEqual* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
