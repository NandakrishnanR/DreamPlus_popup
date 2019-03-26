// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.TernaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Lerp;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Lerp :423
// {
::g::Fuse::Reactive::TernaryOperator_type* Lerp_typeof();
void Lerp__ctor_3_fn(Lerp* __this, ::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third);
void Lerp__New1_fn(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third, Lerp** __retval);
void Lerp__ToString_fn(Lerp* __this, uString** __retval);
void Lerp__TryCompute1_fn(Lerp* __this, uObject* a, uObject* b, uObject* t, uObject** result, bool* __retval);

struct Lerp : ::g::Fuse::Reactive::TernaryOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third);
    static Lerp* New1(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third);
};
// }

}}} // ::g::Fuse::Reactive
