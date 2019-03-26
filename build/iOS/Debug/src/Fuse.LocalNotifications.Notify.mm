// This file was generated based on /usr/local/share/uno/Packages/Fuse.LocalNotifications/1.9.0/Common.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.LocalNotifications.iOSImpl.h>
#include <Fuse.LocalNotifications.Notify.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventHandler1-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace LocalNotifications{

// public static class Notify :7
// {
// static extern Notify() :18
static void Notify__cctor__fn(uType* __type)
{
    ::g::Fuse::LocalNotifications::iOSImpl_typeof()->Init();
    Notify::_pendingNotifications_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]));

    if (!Notify::_registered_)
    {
        ::g::Fuse::LocalNotifications::iOSImpl::add_ReceivedLocalNotification(uDelegate::New(::TYPES[1/*Uno.EventHandler<string>*/], (void*)Notify__OnReceived_fn));
        Notify::_registered_ = true;
    }
}

static void Notify_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::LocalNotifications::iOSImpl_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&Notify::_registered_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Collections.List<string>*/], (uintptr_t)&Notify::_pendingNotifications_, uFieldFlagsStatic,
        ::TYPES[1/*Uno.EventHandler<string>*/], (uintptr_t)&Notify::_receivedNotification1_, uFieldFlagsStatic);
}

uClassType* Notify_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LocalNotifications.Notify", options);
    type->fp_build_ = Notify_build;
    type->fp_cctor_ = Notify__cctor__fn;
    return type;
}

// private static generated void add__receivedNotification(Uno.EventHandler<string> value) :58
void Notify__add__receivedNotification_fn(uDelegate* value)
{
    Notify::add__receivedNotification(value);
}

// private static generated void remove__receivedNotification(Uno.EventHandler<string> value) :58
void Notify__remove__receivedNotification_fn(uDelegate* value)
{
    Notify::remove__receivedNotification(value);
}

// public static extern void ClearAllNotifications() :94
void Notify__ClearAllNotifications_fn()
{
    Notify::ClearAllNotifications();
}

// public static extern void ClearBadgeNumber() :86
void Notify__ClearBadgeNumber_fn()
{
    Notify::ClearBadgeNumber();
}

// public static extern void Later(int secondsFromNow, string title, string body, string payload, [bool sound], [int badgeNumber]) :42
void Notify__Later_fn(int32_t* secondsFromNow, uString* title, uString* body, uString* payload, bool* sound, int32_t* badgeNumber)
{
    Notify::Later(*secondsFromNow, title, body, payload, *sound, *badgeNumber);
}

// public static void Now(string title, string body, string payload, [bool sound], [int badgeNumber]) :29
void Notify__Now_fn(uString* title, uString* body, uString* payload, bool* sound, int32_t* badgeNumber)
{
    Notify::Now(title, body, payload, *sound, *badgeNumber);
}

// internal static void OnReceived(object sender, string message) :74
void Notify__OnReceived_fn(uObject* sender, uString* message)
{
    Notify::OnReceived(sender, message);
}

// public static void add_Received(Uno.EventHandler<string> value) :62
void Notify__add_Received_fn(uDelegate* value)
{
    Notify::add_Received(value);
}

// public static void remove_Received(Uno.EventHandler<string> value) :69
void Notify__remove_Received_fn(uDelegate* value)
{
    Notify::remove_Received(value);
}

bool Notify::_registered_;
uSStrong< ::g::Uno::Collections::List*> Notify::_pendingNotifications_;
uSStrong<uDelegate*> Notify::_receivedNotification1_;

// public static extern void ClearAllNotifications() [static] :94
void Notify::ClearAllNotifications()
{
    Notify_typeof()->Init();
    @autoreleasepool
    {
        [[UIApplication sharedApplication] cancelAllLocalNotifications];
    }
    
}

// public static extern void ClearBadgeNumber() [static] :86
void Notify::ClearBadgeNumber()
{
    Notify_typeof()->Init();
    @autoreleasepool
    {
        [UIApplication sharedApplication].applicationIconBadgeNumber = 0;
    }
    
}

// public static extern void Later(int secondsFromNow, string title, string body, string payload, [bool sound], [int badgeNumber]) [static] :42
void Notify::Later(int32_t secondsFromNow, uString* title, uString* body, uString* payload, bool sound, int32_t badgeNumber)
{
    Notify_typeof()->Init();
    ::g::Fuse::LocalNotifications::iOSImpl::Later(title, body, sound, payload, secondsFromNow, badgeNumber);
}

// public static void Now(string title, string body, string payload, [bool sound], [int badgeNumber]) [static] :29
void Notify::Now(uString* title, uString* body, uString* payload, bool sound, int32_t badgeNumber)
{
    Notify_typeof()->Init();
    Notify::Later(0, title, body, payload, sound, badgeNumber);
}

// internal static void OnReceived(object sender, string message) [static] :74
void Notify::OnReceived(uObject* sender, uString* message)
{
    Notify_typeof()->Init();
    uDelegate* x = Notify::_receivedNotification1_;

    if (::g::Uno::Delegate::op_Inequality(x, NULL))
        uPtr(x)->Invoke(2, NULL, message);
    else
        ::g::Uno::Collections::List__Add_fn(uPtr(Notify::_pendingNotifications_), message);
}

// private static generated void add__receivedNotification(Uno.EventHandler<string> value) [static] :58
void Notify::add__receivedNotification(uDelegate* value)
{
    Notify_typeof()->Init();
    Notify::_receivedNotification1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Notify::_receivedNotification1_, value), ::TYPES[1/*Uno.EventHandler<string>*/]);
}

// private static generated void remove__receivedNotification(Uno.EventHandler<string> value) [static] :58
void Notify::remove__receivedNotification(uDelegate* value)
{
    Notify_typeof()->Init();
    Notify::_receivedNotification1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Notify::_receivedNotification1_, value), ::TYPES[1/*Uno.EventHandler<string>*/]);
}

// public static void add_Received(Uno.EventHandler<string> value) [static] :62
void Notify::add_Received(uDelegate* value)
{
    Notify_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret2;
    Notify::add__receivedNotification(value);
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Notify::_pendingNotifications_), &ret2), ret2);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[2/*Uno.Collections.List<string>.Enumerator*/]))
                {
                    uString* n = enum1.Current(::TYPES[2/*Uno.Collections.List<string>.Enumerator*/]);
                    uPtr(value)->Invoke(2, NULL, n);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[2/*Uno.Collections.List<string>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum1.Dispose(::TYPES[2/*Uno.Collections.List<string>.Enumerator*/]);
        }
        __after_finally_0:;
    }

    uPtr(Notify::_pendingNotifications_)->Clear();
}

// public static void remove_Received(Uno.EventHandler<string> value) [static] :69
void Notify::remove_Received(uDelegate* value)
{
    Notify_typeof()->Init();
    Notify::remove__receivedNotification(value);
}
// }

}}} // ::g::Fuse::LocalNotifications
