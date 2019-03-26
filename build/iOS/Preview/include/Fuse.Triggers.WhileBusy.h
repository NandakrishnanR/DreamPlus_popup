// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.9.0/WhileBusy.uno.
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
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileBusy;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public class WhileBusy :41
// {
struct WhileBusy_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::Triggers::IBusyHandler interface9;
};

WhileBusy_type* WhileBusy_typeof();
void WhileBusy__ctor_6_fn(WhileBusy* __this);
void WhileBusy__get_Activity_fn(WhileBusy* __this, int32_t* __retval);
void WhileBusy__set_Activity_fn(WhileBusy* __this, int32_t* value);
void WhileBusy__FuseTriggersIBusyHandlerget_BusyActivityHandled_fn(WhileBusy* __this, int32_t* __retval);
void WhileBusy__get_IsHandled_fn(WhileBusy* __this, bool* __retval);
void WhileBusy__set_IsHandled_fn(WhileBusy* __this, bool* value);
void WhileBusy__get_Match_fn(WhileBusy* __this, int32_t* __retval);
void WhileBusy__set_Match_fn(WhileBusy* __this, int32_t* value);
void WhileBusy__New2_fn(WhileBusy** __retval);
void WhileBusy__OnRooted_fn(WhileBusy* __this);
void WhileBusy__OnUnrooted_fn(WhileBusy* __this);
void WhileBusy__Update_fn(WhileBusy* __this);

struct WhileBusy : ::g::Fuse::Triggers::WhileTrigger
{
    int32_t _activity;
    int32_t _match;
    bool _IsHandled;

    void ctor_6();
    int32_t Activity();
    void Activity(int32_t value);
    bool IsHandled();
    void IsHandled(bool value);
    int32_t Match();
    void Match(int32_t value);
    void Update();
    static WhileBusy* New2();
};
// }

}}} // ::g::Fuse::Triggers
