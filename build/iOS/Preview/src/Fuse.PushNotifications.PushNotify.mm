// This file was generated based on '/Users/jaeyounchae/Library/Application Support/Fusetools/Packages/Fuse.PushNotifications/1.9.0/Common.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.PushNotifications.iOSImpl.h>
#include <Fuse.PushNotifications.PushNotify.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventHandler1-1.h>
#include <Uno.Object.h>
#include <uObjC.Foreign.h>
#include <Uno.Bool.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.String.h>
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace PushNotifications{

// public static class PushNotify :12
// {
// static extern PushNotify() :24
static void PushNotify__cctor__fn(uType* __type)
{
    ::g::Fuse::PushNotifications::iOSImpl_typeof()->Init();
    PushNotify::_pendingNotifications_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Uno.Collections.KeyValuePair<string, bool>>*/]));
    ::g::Fuse::PushNotifications::iOSImpl::add_ReceivedNotification(uDelegate::New(::TYPES[1/*Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>>*/], (void*)PushNotify__OnReceived_fn));
    ::g::Fuse::PushNotifications::iOSImpl::add_NotificationRegistrationFailed(uDelegate::New(::TYPES[2/*Uno.EventHandler<string>*/], (void*)PushNotify__OnRegistrationFailed_fn));
    ::g::Fuse::PushNotifications::iOSImpl::add_NotificationRegistrationSucceeded(uDelegate::New(::TYPES[2/*Uno.EventHandler<string>*/], (void*)PushNotify__OnRegistrationSucceeded_fn));
}

static void PushNotify_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), NULL), NULL);
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), NULL), NULL);
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), NULL), NULL);
    type->SetDependencies(
        ::g::Fuse::PushNotifications::iOSImpl_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), (uintptr_t)&PushNotify::_pendingSuccess_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&PushNotify::_pendingFailure_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Collections.List<Uno.Collections.KeyValuePair<string, bool>>*/], (uintptr_t)&PushNotify::_pendingNotifications_, uFieldFlagsStatic,
        ::TYPES[1/*Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>>*/], (uintptr_t)&PushNotify::_receivedNotification1_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.EventHandler<string>*/], (uintptr_t)&PushNotify::_registrationFailed1_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.EventHandler<string>*/], (uintptr_t)&PushNotify::_registrationSucceeded1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("ClearAllNotifications", NULL, (void*)PushNotify__ClearAllNotifications_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("ClearBadgeNumber", NULL, (void*)PushNotify__ClearBadgeNumber_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("OnReceived", NULL, (void*)PushNotify__OnReceived_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), NULL)),
        new uFunction("OnRegistrationFailed", NULL, (void*)PushNotify__OnRegistrationFailed_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("OnRegistrationSucceeded", NULL, (void*)PushNotify__OnRegistrationSucceeded_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Register", NULL, (void*)PushNotify__Register_fn, 0, true, uVoid_typeof(), 0));
}

uClassType* PushNotify_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.PushNotifications.PushNotify", options);
    type->fp_build_ = PushNotify_build;
    type->fp_cctor_ = PushNotify__cctor__fn;
    return type;
}

// private static generated void add__receivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>> value) :70
void PushNotify__add__receivedNotification_fn(uDelegate* value)
{
    PushNotify::add__receivedNotification(value);
}

// private static generated void remove__receivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>> value) :70
void PushNotify__remove__receivedNotification_fn(uDelegate* value)
{
    PushNotify::remove__receivedNotification(value);
}

// private static generated void add__registrationFailed(Uno.EventHandler<string> value) :69
void PushNotify__add__registrationFailed_fn(uDelegate* value)
{
    PushNotify::add__registrationFailed(value);
}

// private static generated void remove__registrationFailed(Uno.EventHandler<string> value) :69
void PushNotify__remove__registrationFailed_fn(uDelegate* value)
{
    PushNotify::remove__registrationFailed(value);
}

// private static generated void add__registrationSucceeded(Uno.EventHandler<string> value) :68
void PushNotify__add__registrationSucceeded_fn(uDelegate* value)
{
    PushNotify::add__registrationSucceeded(value);
}

// private static generated void remove__registrationSucceeded(Uno.EventHandler<string> value) :68
void PushNotify__remove__registrationSucceeded_fn(uDelegate* value)
{
    PushNotify::remove__registrationSucceeded(value);
}

// public static extern void ClearAllNotifications() :131
void PushNotify__ClearAllNotifications_fn()
{
    PushNotify::ClearAllNotifications();
}

// public static extern void ClearBadgeNumber() :123
void PushNotify__ClearBadgeNumber_fn()
{
    PushNotify::ClearBadgeNumber();
}

// public static void OnReceived(object sender, Uno.Collections.KeyValuePair<string, bool> notification) :31
void PushNotify__OnReceived_fn(uObject* sender, ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, bool>* notification)
{
    PushNotify::OnReceived(sender, *notification);
}

