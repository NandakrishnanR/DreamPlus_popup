// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.9.0/Platforms.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct iOS;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class iOS :19
// {
::g::Fuse::Triggers::Trigger_type* iOS_typeof();
void iOS__ctor_5_fn(iOS* __this);
void iOS__New2_fn(iOS** __retval);
void iOS__OnRooted_fn(iOS* __this);
void iOS__OnUnrooted_fn(iOS* __this);

struct iOS : ::g::Fuse::Triggers::Trigger
{
    void ctor_5();
    static iOS* New2();
};
// }

}}} // ::g::Fuse::Triggers
