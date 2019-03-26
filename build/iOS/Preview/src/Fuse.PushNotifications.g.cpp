// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.PushNotifications.Push.h>
#include <Fuse.PushNotifications.PushNotify.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.EventHandler1-1.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[13];
static uType* TYPES[5];

namespace g{
namespace Fuse{
namespace PushNotifications{

// /Users/jaeyounchae/Library/Application Support/Fusetools/Packages/Fuse.PushNotifications/1.9.0/JS.uno
// -----------------------------------------------------------------------------------------------------

// public sealed class Push :34
// {
static void Push_build(uType* type)
{
    ::STRINGS[0] = uString::Const("receivedMessage");
    ::STRINGS[1] = uString::Const("registrationSucceeded");
    ::STRINGS[2] = uString::Const("FuseJS/Push");
    ::STRINGS[3] = uString::Const("onReceivedMessage");
    ::STRINGS[4] = uString::Const("onRegistrationFailed");
    ::STRINGS[5] = uString::Const("onRegistrationSucceeded");
    ::STRINGS[6] = uString::Const("error");
    ::STRINGS[7] = uString::Const("clearBadgeNumber");
    ::STRINGS[8] = uString::Const("clearAllNotifications");
    ::STRINGS[9] = uString::Const("register");
    ::STRINGS[10] = uString::Const("Push.register takes no arguments");
    ::STRINGS[11] = uString::Const("/Users/jaeyounchae/Library/Application Support/Fusetools/Packages/Fuse.PushNotifications/1.9.0/JS.uno");
    ::STRINGS[12] = uString::Const("Register");
    ::TYPES[0] = uObject_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), NULL), NULL);
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::PushNotifications::PushNotify_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(12,
        type, (uintptr_t)&Push::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("ClearAllNotifications", NULL, (void*)Push__ClearAllNotifications_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), ::TYPES[0/*object[]*/]),
        new uFunction("ClearBadgeNumber", NULL, (void*)Push__ClearBadgeNumber_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), ::TYPES[0/*object[]*/]),
        new uFunction(".ctor", NULL, (void*)Push__New3_fn, 0, true, type, 0),
        new uFunction("Register", NULL, (void*)Push__Register_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), ::TYPES[0/*object[]*/]));
}

::g::Fuse::Scripting::NativeModule_type* Push_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeEventEmitterModule_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Push);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.PushNotifications.Push", options);
    type->fp_build_ = Push_build;
    type->fp_ctor_ = (void*)Push__New3_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Push() :38
void Push__ctor_3_fn(Push* __this)
{
    __this->ctor_3();
}

// public object ClearAllNotifications(Fuse.Scripting.Context context, object[] args) :124
void Push__ClearAllNotifications_fn(Push* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ClearAllNotifications(context, args);
}

// public object ClearBadgeNumber(Fuse.Scripting.Context context, object[] args) :113
void Push__ClearBadgeNumber_fn(Push* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ClearBadgeNumber(context, args);
}

// public Push New() :38
void Push__New3_fn(Push** __retval)
{
    *__retval = Push::New3();
}

// private void OnReceivedNotification(object sender, Uno.Collections.KeyValuePair<string, bool> message) :79
void Push__OnReceivedNotification_fn(Push* __this, uObject* sender, ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, bool>* message)
{
    __this->OnReceivedNotification(sender, *message);
}

// private void OnRegistrationFailed(object sender, string message) :101
void Push__OnRegistrationFailed_fn(Push* __this, uObject* sender, uString* message)
{
    __this->OnRegistrationFailed(sender, message);
}

// private void OnRegistrationSucceeded(object sender, string message) :90
void Push__OnRegistrationSucceeded_fn(Push* __this, uObject* sender, uString* message)
{
    __this->OnRegistrationSucceeded(sender, message);
}

// public object Register(Fuse.Scripting.Context context, object[] args) :136
void Push__Register_fn(Push* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Register(context, args);
}

uSStrong<Push*> Push::_instance_;

