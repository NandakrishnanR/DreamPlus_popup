// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct BinaryFloatOperator;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class BinaryFloatOperator :169
// {
::g::Fuse::Reactive::BinaryOperator_type* BinaryFloatOperator_typeof();
void BinaryFloatOperator__ctor_4_fn(BinaryFloatOperator* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, uString* name, uDelegate* op);
void BinaryFloatOperator__TryCompute1_fn(BinaryFloatOperator* __this, uObject* left, uObject* right, uObject** result, bool* __retval);

struct BinaryFloatOperator : ::g::Fuse::Reactive::BinaryOperator
{
    uStrong<uDelegate*> _op;

    void ctor_4(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, uString* name, uDelegate* op);
};
// }

}}} // ::g::Fuse::Reactive
