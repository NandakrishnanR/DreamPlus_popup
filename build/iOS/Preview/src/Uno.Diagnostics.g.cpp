// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <chrono>
#include <mach/mach.h>
#include <mach/mach_time.h>
#include <sys/time.h>
#include <time.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.AllocateEvent.h>
#include <Uno.Diagnostics.AlwaysProfileAttribute.h>
#include <Uno.Diagnostics.AssertionHandler.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Diagnostics.EnterEvent.h>
#include <Uno.Diagnostics.EventType.h>
#include <Uno.Diagnostics.ExitEvent.h>
#include <Uno.Diagnostics.FreeEvent.h>
#include <Uno.Diagnostics.IdMap-1.h>
#include <Uno.Diagnostics.LogHandler.h>
#include <Uno.Diagnostics.NeverProfileAttribute.h>
#include <Uno.Diagnostics.Profile.h>
#include <Uno.Diagnostics.ProfileData.h>
#include <Uno.Diagnostics.ProfileEvent.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[5];
static uType* TYPES[5];

namespace g{
namespace Uno{
namespace Diagnostics{

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/AllocateEvent.uno
// ------------------------------------------------------------------------------------

// public sealed class AllocateEvent :3
// {
static void AllocateEvent_build(uType* type)
{
    type->SetFields(1);
}

::g::Uno::Diagnostics::ProfileEvent_type* AllocateEvent_typeof()
{
    static uSStrong< ::g::Uno::Diagnostics::ProfileEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Diagnostics::ProfileEvent_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(AllocateEvent);
    options.TypeSize = sizeof(::g::Uno::Diagnostics::ProfileEvent_type);
    type = (::g::Uno::Diagnostics::ProfileEvent_type*)uClassType::New("Uno.Diagnostics.AllocateEvent", options);
    type->fp_build_ = AllocateEvent_build;
    type->fp_get_Type = (void(*)(::g::Uno::Diagnostics::ProfileEvent*, int32_t*))AllocateEvent__get_Type_fn;
    return type;
}

// public override sealed Uno.Diagnostics.EventType get_Type() :9
void AllocateEvent__get_Type_fn(AllocateEvent* __this, int32_t* __retval)
{
    return *__retval = 2, void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/Profile.uno
// ------------------------------------------------------------------------------

// public sealed class AlwaysProfileAttribute :10
// {
static void AlwaysProfileAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)AlwaysProfileAttribute__New1_fn, 0, true, type, 0));
}

uType* AlwaysProfileAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(AlwaysProfileAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Diagnostics.AlwaysProfileAttribute", options);
    type->fp_build_ = AlwaysProfileAttribute_build;
    type->fp_ctor_ = (void*)AlwaysProfileAttribute__New1_fn;
    return type;
}

// public generated AlwaysProfileAttribute() :10
void AlwaysProfileAttribute__ctor_1_fn(AlwaysProfileAttribute* __this)
{
    __this->ctor_1();
}

// public generated AlwaysProfileAttribute New() :10
void AlwaysProfileAttribute__New1_fn(AlwaysProfileAttribute** __retval)
{
    *__retval = AlwaysProfileAttribute::New1();
}

// public generated AlwaysProfileAttribute() [instance] :10
void AlwaysProfileAttribute::ctor_1()
{
    ctor_();
}

