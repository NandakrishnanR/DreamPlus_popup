// This file was generated based on /usr/local/share/uno/Packages/Fuse.LocalNotifications/1.9.0/JS.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.Native-fa549b97.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace LocalNotifications{struct LocalNotify;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace LocalNotifications{

// public sealed class LocalNotify :25
// {
::g::Fuse::Scripting::NativeModule_type* LocalNotify_typeof();
void LocalNotify__ctor_3_fn(LocalNotify* __this);
void LocalNotify__ClearAllNotifications_fn(LocalNotify* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void LocalNotify__ClearBadgeNumber_fn(LocalNotify* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void LocalNotify__GetInt_fn(uObject* arg, uString* argName, int32_t* __retval);
void LocalNotify__Later_fn(LocalNotify* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void LocalNotify__New3_fn(LocalNotify** __retval);
void LocalNotify__Now_fn(LocalNotify* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void LocalNotify__OnReceived_fn(LocalNotify* __this, uObject* sender, uString* message);

struct LocalNotify : ::g::Fuse::Scripting::NativeEventEmitterModule
{
    static uSStrong<LocalNotify*> _instance_;
    static uSStrong<LocalNotify*>& _instance() { return _instance_; }

    void ctor_3();
    uObject* ClearAllNotifications(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* ClearBadgeNumber(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* Later(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* Now(::g::Fuse::Scripting::Context* context, uArray* args);
    void OnReceived(uObject* sender, uString* message);
    static int32_t GetInt(uObject* arg, uString* argName);
    static LocalNotify* New3();
};
// }

}}} // ::g::Fuse::LocalNotifications
