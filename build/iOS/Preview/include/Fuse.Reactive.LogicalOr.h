// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct LogicalOr;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class LogicalOr :220
// {
::g::Fuse::Reactive::BinaryOperator_type* LogicalOr_typeof();
void LogicalOr__ctor_6_fn(LogicalOr* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void LogicalOr__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, LogicalOr** __retval);
void LogicalOr__TryCompute1_fn(LogicalOr* __this, uObject* left, uObject* right, uObject** result, bool* __retval);

struct LogicalOr : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_6(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static LogicalOr* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
