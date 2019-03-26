// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LayoutFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.LayoutFunction.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct WidthFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{struct PlacedArgs;}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class WidthFunction :123
// {
::g::Fuse::Elements::LayoutFunction_type* WidthFunction_typeof();
void WidthFunction__ctor_2_fn(WidthFunction* __this, ::g::Fuse::Reactive::Expression* element);
void WidthFunction__GetCurrentValue_fn(WidthFunction* __this, ::g::Fuse::Elements::Element* elm, uObject** __retval);
void WidthFunction__GetValue_fn(WidthFunction* __this, ::g::Fuse::PlacedArgs* args, uObject** __retval);
void WidthFunction__New1_fn(::g::Fuse::Reactive::Expression* element, WidthFunction** __retval);

struct WidthFunction : ::g::Fuse::Elements::LayoutFunction
{
    void ctor_2(::g::Fuse::Reactive::Expression* element);
    static WidthFunction* New1(::g::Fuse::Reactive::Expression* element);
};
// }

}}} // ::g::Fuse::Elements
