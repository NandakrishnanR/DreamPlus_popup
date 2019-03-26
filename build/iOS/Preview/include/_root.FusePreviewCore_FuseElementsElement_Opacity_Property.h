// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/.uno/ux15/Fuse.Preview.Core.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FusePreviewCore_FuseElementsElement_Opacity_Property;}

namespace g{

// internal sealed class FusePreviewCore_FuseElementsElement_Opacity_Property :51
// {
::g::Uno::UX::Property1_type* FusePreviewCore_FuseElementsElement_Opacity_Property_typeof();
void FusePreviewCore_FuseElementsElement_Opacity_Property__ctor_3_fn(FusePreviewCore_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void FusePreviewCore_FuseElementsElement_Opacity_Property__Get1_fn(FusePreviewCore_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void FusePreviewCore_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FusePreviewCore_FuseElementsElement_Opacity_Property** __retval);
void FusePreviewCore_FuseElementsElement_Opacity_Property__get_Object_fn(FusePreviewCore_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FusePreviewCore_FuseElementsElement_Opacity_Property__Set1_fn(FusePreviewCore_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);
void FusePreviewCore_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FusePreviewCore_FuseElementsElement_Opacity_Property* __this, bool* __retval);

struct FusePreviewCore_FuseElementsElement_Opacity_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static FusePreviewCore_FuseElementsElement_Opacity_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
