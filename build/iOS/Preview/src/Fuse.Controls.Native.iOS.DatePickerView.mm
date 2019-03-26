// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.DatePicker/1.9.0/iOS/DatePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.DatePicker.h>
#include <Fuse.Controls.DatePickerBase.h>
#include <Fuse.Controls.Native.iOS.DatePickerView.h>
#include <Fuse.Controls.Native.iOS.DateTimeConverterHelpers.h>
#include <Fuse.Controls.Native.iOS.UIControlEvent.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action2-2.h>
#include <uObjC.Foreign.h>
#include <Uno.DateTime.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class DatePickerView :19
// {
static void DatePickerView_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::TYPES[1/*Uno.IDisposable*/], offsetof(DatePickerView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(DatePickerView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(DatePickerView_type, interface2),
        ::g::Fuse::Controls::IDatePickerView_typeof(), offsetof(DatePickerView_type, interface3));
    type->SetFields(10,
        ::g::Fuse::Controls::DatePicker_typeof(), offsetof(DatePickerView, _host), 0,
        ::TYPES[1/*Uno.IDisposable*/], offsetof(DatePickerView, _valueChangedEvent), 0);
}

DatePickerView_type* DatePickerView_typeof()
{
    static uSStrong<DatePickerView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(DatePickerView);
    options.TypeSize = sizeof(DatePickerView_type);
    type = (DatePickerView_type*)uClassType::New("Fuse.Controls.Native.iOS.DatePickerView", options);
    type->fp_build_ = DatePickerView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))DatePickerView__Dispose_fn;
    type->interface3.fp_OnRooted = (void(*)(uObject*))DatePickerView__OnRooted_fn;
    type->interface3.fp_OnUnrooted = (void(*)(uObject*))DatePickerView__OnUnrooted_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, ::g::Uno::DateTime*))DatePickerView__set_Value_fn;
    type->interface3.fp_set_MinValue = (void(*)(uObject*, ::g::Uno::DateTime*))DatePickerView__set_MinValue_fn;
    type->interface3.fp_set_MaxValue = (void(*)(uObject*, ::g::Uno::DateTime*))DatePickerView__set_MaxValue_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))DatePickerView__Dispose_fn;
    return type;
}

// public DatePickerView(Fuse.Controls.DatePicker host) :25
void DatePickerView__ctor_5_fn(DatePickerView* __this, ::g::Fuse::Controls::DatePicker* host)
{
    __this->ctor_5(host);
}

// private static ObjC.Object Create() :77
void DatePickerView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = DatePickerView::Create();
}

// public override sealed void Dispose() :37
void DatePickerView__Dispose_fn(DatePickerView* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DatePickerView", "Dispose()");
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_valueChangedEvent), ::TYPES[1/*Uno.IDisposable*/]));
    __this->_valueChangedEvent = NULL;
    __this->_host = NULL;
}

// private ObjC.Object GetDate(ObjC.Object datePickerHandle) :98
void DatePickerView__GetDate_fn(DatePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object** __retval)
{
    *__retval = __this->GetDate(datePickerHandle);
}

// public void set_MaxValue(Uno.DateTime value) :63
void DatePickerView__set_MaxValue_fn(DatePickerView* __this, ::g::Uno::DateTime* value)
{
    __this->MaxValue(*value);
}

// public void set_MinValue(Uno.DateTime value) :58
void DatePickerView__set_MinValue_fn(DatePickerView* __this, ::g::Uno::DateTime* value)
{
    __this->MinValue(*value);
}

// public DatePickerView New(Fuse.Controls.DatePicker host) :25
void DatePickerView__New3_fn(::g::Fuse::Controls::DatePicker* host, DatePickerView** __retval)
{
    *__retval = DatePickerView::New3(host);
}

// public void OnRooted() :66
void DatePickerView__OnRooted_fn(DatePickerView* __this)
{
    __this->OnRooted();
}

// public void OnUnrooted() :71
void DatePickerView__OnUnrooted_fn(DatePickerView* __this)
{
    __this->OnUnrooted();
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object args) :45
void DatePickerView__OnValueChanged_fn(DatePickerView* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* args)
{
    __this->OnValueChanged(sender, args);
}

// private void SetDate(ObjC.Object datePickerHandle, ObjC.Object date) :90
void DatePickerView__SetDate_fn(DatePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date)
{
    __this->SetDate(datePickerHandle, date);
}

// private void SetMaxValue(ObjC.Object datePickerHandle, ObjC.Object date) :114
void DatePickerView__SetMaxValue_fn(DatePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date)
{
    __this->SetMaxValue(datePickerHandle, date);
}

// private void SetMinValue(ObjC.Object datePickerHandle, ObjC.Object date) :106
void DatePickerView__SetMinValue_fn(DatePickerView* __this, ::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date)
{
    __this->SetMinValue(datePickerHandle, date);
}

