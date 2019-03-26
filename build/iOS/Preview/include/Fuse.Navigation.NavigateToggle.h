// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/TriggerActions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigateToggle;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class NavigateToggle :107
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* NavigateToggle_typeof();
void NavigateToggle__ctor_2_fn(NavigateToggle* __this);
void NavigateToggle__get_NavigationContext_fn(NavigateToggle* __this, uObject** __retval);
void NavigateToggle__set_NavigationContext_fn(NavigateToggle* __this, uObject* value);
void NavigateToggle__New2_fn(NavigateToggle** __retval);
void NavigateToggle__Perform_fn(NavigateToggle* __this, ::g::Fuse::Node* n);
void NavigateToggle__get_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual** __retval);
void NavigateToggle__set_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual* value);

struct NavigateToggle : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uObject*> _context;
    uStrong< ::g::Fuse::Visual*> _Target;

    void ctor_2();
    uObject* NavigationContext();
    void NavigationContext(uObject* value);
    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
    static NavigateToggle* New2();
};
// }

}}} // ::g::Fuse::Navigation
