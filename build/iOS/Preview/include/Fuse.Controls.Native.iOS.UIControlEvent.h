// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/iOS/UIControlEvent.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct UIControlEvent;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class UIControlEvent :8
// {
struct UIControlEvent_type : uType
{
    ::g::Uno::IDisposable interface0;
};

UIControlEvent_type* UIControlEvent_typeof();
void UIControlEvent__ctor__fn(UIControlEvent* __this, ::g::ObjC::Object* uiControl, uDelegate* handler, int32_t* type);
void UIControlEvent__AddAllEditingEventsCallback_fn(::g::ObjC::Object* uiControl, uDelegate* handler, uObject** __retval);
void UIControlEvent__AddAllTouchEventsCallback_fn(::g::ObjC::Object* uiControl, uDelegate* handler, uObject** __retval);
void UIControlEvent__AddValueChangedCallback_fn(::g::ObjC::Object* uiControl, uDelegate* handler, uObject** __retval);
void UIControlEvent__Create_fn(::g::ObjC::Object* uiControl, uDelegate* handler, int32_t* type, ::g::ObjC::Object** __retval);
void UIControlEvent__New1_fn(::g::ObjC::Object* uiControl, uDelegate* handler, int32_t* type, UIControlEvent** __retval);
void UIControlEvent__RemoveHandler_fn(::g::ObjC::Object* uiControl, ::g::ObjC::Object* eventHandler, int32_t* type);
void UIControlEvent__UnoIDisposableDispose_fn(UIControlEvent* __this);

struct UIControlEvent : uObject
{
    uStrong< ::g::ObjC::Object*> _handle;
    uStrong< ::g::ObjC::Object*> _uiControl;
    int32_t _type;

    void ctor_(::g::ObjC::Object* uiControl, uDelegate* handler, int32_t type);
    static uObject* AddAllEditingEventsCallback(::g::ObjC::Object* uiControl, uDelegate* handler);
    static uObject* AddAllTouchEventsCallback(::g::ObjC::Object* uiControl, uDelegate* handler);
    static uObject* AddValueChangedCallback(::g::ObjC::Object* uiControl, uDelegate* handler);
    static ::g::ObjC::Object* Create(::g::ObjC::Object* uiControl, uDelegate* handler, int32_t type);
    static UIControlEvent* New1(::g::ObjC::Object* uiControl, uDelegate* handler, int32_t type);
    static void RemoveHandler(::g::ObjC::Object* uiControl, ::g::ObjC::Object* eventHandler, int32_t type);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
