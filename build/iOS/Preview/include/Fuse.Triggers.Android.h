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
namespace g{namespace Fuse{namespace Triggers{struct Android;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class Android :55
// {
::g::Fuse::Triggers::Trigger_type* Android_typeof();
void Android__ctor_5_fn(Android* __this);
void Android__New2_fn(Android** __retval);
void Android__OnRooted_fn(Android* __this);
void Android__OnUnrooted_fn(Android* __this);

struct Android : ::g::Fuse::Triggers::Trigger
{
    void ctor_5();
    static Android* New2();
};
// }

}}} // ::g::Fuse::Triggers
