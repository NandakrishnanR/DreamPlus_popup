// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.LocalNotificatio-596c8559.h>
#include <Fuse.LocalNotificatio-f6bc0fea.h>
#include <Fuse.LocalNotifications.Notify.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <jni.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventHandler1-1.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[13];
static uType* TYPES[9];

namespace g{
namespace Fuse{
namespace LocalNotifications{

// /usr/local/share/uno/Packages/Fuse.LocalNotifications/1.9.0/Android/Impl.uno
// ----------------------------------------------------------------------------

// internal static extern class AndroidImpl :30
// {
// static generated AndroidImpl() :30
static void AndroidImpl__cctor__fn(uType* __type)
{
    AndroidImpl::ACTION_ = ::STRINGS[0/*"com.fuse.Lo...*/];
    AndroidImpl::ID_ = -1;
}

static void AndroidImpl_build(uType* type)
{
    ::STRINGS[0] = uString::Const("com.fuse.LocalNotifications.strPayload");
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Platform::Lifecycle_typeof(),
        ::g::Fuse::LocalNotifications::Notify_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&AndroidImpl::_init_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&AndroidImpl::ACTION_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&AndroidImpl::ID_, uFieldFlagsStatic);
}

uClassType* AndroidImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LocalNotifications.AndroidImpl", options);
    type->fp_build_ = AndroidImpl_build;
    type->fp_cctor_ = AndroidImpl__cctor__fn;
    return type;
}

// internal static void Init() :35
void AndroidImpl__Init_fn()
{
    AndroidImpl::Init();
}

// private static void JInit() :63
void AndroidImpl__JInit_fn()
{
    AndroidImpl::JInit();
}

// public static void Later(string title, string body, bool sound, string strPayload, [int delaySeconds]) :93
void AndroidImpl__Later_fn(uString* title, uString* body, bool* sound, uString* strPayload, int32_t* delaySeconds)
{
    AndroidImpl::Later(title, body, *sound, strPayload, *delaySeconds);
}

// private static int NextID() :87
void AndroidImpl__NextID_fn(int32_t* __retval)
{
    *__retval = AndroidImpl::NextID();
}

// private static void NoteInteractivity(bool isItInteractive) :57
void AndroidImpl__NoteInteractivity_fn(bool* isItInteractive)
{
    AndroidImpl::NoteInteractivity(*isItInteractive);
}

// private static void NotificationRecieved(string payload) :78
void AndroidImpl__NotificationRecieved_fn(uString* payload)
{
    AndroidImpl::NotificationRecieved(payload);
}

// private static void OnEnteringInteractive(Fuse.Platform.ApplicationState newState) :46
void AndroidImpl__OnEnteringInteractive_fn(int32_t* newState)
{
    AndroidImpl::OnEnteringInteractive(*newState);
}

// private static void OnExitedInteractive(Fuse.Platform.ApplicationState newState) :51
void AndroidImpl__OnExitedInteractive_fn(int32_t* newState)
{
    AndroidImpl::OnExitedInteractive(*newState);
}

bool AndroidImpl::_init_;
uSStrong<uString*> AndroidImpl::ACTION_;
int32_t AndroidImpl::ID_;

// internal static void Init() [static] :35
void AndroidImpl::Init()
{
    AndroidImpl_typeof()->Init();

    if (!AndroidImpl::_init_)
    {
        AndroidImpl::JInit();
        AndroidImpl::_init_ = true;
        ::g::Fuse::Platform::Lifecycle::add_EnteringInteractive(uDelegate::New(::TYPES[0/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)AndroidImpl__OnEnteringInteractive_fn));
        ::g::Fuse::Platform::Lifecycle::add_ExitedInteractive(uDelegate::New(::TYPES[0/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)AndroidImpl__OnExitedInteractive_fn));
    }
}

// private static void JInit() [static] :63
void AndroidImpl::JInit()
{
    AndroidImpl_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "JInit", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void Later(string title, string body, bool sound, string strPayload, [int delaySeconds]) [static] :93
void AndroidImpl::Later(uString* title, uString* body, bool sound, uString* strPayload, int32_t delaySeconds)
{
    AndroidImpl_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Later374", "(Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;I)V");
        uString* _utitle=title;
        jstring _title = JniHelper::UnoToJavaString(_utitle);
        uString* _ubody=body;
        jstring _body = JniHelper::UnoToJavaString(_ubody);
        bool _usound=sound;
        jboolean _sound = (jboolean)_usound;
        uString* _ustrPayload=strPayload;
        jstring _strPayload = JniHelper::UnoToJavaString(_ustrPayload);
        int32_t _udelaySeconds=delaySeconds;
        jint _delaySeconds = (jint)_udelaySeconds;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_title,_body,_sound,_strPayload,_delaySeconds);
        
        if (_title!=NULL) { U_JNIVAR->DeleteLocalRef(_title); }
        if (_body!=NULL) { U_JNIVAR->DeleteLocalRef(_body); }
        
        if (_strPayload!=NULL) { U_JNIVAR->DeleteLocalRef(_strPayload); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static int NextID() [static] :87
int32_t AndroidImpl::NextID()
{
    AndroidImpl_typeof()->Init();
    return AndroidImpl::ID_ = (AndroidImpl::ID_ + 1);
}

// private static void NoteInteractivity(bool isItInteractive) [static] :57
void AndroidImpl::NoteInteractivity(bool isItInteractive)
{
    AndroidImpl_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "NoteInteractivity", "(Z)V");
        bool _uisItInteractive=isItInteractive;
        jboolean _isItInteractive = (jboolean)_uisItInteractive;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_isItInteractive);
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void NotificationRecieved(string payload) [static] :78
void AndroidImpl::NotificationRecieved(uString* payload)
{
    AndroidImpl_typeof()->Init();
    ::g::Fuse::LocalNotifications::Notify::OnReceived(NULL, payload);
}

// private static void OnEnteringInteractive(Fuse.Platform.ApplicationState newState) [static] :46
void AndroidImpl::OnEnteringInteractive(int32_t newState)
{
    AndroidImpl_typeof()->Init();
    AndroidImpl::NoteInteractivity(true);
}

// private static void OnExitedInteractive(Fuse.Platform.ApplicationState newState) [static] :51
void AndroidImpl::OnExitedInteractive(int32_t newState)
{
    AndroidImpl_typeof()->Init();
    AndroidImpl::NoteInteractivity(false);
}
// }

// /usr/local/share/uno/Packages/Fuse.LocalNotifications/1.9.0/JS.uno
// ------------------------------------------------------------------

// public sealed class LocalNotify :25
// {
static void LocalNotify_build(uType* type)
{
    ::STRINGS[1] = uString::Const("receivedMessage");
    ::STRINGS[2] = uString::Const("FuseJS/LocalNotifications");
    ::STRINGS[3] = uString::Const("onReceivedMessage");
    ::STRINGS[4] = uString::Const("now");
    ::STRINGS[5] = uString::Const("later");
    ::STRINGS[6] = uString::Const("clearBadgeNumber");
    ::STRINGS[7] = uString::Const("clearAllNotifications");
    ::STRINGS[8] = uString::Const("Invalid value for argument '");
    ::STRINGS[9] = uString::Const("' passed from JS to LocalNotifications");
    ::STRINGS[10] = uString::Const("secondsFromNow");
    ::STRINGS[11] = uString::Const("badgeNumber");
    ::STRINGS[12] = uString::Const("");
    ::TYPES[1] = uObject_typeof()->Array();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[5] = ::g::Uno::Double_typeof();
    ::TYPES[6] = ::g::Uno::String_typeof();
    type->SetDependencies(
        ::g::Fuse::LocalNotifications::Notify_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(12,
        type, (uintptr_t)&LocalNotify::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* LocalNotify_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeEventEmitterModule_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(LocalNotify);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.LocalNotifications.LocalNotify", options);
    type->fp_build_ = LocalNotify_build;
    type->fp_ctor_ = (void*)LocalNotify__New3_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public LocalNotify() :29
void LocalNotify__ctor_3_fn(LocalNotify* __this)
{
    __this->ctor_3();
}

// public object ClearAllNotifications(Fuse.Scripting.Context context, object[] args) :143
void LocalNotify__ClearAllNotifications_fn(LocalNotify* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ClearAllNotifications(context, args);
}

// public object ClearBadgeNumber(Fuse.Scripting.Context context, object[] args) :132
void LocalNotify__ClearBadgeNumber_fn(LocalNotify* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ClearBadgeNumber(context, args);
}

// private static int GetInt(object arg, string argName) :114
void LocalNotify__GetInt_fn(uObject* arg, uString* argName, int32_t* __retval)
{
    *__retval = LocalNotify::GetInt(arg, argName);
}

// public object Later(Fuse.Scripting.Context context, object[] args) :69
void LocalNotify__Later_fn(LocalNotify* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Later(context, args);
}

// public LocalNotify New() :29
void LocalNotify__New3_fn(LocalNotify** __retval)
{
    *__retval = LocalNotify::New3();
}

// public object Now(Fuse.Scripting.Context context, object[] args) :98
void LocalNotify__Now_fn(LocalNotify* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Now(context, args);
}

// private void OnReceived(object sender, string message) :53
void LocalNotify__OnReceived_fn(LocalNotify* __this, uObject* sender, uString* message)
{
    __this->OnReceived(sender, message);
}

uSStrong<LocalNotify*> LocalNotify::_instance_;

// public LocalNotify() [instance] :29
void LocalNotify::ctor_3()
{
    ctor_2(true, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, ::STRINGS[1/*"receivedMes...*/]));

    if (LocalNotify::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(LocalNotify::_instance_ = this, ::STRINGS[2/*"FuseJS/Loca...*/]);
    ::g::Fuse::Scripting::NativeEvent* onReceivedMessage = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[3/*"onReceivedM...*/], true);
    On1(::STRINGS[1/*"receivedMes...*/], onReceivedMessage);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[4/*"now"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)LocalNotify__Now_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[5/*"later"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)LocalNotify__Later_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[6/*"clearBadgeN...*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)LocalNotify__ClearBadgeNumber_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[7/*"clearAllNot...*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)LocalNotify__ClearAllNotifications_fn, this)));
    AddMember(onReceivedMessage);
    ::g::Fuse::LocalNotifications::Notify::add_Received(uDelegate::New(::TYPES[3/*Uno.EventHandler<string>*/], (void*)LocalNotify__OnReceived_fn, this));
}

// public object ClearAllNotifications(Fuse.Scripting.Context context, object[] args) [instance] :143
uObject* LocalNotify::ClearAllNotifications(::g::Fuse::Scripting::Context* context, uArray* args)
{
    ::g::Fuse::LocalNotifications::Notify::ClearAllNotifications();
    return NULL;
}

// public object ClearBadgeNumber(Fuse.Scripting.Context context, object[] args) [instance] :132
uObject* LocalNotify::ClearBadgeNumber(::g::Fuse::Scripting::Context* context, uArray* args)
{
    ::g::Fuse::LocalNotifications::Notify::ClearBadgeNumber();
    return NULL;
}

// public object Later(Fuse.Scripting.Context context, object[] args) [instance] :69
uObject* LocalNotify::Later(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        int32_t secondsFromNow = LocalNotify::GetInt(uPtr(args)->Strong<uObject*>(0), ::STRINGS[10/*"secondsFrom...*/]);
        int32_t badgeNumber = (args->Length() > 5) ? LocalNotify::GetInt(args->Strong<uObject*>(5), ::STRINGS[11/*"badgeNumber"*/]) : 0;
        bool hasSoundArg = args->Length() > 4;
        ::g::Fuse::LocalNotifications::Notify::Later(secondsFromNow, uCast<uString*>(args->Strong<uObject*>(1), ::TYPES[6/*string*/]), uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[6/*string*/]), (args->Strong<uObject*>(3) != NULL) ? uCast<uString*>(args->Strong<uObject*>(3), ::TYPES[6/*string*/]) : ::STRINGS[12/*""*/], hasSoundArg ? uUnbox<bool>(::g::Uno::Bool_typeof(), args->Strong<uObject*>(4)) : true, badgeNumber);
    }

