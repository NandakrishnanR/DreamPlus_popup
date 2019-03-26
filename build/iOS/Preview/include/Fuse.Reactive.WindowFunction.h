// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Window.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct WindowFunction;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class WindowFunction :25
// {
::g::Fuse::Reactive::Expression_type* WindowFunction_typeof();
void WindowFunction__ctor_1_fn(WindowFunction* __this);
void WindowFunction__New1_fn(WindowFunction** __retval);
void WindowFunction__Subscribe_fn(WindowFunction* __this, uObject* context, uObject* listener, uObject** __retval);
void WindowFunction__ToString_fn(WindowFunction* __this, uString** __retval);

struct WindowFunction : ::g::Fuse::Reactive::Expression
{
    void ctor_1();
    static WindowFunction* New1();
};
// }

}}} // ::g::Fuse::Reactive
