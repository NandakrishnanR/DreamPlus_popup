// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.9.0/Scroller.Actions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Gestures.ScrollTo.h>
#include <Fuse.ISourceLocation.h>
namespace g{namespace Fuse{namespace Gestures{struct ScrollableGoto;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class ScrollableGoto :126
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollableGoto_typeof();
void ScrollableGoto__ctor_3_fn(ScrollableGoto* __this);
void ScrollableGoto__New3_fn(ScrollableGoto** __retval);

struct ScrollableGoto : ::g::Fuse::Gestures::ScrollTo
{
    void ctor_3();
    static ScrollableGoto* New3();
};
// }

}}} // ::g::Fuse::Gestures
