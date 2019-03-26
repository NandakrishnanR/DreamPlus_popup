// This file was generated based on /usr/local/share/uno/Packages/Fuse.LocalNotifications/1.9.0/Android/Impl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace LocalNotifications{struct AndroidImpl;}}}

namespace g{
namespace Fuse{
namespace LocalNotifications{

// internal static extern class AndroidImpl :30
// {
uClassType* AndroidImpl_typeof();
void AndroidImpl__Init_fn();
void AndroidImpl__JInit_fn();
void AndroidImpl__Later_fn(uString* title, uString* body, bool* sound, uString* strPayload, int32_t* delaySeconds);
void AndroidImpl__NextID_fn(int32_t* __retval);
void AndroidImpl__NoteInteractivity_fn(bool* isItInteractive);
void AndroidImpl__NotificationRecieved_fn(uString* payload);
void AndroidImpl__OnEnteringInteractive_fn(int32_t* newState);
void AndroidImpl__OnExitedInteractive_fn(int32_t* newState);

struct AndroidImpl : uObject
{
    static bool _init_;
    static bool& _init() { return AndroidImpl_typeof()->Init(), _init_; }
    static uSStrong<uString*> ACTION_;
    static uSStrong<uString*>& ACTION() { return AndroidImpl_typeof()->Init(), ACTION_; }
    static int32_t ID_;
    static int32_t& ID() { return AndroidImpl_typeof()->Init(), ID_; }

    static void Init();
    static void JInit();
    static void Later(uString* title, uString* body, bool sound, uString* strPayload, int32_t delaySeconds);
    static int32_t NextID();
    static void NoteInteractivity(bool isItInteractive);
    static void NotificationRecieved(uString* payload);
    static void OnEnteringInteractive(int32_t newState);
    static void OnExitedInteractive(int32_t newState);
};
// }

}}} // ::g::Fuse::LocalNotifications
