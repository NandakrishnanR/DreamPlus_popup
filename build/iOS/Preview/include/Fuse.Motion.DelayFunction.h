// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.9.0/DelayFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Motion{struct DelayFunction;}}}

namespace g{
namespace Fuse{
namespace Motion{

// public sealed class DelayFunction :9
// {
::g::Fuse::Reactive::Expression_type* DelayFunction_typeof();
void DelayFunction__ctor_1_fn(DelayFunction* __this, ::g::Fuse::Reactive::Expression* value, ::g::Fuse::Reactive::Expression* delay);
void DelayFunction__New1_fn(::g::Fuse::Reactive::Expression* value, ::g::Fuse::Reactive::Expression* delay, DelayFunction** __retval);
void DelayFunction__Subscribe_fn(DelayFunction* __this, uObject* context, uObject* listener, uObject** __retval);

struct DelayFunction : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> _value;
    uStrong< ::g::Fuse::Reactive::Expression*> _delay;

    void ctor_1(::g::Fuse::Reactive::Expression* value, ::g::Fuse::Reactive::Expression* delay);
    static DelayFunction* New1(::g::Fuse::Reactive::Expression* value, ::g::Fuse::Reactive::Expression* delay);
};
// }

}}} // ::g::Fuse::Motion