    return NULL;
}

// public object Now(Fuse.Scripting.Context context, object[] args) [instance] :98
uObject* LocalNotify::Now(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        int32_t badgeNumber = (uPtr(args)->Length() > 4) ? LocalNotify::GetInt(uPtr(args)->Strong<uObject*>(4), ::STRINGS[11/*"badgeNumber"*/]) : 0;
        bool hasSoundArg = args->Length() > 3;
        ::g::Fuse::LocalNotifications::Notify::Now(uCast<uString*>(args->Strong<uObject*>(0), ::TYPES[6/*string*/]), uCast<uString*>(args->Strong<uObject*>(1), ::TYPES[6/*string*/]), (args->Strong<uObject*>(2) == NULL) ? ::STRINGS[12/*""*/] : uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[6/*string*/]), hasSoundArg ? uUnbox<bool>(::g::Uno::Bool_typeof(), args->Strong<uObject*>(3)) : true, badgeNumber);
    }

    return NULL;
}

// private void OnReceived(object sender, string message) [instance] :53
void LocalNotify::OnReceived(uObject* sender, uString* message)
{
    Emit(uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, ::STRINGS[1/*"receivedMes...*/], message));
}

// private static int GetInt(object arg, string argName) [static] :114
int32_t LocalNotify::GetInt(uObject* arg, uString* argName)
{
    if (arg == NULL)
        return 0;

    if (uIs(arg, ::TYPES[4/*int*/]))
        return uUnbox<int32_t>(::TYPES[4/*int*/], arg);
    else if (uIs(arg, ::TYPES[5/*double*/]))
        return (int32_t)uUnbox<double>(::TYPES[5/*double*/], arg);
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[8/*"Invalid val...*/], argName), ::STRINGS[9/*"' passed fr...*/])));

    return 0;
}

