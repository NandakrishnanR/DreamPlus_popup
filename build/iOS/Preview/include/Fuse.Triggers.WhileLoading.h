// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.9.0/WhileLoading.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.IBusyHandler.h>
#include <Fuse.Triggers.WhileBusy.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileLoading;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileLoading :32
// {
::g::Fuse::Triggers::WhileBusy_type* WhileLoading_typeof();
void WhileLoading__ctor_7_fn(WhileLoading* __this);
void WhileLoading__New3_fn(WhileLoading** __retval);

struct WhileLoading : ::g::Fuse::Triggers::WhileBusy
{
    void ctor_7();
    static WhileLoading* New3();
};
// }

}}} // ::g::Fuse::Triggers
