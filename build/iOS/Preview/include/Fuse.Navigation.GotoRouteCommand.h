// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/ModifyRouteCommand.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Navigation.RouteModificationCommand.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Navigation{struct GotoRouteCommand;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterRequest;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class GotoRouteCommand :178
// {
::g::Fuse::Navigation::RouteModificationCommand_type* GotoRouteCommand_typeof();
void GotoRouteCommand__ctor_3_fn(GotoRouteCommand* __this);
void GotoRouteCommand__New1_fn(GotoRouteCommand** __retval);
void GotoRouteCommand__ProcessArguments_fn(GotoRouteCommand* __this, ::g::Fuse::Navigation::RouterRequest* request, uArray* args, bool* __retval);

struct GotoRouteCommand : ::g::Fuse::Navigation::RouteModificationCommand
{
    void ctor_3();
    static GotoRouteCommand* New1();
};
// }

}}} // ::g::Fuse::Navigation