// public Push() [instance] :38
void Push::ctor_3()
{
    uStackFrame __("Fuse.PushNotifications.Push", ".ctor()");
    ctor_2(true, uArray::Init<uObject*>(::TYPES[0/*object[]*/], 2, ::STRINGS[0/*"receivedMes...*/], ::STRINGS[1/*"registratio...*/]));

    if (Push::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Push::_instance_ = this, ::STRINGS[2/*"FuseJS/Push"*/]);
    ::g::Fuse::Scripting::NativeEvent* onReceivedMessage = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[3/*"onReceivedM...*/], true);
    ::g::Fuse::Scripting::NativeEvent* onRegistrationFailed = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[4/*"onRegistrat...*/], true);
    ::g::Fuse::Scripting::NativeEvent* onRegistrationSucceeded = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[5/*"onRegistrat...*/], true);
    On1(::STRINGS[0/*"receivedMes...*/], onReceivedMessage);
    On1(::STRINGS[6/*"error"*/], onRegistrationFailed);
    On1(::STRINGS[1/*"registratio...*/], onRegistrationSucceeded);
    AddMember(onReceivedMessage);
    AddMember(onRegistrationSucceeded);
    AddMember(onRegistrationFailed);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[7/*"clearBadgeN...*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.NativeCallback*/], (void*)Push__ClearBadgeNumber_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[8/*"clearAllNot...*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.NativeCallback*/], (void*)Push__ClearAllNotifications_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[9/*"register"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.NativeCallback*/], (void*)Push__Register_fn, this)));
    ::g::Fuse::PushNotifications::PushNotify::add_ReceivedNotification(uDelegate::New(::TYPES[2/*Uno.EventHandler<Uno.Collections.KeyValuePair<string, bool>>*/], (void*)Push__OnReceivedNotification_fn, this));
    ::g::Fuse::PushNotifications::PushNotify::add_RegistrationSucceeded(uDelegate::New(::TYPES[3/*Uno.EventHandler<string>*/], (void*)Push__OnRegistrationSucceeded_fn, this));
    ::g::Fuse::PushNotifications::PushNotify::add_RegistrationFailed(uDelegate::New(::TYPES[3/*Uno.EventHandler<string>*/], (void*)Push__OnRegistrationFailed_fn, this));
}

// public object ClearAllNotifications(Fuse.Scripting.Context context, object[] args) [instance] :124
uObject* Push::ClearAllNotifications(::g::Fuse::Scripting::Context* context, uArray* args)
{
    ::g::Fuse::PushNotifications::PushNotify::ClearAllNotifications();
    return NULL;
}

// public object ClearBadgeNumber(Fuse.Scripting.Context context, object[] args) [instance] :113
uObject* Push::ClearBadgeNumber(::g::Fuse::Scripting::Context* context, uArray* args)
{
    ::g::Fuse::PushNotifications::PushNotify::ClearBadgeNumber();
    return NULL;
}

// private void OnReceivedNotification(object sender, Uno.Collections.KeyValuePair<string, bool> message) [instance] :79
void Push::OnReceivedNotification(uObject* sender, ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, bool> message)
{
    uStackFrame __("Fuse.PushNotifications.Push", "OnReceivedNotification(object,Uno.Collections.KeyValuePair<string, bool>)");
    Emit(uArray::Init<uObject*>(::TYPES[0/*object[]*/], 3, ::STRINGS[0/*"receivedMes...*/], (uString*)message.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, bool>*/]), uBox(::g::Uno::Bool_typeof(), message.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, bool>*/]))));
}

// private void OnRegistrationFailed(object sender, string message) [instance] :101
void Push::OnRegistrationFailed(uObject* sender, uString* message)
{
    uStackFrame __("Fuse.PushNotifications.Push", "OnRegistrationFailed(object,string)");
    EmitError(message);
}

// private void OnRegistrationSucceeded(object sender, string message) [instance] :90
void Push::OnRegistrationSucceeded(uObject* sender, uString* message)
{
    uStackFrame __("Fuse.PushNotifications.Push", "OnRegistrationSucceeded(object,string)");
    Emit(uArray::Init<uObject*>(::TYPES[0/*object[]*/], 2, ::STRINGS[1/*"registratio...*/], message));
}

// public object Register(Fuse.Scripting.Context context, object[] args) [instance] :136
uObject* Push::Register(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.PushNotifications.Push", "Register(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[10/*"Push.regist...*/], this, ::STRINGS[11/*"/Users/jaey...*/], 140, ::STRINGS[12/*"Register"*/], NULL);
        return NULL;
    }

    ::g::Fuse::PushNotifications::PushNotify::Register();
    return NULL;
}

// public Push New() [static] :38
Push* Push::New3()
{
    Push* obj1 = (Push*)uNew(Push_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}} // ::g::Fuse::PushNotifications
