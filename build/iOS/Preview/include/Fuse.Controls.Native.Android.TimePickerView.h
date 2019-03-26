// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.TimePicker/1.9.0/Android/TimePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TimePickerView;}}}}}
namespace g{namespace Fuse{namespace Controls{struct TimePicker;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class TimePickerView :11
// {
uType* TimePickerView_typeof();
void TimePickerView__ctor__fn(TimePickerView* __this, ::g::Fuse::Controls::TimePicker* host);
void TimePickerView__New1_fn(::g::Fuse::Controls::TimePicker* host, TimePickerView** __retval);

struct TimePickerView : uObject
{
    void ctor_(::g::Fuse::Controls::TimePicker* host);
    static TimePickerView* New1(::g::Fuse::Controls::TimePicker* host);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
