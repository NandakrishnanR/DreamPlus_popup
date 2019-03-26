// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.TimePicker/1.9.0/iOS/TimePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ITimePickerView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct TimePickerView;}}}}}
namespace g{namespace Fuse{namespace Controls{struct TimePicker;}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct DateTime;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class TimePickerView :19
// {
struct TimePickerView_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Fuse::Controls::ITimePickerView interface3;
};

TimePickerView_type* TimePickerView_typeof();
void TimePickerView__ctor_5_fn(TimePickerView* __this, ::g::Fuse::Controls::TimePicker* host);
void TimePickerView__Create_fn(::g::ObjC::Object** __retval);
void TimePickerView__Dispose_fn(TimePickerView* __this);
void TimePickerView__GetTime_fn(TimePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object** __retval);
void TimePickerView__set_Is24HourView_fn(TimePickerView* __this, bool* value);
void TimePickerView__New3_fn(::g::Fuse::Controls::TimePicker* host, TimePickerView** __retval);
void TimePickerView__OnRooted_fn(TimePickerView* __this);
void TimePickerView__OnUnrooted_fn(TimePickerView* __this);
void TimePickerView__OnValueChanged_fn(TimePickerView* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* args);
void TimePickerView__SetTime_fn(TimePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* time);
void TimePickerView__get_Value_fn(TimePickerView* __this, ::g::Uno::DateTime* __retval);
void TimePickerView__set_Value_fn(TimePickerView* __this, ::g::Uno::DateTime* value);

struct TimePickerView : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong< ::g::Fuse::Controls::TimePicker*> _host;
    uStrong<uObject*> _valueChangedEvent;

    void ctor_5(::g::Fuse::Controls::TimePicker* host);
    ::g::ObjC::Object* GetTime(::g::ObjC::Object* datePickerHandle);
    void Is24HourView(bool value);
    void OnRooted();
    void OnUnrooted();
    void OnValueChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* args);
    void SetTime(::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* time);
    ::g::Uno::DateTime Value();
    void Value(::g::Uno::DateTime value);
    static ::g::ObjC::Object* Create();
    static TimePickerView* New3(::g::Fuse::Controls::TimePicker* host);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