// public Uno.DateTime get_Value() :52
void DatePickerView__get_Value_fn(DatePickerView* __this, ::g::Uno::DateTime* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(Uno.DateTime value) :53
void DatePickerView__set_Value_fn(DatePickerView* __this, ::g::Uno::DateTime* value)
{
    __this->Value(*value);
}

// public DatePickerView(Fuse.Controls.DatePicker host) [instance] :25
void DatePickerView::ctor_5(::g::Fuse::Controls::DatePicker* host)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DatePickerView", ".ctor(Fuse.Controls.DatePicker)");
    ctor_4(DatePickerView::Create());
    _host = host;
    MinValue(uPtr(_host)->Value());
    MaxValue(uPtr(_host)->Value());
    Value(uPtr(_host)->Value());
    _valueChangedEvent = ::g::Fuse::Controls::Native::iOS::UIControlEvent::AddValueChangedCallback(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)DatePickerView__OnValueChanged_fn, this));
}

// private ObjC.Object GetDate(ObjC.Object datePickerHandle) [instance] :98
::g::ObjC::Object* DatePickerView::GetDate(::g::ObjC::Object* datePickerHandle)
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

// public void set_MaxValue(Uno.DateTime value) [instance] :63
void DatePickerView::MaxValue(::g::Uno::DateTime value)
{
    SetMaxValue(Handle(), ::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ReconstructUtcDate(::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ConvertDateTimeToNSDate(value)));
}

// public void set_MinValue(Uno.DateTime value) [instance] :58
void DatePickerView::MinValue(::g::Uno::DateTime value)
{
    SetMinValue(Handle(), ::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ReconstructUtcDate(::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ConvertDateTimeToNSDate(value)));
}

// public void OnRooted() [instance] :66
void DatePickerView::OnRooted()
{
}

// public void OnUnrooted() [instance] :71
void DatePickerView::OnUnrooted()
{
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object args) [instance] :45
void DatePickerView::OnValueChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* args)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DatePickerView", "OnValueChanged(ObjC.Object,ObjC.Object)");
    uPtr(_host)->OnNativeViewValueChanged(Value());
}

// private void SetDate(ObjC.Object datePickerHandle, ObjC.Object date) [instance] :90
void DatePickerView::SetDate(::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date)
{
    @autoreleasepool
    {
        [] (::id datePickerHandle, ::id date) -> void
        {
            UIDatePicker *dp = (UIDatePicker *)datePickerHandle;
            
            [dp setDate:date animated:true];
        } (::g::ObjC::Object::GetHandle(datePickerHandle), ::g::ObjC::Object::GetHandle(date));
        
    }
    
}

// private void SetMaxValue(ObjC.Object datePickerHandle, ObjC.Object date) [instance] :114
void DatePickerView::SetMaxValue(::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date)
{
    @autoreleasepool
    {
        [] (::id datePickerHandle, ::id date) -> void
        {
            UIDatePicker *dp = (UIDatePicker *)datePickerHandle;
            
            [dp setMaximumDate:date];
        } (::g::ObjC::Object::GetHandle(datePickerHandle), ::g::ObjC::Object::GetHandle(date));
        
    }
    
}

// private void SetMinValue(ObjC.Object datePickerHandle, ObjC.Object date) [instance] :106
void DatePickerView::SetMinValue(::g::ObjC::Object* datePickerHandle, ::g::ObjC::Object* date)
{
    @autoreleasepool
    {
        [] (::id datePickerHandle, ::id date) -> void
        {
            UIDatePicker *dp = (UIDatePicker *)datePickerHandle;
            
            [dp setMinimumDate:date];
        } (::g::ObjC::Object::GetHandle(datePickerHandle), ::g::ObjC::Object::GetHandle(date));
        
    }
    
}

// public Uno.DateTime get_Value() [instance] :52
::g::Uno::DateTime DatePickerView::Value()
{
    return ::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ConvertNSDateToDateTime(::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ReconstructUtcDate(GetDate(Handle())));
}

// public void set_Value(Uno.DateTime value) [instance] :53
void DatePickerView::Value(::g::Uno::DateTime value)
{
    SetDate(Handle(), ::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ReconstructUtcDate(::g::Fuse::Controls::Native::iOS::DateTimeConverterHelpers::ConvertDateTimeToNSDate(value)));
}

// private static ObjC.Object Create() [static] :77
::g::ObjC::Object* DatePickerView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIDatePicker *dp = [[UIDatePicker alloc] init];
            
            [dp setDatePickerMode:UIDatePickerModeDate];
            
            // Make sure the date picker interprets date values in UTC
            [dp setTimeZone:[NSTimeZone timeZoneForSecondsFromGMT:0]];
            
            return dp;
        } ());
        
    }
    
}

// public DatePickerView New(Fuse.Controls.DatePicker host) [static] :25
DatePickerView* DatePickerView::New3(::g::Fuse::Controls::DatePicker* host)
{
    DatePickerView* obj1 = (DatePickerView*)uNew(DatePickerView_typeof());
    obj1->ctor_5(host);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
