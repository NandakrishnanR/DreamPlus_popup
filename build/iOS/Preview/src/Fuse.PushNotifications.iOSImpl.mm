// This file was generated based on '/Users/jaeyounchae/Library/Application Support/Fusetools/Packages/Fuse.PushNotifications/1.9.0/iOS/Impl.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.PushNotifications.iOSImpl.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventHandler1-1.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[1];
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace PushNotifications{

// internal sealed extern class iOSImpl :15
// {
// static generated iOSImpl() :15
static void iOSImpl__cctor__fn(uType* __type)
{
    iOSImpl::DelayedNotifications_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Uno.Collections.KeyValuePair<string, bool>>*/]));
    iOSImpl::DelayedReason_ = ::STRINGS[0/*""*/];
    iOSImpl::DelayedRegToken_ = ::STRINGS[0/*""*/];
}

static void iOSImpl_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), NULL), NULL);
    ::TYPES[1] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), NULL), NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::EventHandler1_typeof()->MakeType(::TYPES[3/*Uno.Collections.KeyValuePair<string, bool>*/], NULL);
    type->SetDependencies(
        ::g::Fuse::Platform::Lifecycle_typeof());
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.List<Uno.Collections.KeyValuePair<string, bool>>*/], (uintptr_t)&iOSImpl::DelayedNotifications_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&iOSImpl::DelayedReason_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&iOSImpl::DelayedRegToken_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.EventHandler<string>*/], (uintptr_t)&iOSImpl::NotificationRegistrationFailed1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.EventHandler<string>*/], (uintptr_t)&iOSImpl::NotificationRegistrationSucceeded1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>>*/], (uintptr_t)&iOSImpl::ReceivedNotification1_, uFieldFlagsStatic);
}

uType* iOSImpl_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(iOSImpl);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.PushNotifications.iOSImpl", options);
    type->fp_build_ = iOSImpl_build;
    type->fp_ctor_ = (void*)iOSImpl__New1_fn;
    type->fp_cctor_ = iOSImpl__cctor__fn;
    return type;
}

// public generated iOSImpl() :15
void iOSImpl__ctor__fn(iOSImpl* __this)
{
    __this->ctor_();
}

// private static void DispatchDelayedNotifications(Fuse.Platform.ApplicationState state) :36
void iOSImpl__DispatchDelayedNotifications_fn(int32_t* state)
{
    iOSImpl::DispatchDelayedNotifications(*state);
}

// private static void DispatchDelayedReason(Fuse.Platform.ApplicationState state) :63
void iOSImpl__DispatchDelayedReason_fn(int32_t* state)
{
    iOSImpl::DispatchDelayedReason(*state);
}

// private static void DispatchDelayedRegToken(Fuse.Platform.ApplicationState state) :89
void iOSImpl__DispatchDelayedRegToken_fn(int32_t* state)
{
    iOSImpl::DispatchDelayedRegToken(*state);
}

// public generated iOSImpl New() :15
void iOSImpl__New1_fn(iOSImpl** __retval)
{
    *__retval = iOSImpl::New1();
}

// public static generated void add_NotificationRegistrationFailed(Uno.EventHandler<string> value) :46
void iOSImpl__add_NotificationRegistrationFailed_fn(uDelegate* value)
{
    iOSImpl::add_NotificationRegistrationFailed(value);
}

// public static generated void remove_NotificationRegistrationFailed(Uno.EventHandler<string> value) :46
void iOSImpl__remove_NotificationRegistrationFailed_fn(uDelegate* value)
{
    iOSImpl::remove_NotificationRegistrationFailed(value);
}

// public static generated void add_NotificationRegistrationSucceeded(Uno.EventHandler<string> value) :72
void iOSImpl__add_NotificationRegistrationSucceeded_fn(uDelegate* value)
{
    iOSImpl::add_NotificationRegistrationSucceeded(value);
}

