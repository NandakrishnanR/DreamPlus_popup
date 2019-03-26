// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct LessOrEqual;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class LessOrEqual :160
// {
::g::Fuse::Reactive::BinaryOperator_type* LessOrEqual_typeof();
void LessOrEqual__ctor_6_fn(LessOrEqual* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void LessOrEqual__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, LessOrEqual** __retval);
void LessOrEqual__TryCompute1_fn(LessOrEqual* __this, uObject* left, uObject* right, uObject** result, bool* __retval);

struct LessOrEqual : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_6(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static LessOrEqual* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
