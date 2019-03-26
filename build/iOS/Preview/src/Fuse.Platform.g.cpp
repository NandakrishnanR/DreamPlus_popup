// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Platform.AppEvents.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.InterApp.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Platform.StatusBarAnimation.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Platform.SystemUIResizeReason.h>
#include <Fuse.Platform.SysUIState.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler1-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.ApplicationStateTransitionHandler.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.EventSources.InterAppInvoke.h>
#include <Uno.String.h>
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Platform{

// /usr/local/share/uno/Packages/Fuse.Platform/1.9.0/AppAlerts.uno
// ---------------------------------------------------------------

// internal static class AppEvents :13
// {
// static AppEvents() :17
static void AppEvents__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::CoreApp_typeof()->Init();
    ::g::Uno::Platform::CoreApp::add_ReceivedLowMemoryWarning(uDelegate::New(::TYPES[0/*Uno.EventHandler*/], (void*)AppEvents__OnLowMemoryWarning_fn));
}

static void AppEvents_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::EventHandler_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::TYPES[1/*Uno.Action*/], (uintptr_t)&AppEvents::LowMemoryWarning1_, uFieldFlagsStatic);
}

uClassType* AppEvents_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.AppEvents", options);
    type->fp_build_ = AppEvents_build;
    type->fp_cctor_ = AppEvents__cctor__fn;
    return type;
}

// internal static generated void add_LowMemoryWarning(Uno.Action value) :15
void AppEvents__add_LowMemoryWarning_fn(uDelegate* value)
{
    AppEvents::add_LowMemoryWarning(value);
}

// internal static generated void remove_LowMemoryWarning(Uno.Action value) :15
void AppEvents__remove_LowMemoryWarning_fn(uDelegate* value)
{
    AppEvents::remove_LowMemoryWarning(value);
}

// private static void OnLowMemoryWarning(object s, object a) :22
void AppEvents__OnLowMemoryWarning_fn(uObject* s, uObject* a)
{
    AppEvents::OnLowMemoryWarning(s, a);
}

uSStrong<uDelegate*> AppEvents::LowMemoryWarning1_;

// private static void OnLowMemoryWarning(object s, object a) [static] :22
void AppEvents::OnLowMemoryWarning(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Platform.AppEvents", "OnLowMemoryWarning(object,object)");
    AppEvents_typeof()->Init();
    uDelegate* handler = AppEvents::LowMemoryWarning1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid();
}

// internal static generated void add_LowMemoryWarning(Uno.Action value) [static] :15
void AppEvents::add_LowMemoryWarning(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.AppEvents", "add_LowMemoryWarning(Uno.Action)");
    AppEvents_typeof()->Init();
    AppEvents::LowMemoryWarning1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(AppEvents::LowMemoryWarning1_, value), ::TYPES[1/*Uno.Action*/]);
}

// internal static generated void remove_LowMemoryWarning(Uno.Action value) [static] :15
void AppEvents::remove_LowMemoryWarning(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.AppEvents", "remove_LowMemoryWarning(Uno.Action)");
    AppEvents_typeof()->Init();
    AppEvents::LowMemoryWarning1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(AppEvents::LowMemoryWarning1_, value), ::TYPES[1/*Uno.Action*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Platform/1.9.0/Lifecycle.uno
// ---------------------------------------------------------------

// public enum ApplicationState :5
uEnumType* ApplicationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.ApplicationState", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Background", 1LL,
        "Foreground", 2LL,
        "Interactive", 3LL,
        "Terminating", -1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Platform/1.9.0/InterApp.uno
// --------------------------------------------------------------

// public static class InterApp :9
// {
// static InterApp() :14
static void InterApp__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::EventSources::InterAppInvoke_typeof()->Init();
    ::g::Uno::Platform::EventSources::InterAppInvoke::add_ReceivedURI(uDelegate::New(::TYPES[2/*Uno.EventHandler<string>*/], (void*)InterApp__OnReceivedURI_fn));
}