// public static generated void remove_NotificationRegistrationSucceeded(Uno.EventHandler<string> value) :72
void iOSImpl__remove_NotificationRegistrationSucceeded_fn(uDelegate* value)
{
    iOSImpl::remove_NotificationRegistrationSucceeded(value);
}

// internal static void OnNotificationRegistrationFailed(string reason) :48
void iOSImpl__OnNotificationRegistrationFailed_fn(uString* reason)
{
    iOSImpl::OnNotificationRegistrationFailed(reason);
}

// internal static void OnNotificationRegistrationSucceeded(string regID) :74
void iOSImpl__OnNotificationRegistrationSucceeded_fn(uString* regID)
{
    iOSImpl::OnNotificationRegistrationSucceeded(regID);
}

// internal static void OnReceivedNotification(string notification, bool fromNotificationBar) :21
void iOSImpl__OnReceivedNotification_fn(uString* notification, bool* fromNotificationBar)
{
    iOSImpl::OnReceivedNotification(notification, *fromNotificationBar);
}

// public static generated void add_ReceivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>> value) :18
void iOSImpl__add_ReceivedNotification_fn(uDelegate* value)
{
    iOSImpl::add_ReceivedNotification(value);
}

// public static generated void remove_ReceivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>> value) :18
void iOSImpl__remove_ReceivedNotification_fn(uDelegate* value)
{
    iOSImpl::remove_ReceivedNotification(value);
}

// internal static void RegisterForPushNotifications() :99
void iOSImpl__RegisterForPushNotifications_fn()
{
    iOSImpl::RegisterForPushNotifications();
}

uSStrong< ::g::Uno::Collections::List*> iOSImpl::DelayedNotifications_;
uSStrong<uString*> iOSImpl::DelayedReason_;
uSStrong<uString*> iOSImpl::DelayedRegToken_;
uSStrong<uDelegate*> iOSImpl::NotificationRegistrationFailed1_;
uSStrong<uDelegate*> iOSImpl::NotificationRegistrationSucceeded1_;
uSStrong<uDelegate*> iOSImpl::ReceivedNotification1_;

// public generated iOSImpl() [instance] :15
void iOSImpl::ctor_()
{
}

// private static void DispatchDelayedNotifications(Fuse.Platform.ApplicationState state) [static] :36
void iOSImpl::DispatchDelayedNotifications(int32_t state)
{
    uStackFrame __("Fuse.PushNotifications.iOSImpl", "DispatchDelayedNotifications(Fuse.Platform.ApplicationState)");
    iOSImpl_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator< ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, bool> > ret3;
    uDelegate* handler = iOSImpl::ReceivedNotification1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
    {
        ::g::Uno::Collections::List__Enumerator< ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, bool> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(iOSImpl::DelayedNotifications_), &ret3), ret3);

        {
            try
            {
                {
                    while (enum1.MoveNext(::TYPES[1/*Uno.Collections.List<Uno.Collections.KeyValuePair<string, bool>>.Enumerator*/]))
                    {
                        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, bool> n = enum1.Current(::TYPES[1/*Uno.Collections.List<Uno.Collections.KeyValuePair<string, bool>>.Enumerator*/]);
                        uPtr(handler)->Invoke(2, NULL, uCRef(n));
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum1.Dispose(::TYPES[1/*Uno.Collections.List<Uno.Collections.KeyValuePair<string, bool>>.Enumerator*/]);
                }
                                throw __t;
                goto __after_finally_0;
            }

            {
                enum1.Dispose(::TYPES[1/*Uno.Collections.List<Uno.Collections.KeyValuePair<string, bool>>.Enumerator*/]);
            }
            __after_finally_0:;
        }
    }

    uPtr(iOSImpl::DelayedNotifications_)->Clear();
    ::g::Fuse::Platform::Lifecycle::remove_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)iOSImpl__DispatchDelayedNotifications_fn));
}