// public generated AlwaysProfileAttribute New() [static] :10
AlwaysProfileAttribute* AlwaysProfileAttribute::New1()
{
    AlwaysProfileAttribute* obj1 = (AlwaysProfileAttribute*)uNew(AlwaysProfileAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/Debug.uno
// ----------------------------------------------------------------------------

// public delegate void AssertionHandler(bool value, string expression, string filename, int line, object[] operands) :21
uDelegateType* AssertionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Diagnostics.AssertionHandler", 5, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Bool_typeof(),
        ::g::Uno::String_typeof(),
        ::g::Uno::String_typeof(),
        ::g::Uno::Int_typeof(),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/Clock.uno
// ----------------------------------------------------------------------------

// public static class Clock :9
// {
static void Clock_build(uType* type)
{
    type->Reflection.SetFunctions(3,
        new uFunction("GetSeconds", NULL, (void*)Clock__GetSeconds_fn, 0, true, ::g::Uno::Double_typeof(), 0),
        new uFunction("GetTicks", NULL, (void*)Clock__GetTicks_fn, 0, true, ::g::Uno::Long_typeof(), 0),
        new uFunction("GetTimezoneOffset", NULL, (void*)Clock__GetTimezoneOffset_fn, 0, true, ::g::Uno::Int_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
}

uClassType* Clock_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Diagnostics.Clock", options);
    type->fp_build_ = Clock_build;
    return type;
}

// public static double GetSeconds() :17
void Clock__GetSeconds_fn(double* __retval)
{
    *__retval = Clock::GetSeconds();
}

// public static long GetTicks() :60
void Clock__GetTicks_fn(int64_t* __retval)
{
    *__retval = Clock::GetTicks();
}

// public static int GetTimezoneOffset(int year, int month, int day) :77
void Clock__GetTimezoneOffset_fn(int32_t* year, int32_t* month, int32_t* day, int32_t* __retval)
{
    *__retval = Clock::GetTimezoneOffset(*year, *month, *day);
}

// public static double GetSeconds() [static] :17
double Clock::GetSeconds()
{
    //https://developer.apple.com/library/mac/qa/qa1398/_index.html
    static double multiplier = 0;
    if (multiplier == 0)
    {
        mach_timebase_info_data_t timebase;
        mach_timebase_info(&timebase);
        multiplier = (double)timebase.numer / (double)timebase.denom / 1e9;
    }
    
    return (double)mach_absolute_time() * multiplier;
}

// public static long GetTicks() [static] :60
int64_t Clock::GetTicks()
{
    auto start = std::chrono::system_clock::now();
    return std::chrono::duration_cast<std::chrono::duration<int64_t, std::ratio<1, 10000000>>>(start.time_since_epoch()).count();
}

// public static int GetTimezoneOffset(int year, int month, int day) [static] :77
int32_t Clock::GetTimezoneOffset(int32_t year, int32_t month, int32_t day)
{
    struct tm stm;
    stm.tm_year = year - 1900;
    stm.tm_mon = month - 1;
    stm.tm_mday = day;
    stm.tm_hour = 0;
    stm.tm_min = 0;
    stm.tm_sec = 0;
    stm.tm_wday = 0;
    stm.tm_yday = 0;
    stm.tm_isdst = 0;
    time_t current_time = mktime(&stm);
    #ifdef WIN32
    gmtime_s(&stm, &current_time);
    time_t utc = mktime(&stm);
    
    localtime_s(&stm, &current_time);
    time_t local = mktime(&stm);
    #else
    struct tm *info;
    info = gmtime(&current_time);
    time_t utc = mktime(info);
    
    info = localtime(&current_time);
    time_t local = mktime(info);
    #endif
    return (int)(local - utc) / 60 + stm.tm_isdst * 60;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/Debug.uno
// ----------------------------------------------------------------------------

// public static class Debug :27
// {
// static generated Debug() :27
static void Debug__cctor__fn(uType* __type)
{
    Debug::_indentStr_ = ::STRINGS[0/*""*/];
}

static void Debug_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("Assertion Failed: '");
    ::STRINGS[2] = uString::Const("' in ");
    ::STRINGS[3] = uString::Const("(");
    ::STRINGS[4] = uString::Const(")");
    type->SetFields(0,
        ::g::Uno::Diagnostics::AssertionHandler_typeof(), (uintptr_t)&Debug::_assertionHandler_, uFieldFlagsStatic,
        ::g::Uno::Diagnostics::LogHandler_typeof(), (uintptr_t)&Debug::_logHandler_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Debug::_indentStr_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("Assert", NULL, (void*)Debug__Assert_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), uObject_typeof()->Array()),
        new uFunction("Log", NULL, (void*)Debug__Log2_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Diagnostics::DebugMessageType_typeof()),
        new uFunction("Log", NULL, (void*)Debug__Log3_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::String_typeof(), ::g::Uno::Diagnostics::DebugMessageType_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetLogHandler", NULL, (void*)Debug__SetLogHandler_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Diagnostics::LogHandler_typeof()));
}

uClassType* Debug_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Diagnostics.Debug", options);
    type->fp_build_ = Debug_build;
    type->fp_cctor_ = Debug__cctor__fn;
    return type;
}

// public static void Assert(bool value, string expression, string filename, int line, object[] operands) :39
void Debug__Assert_fn(bool* value, uString* expression, uString* filename, int32_t* line, uArray* operands)
{
    Debug::Assert(*value, expression, filename, *line, operands);
}

// private static void EmitLog(string message, Uno.Diagnostics.DebugMessageType type) :89
void Debug__EmitLog_fn(uString* message, int32_t* type)
{
    Debug::EmitLog(message, *type);
}

// public static void Log(string message, [Uno.Diagnostics.DebugMessageType type]) :68
void Debug__Log2_fn(uString* message, int32_t* type)
{
    Debug::Log2(message, *type);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type, string filename, int line) :58
void Debug__Log3_fn(uString* message, int32_t* type, uString* filename, int32_t* line)
{
    Debug::Log3(message, *type, filename, *line);
}

// public static void SetLogHandler(Uno.Diagnostics.LogHandler handler) :53
void Debug__SetLogHandler_fn(uDelegate* handler)
{
    Debug::SetLogHandler(handler);
}

uSStrong<uDelegate*> Debug::_assertionHandler_;
uSStrong<uDelegate*> Debug::_logHandler_;
uSStrong<uString*> Debug::_indentStr_;

// public static void Assert(bool value, string expression, string filename, int line, object[] operands) [static] :39
void Debug::Assert(bool value, uString* expression, uString* filename, int32_t line, uArray* operands)
{
    uStackFrame __("Uno.Diagnostics.Debug", "Assert(bool,string,string,int,object[])");
    Debug_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(Debug::_assertionHandler_, NULL))
        uPtr(Debug::_assertionHandler_)->Invoke(5, uCRef(value), expression, filename, uCRef<int32_t>(line), operands);

    if (!value)
        Debug::EmitLog(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[1/*"Assertion F...*/], expression), ::STRINGS[2/*"' in "*/]), filename), ::STRINGS[3/*"("*/]), uBox<int32_t>(::g::Uno::Int_typeof(), line)), ::STRINGS[4/*")"*/]), 3);
}