static void InterApp_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[3/*Uno.Action<string>*/], (uintptr_t)&InterApp::ReceivedURI1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("add_ReceivedURI", NULL, (void*)InterApp__add_ReceivedURI_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.Action<string>*/]),
        new uFunction("remove_ReceivedURI", NULL, (void*)InterApp__remove_ReceivedURI_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.Action<string>*/]));
}

uClassType* InterApp_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.InterApp", options);
    type->fp_build_ = InterApp_build;
    type->fp_cctor_ = InterApp__cctor__fn;
    return type;
}

// private static void OnReceivedURI(object sender, string uri) :19
void InterApp__OnReceivedURI_fn(uObject* sender, uString* uri)
{
    InterApp::OnReceivedURI(sender, uri);
}

// public static generated void add_ReceivedURI(Uno.Action<string> value) :12
void InterApp__add_ReceivedURI_fn(uDelegate* value)
{
    InterApp::add_ReceivedURI(value);
}

// public static generated void remove_ReceivedURI(Uno.Action<string> value) :12
void InterApp__remove_ReceivedURI_fn(uDelegate* value)
{
    InterApp::remove_ReceivedURI(value);
}

uSStrong<uDelegate*> InterApp::ReceivedURI1_;

// private static void OnReceivedURI(object sender, string uri) [static] :19
void InterApp::OnReceivedURI(uObject* sender, uString* uri)
{
    uStackFrame __("Fuse.Platform.InterApp", "OnReceivedURI(object,string)");
    InterApp_typeof()->Init();
    uDelegate* handler = InterApp::ReceivedURI1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uri);
}

// public static generated void add_ReceivedURI(Uno.Action<string> value) [static] :12
void InterApp::add_ReceivedURI(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.InterApp", "add_ReceivedURI(Uno.Action<string>)");
    InterApp_typeof()->Init();
    InterApp::ReceivedURI1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(InterApp::ReceivedURI1_, value), ::TYPES[3/*Uno.Action<string>*/]);
}

