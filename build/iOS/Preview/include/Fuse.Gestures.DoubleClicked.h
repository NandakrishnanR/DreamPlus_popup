// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.9.0/Clicked.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Gestures.ClickerTrigger.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Gestures{struct DoubleClicked;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class DoubleClicked :95
// {
::g::Fuse::Triggers::Trigger_type* DoubleClicked_typeof();
void DoubleClicked__ctor_6_fn(DoubleClicked* __this);
void DoubleClicked__add_Handler_fn(DoubleClicked* __this, uDelegate* value);
void DoubleClicked__remove_Handler_fn(DoubleClicked* __this, uDelegate* value);
void DoubleClicked__New2_fn(DoubleClicked** __retval);
void DoubleClicked__OnClicked_fn(DoubleClicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* clickCount);
void DoubleClicked__OnRooted_fn(DoubleClicked* __this);
void DoubleClicked__OnUnrooted_fn(DoubleClicked* __this);

struct DoubleClicked : ::g::Fuse::Gestures::ClickerTrigger
{
    uStrong<uDelegate*> Handler1;

    void ctor_6();
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void OnClicked(::g::Fuse::Input::PointerEventArgs* args, int32_t clickCount);
    static DoubleClicked* New2();
};
// }

}}} // ::g::Fuse::Gestures
