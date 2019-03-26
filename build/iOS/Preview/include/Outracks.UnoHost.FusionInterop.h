// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Application.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Outracks{namespace UnoHost{struct FusionInterop;}}}

namespace g{
namespace Outracks{
namespace UnoHost{

// public sealed class FusionInterop :15
// {
uType* FusionInterop_typeof();
void FusionInterop__ctor__fn(FusionInterop* __this);
void FusionInterop__Handler_fn(FusionInterop* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
void FusionInterop__Handler1_fn(FusionInterop* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
void FusionInterop__HitTest_fn(::g::Uno::Float2* point, uObject** __retval);
void FusionInterop__New1_fn(FusionInterop** __retval);
void FusionInterop__OnPointerMoved_fn(uObject* obj, uDelegate* handler);
void FusionInterop__OnPointerPressed_fn(uObject* obj, uDelegate* handler);

struct FusionInterop : uObject
{
    uStrong<uDelegate*> _handler;

    void ctor_();
    void Handler(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
    void Handler1(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
    static uObject* HitTest(::g::Uno::Float2 point);
    static FusionInterop* New1();
    static void OnPointerMoved(uObject* obj, uDelegate* handler);
    static void OnPointerPressed(uObject* obj, uDelegate* handler);
};
// }

}}} // ::g::Outracks::UnoHost
