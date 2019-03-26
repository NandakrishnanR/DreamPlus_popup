// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.9.0/Let.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ISubscription.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct LetObservable;}}}
namespace g{namespace Fuse{namespace Reactive{struct LetObservable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class LetObservable.Subscription :209
// {
struct LetObservable__Subscription_type : uType
{
    ::g::Fuse::Reactive::ISubscription interface0;
    ::g::Uno::IDisposable interface1;
};

LetObservable__Subscription_type* LetObservable__Subscription_typeof();
void LetObservable__Subscription__ctor__fn(LetObservable__Subscription* __this);
void LetObservable__Subscription__ClearExclusive_fn(LetObservable__Subscription* __this);
void LetObservable__Subscription__Dispose_fn(LetObservable__Subscription* __this);
void LetObservable__Subscription__New1_fn(LetObservable__Subscription** __retval);
void LetObservable__Subscription__ReplaceAllExclusive_fn(LetObservable__Subscription* __this, uObject* values);
void LetObservable__Subscription__SetExclusive1_fn(LetObservable__Subscription* __this, uObject* newValue);

struct LetObservable__Subscription : uObject
{
    uStrong< ::g::Fuse::Reactive::LetObservable*> Source;
    uStrong<uObject*> Observer;

    void ctor_();
    void ClearExclusive();
    void Dispose();
    void ReplaceAllExclusive(uObject* values);
    void SetExclusive1(uObject* newValue);
    static LetObservable__Subscription* New1();
};
// }

}}} // ::g::Fuse::Reactive
