// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.TimePicker/1.9.0/.uno/ux15/Fuse.Controls.TimePicker.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct TimePicker;}}}
namespace g{namespace Fuse{namespace Controls{struct TimePicker__Template;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class TimePicker.Template :7
// {
::g::Uno::UX::Template_type* TimePicker__Template_typeof();
void TimePicker__Template__ctor_1_fn(TimePicker__Template* __this, ::g::Fuse::Controls::TimePicker* parent, ::g::Fuse::Controls::TimePicker* parentInstance);
void TimePicker__Template__New1_fn(TimePicker__Template* __this, uObject** __retval);
void TimePicker__Template__New2_fn(::g::Fuse::Controls::TimePicker* parent, ::g::Fuse::Controls::TimePicker* parentInstance, TimePicker__Template** __retval);

struct TimePicker__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Fuse::Controls::TimePicker*> __parent1;
    uWeak< ::g::Fuse::Controls::TimePicker*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return TimePicker__Template_typeof()->Init(), __selector0_; }

    void ctor_1(::g::Fuse::Controls::TimePicker* parent, ::g::Fuse::Controls::TimePicker* parentInstance);
    static TimePicker__Template* New2(::g::Fuse::Controls::TimePicker* parent, ::g::Fuse::Controls::TimePicker* parentInstance);
};
// }

}}} // ::g::Fuse::Controls
