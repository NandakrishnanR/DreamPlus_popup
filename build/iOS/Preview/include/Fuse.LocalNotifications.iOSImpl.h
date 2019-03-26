// This file was generated based on /usr/local/share/uno/Packages/Fuse.LocalNotifications/1.9.0/iOS/Impl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace LocalNotifications{struct iOSImpl;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace LocalNotifications{

// internal static extern class iOSImpl :16
// {
uClassType* iOSImpl_typeof();
void iOSImpl__DispatchDelayedLocalNotifications_fn(int32_t* state);
void iOSImpl__Later_fn(uString* title, uString* body, bool* sound, uString* strPayload, int32_t* delaySeconds, int32_t* badgeNumber);
void iOSImpl__OnReceivedLocalNotification_fn(uString* notification);
void iOSImpl__add_ReceivedLocalNotification_fn(uDelegate* value);
void iOSImpl__remove_ReceivedLocalNotification_fn(uDelegate* value);

struct iOSImpl : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> DelayedLocalNotifications_;
    static uSStrong< ::g::Uno::Collections::List*>& DelayedLocalNotifications() { return iOSImpl_typeof()->Init(), DelayedLocalNotifications_; }
    static uSStrong<uDelegate*> ReceivedLocalNotification1_;
    static uSStrong<uDelegate*>& ReceivedLocalNotification1() { return iOSImpl_typeof()->Init(), ReceivedLocalNotification1_; }

    static void DispatchDelayedLocalNotifications(int32_t state);
    static void Later(uString* title, uString* body, bool sound, uString* strPayload, int32_t delaySeconds, int32_t badgeNumber);
    static void OnReceivedLocalNotification(uString* notification);
    static void add_ReceivedLocalNotification(uDelegate* value);
    static void remove_ReceivedLocalNotification(uDelegate* value);
};
// }

}}} // ::g::Fuse::LocalNotifications
