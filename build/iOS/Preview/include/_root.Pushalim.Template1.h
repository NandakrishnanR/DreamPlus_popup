// This file was generated based on /Users/jaeyounchae/Documents/fuse/DreamPlus_popup/build/iOS/Preview/cache/ux15/Pushalim.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Pushalim;}
namespace g{struct Pushalim__Template1;}

namespace g{

// public partial sealed class Pushalim.Template1 :65
// {
::g::Uno::UX::Template_type* Pushalim__Template1_typeof();
void Pushalim__Template1__ctor_1_fn(Pushalim__Template1* __this, ::g::Pushalim* parent, ::g::Pushalim* parentInstance);
void Pushalim__Template1__New1_fn(Pushalim__Template1* __this, uObject** __retval);
void Pushalim__Template1__New2_fn(::g::Pushalim* parent, ::g::Pushalim* parentInstance, Pushalim__Template1** __retval);

struct Pushalim__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::Pushalim*> __parent1;
    uWeak< ::g::Pushalim*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> Monthvalue_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> __self_Value_inst1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb3;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Pushalim__Template1_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Pushalim__Template1_typeof()->Init(), __selector1_; }

    void ctor_1(::g::Pushalim* parent, ::g::Pushalim* parentInstance);
    static Pushalim__Template1* New2(::g::Pushalim* parent, ::g::Pushalim* parentInstance);
};
// }

} // ::g
