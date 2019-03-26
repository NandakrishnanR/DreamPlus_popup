// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/UnaryOperator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct LogicalNot;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class LogicalNot :81
// {
::g::Fuse::Reactive::UnaryOperator_type* LogicalNot_typeof();
void LogicalNot__ctor_4_fn(LogicalNot* __this, ::g::Fuse::Reactive::Expression* operand);
void LogicalNot__New1_fn(::g::Fuse::Reactive::Expression* operand, LogicalNot** __retval);
void LogicalNot__TryCompute1_fn(LogicalNot* __this, uObject* operand, uObject** result, bool* __retval);

struct LogicalNot : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* operand);
    static LogicalNot* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