// private static void DispatchDelayedReason(Fuse.Platform.ApplicationState state) [static] :63
void iOSImpl::DispatchDelayedReason(int32_t state)
{
    uStackFrame __("Fuse.PushNotifications.iOSImpl", "DispatchDelayedReason(Fuse.Platform.ApplicationState)");
    iOSImpl_typeof()->Init();
    uDelegate* handler = iOSImpl::NotificationRegistrationFailed1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (uString*)iOSImpl::DelayedReason_);

    iOSImpl::DelayedReason_ = ::STRINGS[0/*""*/];
    ::g::Fuse::Platform::Lifecycle::remove_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)iOSImpl__DispatchDelayedReason_fn));
}

// private static void DispatchDelayedRegToken(Fuse.Platform.ApplicationState state) [static] :89
void iOSImpl::DispatchDelayedRegToken(int32_t state)
{
    uStackFrame __("Fuse.PushNotifications.iOSImpl", "DispatchDelayedRegToken(Fuse.Platform.ApplicationState)");
    iOSImpl_typeof()->Init();
    uDelegate* handler = iOSImpl::NotificationRegistrationSucceeded1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (uString*)iOSImpl::DelayedRegToken_);

    iOSImpl::DelayedRegToken_ = ::STRINGS[0/*""*/];
    ::g::Fuse::Platform::Lifecycle::remove_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)iOSImpl__DispatchDelayedRegToken_fn));
}

// public generated iOSImpl New() [static] :15
iOSImpl* iOSImpl::New1()
{
    iOSImpl* obj2 = (iOSImpl*)uNew(iOSImpl_typeof());
    obj2->ctor_();
    return obj2;
}

// internal static void OnNotificationRegistrationFailed(string reason) [static] :48
void iOSImpl::OnNotificationRegistrationFailed(uString* reason)
{
    uStackFrame __("Fuse.PushNotifications.iOSImpl", "OnNotificationRegistrationFailed(string)");
    iOSImpl_typeof()->Init();

    if ((::g::Fuse::Platform::Lifecycle::State() == 2) || (::g::Fuse::Platform::Lifecycle::State() == 3))
    {
        uDelegate* handler = iOSImpl::NotificationRegistrationFailed1_;

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, reason);
    }
    else
    {
        iOSImpl::DelayedReason_ = reason;
        ::g::Fuse::Platform::Lifecycle::add_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)iOSImpl__DispatchDelayedReason_fn));
    }
}

// internal static void OnNotificationRegistrationSucceeded(string regID) [static] :74
void iOSImpl::OnNotificationRegistrationSucceeded(uString* regID)
{
    uStackFrame __("Fuse.PushNotifications.iOSImpl", "OnNotificationRegistrationSucceeded(string)");
    iOSImpl_typeof()->Init();

    if ((::g::Fuse::Platform::Lifecycle::State() == 2) || (::g::Fuse::Platform::Lifecycle::State() == 3))
    {
        uDelegate* handler = iOSImpl::NotificationRegistrationSucceeded1_;

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, regID);
    }
    else
    {
        iOSImpl::DelayedRegToken_ = regID;
        ::g::Fuse::Platform::Lifecycle::add_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)iOSImpl__DispatchDelayedRegToken_fn));
    }
}

// internal static void OnReceivedNotification(string notification, bool fromNotificationBar) [static] :21
void iOSImpl::OnReceivedNotification(uString* notification, bool fromNotificationBar)
{
    uStackFrame __("Fuse.PushNotifications.iOSImpl", "OnReceivedNotification(string,bool)");
    iOSImpl_typeof()->Init();
    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, bool> ret4;
    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, bool> ret5;

    if ((::g::Fuse::Platform::Lifecycle::State() == 2) || (::g::Fuse::Platform::Lifecycle::State() == 3))
    {
        uDelegate* handler = iOSImpl::ReceivedNotification1_;

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, uCRef((::g::Uno::Collections::KeyValuePair__New1_fn(::TYPES[3/*Uno.Collections.KeyValuePair<string, bool>*/], notification, uCRef(fromNotificationBar), &ret4), ret4)));
    }
    else
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(iOSImpl::DelayedNotifications_), uCRef((::g::Uno::Collections::KeyValuePair__New1_fn(::TYPES[3/*Uno.Collections.KeyValuePair<string, bool>*/], notification, uCRef(fromNotificationBar), &ret5), ret5)));
        ::g::Fuse::Platform::Lifecycle::add_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)iOSImpl__DispatchDelayedNotifications_fn));
    }
}

