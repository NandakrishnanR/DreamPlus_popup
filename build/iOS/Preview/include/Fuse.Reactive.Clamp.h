// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.TernaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Clamp;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Clamp :480
// {
::g::Fuse::Reactive::TernaryOperator_type* Clamp_typeof();
void Clamp__ctor_3_fn(Clamp* __this, ::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third);
void Clamp__New1_fn(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third, Clamp** __retval);
void Clamp__ToString_fn(Clamp* __this, uString** __retval);
void Clamp__TryCompute1_fn(Clamp* __this, uObject* a, uObject* mn, uObject* mx, uObject** result, bool* __retval);

struct Clamp : ::g::Fuse::Reactive::TernaryOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third);
    static Clamp* New1(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third);
};
// }

}}} // ::g::Fuse::Reactive
