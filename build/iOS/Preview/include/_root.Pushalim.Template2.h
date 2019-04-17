// This file was generated based on /Users/jaeyounchae/Documents/fuse/DreamPlus_popup/build/iOS/Preview/cache/ux15/Pushalim.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Pushalim;}
namespace g{struct Pushalim__Template2;}

namespace g{

// public partial sealed class Pushalim.Template2 :124
// {
::g::Uno::UX::Template_type* Pushalim__Template2_typeof();
void Pushalim__Template2__ctor_1_fn(Pushalim__Template2* __this, ::g::Pushalim* parent, ::g::Pushalim* parentInstance);
void Pushalim__Template2__New1_fn(Pushalim__Template2* __this, uObject** __retval);
void Pushalim__Template2__New2_fn(::g::Pushalim* parent, ::g::Pushalim* parentInstance, Pushalim__Template2** __retval);

struct Pushalim__Template2 : ::g::Uno::UX::Template
{
    uWeak< ::g::Pushalim*> __parent1;
    uWeak< ::g::Pushalim*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> Dayvalue_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> __self_Value_inst1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb5;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Pushalim__Template2_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Pushalim__Template2_typeof()->Init(), __selector1_; }

    void ctor_1(::g::Pushalim* parent, ::g::Pushalim* parentInstance);
    static Pushalim__Template2* New2(::g::Pushalim* parent, ::g::Pushalim* parentInstance);
};
// }

} // ::g