// private static void EmitLog(string message, Uno.Diagnostics.DebugMessageType type) [static] :89
void Debug::EmitLog(uString* message, int32_t type)
{
    uStackFrame __("Uno.Diagnostics.Debug", "EmitLog(string,Uno.Diagnostics.DebugMessageType)");
    Debug_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(Debug::_logHandler_, NULL))
        uPtr(Debug::_logHandler_)->Invoke(2, (uString*)::g::Uno::String::op_Addition2(Debug::_indentStr_, message), uCRef<int32_t>(type));

    uCString cstr(message);
    uLog(type, "%s", cstr.Ptr);
}

// public static void Log(string message, [Uno.Diagnostics.DebugMessageType type]) [static] :68
void Debug::Log2(uString* message, int32_t type)
{
    uStackFrame __("Uno.Diagnostics.Debug", "Log(string,[Uno.Diagnostics.DebugMessageType])");
    Debug_typeof()->Init();
    Debug::EmitLog(message, type);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type, string filename, int line) [static] :58
void Debug::Log3(uString* message, int32_t type, uString* filename, int32_t line)
{
    uStackFrame __("Uno.Diagnostics.Debug", "Log(string,Uno.Diagnostics.DebugMessageType,string,int)");
    Debug_typeof()->Init();
    Debug::EmitLog(message, type);
}

