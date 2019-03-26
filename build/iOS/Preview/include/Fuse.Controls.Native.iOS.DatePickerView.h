// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.DatePicker/1.9.0/iOS/DatePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.IDatePickerView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct DatePickerView;}}}}}
namespace g{namespace Fuse{namespace Controls{struct DatePicker;}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct DateTime;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class DatePickerView :19
// {
struct DatePickerView_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Fuse::Controls::IDatePickerView interface3;
};

DatePickerView_type* DatePickerView_typeof();
void DatePickerView__ctor_5_fn(DatePickerView* __this, ::g::Fuse::Controls::DatePicker* host);
void DatePickerView__Create_fn(::g::ObjC::Object** __retval);
void DatePickerView__Dispose_fn(DatePickerView* __this);
void DatePickerView__GetDate_fn(DatePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object** __retval);
void DatePickerView__set_MaxValue_fn(DatePickerView* __this, ::g::Uno::DateTime* value);
void DatePickerView__set_MinValue_fn(DatePickerView* __this, ::g::Uno::DateTime* value);
void DatePickerView__New3_fn(::g::Fuse::Controls::DatePicker* host, DatePickerView** __retval);
void DatePickerView__OnRooted_fn(DatePickerView* __this);
void DatePickerView__OnUnrooted_fn(DatePickerView* __this);
void DatePickerView__OnValueChanged_fn(DatePickerView* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* args);
void DatePickerView__SetDate_fn(DatePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date);
void DatePickerView__SetMaxValue_fn(DatePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date);
void DatePickerView__SetMinValue_fn(DatePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date);
void DatePickerView__get_Value_fn(DatePickerView* __this, ::g::Uno::DateTime* __retval);
void DatePickerView__set_Value_fn(DatePickerView* __this, ::g::Uno::DateTime* value);

struct DatePickerView : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong< ::g::Fuse::Controls::DatePicker*> _host;
    uStrong<uObject*> _valueChangedEvent;

    void ctor_5(::g::Fuse::Controls::DatePicker* host);
    ::g::ObjC::Object* GetDate(::g::ObjC::Object* datePickerHandle);
    void MaxValue(::g::Uno::DateTime value);
    void MinValue(::g::Uno::DateTime value);
    void OnRooted();
    void OnUnrooted();
    void OnValueChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* args);
    void SetDate(::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date);
    void SetMaxValue(::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date);
    void SetMinValue(::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date);
    ::g::Uno::DateTime Value();
    void Value(::g::Uno::DateTime value);
    static ::g::ObjC::Object* Create();
    static DatePickerView* New3(::g::Fuse::Controls::DatePicker* host);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
