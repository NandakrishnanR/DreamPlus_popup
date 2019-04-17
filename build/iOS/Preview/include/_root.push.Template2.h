// This file was generated based on /Users/jaeyounchae/Documents/fuse/DreamPlus_popup/build/iOS/Preview/cache/ux15/push.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct push;}
namespace g{struct push__Template2;}

namespace g{

// public partial sealed class push.Template2 :88
// {
::g::Uno::UX::Template_type* push__Template2_typeof();
void push__Template2__ctor_1_fn(push__Template2* __this, ::g::push* parent, ::g::push* parentInstance);
void push__Template2__New1_fn(push__Template2* __this, uObject** __retval);
void push__Template2__New2_fn(::g::push* parent, ::g::push* parentInstance, push__Template2** __retval);

struct push__Template2 : ::g::Uno::UX::Template
{
    uWeak< ::g::push*> __parent1;
    uWeak< ::g::push*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> __self_Value_inst1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb17;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return push__Template2_typeof()->Init(), __selector0_; }

    void ctor_1(::g::push* parent, ::g::push* parentInstance);
    static push__Template2* New2(::g::push* parent, ::g::push* parentInstance);
};
// }

} // ::g
