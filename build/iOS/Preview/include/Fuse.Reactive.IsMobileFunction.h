// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/PlatformFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.PlatformFunction.h>
namespace g{namespace Fuse{namespace Reactive{struct IsMobileFunction;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class IsMobileFunction :86
// {
::g::Fuse::Reactive::PlatformFunction_type* IsMobileFunction_typeof();
void IsMobileFunction__ctor_2_fn(IsMobileFunction* __this);
void IsMobileFunction__GetResult_fn(IsMobileFunction* __this, bool* __retval);
void IsMobileFunction__New1_fn(IsMobileFunction** __retval);

struct IsMobileFunction : ::g::Fuse::Reactive::PlatformFunction
{
    void ctor_2();
    static IsMobileFunction* New1();
};
// }

}}} // ::g::Fuse::Reactive
