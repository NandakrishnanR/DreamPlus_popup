// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.TimePicker/1.9.0/TimePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct DateTime;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface ITimePickerView :14
// {
uInterfaceType* ITimePickerView_typeof();

struct ITimePickerView
{
    void(*fp_set_Is24HourView)(uObject*, bool*);
    void(*fp_OnRooted)(uObject*);
    void(*fp_OnUnrooted)(uObject*);
    void(*fp_set_Value)(uObject*, ::g::Uno::DateTime*);
    static void Is24HourView(const uInterface& __this, bool value) { __this.VTable<ITimePickerView>()->fp_set_Is24HourView(__this, &value); }
    static void OnRooted(const uInterface& __this) { __this.VTable<ITimePickerView>()->fp_OnRooted(__this); }
    static void OnUnrooted(const uInterface& __this) { __this.VTable<ITimePickerView>()->fp_OnUnrooted(__this); }
    static void Value(const uInterface& __this, ::g::Uno::DateTime value);
};

}}} // ::g::Fuse::Controls

#include <Uno.DateTime.h>

namespace g{
namespace Fuse{
namespace Controls{

inline void ITimePickerView::Value(const uInterface& __this, ::g::Uno::DateTime value) { __this.VTable<ITimePickerView>()->fp_set_Value(__this, &value); }
// }

}}} // ::g::Fuse::Controls
