// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.9.0/Triggers/WhileScrolled.uno.
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
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Fuse{namespace Triggers{struct ScrollRegion;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileScrolled;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileScrolled :13
// {
::g::Fuse::Triggers::Trigger_type* WhileScrolled_typeof();
void WhileScrolled__ctor_6_fn(WhileScrolled* __this);
void WhileScrolled__New2_fn(WhileScrolled** __retval);
void WhileScrolled__OnRooted_fn(WhileScrolled* __this);
void WhileScrolled__OnScrollPositionChanged_fn(WhileScrolled* __this, uObject* s, uObject* args);
void WhileScrolled__OnUnrooted_fn(WhileScrolled* __this);
void WhileScrolled__get_RelativeTo_fn(WhileScrolled* __this, uObject** __retval);
void WhileScrolled__set_RelativeTo_fn(WhileScrolled* __this, uObject* value);
void WhileScrolled__get_To_fn(WhileScrolled* __this, int32_t* __retval);
void WhileScrolled__set_To_fn(WhileScrolled* __this, int32_t* value);
void WhileScrolled__Update_fn(WhileScrolled* __this);
void WhileScrolled__get_Within_fn(WhileScrolled* __this, float* __retval);
void WhileScrolled__set_Within_fn(WhileScrolled* __this, float* value);

struct WhileScrolled : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Controls::ScrollViewBase*> _scrollable;
    uStrong< ::g::Fuse::Triggers::ScrollRegion*> _region;

    void ctor_6();
    void OnScrollPositionChanged(uObject* s, uObject* args);
    uObject* RelativeTo();
    void RelativeTo(uObject* value);
    int32_t To();
    void To(int32_t value);
    void Update();
    float Within();
    void Within(float value);
    static WhileScrolled* New2();
};
// }

}}} // ::g::Fuse::Triggers
