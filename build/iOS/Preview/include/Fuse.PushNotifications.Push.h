// This file was generated based on '/Users/jaeyounchae/Library/Application Support/Fusetools/Packages/Fuse.PushNotifications/1.9.0/JS.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeEventEmitterModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace PushNotifications{struct Push;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace Collections{template<class TKey, class TValue>struct KeyValuePair;}}}

namespace g{
namespace Fuse{
namespace PushNotifications{

// public sealed class Push :34
// {
::g::Fuse::Scripting::NativeModule_type* Push_typeof();
void Push__ctor_3_fn(Push* __this);
void Push__ClearAllNotifications_fn(Push* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Push__ClearBadgeNumber_fn(Push* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Push__New3_fn(Push** __retval);
void Push__OnReceivedNotification_fn(Push* __this, uObject* sender, ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, bool>* message);
void Push__OnRegistrationFailed_fn(Push* __this, uObject* sender, uString* message);
void Push__OnRegistrationSucceeded_fn(Push* __this, uObject* sender, uString* message);
void Push__Register_fn(Push* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);

struct Push : ::g::Fuse::Scripting::NativeEventEmitterModule
{
    static uSStrong<Push*> _instance_;
    static uSStrong<Push*>& _instance() { return _instance_; }

    void ctor_3();
    uObject* ClearAllNotifications(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* ClearBadgeNumber(::g::Fuse::Scripting::Context* context, uArray* args);
    void OnReceivedNotification(uObject* sender, ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, bool> message);
    void OnRegistrationFailed(uObject* sender, uString* message);
    void OnRegistrationSucceeded(uObject* sender, uString* message);
    uObject* Register(::g::Fuse::Scripting::Context* context, uArray* args);
    static Push* New3();
};
// }

}}} // ::g::Fuse::PushNotifications
