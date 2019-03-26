// This file was generated based on /usr/local/share/uno/Packages/Fuse.LocalNotifications/1.9.0/Common.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace LocalNotifications{struct Notify;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace LocalNotifications{

// public static class Notify :7
// {
uClassType* Notify_typeof();
void Notify__add__receivedNotification_fn(uDelegate* value);
void Notify__remove__receivedNotification_fn(uDelegate* value);
void Notify__ClearAllNotifications_fn();
void Notify__ClearBadgeNumber_fn();
void Notify__Later_fn(int32_t* secondsFromNow, uString* title, uString* body, uString* payload, bool* sound, int32_t* badgeNumber);
void Notify__Now_fn(uString* title, uString* body, uString* payload, bool* sound, int32_t* badgeNumber);
void Notify__OnReceived_fn(uObject* sender, uString* message);
void Notify__add_Received_fn(uDelegate* value);
void Notify__remove_Received_fn(uDelegate* value);

struct Notify : uObject
{
    static bool _registered_;
    static bool& _registered() { return Notify_typeof()->Init(), _registered_; }
    static uSStrong< ::g::Uno::Collections::List*> _pendingNotifications_;
    static uSStrong< ::g::Uno::Collections::List*>& _pendingNotifications() { return Notify_typeof()->Init(), _pendingNotifications_; }
    static uSStrong<uDelegate*> _receivedNotification1_;
    static uSStrong<uDelegate*>& _receivedNotification1() { return Notify_typeof()->Init(), _receivedNotification1_; }

    static void ClearAllNotifications();
    static void ClearBadgeNumber();
    static void Later(int32_t secondsFromNow, uString* title, uString* body, uString* payload, bool sound, int32_t badgeNumber);
    static void Now(uString* title, uString* body, uString* payload, bool sound, int32_t badgeNumber);
    static void OnReceived(uObject* sender, uString* message);
    static void add__receivedNotification(uDelegate* value);
    static void remove__receivedNotification(uDelegate* value);
    static void add_Received(uDelegate* value);
    static void remove_Received(uDelegate* value);
};
// }

}}} // ::g::Fuse::LocalNotifications
