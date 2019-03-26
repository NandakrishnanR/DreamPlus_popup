// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct UnaryFloatOperator;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class UnaryFloatOperator :129
// {
::g::Fuse::Reactive::UnaryOperator_type* UnaryFloatOperator_typeof();
void UnaryFloatOperator__ctor_4_fn(UnaryFloatOperator* __this, ::g::Fuse::Reactive::Expression* operand, uString* name, uDelegate* op);
void UnaryFloatOperator__TryCompute1_fn(UnaryFloatOperator* __this, uObject* operand, uObject** result, bool* __retval);

struct UnaryFloatOperator : ::g::Fuse::Reactive::UnaryOperator
{
    uStrong<uDelegate*> _op;

    void ctor_4(::g::Fuse::Reactive::Expression* operand, uString* name, uDelegate* op);
};
// }

}}} // ::g::Fuse::Reactive