// public static void OnRegistrationFailed(object sender, string message) :40
void PushNotify__OnRegistrationFailed_fn(uObject* sender, uString* message)
{
    PushNotify::OnRegistrationFailed(sender, message);
}

// public static void OnRegistrationSucceeded(object sender, string message) :54
void PushNotify__OnRegistrationSucceeded_fn(uObject* sender, uString* message)
{
    PushNotify::OnRegistrationSucceeded(sender, message);
}

// internal static void add_ReceivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>> value) :77
void PushNotify__add_ReceivedNotification_fn(uDelegate* value)
{
    PushNotify::add_ReceivedNotification(value);
}

// internal static void remove_ReceivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>> value) :84
void PushNotify__remove_ReceivedNotification_fn(uDelegate* value)
{
    PushNotify::remove_ReceivedNotification(value);
}

// public static extern void Register() :147
void PushNotify__Register_fn()
{
    PushNotify::Register();
}

// internal static void add_RegistrationFailed(Uno.EventHandler<string> value) :109
void PushNotify__add_RegistrationFailed_fn(uDelegate* value)
{
    PushNotify::add_RegistrationFailed(value);
}

// internal static void remove_RegistrationFailed(Uno.EventHandler<string> value) :117
void PushNotify__remove_RegistrationFailed_fn(uDelegate* value)
{
    PushNotify::remove_RegistrationFailed(value);
}

// internal static void add_RegistrationSucceeded(Uno.EventHandler<string> value) :94
void PushNotify__add_RegistrationSucceeded_fn(uDelegate* value)
{
    PushNotify::add_RegistrationSucceeded(value);
}

// internal static void remove_RegistrationSucceeded(Uno.EventHandler<string> value) :102
void PushNotify__remove_RegistrationSucceeded_fn(uDelegate* value)
{
    PushNotify::remove_RegistrationSucceeded(value);
}

uSStrong<uString*> PushNotify::_pendingSuccess_;
uSStrong<uString*> PushNotify::_pendingFailure_;
uSStrong< ::g::Uno::Collections::List*> PushNotify::_pendingNotifications_;
uSStrong<uDelegate*> PushNotify::_receivedNotification1_;
uSStrong<uDelegate*> PushNotify::_registrationFailed1_;
uSStrong<uDelegate*> PushNotify::_registrationSucceeded1_;

// public static extern void ClearAllNotifications() [static] :131
void PushNotify::ClearAllNotifications()
{
    PushNotify_typeof()->Init();
    @autoreleasepool
    {
        [UIApplication sharedApplication].applicationIconBadgeNumber = 1;
        [UIApplication sharedApplication].applicationIconBadgeNumber = 0;
    }
    
}

// public static extern void ClearBadgeNumber() [static] :123
void PushNotify::ClearBadgeNumber()
{
    PushNotify_typeof()->Init();
    @autoreleasepool
    {
        [UIApplication sharedApplication].applicationIconBadgeNumber = 0;
    }
    
}

// public static void OnReceived(object sender, Uno.Collections.KeyValuePair<string, bool> notification) [static] :31
void PushNotify::OnReceived(uObject* sender, ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, bool> notification)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "OnReceived(object,Uno.Collections.KeyValuePair<string, bool>)");
    PushNotify_typeof()->Init();
    uDelegate* x = PushNotify::_receivedNotification1_;

    if (::g::Uno::Delegate::op_Inequality(x, NULL))
        uPtr(x)->Invoke(2, NULL, uCRef(notification));
    else
        ::g::Uno::Collections::List__Add_fn(uPtr(PushNotify::_pendingNotifications_), uCRef(notification));
}

// public static void OnRegistrationFailed(object sender, string message) [static] :40
void PushNotify::OnRegistrationFailed(uObject* sender, uString* message)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "OnRegistrationFailed(object,string)");
    PushNotify_typeof()->Init();
    uDelegate* x = PushNotify::_registrationFailed1_;

    if (::g::Uno::Delegate::op_Inequality(x, NULL))
        uPtr(x)->Invoke(2, NULL, message);
    else
    {
        PushNotify::_pendingSuccess_ = NULL;
        PushNotify::_pendingFailure_ = message;
    }
}

// public static void OnRegistrationSucceeded(object sender, string message) [static] :54
void PushNotify::OnRegistrationSucceeded(uObject* sender, uString* message)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "OnRegistrationSucceeded(object,string)");
    PushNotify_typeof()->Init();
    uDelegate* x = PushNotify::_registrationSucceeded1_;

    if (::g::Uno::Delegate::op_Inequality(x, NULL))
        uPtr(x)->Invoke(2, NULL, message);
    else
    {
        PushNotify::_pendingFailure_ = NULL;
        PushNotify::_pendingSuccess_ = message;
    }
}

