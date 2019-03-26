// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.9.0/Let.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Fuse.Reactive.IObservable.h>
#include <Fuse.Reactive.IObservableArray.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct LetBase;}}}
namespace g{namespace Fuse{namespace Reactive{struct LetObservable;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class LetObservable :146
// {
struct LetObservable_type : uType
{
    ::g::Fuse::Reactive::IObservable interface0;
    ::g::Fuse::Reactive::IObservableArray interface1;
    ::g::Fuse::IArray interface2;
};

LetObservable_type* LetObservable_typeof();
void LetObservable__ctor__fn(LetObservable* __this, ::g::Fuse::Reactive::LetBase* let);
void LetObservable__Dispose_fn(LetObservable* __this);
void LetObservable__FuseIArrayget_Item_fn(LetObservable* __this, int32_t* index, uObject** __retval);
void LetObservable__FuseIArrayget_Length_fn(LetObservable* __this, int32_t* __retval);
void LetObservable__FuseReactiveIObservableArraySubscribe_fn(LetObservable* __this, uObject* observer, uObject** __retval);
void LetObservable__New1_fn(::g::Fuse::Reactive::LetBase* let, LetObservable** __retval);
void LetObservable__Unsubscribe_fn(LetObservable* __this, uObject* observer);
void LetObservable__UpdateClear_fn(LetObservable* __this);
void LetObservable__UpdateSetValue_fn(LetObservable* __this);

struct LetObservable : uObject
{
    uStrong< ::g::Uno::Collections::List*> _observers;
    uStrong< ::g::Fuse::Reactive::LetBase*> _let;

    void ctor_(::g::Fuse::Reactive::LetBase* let);
    void Dispose();
    void Unsubscribe(uObject* observer);
    void UpdateClear();
    void UpdateSetValue();
    static LetObservable* New1(::g::Fuse::Reactive::LetBase* let);
};
// }

}}} // ::g::Fuse::Reactive