// internal static void RegisterForPushNotifications() [static] :99
void iOSImpl::RegisterForPushNotifications()
{
    iOSImpl_typeof()->Init();
    @autoreleasepool
    {
        UIApplication* application = [UIApplication sharedApplication];
        if ([application respondsToSelector:@selector(registerUserNotificationSettings:)]) {
        	// use registerUserNotificationSettings
        	[application registerUserNotificationSettings: [UIUserNotificationSettings settingsForTypes:(UIUserNotificationTypeSound  | UIUserNotificationTypeAlert | UIUserNotificationTypeBadge)  categories:nil]];
        	[application registerForRemoteNotifications];
        } else {
        	// use registerForRemoteNotificationTypes:
        	[application registerForRemoteNotificationTypes:
        	 UIRemoteNotificationTypeBadge |
        	 UIRemoteNotificationTypeSound |
        	 UIRemoteNotificationTypeAlert];
        }
    }
    
}

// public static generated void add_NotificationRegistrationFailed(Uno.EventHandler<string> value) [static] :46
void iOSImpl::add_NotificationRegistrationFailed(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.iOSImpl", "add_NotificationRegistrationFailed(Uno.EventHandler<string>)");
    iOSImpl_typeof()->Init();
    iOSImpl::NotificationRegistrationFailed1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(iOSImpl::NotificationRegistrationFailed1_, value), ::TYPES[4/*Uno.EventHandler<string>*/]);
}

// public static generated void remove_NotificationRegistrationFailed(Uno.EventHandler<string> value) [static] :46
void iOSImpl::remove_NotificationRegistrationFailed(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.iOSImpl", "remove_NotificationRegistrationFailed(Uno.EventHandler<string>)");
    iOSImpl_typeof()->Init();
    iOSImpl::NotificationRegistrationFailed1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(iOSImpl::NotificationRegistrationFailed1_, value), ::TYPES[4/*Uno.EventHandler<string>*/]);
}

// public static generated void add_NotificationRegistrationSucceeded(Uno.EventHandler<string> value) [static] :72
void iOSImpl::add_NotificationRegistrationSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.iOSImpl", "add_NotificationRegistrationSucceeded(Uno.EventHandler<string>)");
    iOSImpl_typeof()->Init();
    iOSImpl::NotificationRegistrationSucceeded1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(iOSImpl::NotificationRegistrationSucceeded1_, value), ::TYPES[4/*Uno.EventHandler<string>*/]);
}

// public static generated void remove_NotificationRegistrationSucceeded(Uno.EventHandler<string> value) [static] :72
void iOSImpl::remove_NotificationRegistrationSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.iOSImpl", "remove_NotificationRegistrationSucceeded(Uno.EventHandler<string>)");
    iOSImpl_typeof()->Init();
    iOSImpl::NotificationRegistrationSucceeded1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(iOSImpl::NotificationRegistrationSucceeded1_, value), ::TYPES[4/*Uno.EventHandler<string>*/]);
}

// public static generated void add_ReceivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>> value) [static] :18
void iOSImpl::add_ReceivedNotification(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.iOSImpl", "add_ReceivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>>)");
    iOSImpl_typeof()->Init();
    iOSImpl::ReceivedNotification1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(iOSImpl::ReceivedNotification1_, value), ::TYPES[5/*Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>>*/]);
}

// public static generated void remove_ReceivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>> value) [static] :18
void iOSImpl::remove_ReceivedNotification(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.iOSImpl", "remove_ReceivedNotification(Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>>)");
    iOSImpl_typeof()->Init();
    iOSImpl::ReceivedNotification1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(iOSImpl::ReceivedNotification1_, value), ::TYPES[5/*Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>>*/]);
}
// }

}}} // ::g::Fuse::PushNotifications