// public LocalNotify New() [static] :29
LocalNotify* LocalNotify::New3()
{
    LocalNotify* obj1 = (LocalNotify*)uNew(LocalNotify_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.LocalNotifications/1.9.0/Common.uno
// ----------------------------------------------------------------------

// public static class Notify :7
// {
// static extern Notify() :12
static void Notify__cctor__fn(uType* __type)
{
    ::g::Fuse::LocalNotifications::AndroidImpl_typeof()->Init();
    Notify::_pendingNotifications_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[7/*Uno.Collections.List<string>*/]));
    ::g::Fuse::LocalNotifications::AndroidImpl::Init();
}

static void Notify_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::LocalNotifications::AndroidImpl_typeof());
    type->SetFields(0,
        ::TYPES[7/*Uno.Collections.List<string>*/], (uintptr_t)&Notify::_pendingNotifications_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.EventHandler<string>*/], (uintptr_t)&Notify::_receivedNotification1_, uFieldFlagsStatic);
}

uClassType* Notify_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
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

// public static extern void ClearAllNotifications() :100
void Notify__ClearAllNotifications_fn()
{
    Notify::ClearAllNotifications();
}

// public static extern void ClearBadgeNumber() :91
void Notify__ClearBadgeNumber_fn()
{
    Notify::ClearBadgeNumber();
}

