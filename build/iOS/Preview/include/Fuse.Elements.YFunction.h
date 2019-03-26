// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LayoutFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.XYBaseLayoutFunction.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct YFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{struct PlacedArgs;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class YFunction :223
// {
::g::Fuse::Elements::XYBaseLayoutFunction_type* YFunction_typeof();
void YFunction__ctor_3_fn(YFunction* __this, ::g::Fuse::Reactive::Expression* element);
void YFunction__GetCurrentValue_fn(YFunction* __this, ::g::Fuse::Elements::Element* elm, uObject** __retval);
void YFunction__GetValue_fn(YFunction* __this, ::g::Fuse::PlacedArgs* args, uObject** __retval);
void YFunction__New1_fn(::g::Fuse::Reactive::Expression* element, YFunction** __retval);
void YFunction__TryCompute_fn(YFunction* __this, ::g::Uno::Float4* v, int32_t* sz, uObject** value, bool* __retval);

struct YFunction : ::g::Fuse::Elements::XYBaseLayoutFunction
{
    void ctor_3(::g::Fuse::Reactive::Expression* element);
    static YFunction* New1(::g::Fuse::Reactive::Expression* element);
};
// }

}}} // ::g::Fuse::Elements
