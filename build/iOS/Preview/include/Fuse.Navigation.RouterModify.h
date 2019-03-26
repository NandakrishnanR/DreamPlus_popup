// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterModify.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterModify;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPageRoute;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterRequest;}}}
namespace g{namespace Fuse{namespace Reactive{struct NodeExpressionBinding;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public class RouterModify :84
// {
struct RouterModify_type : ::g::Fuse::Triggers::Actions::TriggerAction_type
{
    ::g::Fuse::Reactive::IListener interface1;
};

RouterModify_type* RouterModify_typeof();
void RouterModify__ctor_2_fn(RouterModify* __this);
void RouterModify__ctor_3_fn(RouterModify* __this, int32_t* flags);
void RouterModify__get_Bookmark_fn(RouterModify* __this, uString** __retval);
void RouterModify__set_Bookmark_fn(RouterModify* __this, uString* value);
void RouterModify__DisposePathSub_fn(RouterModify* __this);
void RouterModify__FuseReactiveIListenerOnLostData_fn(RouterModify* __this, uObject* source);
void RouterModify__FuseReactiveIListenerOnNewData_fn(RouterModify* __this, uObject* source, uObject* value);
void RouterModify__get_How_fn(RouterModify* __this, int32_t* __retval);
void RouterModify__set_How_fn(RouterModify* __this, int32_t* value);
void RouterModify__New2_fn(RouterModify** __retval);
void RouterModify__New3_fn(int32_t* flags, RouterModify** __retval);
void RouterModify__OnUnrooted_fn(RouterModify* __this);
void RouterModify__get_Path_fn(RouterModify* __this, uObject** __retval);
void RouterModify__set_Path_fn(RouterModify* __this, uObject* value);
void RouterModify__Perform_fn(RouterModify* __this, ::g::Fuse::Node* n);
void RouterModify__PerformRoute_fn(RouterModify* __this, ::g::Fuse::Node* n, ::g::Fuse::Navigation::RouterPageRoute* route);
void RouterModify__get_Relative_fn(RouterModify* __this, ::g::Fuse::Node** __retval);
void RouterModify__set_Relative_fn(RouterModify* __this, ::g::Fuse::Node* value);
void RouterModify__get_Router_fn(RouterModify* __this, ::g::Fuse::Navigation::Router** __retval);
void RouterModify__set_Router_fn(RouterModify* __this, ::g::Fuse::Navigation::Router* value);
void RouterModify__get_Style_fn(RouterModify* __this, uString** __retval);
void RouterModify__set_Style_fn(RouterModify* __this, uString* value);
void RouterModify__get_Transition_fn(RouterModify* __this, int32_t* __retval);
void RouterModify__set_Transition_fn(RouterModify* __this, int32_t* value);

struct RouterModify : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Navigation::RouterRequest*> _request;
    uStrong<uObject*> _path;
    uStrong< ::g::Fuse::Reactive::NodeExpressionBinding*> _pathSub;
    uStrong< ::g::Fuse::Navigation::Router*> _Router;

    void ctor_2();
    void ctor_3(int32_t flags);
    uString* Bookmark();
    void Bookmark(uString* value);
    void DisposePathSub();
    int32_t How();
    void How(int32_t value);
    uObject* Path();
    void Path(uObject* value);
    void PerformRoute(::g::Fuse::Node* n, ::g::Fuse::Navigation::RouterPageRoute* route);
    ::g::Fuse::Node* Relative();
    void Relative(::g::Fuse::Node* value);
    ::g::Fuse::Navigation::Router* Router();
    void Router(::g::Fuse::Navigation::Router* value);
    uString* Style();
    void Style(uString* value);
    int32_t Transition();
    void Transition(int32_t value);
    static RouterModify* New2();
    static RouterModify* New3(int32_t flags);
};
// }

}}} // ::g::Fuse::Navigation
