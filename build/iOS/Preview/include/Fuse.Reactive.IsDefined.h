// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/IsDefined.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.ComputeExpression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct IsDefined;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class IsDefined :17
// {
::g::Fuse::Reactive::ComputeExpression_type* IsDefined_typeof();
void IsDefined__ctor_2_fn(IsDefined* __this, ::g::Fuse::Reactive::Expression* operand);
void IsDefined__New1_fn(::g::Fuse::Reactive::Expression* operand, IsDefined** __retval);
void IsDefined__get_Operand_fn(IsDefined* __this, ::g::Fuse::Reactive::Expression** __retval);
void IsDefined__TryCompute_fn(IsDefined* __this, uArray* args, uObject** result, bool* __retval);

struct IsDefined : ::g::Fuse::Reactive::ComputeExpression
{
    void ctor_2(::g::Fuse::Reactive::Expression* operand);
    ::g::Fuse::Reactive::Expression* Operand();
    static IsDefined* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