// public static extern void Later(int secondsFromNow, string title, string body, string payload, [bool sound], [int badgeNumber]) :36
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

uSStrong< ::g::Uno::Collections::List*> Notify::_pendingNotifications_;
uSStrong<uDelegate*> Notify::_receivedNotification1_;

// public static extern void ClearAllNotifications() [static] :100
void Notify::ClearAllNotifications()
{
    Notify_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearAllNotifications376", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void ClearBadgeNumber() [static] :91
void Notify::ClearBadgeNumber()
{
    Notify_typeof()->Init();
}

// public static extern void Later(int secondsFromNow, string title, string body, string payload, [bool sound], [int badgeNumber]) [static] :36
void Notify::Later(int32_t secondsFromNow, uString* title, uString* body, uString* payload, bool sound, int32_t badgeNumber)
{
    Notify_typeof()->Init();
    ::g::Fuse::LocalNotifications::AndroidImpl::Later(title, body, sound, payload, secondsFromNow);
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
    Notify::_receivedNotification1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Notify::_receivedNotification1_, value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// private static generated void remove__receivedNotification(Uno.EventHandler<string> value) [static] :58
void Notify::remove__receivedNotification(uDelegate* value)
{
    Notify_typeof()->Init();
    Notify::_receivedNotification1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Notify::_receivedNotification1_, value), ::TYPES[3/*Uno.EventHandler<string>*/]);
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
                while (enum1.MoveNext(::TYPES[8/*Uno.Collections.List<string>.Enumerator*/]))
                {
                    uString* n = enum1.Current(::TYPES[8/*Uno.Collections.List<string>.Enumerator*/]);
                    uPtr(value)->Invoke(2, NULL, n);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[8/*Uno.Collections.List<string>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum1.Dispose(::TYPES[8/*Uno.Collections.List<string>.Enumerator*/]);
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
