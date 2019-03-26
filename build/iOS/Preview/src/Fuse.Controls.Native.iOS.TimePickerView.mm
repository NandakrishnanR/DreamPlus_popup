// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.TimePicker/1.9.0/iOS/TimePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.DateTimeConverterHelpers.h>
#include <Fuse.Controls.Native.iOS.TimePickerView.h>
#include <Fuse.Controls.Native.iOS.UIControlEvent.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Controls.TimePicker.h>
#include <Fuse.Controls.TimePickerBase.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action2-2.h>
#include <Uno.Bool.h>
#include <uObjC.Foreign.h>
#include <Uno.DateTime.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class TimePickerView :19
// {
static void TimePickerView_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::TYPES[1/*Uno.IDisposable*/], offsetof(TimePickerView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TimePickerView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TimePickerView_type, interface2),
        ::g::Fuse::Controls::ITimePickerView_typeof(), offsetof(TimePickerView_type, interface3));
    type->SetFields(10,
        ::g::Fuse::Controls::TimePicker_typeof(), offsetof(TimePickerView, _host), 0,
        ::TYPES[1/*Uno.IDisposable*/], offsetof(TimePickerView, _valueChangedEvent), 0);
}

TimePickerView_type* TimePickerView_typeof()
{
    static uSStrong<TimePickerView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TimePickerView);
    options.TypeSize = sizeof(TimePickerView_type);
    type = (TimePickerView_type*)uClassType::New("Fuse.Controls.Native.iOS.TimePickerView", options);
    type->fp_build_ = TimePickerView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))TimePickerView__Dispose_fn;
    type->interface3.fp_OnRooted = (void(*)(uObject*))TimePickerView__OnRooted_fn;
    type->interface3.fp_OnUnrooted = (void(*)(uObject*))TimePickerView__OnUnrooted_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, ::g::Uno::DateTime*))TimePickerView__set_Value_fn;
    type->interface3.fp_set_Is24HourView = (void(*)(uObject*, bool*))TimePickerView__set_Is24HourView_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TimePickerView__Dispose_fn;
    return type;
}

// public TimePickerView(Fuse.Controls.TimePicker host) :25
void TimePickerView__ctor_5_fn(TimePickerView* __this, ::g::Fuse::Controls::TimePicker* host)
{
    __this->ctor_5(host);
}

// private static ObjC.Object Create() :72
void TimePickerView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = TimePickerView::Create();
}

// public override sealed void Dispose() :34
void TimePickerView__Dispose_fn(TimePickerView* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TimePickerView", "Dispose()");
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_valueChangedEvent), ::TYPES[1/*Uno.IDisposable*/]));
    __this->_valueChangedEvent = NULL;
    __this->_host = NULL;
}

// private ObjC.Object GetTime(ObjC.Object datePickerHandle) :93
void TimePickerView__GetTime_fn(TimePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object** __retval)
{
    *__retval = __this->GetTime(datePickerHandle);
}

// public void set_Is24HourView(bool value) :56
void TimePickerView__set_Is24HourView_fn(TimePickerView* __this, bool* value)
{
    __this->Is24HourView(*value);
}

// public TimePickerView New(Fuse.Controls.TimePicker host) :25
void TimePickerView__New3_fn(::g::Fuse::Controls::TimePicker* host, TimePickerView** __retval)
{
    *__retval = TimePickerView::New3(host);
}

// public void OnRooted() :61
void TimePickerView__OnRooted_fn(TimePickerView* __this)
{
    __this->OnRooted();
}

// public void OnUnrooted() :66
void TimePickerView__OnUnrooted_fn(TimePickerView* __this)
{
    __this->OnUnrooted();
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object args) :42
void TimePickerView__OnValueChanged_fn(TimePickerView* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* args)
{
    __this->OnValueChanged(sender, args);
}

