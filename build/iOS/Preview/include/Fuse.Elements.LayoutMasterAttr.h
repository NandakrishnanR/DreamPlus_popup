// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LayoutMasterAttr.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct LayoutMasterAttr;}}}

namespace g{
namespace Fuse{
namespace Elements{

// public static class LayoutMasterAttr :5
// {
uClassType* LayoutMasterAttr_typeof();
void LayoutMasterAttr__GetLayoutMasterMode_fn(::g::Fuse::Elements::Element* elm, int32_t* __retval);
void LayoutMasterAttr__SetLayoutMasterMode_fn(::g::Fuse::Elements::Element* elm, int32_t* mode);

struct LayoutMasterAttr : uObject
{
    static int32_t GetLayoutMasterMode(::g::Fuse::Elements::Element* elm);
    static void SetLayoutMasterMode(::g::Fuse::Elements::Element* elm, int32_t mode);
};
// }

}}} // ::g::Fuse::Elements
