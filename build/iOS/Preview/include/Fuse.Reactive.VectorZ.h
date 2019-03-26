// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/VectorFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct VectorZ;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class VectorZ :54
// {
::g::Fuse::Reactive::UnaryOperator_type* VectorZ_typeof();
void VectorZ__ctor_4_fn(VectorZ* __this, ::g::Fuse::Reactive::Expression* operand);
void VectorZ__New1_fn(::g::Fuse::Reactive::Expression* operand, VectorZ** __retval);
void VectorZ__TryCompute1_fn(VectorZ* __this, uObject* operand, uObject** result, bool* __retval);

struct VectorZ : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* operand);
    static VectorZ* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