// public static generated void remove_ReceivedURI(Uno.Action<string> value) [static] :12
void InterApp::remove_ReceivedURI(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.InterApp", "remove_ReceivedURI(Uno.Action<string>)");
    InterApp_typeof()->Init();
    InterApp::ReceivedURI1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(InterApp::ReceivedURI1_, value), ::TYPES[3/*Uno.Action<string>*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Platform/1.9.0/Lifecycle.uno
// ---------------------------------------------------------------

// public static class Lifecycle :22
// {
// static Lifecycle() :34
static void Lifecycle__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::CoreApp_typeof()->Init();
    ::g::Uno::Platform::CoreApp::add_Started(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnStarted_fn));
    ::g::Uno::Platform::CoreApp::add_EnteringForeground(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringForeground_fn));
    ::g::Uno::Platform::CoreApp::add_EnteringInteractive(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringInteractive_fn));
    ::g::Uno::Platform::CoreApp::add_ExitedInteractive(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnExitedInteractive_fn));
    ::g::Uno::Platform::CoreApp::add_EnteringBackground(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringBackground_fn));
    ::g::Uno::Platform::CoreApp::add_Terminating(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnTerminating_fn));
}

static void Lifecycle_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof());
    type->SetFields(0,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::EnteringBackground1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::EnteringForeground1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::EnteringInteractive1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::ExitedInteractive1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::Started1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::Terminating1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(13,
        new uFunction("add_EnteringBackground", NULL, (void*)Lifecycle__add_EnteringBackground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_EnteringBackground", NULL, (void*)Lifecycle__remove_EnteringBackground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("add_EnteringForeground", NULL, (void*)Lifecycle__add_EnteringForeground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_EnteringForeground", NULL, (void*)Lifecycle__remove_EnteringForeground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("add_EnteringInteractive", NULL, (void*)Lifecycle__add_EnteringInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_EnteringInteractive", NULL, (void*)Lifecycle__remove_EnteringInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("add_ExitedInteractive", NULL, (void*)Lifecycle__add_ExitedInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_ExitedInteractive", NULL, (void*)Lifecycle__remove_ExitedInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("add_Started", NULL, (void*)Lifecycle__add_Started_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_Started", NULL, (void*)Lifecycle__remove_Started_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("get_State", NULL, (void*)Lifecycle__get_State_fn, 0, true, ::g::Fuse::Platform::ApplicationState_typeof(), 0),
        new uFunction("add_Terminating", NULL, (void*)Lifecycle__add_Terminating_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_Terminating", NULL, (void*)Lifecycle__remove_Terminating_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]));
}

uClassType* Lifecycle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.Lifecycle", options);
    type->fp_build_ = Lifecycle_build;
    type->fp_cctor_ = Lifecycle__cctor__fn;
    return type;
}

// public static generated void add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) :31
void Lifecycle__add_EnteringBackground_fn(uDelegate* value)
{
    Lifecycle::add_EnteringBackground(value);
}

// public static generated void remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) :31
void Lifecycle__remove_EnteringBackground_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringBackground(value);
}

// public static generated void add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) :28
void Lifecycle__add_EnteringForeground_fn(uDelegate* value)
{
    Lifecycle::add_EnteringForeground(value);
}

// public static generated void remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) :28
void Lifecycle__remove_EnteringForeground_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringForeground(value);
}

// public static generated void add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :29
void Lifecycle__add_EnteringInteractive_fn(uDelegate* value)
{
    Lifecycle::add_EnteringInteractive(value);
}

// public static generated void remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :29
void Lifecycle__remove_EnteringInteractive_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringInteractive(value);
}

// public static generated void add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :30
void Lifecycle__add_ExitedInteractive_fn(uDelegate* value)
{
    Lifecycle::add_ExitedInteractive(value);
}

// public static generated void remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :30
void Lifecycle__remove_ExitedInteractive_fn(uDelegate* value)
{
    Lifecycle::remove_ExitedInteractive(value);
}

// private static void OnEnteringBackground(Uno.Platform.ApplicationState newState) :72
void Lifecycle__OnEnteringBackground_fn(int32_t* newState)
{
    Lifecycle::OnEnteringBackground(*newState);
}

// private static void OnEnteringForeground(Uno.Platform.ApplicationState newState) :51
void Lifecycle__OnEnteringForeground_fn(int32_t* newState)
{
    Lifecycle::OnEnteringForeground(*newState);
}

// private static void OnEnteringInteractive(Uno.Platform.ApplicationState newState) :58
void Lifecycle__OnEnteringInteractive_fn(int32_t* newState)
{
    Lifecycle::OnEnteringInteractive(*newState);
}

// private static void OnExitedInteractive(Uno.Platform.ApplicationState newState) :65
void Lifecycle__OnExitedInteractive_fn(int32_t* newState)
{
    Lifecycle::OnExitedInteractive(*newState);
}

// private static void OnStarted(Uno.Platform.ApplicationState newState) :44
void Lifecycle__OnStarted_fn(int32_t* newState)
{
    Lifecycle::OnStarted(*newState);
}

// private static void OnTerminating(Uno.Platform.ApplicationState newState) :79
void Lifecycle__OnTerminating_fn(int32_t* newState)
{
    Lifecycle::OnTerminating(*newState);
}

// public static generated void add_Started(Uno.Action<Fuse.Platform.ApplicationState> value) :27
void Lifecycle__add_Started_fn(uDelegate* value)
{
    Lifecycle::add_Started(value);
}

// public static generated void remove_Started(Uno.Action<Fuse.Platform.ApplicationState> value) :27
void Lifecycle__remove_Started_fn(uDelegate* value)
{
    Lifecycle::remove_Started(value);
}

// public static Fuse.Platform.ApplicationState get_State() :25
void Lifecycle__get_State_fn(int32_t* __retval)
{
    *__retval = Lifecycle::State();
}

// public static generated void add_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) :32
void Lifecycle__add_Terminating_fn(uDelegate* value)
{
    Lifecycle::add_Terminating(value);
}

// public static generated void remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) :32
void Lifecycle__remove_Terminating_fn(uDelegate* value)
{
    Lifecycle::remove_Terminating(value);
}

uSStrong<uDelegate*> Lifecycle::EnteringBackground1_;
uSStrong<uDelegate*> Lifecycle::EnteringForeground1_;
uSStrong<uDelegate*> Lifecycle::EnteringInteractive1_;
uSStrong<uDelegate*> Lifecycle::ExitedInteractive1_;
uSStrong<uDelegate*> Lifecycle::Started1_;
uSStrong<uDelegate*> Lifecycle::Terminating1_;

// private static void OnEnteringBackground(Uno.Platform.ApplicationState newState) [static] :72
void Lifecycle::OnEnteringBackground(int32_t newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnEnteringBackground(Uno.Platform.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringBackground1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(newState));
}

// private static void OnEnteringForeground(Uno.Platform.ApplicationState newState) [static] :51
void Lifecycle::OnEnteringForeground(int32_t newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnEnteringForeground(Uno.Platform.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringForeground1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(newState));
}

// private static void OnEnteringInteractive(Uno.Platform.ApplicationState newState) [static] :58
void Lifecycle::OnEnteringInteractive(int32_t newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnEnteringInteractive(Uno.Platform.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringInteractive1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(newState));
}

// private static void OnExitedInteractive(Uno.Platform.ApplicationState newState) [static] :65
void Lifecycle::OnExitedInteractive(int32_t newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnExitedInteractive(Uno.Platform.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::ExitedInteractive1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(newState));
}

// private static void OnStarted(Uno.Platform.ApplicationState newState) [static] :44
void Lifecycle::OnStarted(int32_t newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnStarted(Uno.Platform.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::Started1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(newState));
}

// private static void OnTerminating(Uno.Platform.ApplicationState newState) [static] :79
void Lifecycle::OnTerminating(int32_t newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnTerminating(Uno.Platform.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::Terminating1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(newState));
}

// public static Fuse.Platform.ApplicationState get_State() [static] :25
int32_t Lifecycle::State()
{
    Lifecycle_typeof()->Init();
    return ::g::Uno::Platform::CoreApp::State();
}

// public static generated void add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :31
void Lifecycle::add_EnteringBackground(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringBackground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringBackground1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :31
void Lifecycle::remove_EnteringBackground(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringBackground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringBackground1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :28
void Lifecycle::add_EnteringForeground(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringForeground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringForeground1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :28
void Lifecycle::remove_EnteringForeground(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringForeground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringForeground1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :29
void Lifecycle::add_EnteringInteractive(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringInteractive1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :29
void Lifecycle::remove_EnteringInteractive(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringInteractive1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :30
void Lifecycle::add_ExitedInteractive(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::ExitedInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::ExitedInteractive1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :30
void Lifecycle::remove_ExitedInteractive(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::ExitedInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::ExitedInteractive1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_Started(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :27
void Lifecycle::add_Started(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_Started(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::Started1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::Started1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_Started(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :27
void Lifecycle::remove_Started(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_Started(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::Started1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::Started1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :32
void Lifecycle::add_Terminating(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_Terminating(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::Terminating1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::Terminating1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :32
void Lifecycle::remove_Terminating(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::Terminating1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::Terminating1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Platform/1.9.0/iOS/SystemUI.uno
// ------------------------------------------------------------------

// public enum StatusBarAnimation :14
uEnumType* StatusBarAnimation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.StatusBarAnimation", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Fade", 1LL,
        "Slide", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Platform/1.9.0/iOS/SystemUI.uno
// ------------------------------------------------------------------

// public enum StatusBarStyle :8
uEnumType* StatusBarStyle_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.StatusBarStyle", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Dark", 0LL,
        "Light", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Platform/1.9.0/SystemUI.uno
// --------------------------------------------------------------

// internal enum SystemUIResizeReason :8
uEnumType* SystemUIResizeReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.SystemUIResizeReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "WillShow", 0LL,
        "WillChangeFrame", 1LL,
        "WillHide", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Platform/1.9.0/SystemUI.uno
// --------------------------------------------------------------

// internal enum SysUIState :15
uEnumType* SysUIState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.SysUIState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Normal", 0LL,
        "StatusBarHidden", 1LL,
        "Fullscreen", 2LL);
    return type;
}

}}} // ::g::Fuse::Platform
