// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Activated.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationTrigger;}}}
namespace g{namespace Fuse{namespace Navigation{struct RoutePageProxy;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract class NavigationTrigger :13
// {
struct NavigationTrigger_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_ActiveChanged)(::g::Fuse::Navigation::NavigationTrigger*, bool*, bool*);
};

NavigationTrigger_type* NavigationTrigger_typeof();
void NavigationTrigger__ctor_6_fn(NavigationTrigger* __this);
void NavigationTrigger__OnRooted_fn(NavigationTrigger* __this);
void NavigationTrigger__OnUnrooted_fn(NavigationTrigger* __this);
void NavigationTrigger__get_Path_fn(NavigationTrigger* __this, int32_t* __retval);
void NavigationTrigger__set_Path_fn(NavigationTrigger* __this, int32_t* value);
void NavigationTrigger__get_When_fn(NavigationTrigger* __this, int32_t* __retval);
void NavigationTrigger__set_When_fn(NavigationTrigger* __this, int32_t* value);

struct NavigationTrigger : ::g::Fuse::Triggers::PulseTrigger
{
    int32_t _path;
    int32_t _when;
    uStrong< ::g::Fuse::Navigation::RoutePageProxy*> _proxy;

    void ctor_6();
    void ActiveChanged(bool isActive, bool isRoot) { (((NavigationTrigger_type*)__type)->fp_ActiveChanged)(this, &isActive, &isRoot); }
    int32_t Path();
    void Path(int32_t value);
    int32_t When();
    void When(int32_t value);
};
// }

}}} // ::g::Fuse::Navigation
