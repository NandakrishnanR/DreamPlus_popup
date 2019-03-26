// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.9.0/WhileEmpty.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.WhileCount.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct WhileEmpty;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class WhileEmpty :29
// {
::g::Fuse::Reactive::WhileCount_type* WhileEmpty_typeof();
void WhileEmpty__ctor_7_fn(WhileEmpty* __this);
void WhileEmpty__New3_fn(WhileEmpty** __retval);

struct WhileEmpty : ::g::Fuse::Reactive::WhileCount
{
    void ctor_7();
    static WhileEmpty* New3();
};
// }

}}} // ::g::Fuse::Reactive
