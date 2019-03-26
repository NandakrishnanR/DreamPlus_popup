// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.9.0/LongPress.uno.
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
namespace g{namespace Fuse{namespace Gestures{struct LongPressed;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class LongPressed :21
// {
::g::Fuse::Triggers::Trigger_type* LongPressed_typeof();
void LongPressed__ctor_6_fn(LongPressed* __this);
void LongPressed__add_Handler_fn(LongPressed* __this, uDelegate* value);
void LongPressed__remove_Handler_fn(LongPressed* __this, uDelegate* value);
void LongPressed__New2_fn(LongPressed** __retval);
void LongPressed__OnLongPressed_fn(LongPressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* count);
void LongPressed__OnRooted_fn(LongPressed* __this);
void LongPressed__OnUnrooted_fn(LongPressed* __this);

struct LongPressed : ::g::Fuse::Gestures::ClickerTrigger
{
    uStrong<uDelegate*> Handler1;

    void ctor_6();
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void OnLongPressed(::g::Fuse::Input::PointerEventArgs* args, int32_t count);
    static LongPressed* New2();
};
// }

}}} // ::g::Fuse::Gestures
