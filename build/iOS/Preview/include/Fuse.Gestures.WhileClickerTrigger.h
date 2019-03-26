// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.9.0/Internal/Clicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Gestures{struct Clicker;}}}
namespace g{namespace Fuse{namespace Gestures{struct WhileClickerTrigger;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public abstract class WhileClickerTrigger :70
// {
::g::Fuse::Triggers::Trigger_type* WhileClickerTrigger_typeof();
void WhileClickerTrigger__ctor_6_fn(WhileClickerTrigger* __this);
void WhileClickerTrigger__get_GesturePriority_fn(WhileClickerTrigger* __this, int32_t* __retval);
void WhileClickerTrigger__set_GesturePriority_fn(WhileClickerTrigger* __this, int32_t* value);
void WhileClickerTrigger__OnRooted_fn(WhileClickerTrigger* __this);
void WhileClickerTrigger__OnUnrooted_fn(WhileClickerTrigger* __this);

struct WhileClickerTrigger : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Gestures::Clicker*> Clicker;
    int32_t _gesturePriority;

    void ctor_6();
    int32_t GesturePriority();
    void GesturePriority(int32_t value);
};
// }

}}} // ::g::Fuse::Gestures
