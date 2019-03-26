// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/PlatformFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.PlatformFunction.h>
namespace g{namespace Fuse{namespace Reactive{struct IsWindowsFunction;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class IsWindowsFunction :104
// {
::g::Fuse::Reactive::PlatformFunction_type* IsWindowsFunction_typeof();
void IsWindowsFunction__ctor_2_fn(IsWindowsFunction* __this);
void IsWindowsFunction__GetResult_fn(IsWindowsFunction* __this, bool* __retval);
void IsWindowsFunction__New1_fn(IsWindowsFunction** __retval);

struct IsWindowsFunction : ::g::Fuse::Reactive::PlatformFunction
{
    void ctor_2();
    static IsWindowsFunction* New1();
};
// }

}}} // ::g::Fuse::Reactive
