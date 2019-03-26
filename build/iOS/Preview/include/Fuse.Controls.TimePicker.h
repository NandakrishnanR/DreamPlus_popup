// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.TimePicker/1.9.0/TimePicker.Docs.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.TimePickerBase.h>
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct TimePicker;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class TimePicker :57
// {
::g::Fuse::Controls::Panel_type* TimePicker_typeof();
void TimePicker__ctor_8_fn(TimePicker* __this);
void TimePicker__InitializeUX_fn(TimePicker* __this);
void TimePicker__New4_fn(TimePicker** __retval);

struct TimePicker : ::g::Fuse::Controls::TimePickerBase
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return TimePicker_typeof()->Init(), __selector0_; }

    void ctor_8();
    void InitializeUX();
    static TimePicker* New4();
};
// }

}}} // ::g::Fuse::Controls