// public static void SetLogHandler(Uno.Diagnostics.LogHandler handler) [static] :53
void Debug::SetLogHandler(uDelegate* handler)
{
    Debug_typeof()->Init();
    Debug::_logHandler_ = handler;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/Debug.uno
// ----------------------------------------------------------------------------

// public enum DebugMessageType :8
uEnumType* DebugMessageType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Diagnostics.DebugMessageType", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "Debug", 0LL,
        "Information", 1LL,
        "Warning", 2LL,
        "Error", 3LL,
        "Fatal", 4LL,
        "Undefined", 0LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/EnterEvent.uno
// ---------------------------------------------------------------------------------

// public sealed class EnterEvent :3
// {
static void EnterEvent_build(uType* type)
{
    type->SetFields(1);
}

::g::Uno::Diagnostics::ProfileEvent_type* EnterEvent_typeof()
{
    static uSStrong< ::g::Uno::Diagnostics::ProfileEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Diagnostics::ProfileEvent_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(EnterEvent);
    options.TypeSize = sizeof(::g::Uno::Diagnostics::ProfileEvent_type);
    type = (::g::Uno::Diagnostics::ProfileEvent_type*)uClassType::New("Uno.Diagnostics.EnterEvent", options);
    type->fp_build_ = EnterEvent_build;
    type->fp_get_Type = (void(*)(::g::Uno::Diagnostics::ProfileEvent*, int32_t*))EnterEvent__get_Type_fn;
    return type;
}

// public override sealed Uno.Diagnostics.EventType get_Type() :6
void EnterEvent__get_Type_fn(EnterEvent* __this, int32_t* __retval)
{
    return *__retval = 0, void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/EventType.uno
// --------------------------------------------------------------------------------

// public enum EventType :3
uEnumType* EventType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Diagnostics.EventType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Enter", 0LL,
        "Exit", 1LL,
        "Allocate", 2LL,
        "Free", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/ExitEvent.uno
// --------------------------------------------------------------------------------

// public sealed class ExitEvent :3
// {
static void ExitEvent_build(uType* type)
{
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ExitEvent__New1_fn, 0, true, type, 0));
}

::g::Uno::Diagnostics::ProfileEvent_type* ExitEvent_typeof()
{
    static uSStrong< ::g::Uno::Diagnostics::ProfileEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Diagnostics::ProfileEvent_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ExitEvent);
    options.TypeSize = sizeof(::g::Uno::Diagnostics::ProfileEvent_type);
    type = (::g::Uno::Diagnostics::ProfileEvent_type*)uClassType::New("Uno.Diagnostics.ExitEvent", options);
    type->fp_build_ = ExitEvent_build;
    type->fp_ctor_ = (void*)ExitEvent__New1_fn;
    type->fp_get_Type = (void(*)(::g::Uno::Diagnostics::ProfileEvent*, int32_t*))ExitEvent__get_Type_fn;
    return type;
}

// public generated ExitEvent() :3
void ExitEvent__ctor_1_fn(ExitEvent* __this)
{
    __this->ctor_1();
}

// public generated ExitEvent New() :3
void ExitEvent__New1_fn(ExitEvent** __retval)
{
    *__retval = ExitEvent::New1();
}

// public override sealed Uno.Diagnostics.EventType get_Type() :5
void ExitEvent__get_Type_fn(ExitEvent* __this, int32_t* __retval)
{
    return *__retval = 1, void();
}

// public generated ExitEvent() [instance] :3
void ExitEvent::ctor_1()
{
    ctor_();
}

