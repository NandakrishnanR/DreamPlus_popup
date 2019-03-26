// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Even;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Even :48
// {
::g::Fuse::Reactive::UnaryOperator_type* Even_typeof();
void Even__ctor_4_fn(Even* __this, ::g::Fuse::Reactive::Expression* operand);
void Even__New1_fn(::g::Fuse::Reactive::Expression* operand, Even** __retval);
void Even__TryCompute1_fn(Even* __this, uObject* operand, uObject** result, bool* __retval);

struct Even : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* operand);
    static Even* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