// public static extern void Register() [static] :147
void PushNotify::Register()
{
    PushNotify_typeof()->Init();
    ::g::Fuse::PushNotifications::iOSImpl::RegisterForPushNotifications();
}

// private static generated void add__receivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>> value) [static] :70
void PushNotify::add__receivedNotification(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "add__receivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>>)");
    PushNotify_typeof()->Init();
    PushNotify::_receivedNotification1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PushNotify::_receivedNotification1_, value), ::TYPES[1/*Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>>*/]);
}

// private static generated void remove__receivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>> value) [static] :70
void PushNotify::remove__receivedNotification(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "remove__receivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>>)");
    PushNotify_typeof()->Init();
    PushNotify::_receivedNotification1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PushNotify::_receivedNotification1_, value), ::TYPES[1/*Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>>*/]);
}

// private static generated void add__registrationFailed(Uno.EventHandler<string> value) [static] :69
void PushNotify::add__registrationFailed(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "add__registrationFailed(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::_registrationFailed1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PushNotify::_registrationFailed1_, value), ::TYPES[2/*Uno.EventHandler<string>*/]);
}

// private static generated void remove__registrationFailed(Uno.EventHandler<string> value) [static] :69
void PushNotify::remove__registrationFailed(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "remove__registrationFailed(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::_registrationFailed1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PushNotify::_registrationFailed1_, value), ::TYPES[2/*Uno.EventHandler<string>*/]);
}

// private static generated void add__registrationSucceeded(Uno.EventHandler<string> value) [static] :68
void PushNotify::add__registrationSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "add__registrationSucceeded(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::_registrationSucceeded1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PushNotify::_registrationSucceeded1_, value), ::TYPES[2/*Uno.EventHandler<string>*/]);
}

// private static generated void remove__registrationSucceeded(Uno.EventHandler<string> value) [static] :68
void PushNotify::remove__registrationSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "remove__registrationSucceeded(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::_registrationSucceeded1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PushNotify::_registrationSucceeded1_, value), ::TYPES[2/*Uno.EventHandler<string>*/]);
}

// internal static void add_ReceivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>> value) [static] :77
void PushNotify::add_ReceivedNotification(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "add_ReceivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>>)");
    PushNotify_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator< ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, bool> > ret2;
    PushNotify::add__receivedNotification(value);
    ::g::Uno::Collections::List__Enumerator< ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, bool> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(PushNotify::_pendingNotifications_), &ret2), ret2);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[3/*Uno.Collections.List<Uno.Collections.KeyValuePair<string, bool>>.Enumerator*/]))
                {
                    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, bool> n = enum1.Current(::TYPES[3/*Uno.Collections.List<Uno.Collections.KeyValuePair<string, bool>>.Enumerator*/]);
                    uPtr(value)->Invoke(2, NULL, uCRef(n));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[3/*Uno.Collections.List<Uno.Collections.KeyValuePair<string, bool>>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum1.Dispose(::TYPES[3/*Uno.Collections.List<Uno.Collections.KeyValuePair<string, bool>>.Enumerator*/]);
        }
        __after_finally_0:;
    }

    uPtr(PushNotify::_pendingNotifications_)->Clear();
}

// internal static void remove_ReceivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>> value) [static] :84
void PushNotify::remove_ReceivedNotification(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "remove_ReceivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>>)");
    PushNotify_typeof()->Init();
    PushNotify::remove__receivedNotification(value);
}

// internal static void add_RegistrationFailed(Uno.EventHandler<string> value) [static] :109
void PushNotify::add_RegistrationFailed(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "add_RegistrationFailed(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::add__registrationFailed(value);

    if (::g::Uno::String::op_Inequality(PushNotify::_pendingFailure_, NULL))
        uPtr(value)->Invoke(2, NULL, (uString*)PushNotify::_pendingFailure_);
}

// internal static void remove_RegistrationFailed(Uno.EventHandler<string> value) [static] :117
void PushNotify::remove_RegistrationFailed(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "remove_RegistrationFailed(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::remove__registrationFailed(value);
}

// internal static void add_RegistrationSucceeded(Uno.EventHandler<string> value) [static] :94
void PushNotify::add_RegistrationSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "add_RegistrationSucceeded(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::add__registrationSucceeded(value);

    if (::g::Uno::String::op_Inequality(PushNotify::_pendingSuccess_, NULL))
        uPtr(value)->Invoke(2, NULL, (uString*)PushNotify::_pendingSuccess_);
}

// internal static void remove_RegistrationSucceeded(Uno.EventHandler<string> value) [static] :102
void PushNotify::remove_RegistrationSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "remove_RegistrationSucceeded(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::remove__registrationSucceeded(value);
}
// }

}}} // ::g::Fuse::PushNotifications
