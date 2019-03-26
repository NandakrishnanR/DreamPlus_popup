// This file was generated based on /usr/local/share/uno/Packages/Fuse.Selection/1.9.0/IsSelected.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.VarArgFunction.h>
namespace g{namespace Fuse{namespace Selection{struct IsSelectedFunction;}}}

namespace g{
namespace Fuse{
namespace Selection{

// public sealed class IsSelectedFunction :14
// {
::g::Fuse::Reactive::Expression_type* IsSelectedFunction_typeof();
void IsSelectedFunction__ctor_2_fn(IsSelectedFunction* __this);
void IsSelectedFunction__New1_fn(IsSelectedFunction** __retval);
void IsSelectedFunction__Subscribe_fn(IsSelectedFunction* __this, uObject* context, uObject* listener, uObject** __retval);
void IsSelectedFunction__ToString_fn(IsSelectedFunction* __this, uString** __retval);

struct IsSelectedFunction : ::g::Fuse::Reactive::VarArgFunction
{
    void ctor_2();
    static IsSelectedFunction* New1();
};
// }

}}} // ::g::Fuse::Selection
