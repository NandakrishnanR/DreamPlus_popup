// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.DatePicker/1.9.0/DatePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.DateTime.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct DatePickerBase;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public interfacemodifiers class DatePickerBase :24
// {
::g::Fuse::Controls::Panel_type* DatePickerBase_typeof();
void DatePickerBase__ctor_7_fn(DatePickerBase* __this);
void DatePickerBase__get_DatePickerView_fn(DatePickerBase* __this, uObject** __retval);
void DatePickerBase__get_MaxValue_fn(DatePickerBase* __this, ::g::Uno::DateTime* __retval);
void DatePickerBase__set_MaxValue_fn(DatePickerBase* __this, ::g::Uno::DateTime* value);
void DatePickerBase__get_MinValue_fn(DatePickerBase* __this, ::g::Uno::DateTime* __retval);
void DatePickerBase__set_MinValue_fn(DatePickerBase* __this, ::g::Uno::DateTime* value);
void DatePickerBase__OnMaxValueChanged_fn(DatePickerBase* __this, uObject* origin);
void DatePickerBase__OnMinValueChanged_fn(DatePickerBase* __this, uObject* origin);
void DatePickerBase__OnNativeViewValueChanged_fn(DatePickerBase* __this, ::g::Uno::DateTime* newValue);
void DatePickerBase__OnRooted_fn(DatePickerBase* __this);
void DatePickerBase__OnUnrooted_fn(DatePickerBase* __this);
void DatePickerBase__OnValueChanged_fn(DatePickerBase* __this, uObject* origin);
void DatePickerBase__SetMaxValue_fn(DatePickerBase* __this, ::g::Uno::DateTime* value, uObject* origin);
void DatePickerBase__SetMinValue_fn(DatePickerBase* __this, ::g::Uno::DateTime* value, uObject* origin);
void DatePickerBase__SetValue_fn(DatePickerBase* __this, ::g::Uno::DateTime* value, uObject* origin);
void DatePickerBase__UpdateValue_fn(DatePickerBase* __this, ::g::Uno::DateTime* value, uObject* origin);
void DatePickerBase__get_Value_fn(DatePickerBase* __this, ::g::Uno::DateTime* __retval);
void DatePickerBase__set_Value_fn(DatePickerBase* __this, ::g::Uno::DateTime* value);

struct DatePickerBase : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::UX::Selector _valueName_;
    static ::g::Uno::UX::Selector& _valueName() { return DatePickerBase_typeof()->Init(), _valueName_; }
    ::g::Uno::DateTime _value;
    static ::g::Uno::UX::Selector _minValueName_;
    static ::g::Uno::UX::Selector& _minValueName() { return DatePickerBase_typeof()->Init(), _minValueName_; }
    ::g::Uno::DateTime _minValue;
    static ::g::Uno::UX::Selector _maxValueName_;
    static ::g::Uno::UX::Selector& _maxValueName() { return DatePickerBase_typeof()->Init(), _maxValueName_; }
    ::g::Uno::DateTime _maxValue;

    void ctor_7();
    uObject* DatePickerView();
    ::g::Uno::DateTime MaxValue();
    void MaxValue(::g::Uno::DateTime value);
    ::g::Uno::DateTime MinValue();
    void MinValue(::g::Uno::DateTime value);
    void OnMaxValueChanged(uObject* origin);
    void OnMinValueChanged(uObject* origin);
    void OnNativeViewValueChanged(::g::Uno::DateTime newValue);
    void OnValueChanged(uObject* origin);
    void SetMaxValue(::g::Uno::DateTime value, uObject* origin);
    void SetMinValue(::g::Uno::DateTime value, uObject* origin);
    void SetValue(::g::Uno::DateTime value, uObject* origin);
    void UpdateValue(::g::Uno::DateTime value, uObject* origin);
    ::g::Uno::DateTime Value();
    void Value(::g::Uno::DateTime value);
};
// }

}}} // ::g::Fuse::Controls