// public generated ExitEvent New() [static] :3
ExitEvent* ExitEvent::New1()
{
    ExitEvent* obj1 = (ExitEvent*)uNew(ExitEvent_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/FreeEvent.uno
// --------------------------------------------------------------------------------

// public sealed class FreeEvent :3
// {
static void FreeEvent_build(uType* type)
{
    type->SetFields(1);
}

::g::Uno::Diagnostics::ProfileEvent_type* FreeEvent_typeof()
{
    static uSStrong< ::g::Uno::Diagnostics::ProfileEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Diagnostics::ProfileEvent_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FreeEvent);
    options.TypeSize = sizeof(::g::Uno::Diagnostics::ProfileEvent_type);
    type = (::g::Uno::Diagnostics::ProfileEvent_type*)uClassType::New("Uno.Diagnostics.FreeEvent", options);
    type->fp_build_ = FreeEvent_build;
    type->fp_get_Type = (void(*)(::g::Uno::Diagnostics::ProfileEvent*, int32_t*))FreeEvent__get_Type_fn;
    return type;
}

// public override sealed Uno.Diagnostics.EventType get_Type() :8
void FreeEvent__get_Type_fn(FreeEvent* __this, int32_t* __retval)
{
    return *__retval = 3, void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/IdMap.uno
// ----------------------------------------------------------------------------

// public sealed class IdMap<T> :6
// {
static void IdMap_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[1] = ::g::Uno::Collections::List_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), ::g::Uno::Int_typeof(), NULL),
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), ::g::Uno::Int_typeof(), NULL), offsetof(IdMap, _objectToInt), 0,
        ::TYPES[1/*Uno.Collections.List`1*/]->MakeType(type->T(0), NULL), offsetof(IdMap, _intToObject), 0,
        ::g::Uno::Bool_typeof(), offsetof(IdMap, _twoWay), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)IdMap__New1_fn, 0, true, type, 1, ::g::Uno::Bool_typeof()));
}

