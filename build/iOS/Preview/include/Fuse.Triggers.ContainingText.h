// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.9.0/Triggers/ContainsText.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileContainsText.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct ContainingText;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class ContainingText :73
// {
::g::Fuse::Triggers::Trigger_type* ContainingText_typeof();
void ContainingText__ctor_7_fn(ContainingText* __this);
void ContainingText__New3_fn(ContainingText** __retval);

struct ContainingText : ::g::Fuse::Triggers::WhileContainsText
{
    void ctor_7();
    static ContainingText* New3();
};
// }

}}} // ::g::Fuse::Triggers
