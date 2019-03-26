// This file was generated based on '/Users/jaeyounchae/Library/Application Support/Fusetools/Packages/Fuse.PushNotifications/1.9.0/iOS/Impl.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace PushNotifications{struct iOSImpl;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Collections{template<class TKey, class TValue>struct KeyValuePair;}}}

namespace g{
namespace Fuse{
namespace PushNotifications{

// internal sealed extern class iOSImpl :15
// {
uType* iOSImpl_typeof();
void iOSImpl__ctor__fn(iOSImpl* __this);
void iOSImpl__DispatchDelayedNotifications_fn(int32_t* state);
void iOSImpl__DispatchDelayedReason_fn(int32_t* state);
void iOSImpl__DispatchDelayedRegToken_fn(int32_t* state);
void iOSImpl__New1_fn(iOSImpl** __retval);
void iOSImpl__add_NotificationRegistrationFailed_fn(uDelegate* value);
void iOSImpl__remove_NotificationRegistrationFailed_fn(uDelegate* value);
void iOSImpl__add_NotificationRegistrationSucceeded_fn(uDelegate* value);
void iOSImpl__remove_NotificationRegistrationSucceeded_fn(uDelegate* value);
void iOSImpl__OnNotificationRegistrationFailed_fn(uString* reason);
void iOSImpl__OnNotificationRegistrationSucceeded_fn(uString* regID);
void iOSImpl__OnReceivedNotification_fn(uString* notification, bool* fromNotificationBar);
void iOSImpl__add_ReceivedNotification_fn(uDelegate* value);
void iOSImpl__remove_ReceivedNotification_fn(uDelegate* value);
void iOSImpl__RegisterForPushNotifications_fn();

struct iOSImpl : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> DelayedNotifications_;
    static uSStrong< ::g::Uno::Collections::List*>& DelayedNotifications() { return iOSImpl_typeof()->Init(), DelayedNotifications_; }
    static uSStrong<uString*> DelayedReason_;
    static uSStrong<uString*>& DelayedReason() { return iOSImpl_typeof()->Init(), DelayedReason_; }
    static uSStrong<uString*> DelayedRegToken_;
    static uSStrong<uString*>& DelayedRegToken() { return iOSImpl_typeof()->Init(), DelayedRegToken_; }
    static uSStrong<uDelegate*> NotificationRegistrationFailed1_;
    static uSStrong<uDelegate*>& NotificationRegistrationFailed1() { return iOSImpl_typeof()->Init(), NotificationRegistrationFailed1_; }
    static uSStrong<uDelegate*> NotificationRegistrationSucceeded1_;
    static uSStrong<uDelegate*>& NotificationRegistrationSucceeded1() { return iOSImpl_typeof()->Init(), NotificationRegistrationSucceeded1_; }
    static uSStrong<uDelegate*> ReceivedNotification1_;
    static uSStrong<uDelegate*>& ReceivedNotification1() { return iOSImpl_typeof()->Init(), ReceivedNotification1_; }

    void ctor_();
    static void DispatchDelayedNotifications(int32_t state);
    static void DispatchDelayedReason(int32_t state);
    static void DispatchDelayedRegToken(int32_t state);
    static iOSImpl* New1();
    static void OnNotificationRegistrationFailed(uString* reason);
    static void OnNotificationRegistrationSucceeded(uString* regID);
    static void OnReceivedNotification(uString* notification, bool fromNotificationBar);
    static void RegisterForPushNotifications();
    static void add_NotificationRegistrationFailed(uDelegate* value);
    static void remove_NotificationRegistrationFailed(uDelegate* value);
    static void add_NotificationRegistrationSucceeded(uDelegate* value);
    static void remove_NotificationRegistrationSucceeded(uDelegate* value);
    static void add_ReceivedNotification(uDelegate* value);
    static void remove_ReceivedNotification(uDelegate* value);
};
// }

}}} // ::g::Fuse::PushNotifications
