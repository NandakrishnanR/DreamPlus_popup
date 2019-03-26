// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.9.0/WhileCount.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Int2.h>
namespace g{namespace Fuse{namespace Reactive{struct WhileCount;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class WhileCount :44
// {
struct WhileCount_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::Reactive::IObserver interface9;
};

WhileCount_type* WhileCount_typeof();
void WhileCount__ctor_6_fn(WhileCount* __this);
void WhileCount__Assess_fn(WhileCount* __this, int32_t* count);
void WhileCount__get_EqualTo_fn(WhileCount* __this, int32_t* __retval);
void WhileCount__set_EqualTo_fn(WhileCount* __this, int32_t* value);
void WhileCount__FuseReactiveIObserverOnAdd_fn(WhileCount* __this, uObject* addedValue);
void WhileCount__FuseReactiveIObserverOnClear_fn(WhileCount* __this);
void WhileCount__FuseReactiveIObserverOnFailed_fn(WhileCount* __this, uString* message);
void WhileCount__FuseReactiveIObserverOnInsertAt_fn(WhileCount* __this, int32_t* index, uObject* value);
void WhileCount__FuseReactiveIObserverOnNewAll_fn(WhileCount* __this, uObject* values);
void WhileCount__FuseReactiveIObserverOnNewAt_fn(WhileCount* __this, int32_t* index, uObject* value);
void WhileCount__FuseReactiveIObserverOnRemoveAt_fn(WhileCount* __this, int32_t* index);
void WhileCount__FuseReactiveIObserverOnSet_fn(WhileCount* __this, uObject* newValue);
void WhileCount__get_GreaterThan_fn(WhileCount* __this, int32_t* __retval);
void WhileCount__set_GreaterThan_fn(WhileCount* __this, int32_t* value);
void WhileCount__get_GreaterThanEqual_fn(WhileCount* __this, int32_t* __retval);
void WhileCount__set_GreaterThanEqual_fn(WhileCount* __this, int32_t* value);
void WhileCount__IsOn_fn(WhileCount* __this, int32_t* count, bool* __retval);
void WhileCount__get_Items_fn(WhileCount* __this, uObject** __retval);
void WhileCount__set_Items_fn(WhileCount* __this, uObject* value);
void WhileCount__get_LessThan_fn(WhileCount* __this, int32_t* __retval);
void WhileCount__set_LessThan_fn(WhileCount* __this, int32_t* value);
void WhileCount__get_LessThanEqual_fn(WhileCount* __this, int32_t* __retval);
void WhileCount__set_LessThanEqual_fn(WhileCount* __this, int32_t* value);
void WhileCount__New2_fn(WhileCount** __retval);
void WhileCount__OnItemsChanged_fn(WhileCount* __this);
void WhileCount__OnRooted_fn(WhileCount* __this);
void WhileCount__OnUnrooted_fn(WhileCount* __this);
void WhileCount__UpdateState_fn(WhileCount* __this);

struct WhileCount : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong<uObject*> _items;
    int32_t _oldCount;
    ::g::Uno::Int2 _compare;
    int32_t _low;
    int32_t _high;
    uStrong<uObject*> _subscription;

    void ctor_6();
    void Assess(int32_t count);
    int32_t EqualTo();
    void EqualTo(int32_t value);
    int32_t GreaterThan();
    void GreaterThan(int32_t value);
    int32_t GreaterThanEqual();
    void GreaterThanEqual(int32_t value);
    bool IsOn(int32_t count);
    uObject* Items();
    void Items(uObject* value);
    int32_t LessThan();
    void LessThan(int32_t value);
    int32_t LessThanEqual();
    void LessThanEqual(int32_t value);
    void OnItemsChanged();
    void UpdateState();
    static WhileCount* New2();
};
// }

}}} // ::g::Fuse::Reactive
