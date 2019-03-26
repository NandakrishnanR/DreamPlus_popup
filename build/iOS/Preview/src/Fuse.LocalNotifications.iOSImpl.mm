// This file was generated based on /usr/local/share/uno/Packages/Fuse.LocalNotifications/1.9.0/iOS/Impl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.LocalNotifications.iOSImpl.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventHandler1-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.ApplicationStateTransitionHandler.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace LocalNotifications{

// internal static extern class iOSImpl :16
// {
// static generated iOSImpl() :16
static void iOSImpl__cctor__fn(uType* __type)
{
    iOSImpl::DelayedLocalNotifications_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]));
}

static void iOSImpl_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof());
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.List<string>*/], (uintptr_t)&iOSImpl::DelayedLocalNotifications_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.EventHandler<string>*/], (uintptr_t)&iOSImpl::ReceivedLocalNotification1_, uFieldFlagsStatic);
}

uClassType* iOSImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LocalNotifications.iOSImpl", options);
    type->fp_build_ = iOSImpl_build;
    type->fp_cctor_ = iOSImpl__cctor__fn;
    return type;
}

// private static void DispatchDelayedLocalNotifications(Uno.Platform.ApplicationState state) :54
void iOSImpl__DispatchDelayedLocalNotifications_fn(int32_t* state)
{
    iOSImpl::DispatchDelayedLocalNotifications(*state);
}

// internal static void Later(string title, string body, bool sound, string strPayload, [int delaySeconds], [int badgeNumber]) :19
void iOSImpl__Later_fn(uString* title, uString* body, bool* sound, uString* strPayload, int32_t* delaySeconds, int32_t* badgeNumber)
{
    iOSImpl::Later(title, body, *sound, strPayload, *delaySeconds, *badgeNumber);
}

// internal static void OnReceivedLocalNotification(string notification) :39
void iOSImpl__OnReceivedLocalNotification_fn(uString* notification)
{
    iOSImpl::OnReceivedLocalNotification(notification);
}

// public static generated void add_ReceivedLocalNotification(Uno.EventHandler<string> value) :36
void iOSImpl__add_ReceivedLocalNotification_fn(uDelegate* value)
{
    iOSImpl::add_ReceivedLocalNotification(value);
}

// public static generated void remove_ReceivedLocalNotification(Uno.EventHandler<string> value) :36
void iOSImpl__remove_ReceivedLocalNotification_fn(uDelegate* value)
{
    iOSImpl::remove_ReceivedLocalNotification(value);
}

uSStrong< ::g::Uno::Collections::List*> iOSImpl::DelayedLocalNotifications_;
uSStrong<uDelegate*> iOSImpl::ReceivedLocalNotification1_;

// private static void DispatchDelayedLocalNotifications(Uno.Platform.ApplicationState state) [static] :54
void iOSImpl::DispatchDelayedLocalNotifications(int32_t state)
{
    uStackFrame __("Fuse.LocalNotifications.iOSImpl", "DispatchDelayedLocalNotifications(Uno.Platform.ApplicationState)");
    iOSImpl_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret2;
    uDelegate* handler = iOSImpl::ReceivedLocalNotification1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
    {
        ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(iOSImpl::DelayedLocalNotifications_), &ret2), ret2);

        {
            try
            {
                {
                    while (enum1.MoveNext(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]))
                    {
                        uString* n = enum1.Current(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]);
                        uPtr(handler)->Invoke(2, NULL, n);
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum1.Dispose(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]);
                }
                                throw __t;
                goto __after_finally_0;
            }

            {
                enum1.Dispose(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]);
            }
            __after_finally_0:;
        }
    }

    uPtr(iOSImpl::DelayedLocalNotifications_)->Clear();
    ::g::Uno::Platform::CoreApp::remove_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)iOSImpl__DispatchDelayedLocalNotifications_fn));
}

// internal static void Later(string title, string body, bool sound, string strPayload, [int delaySeconds], [int badgeNumber]) [static] :19
void iOSImpl::Later(uString* title, uString* body, bool sound, uString* strPayload, int32_t delaySeconds, int32_t badgeNumber)
{
    iOSImpl_typeof()->Init();
    @autoreleasepool
    {
        [] (::NSString* title, ::NSString* body, bool sound, ::NSString* strPayload, int32_t delaySeconds, int32_t badgeNumber) -> void
        {
            UILocalNotification *notification = [[UILocalNotification alloc] init];
            notification.fireDate = [NSDate dateWithTimeIntervalSinceNow:delaySeconds];
            notification.alertAction = title;
            notification.alertBody = body;
            notification.timeZone = [NSTimeZone defaultTimeZone];
            if (sound)
                notification.soundName = UILocalNotificationDefaultSoundName;
            notification.applicationIconBadgeNumber = badgeNumber;
            notification.userInfo = [[NSDictionary alloc] initWithObjectsAndKeys:
                                     strPayload, @"payload", nil];
            
            [[UIApplication sharedApplication] scheduleLocalNotification:notification];
        } (::uObjC::NativeString(title), ::uObjC::NativeString(body), sound, ::uObjC::NativeString(strPayload), delaySeconds, badgeNumber);
        
    }
    
}

// internal static void OnReceivedLocalNotification(string notification) [static] :39
void iOSImpl::OnReceivedLocalNotification(uString* notification)
{
    uStackFrame __("Fuse.LocalNotifications.iOSImpl", "OnReceivedLocalNotification(string)");
    iOSImpl_typeof()->Init();

    if ((::g::Uno::Platform::CoreApp::State() == 2) || (::g::Uno::Platform::CoreApp::State() == 3))
    {
        uDelegate* handler = iOSImpl::ReceivedLocalNotification1_;

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, notification);
    }
    else
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(iOSImpl::DelayedLocalNotifications_), notification);
        ::g::Uno::Platform::CoreApp::add_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)iOSImpl__DispatchDelayedLocalNotifications_fn));
    }
}

// public static generated void add_ReceivedLocalNotification(Uno.EventHandler<string> value) [static] :36
void iOSImpl::add_ReceivedLocalNotification(uDelegate* value)
{
    uStackFrame __("Fuse.LocalNotifications.iOSImpl", "add_ReceivedLocalNotification(Uno.EventHandler<string>)");
    iOSImpl_typeof()->Init();
    iOSImpl::ReceivedLocalNotification1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(iOSImpl::ReceivedLocalNotification1_, value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void remove_ReceivedLocalNotification(Uno.EventHandler<string> value) [static] :36
void iOSImpl::remove_ReceivedLocalNotification(uDelegate* value)
{
    uStackFrame __("Fuse.LocalNotifications.iOSImpl", "remove_ReceivedLocalNotification(Uno.EventHandler<string>)");
    iOSImpl_typeof()->Init();
    iOSImpl::ReceivedLocalNotification1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(iOSImpl::ReceivedLocalNotification1_, value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}
// }

}}} // ::g::Fuse::LocalNotifications
