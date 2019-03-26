// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct InfixOperator;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class InfixOperator :7
// {
::g::Fuse::Reactive::BinaryOperator_type* InfixOperator_typeof();
void InfixOperator__ctor_4_fn(InfixOperator* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void InfixOperator__ctor_5_fn(InfixOperator* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, uString* symbol, int32_t* flags);
void InfixOperator__get_Symbol_fn(InfixOperator* __this, uString** __retval);
void InfixOperator__ToString_fn(InfixOperator* __this, uString** __retval);

struct InfixOperator : ::g::Fuse::Reactive::BinaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    void ctor_5(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, uString* symbol, int32_t flags);
    uString* Symbol();
};
// }

}}} // ::g::Fuse::Reactive
