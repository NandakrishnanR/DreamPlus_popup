// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.LocalNotifications.LocalNotify.h>
#include <Fuse.LocalNotifications.Notify.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.EventHandler1-1.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[12];
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace LocalNotifications{

// /usr/local/share/uno/Packages/Fuse.LocalNotifications/1.9.0/JS.uno
// ------------------------------------------------------------------

// public sealed class LocalNotify :25
// {
static void LocalNotify_build(uType* type)
{
    ::STRINGS[0] = uString::Const("receivedMessage");
    ::STRINGS[1] = uString::Const("FuseJS/LocalNotifications");
    ::STRINGS[2] = uString::Const("onReceivedMessage");
    ::STRINGS[3] = uString::Const("now");
    ::STRINGS[4] = uString::Const("later");
    ::STRINGS[5] = uString::Const("clearBadgeNumber");
    ::STRINGS[6] = uString::Const("clearAllNotifications");
    ::STRINGS[7] = uString::Const("Invalid value for argument '");
    ::STRINGS[8] = uString::Const("' passed from JS to LocalNotifications");
    ::STRINGS[9] = uString::Const("secondsFromNow");
    ::STRINGS[10] = uString::Const("badgeNumber");
    ::STRINGS[11] = uString::Const("");
    ::TYPES[0] = uObject_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[4] = ::g::Uno::Double_typeof();
    ::TYPES[5] = ::g::Uno::String_typeof();
    type->SetDependencies(
        ::g::Fuse::LocalNotifications::Notify_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(12,
        type, (uintptr_t)&LocalNotify::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("ClearAllNotifications", NULL, (void*)LocalNotify__ClearAllNotifications_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), ::TYPES[0/*object[]*/]),
        new uFunction("ClearBadgeNumber", NULL, (void*)LocalNotify__ClearBadgeNumber_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), ::TYPES[0/*object[]*/]),
        new uFunction("Later", NULL, (void*)LocalNotify__Later_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), ::TYPES[0/*object[]*/]),
        new uFunction(".ctor", NULL, (void*)LocalNotify__New3_fn, 0, true, type, 0),
        new uFunction("Now", NULL, (void*)LocalNotify__Now_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), ::TYPES[0/*object[]*/]));
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
    uStackFrame __("Fuse.LocalNotifications.LocalNotify", ".ctor()");
    ctor_2(true, uArray::Init<uObject*>(::TYPES[0/*object[]*/], 1, ::STRINGS[0/*"receivedMes...*/]));

    if (LocalNotify::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(LocalNotify::_instance_ = this, ::STRINGS[1/*"FuseJS/Loca...*/]);
    ::g::Fuse::Scripting::NativeEvent* onReceivedMessage = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[2/*"onReceivedM...*/], true);
    On1(::STRINGS[0/*"receivedMes...*/], onReceivedMessage);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"now"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.NativeCallback*/], (void*)LocalNotify__Now_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[4/*"later"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.NativeCallback*/], (void*)LocalNotify__Later_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[5/*"clearBadgeN...*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.NativeCallback*/], (void*)LocalNotify__ClearBadgeNumber_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[6/*"clearAllNot...*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.NativeCallback*/], (void*)LocalNotify__ClearAllNotifications_fn, this)));
    AddMember(onReceivedMessage);
    ::g::Fuse::LocalNotifications::Notify::add_Received(uDelegate::New(::TYPES[2/*Uno.EventHandler<string>*/], (void*)LocalNotify__OnReceived_fn, this));
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
    uStackFrame __("Fuse.LocalNotifications.LocalNotify", "Later(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        int32_t secondsFromNow = LocalNotify::GetInt(uPtr(args)->Strong<uObject*>(0), ::STRINGS[9/*"secondsFrom...*/]);
        int32_t badgeNumber = (args->Length() > 5) ? LocalNotify::GetInt(args->Strong<uObject*>(5), ::STRINGS[10/*"badgeNumber"*/]) : 0;
        bool hasSoundArg = args->Length() > 4;
        ::g::Fuse::LocalNotifications::Notify::Later(secondsFromNow, uCast<uString*>(args->Strong<uObject*>(1), ::TYPES[5/*string*/]), uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[5/*string*/]), (args->Strong<uObject*>(3) != NULL) ? uCast<uString*>(args->Strong<uObject*>(3), ::TYPES[5/*string*/]) : ::STRINGS[11/*""*/], hasSoundArg ? uUnbox<bool>(::g::Uno::Bool_typeof(), args->Strong<uObject*>(4)) : true, badgeNumber);
    }

    return NULL;
}

// public object Now(Fuse.Scripting.Context context, object[] args) [instance] :98
uObject* LocalNotify::Now(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.LocalNotifications.LocalNotify", "Now(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        int32_t badgeNumber = (uPtr(args)->Length() > 4) ? LocalNotify::GetInt(uPtr(args)->Strong<uObject*>(4), ::STRINGS[10/*"badgeNumber"*/]) : 0;
        bool hasSoundArg = args->Length() > 3;
        ::g::Fuse::LocalNotifications::Notify::Now(uCast<uString*>(args->Strong<uObject*>(0), ::TYPES[5/*string*/]), uCast<uString*>(args->Strong<uObject*>(1), ::TYPES[5/*string*/]), (args->Strong<uObject*>(2) == NULL) ? ::STRINGS[11/*""*/] : uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[5/*string*/]), hasSoundArg ? uUnbox<bool>(::g::Uno::Bool_typeof(), args->Strong<uObject*>(3)) : true, badgeNumber);
    }

    return NULL;
}

// private void OnReceived(object sender, string message) [instance] :53
void LocalNotify::OnReceived(uObject* sender, uString* message)
{
    uStackFrame __("Fuse.LocalNotifications.LocalNotify", "OnReceived(object,string)");
    Emit(uArray::Init<uObject*>(::TYPES[0/*object[]*/], 2, ::STRINGS[0/*"receivedMes...*/], message));
}

// private static int GetInt(object arg, string argName) [static] :114
int32_t LocalNotify::GetInt(uObject* arg, uString* argName)
{
    uStackFrame __("Fuse.LocalNotifications.LocalNotify", "GetInt(object,string)");

    if (arg == NULL)
        return 0;

    if (uIs(arg, ::TYPES[3/*int*/]))
        return uUnbox<int32_t>(::TYPES[3/*int*/], arg);
    else if (uIs(arg, ::TYPES[4/*double*/]))
        return (int32_t)uUnbox<double>(::TYPES[4/*double*/], arg);
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[7/*"Invalid val...*/], argName), ::STRINGS[8/*"' passed fr...*/])));

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

}}} // ::g::Fuse::LocalNotifications