// private void SetTime(ObjC.Object datePickerHandle, ObjC.Object time) :85
void TimePickerView__SetTime_fn(TimePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* time)
{
    __this->SetTime(datePickerHandle, time);
}

// public Uno.DateTime get_Value() :49
void TimePickerView__get_Value_fn(TimePickerView* __this, ::g::Uno::DateTime* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(Uno.DateTime value) :50
void TimePickerView__set_Value_fn(TimePickerView* __this, ::g::Uno::DateTime* value)
{
    __this->Value(*value);
}

// public TimePickerView(Fuse.Controls.TimePicker host) [instance] :25
void TimePickerView::ctor_5(::g::Fuse::Controls::TimePicker* host)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TimePickerView", ".ctor(Fuse.Controls.TimePicker)");
    ctor_4(TimePickerView::Create());
    _host = host;
    Value(uPtr(_host)->Value());
    _valueChangedEvent = ::g::Fuse::Controls::Native::iOS::UIControlEvent::AddValueChangedCallback(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)TimePickerView__OnValueChanged_fn, this));
}

// private ObjC.Object GetTime(ObjC.Object datePickerHandle) [instance] :93
::g::ObjC::Object* TimePickerView::GetTime(::g::ObjC::Object* datePickerHandle)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id datePickerHandle) -> ::id
        {
            UIDatePicker *dp = (UIDatePicker *)datePickerHandle;
            
            return [dp date];
        } (::g::ObjC::Object::GetHandle(datePickerHandle)));
        
    }
    
}

// public void set_Is24HourView(bool value) [instance] :56
void TimePickerView::Is24HourView(bool value)
{
}

// public void OnRooted() [instance] :61
void TimePickerView::OnRooted()
{
}

// public void OnUnrooted() [instance] :66
void TimePickerView::OnUnrooted()
{
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object args) [instance] :42
void TimePickerView::OnValueChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* args)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TimePickerView", "OnValueChanged(ObjC.Object,ObjC.Object)");
    uPtr(_host)->OnNativeViewValueChanged(Value());
}

// private void SetTime(ObjC.Object datePickerHandle, ObjC.Object time) [instance] :85
void TimePickerView::SetTime(::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* time)
{
    @autoreleasepool
    {
        [] (::id datePickerHandle, ::id time) -> void
        {
            UIDatePicker *dp = (UIDatePicker *)datePickerHandle;
            
            [dp setDate:time animated:true];
        } (::g::ObjC::Object::GetHandle(datePickerHandle), ::g::ObjC::Object::GetHandle(time));
        
    }
    
}

// public Uno.DateTime get_Value() [instance] :49
::g::Uno::DateTime TimePickerView::Value()
{
    uStackFrame __("Fuse.Controls.Native.iOS.TimePickerView", "get_Value()");
    return ::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ConvertNSDateToDateTime(::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ReconstructUtcTime(GetTime(Handle())));
}

// public void set_Value(Uno.DateTime value) [instance] :50
void TimePickerView::Value(::g::Uno::DateTime value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TimePickerView", "set_Value(Uno.DateTime)");
    SetTime(Handle(), ::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ReconstructUtcTime(::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ConvertDateTimeToNSDate(value)));
}

// private static ObjC.Object Create() [static] :72
::g::ObjC::Object* TimePickerView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIDatePicker *dp = [[UIDatePicker alloc] init];
            
            [dp setDatePickerMode:UIDatePickerModeTime];
            
            // Make sure the time picker interprets date values in UTC
            [dp setTimeZone:[NSTimeZone timeZoneForSecondsFromGMT:0]];
            
            return dp;
        } ());
        
    }
    
}

// public TimePickerView New(Fuse.Controls.TimePicker host) [static] :25
TimePickerView* TimePickerView::New3(::g::Fuse::Controls::TimePicker* host)
{
    TimePickerView* obj1 = (TimePickerView*)uNew(TimePickerView_typeof());
    obj1->ctor_5(host);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
