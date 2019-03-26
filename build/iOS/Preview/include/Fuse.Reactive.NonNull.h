// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/IsDefined.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.ComputeExpression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct NonNull;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class NonNull :63
// {
::g::Fuse::Reactive::ComputeExpression_type* NonNull_typeof();
void NonNull__ctor_2_fn(NonNull* __this, ::g::Fuse::Reactive::Expression* operand);
void NonNull__New1_fn(::g::Fuse::Reactive::Expression* operand, NonNull** __retval);
void NonNull__get_Operand_fn(NonNull* __this, ::g::Fuse::Reactive::Expression** __retval);
void NonNull__TryCompute_fn(NonNull* __this, uArray* args, uObject** result, bool* __retval);

struct NonNull : ::g::Fuse::Reactive::ComputeExpression
{
    void ctor_2(::g::Fuse::Reactive::Expression* operand);
    ::g::Fuse::Reactive::Expression* Operand();
    static NonNull* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
