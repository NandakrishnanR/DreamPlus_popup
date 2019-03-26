// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/FindRouter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Navigation{struct FindRouter;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class FindRouter :25
// {
::g::Fuse::Reactive::Expression_type* FindRouter_typeof();
void FindRouter__ctor_1_fn(FindRouter* __this);
void FindRouter__New1_fn(FindRouter** __retval);
void FindRouter__Subscribe_fn(FindRouter* __this, uObject* context, uObject* listener, uObject** __retval);

struct FindRouter : ::g::Fuse::Reactive::Expression
{
    void ctor_1();
    static FindRouter* New1();
};
// }

}}} // ::g::Fuse::Navigation
