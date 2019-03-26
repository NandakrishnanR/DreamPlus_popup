// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.DatePicker/1.9.0/.uno/ux15/Fuse.Controls.DatePicker.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct DatePicker;}}}
namespace g{namespace Fuse{namespace Controls{struct DatePicker__Template;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class DatePicker.Template :7
// {
::g::Uno::UX::Template_type* DatePicker__Template_typeof();
void DatePicker__Template__ctor_1_fn(DatePicker__Template* __this, ::g::Fuse::Controls::DatePicker* parent, ::g::Fuse::Controls::DatePicker* parentInstance);
void DatePicker__Template__New1_fn(DatePicker__Template* __this, uObject** __retval);
void DatePicker__Template__New2_fn(::g::Fuse::Controls::DatePicker* parent, ::g::Fuse::Controls::DatePicker* parentInstance, DatePicker__Template** __retval);

struct DatePicker__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Fuse::Controls::DatePicker*> __parent1;
    uWeak< ::g::Fuse::Controls::DatePicker*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return DatePicker__Template_typeof()->Init(), __selector0_; }

    void ctor_1(::g::Fuse::Controls::DatePicker* parent, ::g::Fuse::Controls::DatePicker* parentInstance);
    static DatePicker__Template* New2(::g::Fuse::Controls::DatePicker* parent, ::g::Fuse::Controls::DatePicker* parentInstance);
};
// }

}}} // ::g::Fuse::Controls