uType* IdMap_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(IdMap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Diagnostics.IdMap`1", options);
    type->fp_build_ = IdMap_build;
    return type;
}

// public IdMap(bool twoWay) :13
void IdMap__ctor__fn(IdMap* __this, bool* twoWay)
{
    __this->ctor_(*twoWay);
}

// public IdMap New(bool twoWay) :13
void IdMap__New1_fn(uType* __type, bool* twoWay, IdMap** __retval)
{
    *__retval = IdMap::New1(__type, *twoWay);
}

// public IdMap(bool twoWay) [instance] :13
void IdMap::ctor_(bool twoWay)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<T, int>*/),
        __type->Precalced(1/*Uno.Collections.List<T>*/),
    };
    _objectToInt = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
    _intToObject = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[1]));
    _twoWay = twoWay;
}

// public IdMap New(bool twoWay) [static] :13
IdMap* IdMap::New1(uType* __type, bool twoWay)
{
    IdMap* obj1 = (IdMap*)uNew(__type);
    obj1->ctor_(twoWay);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/Debug.uno
// ----------------------------------------------------------------------------

// public delegate void LogHandler(string message, Uno.Diagnostics.DebugMessageType type) :24
uDelegateType* LogHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Diagnostics.LogHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::String_typeof(),
        ::g::Uno::Diagnostics::DebugMessageType_typeof());
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/Profile.uno
// ------------------------------------------------------------------------------

// public sealed class NeverProfileAttribute :12
// {
static void NeverProfileAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NeverProfileAttribute__New1_fn, 0, true, type, 0));
}

uType* NeverProfileAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(NeverProfileAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Diagnostics.NeverProfileAttribute", options);
    type->fp_build_ = NeverProfileAttribute_build;
    type->fp_ctor_ = (void*)NeverProfileAttribute__New1_fn;
    return type;
}

// public generated NeverProfileAttribute() :12
void NeverProfileAttribute__ctor_1_fn(NeverProfileAttribute* __this)
{
    __this->ctor_1();
}

// public generated NeverProfileAttribute New() :12
void NeverProfileAttribute__New1_fn(NeverProfileAttribute** __retval)
{
    *__retval = NeverProfileAttribute::New1();
}

// public generated NeverProfileAttribute() [instance] :12
void NeverProfileAttribute::ctor_1()
{
    ctor_();
}

// public generated NeverProfileAttribute New() [static] :12
NeverProfileAttribute* NeverProfileAttribute::New1()
{
    NeverProfileAttribute* obj1 = (NeverProfileAttribute*)uNew(NeverProfileAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/Profile.uno
// ------------------------------------------------------------------------------

// public static class Profile :15
// {
static void Profile_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), (uintptr_t)&Profile::StartTimeStamp_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("StartTimeStamp", 0));
}

uClassType* Profile_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Diagnostics.Profile", options);
    type->fp_build_ = Profile_build;
    return type;
}

double Profile::StartTimeStamp_;
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/ProfileData.uno
// ----------------------------------------------------------------------------------

// public sealed class ProfileData :6
// {
static void ProfileData_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Diagnostics::ProfileEvent_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Diagnostics::IdMap_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[2/*Uno.Collections.List<string>*/], offsetof(ProfileData, FunctionIds), 0,
        ::TYPES[3/*Uno.Collections.List<Uno.Diagnostics.ProfileEvent>*/], offsetof(ProfileData, ProfileEvents), 0,
        ::TYPES[4/*Uno.Diagnostics.IdMap<string>*/], offsetof(ProfileData, TypeMap), 0);
    type->Reflection.SetFields(3,
        new uField("FunctionIds", 0),
        new uField("ProfileEvents", 1),
        new uField("TypeMap", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ProfileData__New1_fn, 0, true, type, 0));
}

uType* ProfileData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ProfileData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Diagnostics.ProfileData", options);
    type->fp_build_ = ProfileData_build;
    type->fp_ctor_ = (void*)ProfileData__New1_fn;
    return type;
}

// public generated ProfileData() :6
void ProfileData__ctor__fn(ProfileData* __this)
{
    __this->ctor_();
}

// public generated ProfileData New() :6
void ProfileData__New1_fn(ProfileData** __retval)
{
    *__retval = ProfileData::New1();
}

// public generated ProfileData() [instance] :6
void ProfileData::ctor_()
{
    FunctionIds = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[2/*Uno.Collections.List<string>*/]));
    ProfileEvents = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<Uno.Diagnostics.ProfileEvent>*/]));
    TypeMap = ((::g::Uno::Diagnostics::IdMap*)::g::Uno::Diagnostics::IdMap::New1(::TYPES[4/*Uno.Diagnostics.IdMap<string>*/], true));
}

// public generated ProfileData New() [static] :6
ProfileData* ProfileData::New1()
{
    ProfileData* obj1 = (ProfileData*)uNew(ProfileData_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/ProfileEvent.uno
// -----------------------------------------------------------------------------------

// public abstract class ProfileEvent :4
// {
static void ProfileEvent_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(ProfileEvent, TimeStamp), 0);
    type->Reflection.SetFields(1,
        new uField("TimeStamp", 0));
    type->Reflection.SetFunctions(1,
        new uFunction("get_Type", NULL, NULL, offsetof(ProfileEvent_type, fp_get_Type), false, ::g::Uno::Diagnostics::EventType_typeof(), 0));
}

ProfileEvent_type* ProfileEvent_typeof()
{
    static uSStrong<ProfileEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ProfileEvent);
    options.TypeSize = sizeof(ProfileEvent_type);
    type = (ProfileEvent_type*)uClassType::New("Uno.Diagnostics.ProfileEvent", options);
    type->fp_build_ = ProfileEvent_build;
    return type;
}

// protected ProfileEvent() :9
void ProfileEvent__ctor__fn(ProfileEvent* __this)
{
    __this->ctor_();
}

// protected ProfileEvent() [instance] :9
void ProfileEvent::ctor_()
{
    TimeStamp = (::g::Uno::Diagnostics::Clock::GetSeconds() - ::g::Uno::Diagnostics::Profile::StartTimeStamp_);
}
// }

}}} // ::g::Uno::Diagnostics
