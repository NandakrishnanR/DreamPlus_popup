// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action2-2.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.FormatException.h>
#include <Uno.Func1-2.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Time.LocalDate.h>
#include <Uno.Time.LocalDateTime.h>
#include <Uno.Time.LocalTime.h>
#include <Uno.Time.Offset.h>
#include <Uno.Time.OffsetDateTime.h>
#include <Uno.Time.Text.FixedFormatPattern-1.h>
#include <Uno.Time.Text.IPatternPart-1.h>
#include <Uno.Time.Text.LocalDatePattern.h>
#include <Uno.Time.Text.LocalDatePattern.LocalDateBucket.h>
#include <Uno.Time.Text.LocalDateTimePattern.h>
#include <Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket.h>
#include <Uno.Time.Text.LocalTimePattern.h>
#include <Uno.Time.Text.LocalTimePattern.LocalTimeBucket.h>
#include <Uno.Time.Text.NumberPart-1.h>
#include <Uno.Time.Text.OffsetDateTimePattern.h>
#include <Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket.h>
#include <Uno.Time.Text.OffsetPattern.h>
#include <Uno.Time.Text.OffsetPattern.OffsetBucket.h>
#include <Uno.Time.Text.OffsetPatternPart-1.h>
#include <Uno.Time.Text.ParseResult-1.h>
#include <Uno.Time.Text.PatternPart-2.h>
#include <Uno.Time.Text.RangeNumberPart-1.h>
#include <Uno.Time.Text.SeparatorPart-1.h>
#include <Uno.Time.Text.SignPart-1.h>
static uString* STRINGS[9];
static uType* TYPES[3];

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/FixedFormatPattern.uno
// ---------------------------------------------------------------------------------------

// internal sealed class FixedFormatPattern<T> :5
// {
static void FixedFormatPattern_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Line is too long");
    ::TYPES[0] = ::g::Uno::Time::Text::IPatternPart_typeof();
    type->SetPrecalc(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        ::TYPES[0/*Uno.Time.Text.IPatternPart`1*/]->MakeType(type->T(0), NULL)->Array(), offsetof(FixedFormatPattern, _parts), 0);
}

uType* FixedFormatPattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(FixedFormatPattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.FixedFormatPattern`1", options);
    type->fp_build_ = FixedFormatPattern_build;
    return type;
}

// public FixedFormatPattern(Uno.Time.Text.IPatternPart<T>[] parts) :9
void FixedFormatPattern__ctor__fn(FixedFormatPattern* __this, uArray* parts)
{
    __this->ctor_(parts);
}

// public string Format(T bucket) :33
void FixedFormatPattern__Format_fn(FixedFormatPattern* __this, void* bucket, uString** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Time.Text.IPatternPart<T>*/),
    };
    uStackFrame __("Uno.Time.Text.FixedFormatPattern`1", "Format(T)");
    uArray* array1;
    int32_t index2;
    int32_t length3;
    uString* ret2;
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();

    for (array1 = __this->_parts, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        uObject* part = uPtr(array1)->Strong<uObject*>(index2);
        uPtr(sb)->Append2((::g::Uno::Time::Text::IPatternPart::Write_ex(uInterface(uPtr(part), __types[0]), bucket, &ret2), ret2));
    }

    return *__retval = sb->ToString(), void();
}

// public FixedFormatPattern New(Uno.Time.Text.IPatternPart<T>[] parts) :9
void FixedFormatPattern__New1_fn(uType* __type, uArray* parts, FixedFormatPattern** __retval)
{
    *__retval = FixedFormatPattern::New1(__type, parts);
}

// public void Parse(string line, T bucket) :14
void FixedFormatPattern__Parse_fn(FixedFormatPattern* __this, uString* line, void* bucket)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Time.Text.IPatternPart<T>*/),
    };
    uStackFrame __("Uno.Time.Text.FixedFormatPattern`1", "Parse(string,T)");
    int32_t ret3;
    int32_t position = 0;

    for (int32_t i = 0; i < uPtr(__this->_parts)->Length(); i++)
    {
        uObject* part = uPtr(__this->_parts)->Strong<uObject*>(i);
        int32_t readCount = (::g::Uno::Time::Text::IPatternPart::Read_ex(uInterface(uPtr(part), __types[0]), line, uCRef<int32_t>(position), bucket, &ret3), ret3);
        position = position + readCount;

        if (readCount == 0)
            i = i + ::g::Uno::Time::Text::IPatternPart::SkipNextPartsCountIfThisNotSpecified(uInterface(uPtr(part), __types[0]));
    }

    if (position != uPtr(line)->Length())
        U_THROW(::g::Uno::FormatException::New4(::STRINGS[0/*"Line is too...*/]));
}

// public FixedFormatPattern(Uno.Time.Text.IPatternPart<T>[] parts) [instance] :9
void FixedFormatPattern::ctor_(uArray* parts)
{
    _parts = parts;
}

// public FixedFormatPattern New(Uno.Time.Text.IPatternPart<T>[] parts) [static] :9
FixedFormatPattern* FixedFormatPattern::New1(uType* __type, uArray* parts)
{
    FixedFormatPattern* obj1 = (FixedFormatPattern*)uNew(__type);
    obj1->ctor_(parts);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/PatternPart.uno
// --------------------------------------------------------------------------------

// internal abstract interface IPatternPart<T> :3
// {
uInterfaceType* IPatternPart_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Time.Text.IPatternPart`1", 1, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/LocalDatePattern.uno
// -------------------------------------------------------------------------------------

// private sealed class LocalDatePattern.LocalDateBucket :102
// {
static void LocalDatePattern__LocalDateBucket_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(LocalDatePattern__LocalDateBucket, Sign), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalDatePattern__LocalDateBucket, Year), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalDatePattern__LocalDateBucket, Month), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalDatePattern__LocalDateBucket, Day), 0);
}

uType* LocalDatePattern__LocalDateBucket_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(LocalDatePattern__LocalDateBucket);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.LocalDatePattern.LocalDateBucket", options);
    type->fp_build_ = LocalDatePattern__LocalDateBucket_build;
    type->fp_ctor_ = (void*)LocalDatePattern__LocalDateBucket__New1_fn;
    return type;
}

// public generated LocalDateBucket() :102
void LocalDatePattern__LocalDateBucket__ctor__fn(LocalDatePattern__LocalDateBucket* __this)
{
    __this->ctor_();
}

// public generated LocalDateBucket New() :102
void LocalDatePattern__LocalDateBucket__New1_fn(LocalDatePattern__LocalDateBucket** __retval)
{
    *__retval = LocalDatePattern__LocalDateBucket::New1();
}

// public generated LocalDateBucket() [instance] :102
void LocalDatePattern__LocalDateBucket::ctor_()
{
}

// public generated LocalDateBucket New() [static] :102
LocalDatePattern__LocalDateBucket* LocalDatePattern__LocalDateBucket::New1()
{
    LocalDatePattern__LocalDateBucket* obj1 = (LocalDatePattern__LocalDateBucket*)uNew(LocalDatePattern__LocalDateBucket_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/LocalDatePattern.uno
// -------------------------------------------------------------------------------------

// public sealed class LocalDatePattern :3
// {
static void LocalDatePattern_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), NULL), offsetof(LocalDatePattern, _generalPattern), 0,
        type, (uintptr_t)&LocalDatePattern::General_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Format", NULL, (void*)LocalDatePattern__Format_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Uno::Time::LocalDate_typeof()),
        new uFunction("get_GeneralIsoPattern", NULL, (void*)LocalDatePattern__get_GeneralIsoPattern_fn, 0, true, type, 0),
        new uFunction("Parse", NULL, (void*)LocalDatePattern__Parse_fn, 0, false, ::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::LocalDate_typeof(), NULL), 1, ::g::Uno::String_typeof()));
}

uType* LocalDatePattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LocalDatePattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.LocalDatePattern", options);
    type->fp_build_ = LocalDatePattern_build;
    type->fp_ctor_ = (void*)LocalDatePattern__New1_fn;
    return type;
}

// private LocalDatePattern() :21
void LocalDatePattern__ctor__fn(LocalDatePattern* __this)
{
    __this->ctor_();
}

// public string Format(Uno.Time.LocalDate value) :50
void LocalDatePattern__Format_fn(LocalDatePattern* __this, ::g::Uno::Time::LocalDate* value, uString** __retval)
{
    *__retval = __this->Format(*value);
}

// public static Uno.Time.Text.LocalDatePattern get_GeneralIsoPattern() :9
void LocalDatePattern__get_GeneralIsoPattern_fn(LocalDatePattern** __retval)
{
    *__retval = LocalDatePattern::GeneralIsoPattern();
}

// private int GetDay(Uno.Time.Text.LocalDatePattern.LocalDateBucket value) :97
void LocalDatePattern__GetDay_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int32_t* __retval)
{
    *__retval = __this->GetDay(value);
}

// private int GetMonth(Uno.Time.Text.LocalDatePattern.LocalDateBucket value) :92
void LocalDatePattern__GetMonth_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int32_t* __retval)
{
    *__retval = __this->GetMonth(value);
}

// private int GetSign(Uno.Time.Text.LocalDatePattern.LocalDateBucket value) :82
void LocalDatePattern__GetSign_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int32_t* __retval)
{
    *__retval = __this->GetSign(value);
}

// private int GetYear(Uno.Time.Text.LocalDatePattern.LocalDateBucket value) :87
void LocalDatePattern__GetYear_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int32_t* __retval)
{
    *__retval = __this->GetYear(value);
}

// private LocalDatePattern New() :21
void LocalDatePattern__New1_fn(LocalDatePattern** __retval)
{
    *__retval = LocalDatePattern::New1();
}

// public Uno.Time.Text.ParseResult<Uno.Time.LocalDate> Parse(string text) :34
void LocalDatePattern__Parse_fn(LocalDatePattern* __this, uString* text, ::g::Uno::Time::Text::ParseResult** __retval)
{
    *__retval = __this->Parse(text);
}

// private void SetDay(Uno.Time.Text.LocalDatePattern.LocalDateBucket value, int day) :77
void LocalDatePattern__SetDay_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int32_t* day)
{
    __this->SetDay(value, *day);
}

// private void SetMonth(Uno.Time.Text.LocalDatePattern.LocalDateBucket value, int month) :72
void LocalDatePattern__SetMonth_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int32_t* month)
{
    __this->SetMonth(value, *month);
}

// private void SetSign(Uno.Time.Text.LocalDatePattern.LocalDateBucket value, int sign) :62
void LocalDatePattern__SetSign_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int32_t* sign)
{
    __this->SetSign(value, *sign);
}

// private void SetYear(Uno.Time.Text.LocalDatePattern.LocalDateBucket value, int year) :67
void LocalDatePattern__SetYear_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int32_t* year)
{
    __this->SetYear(value, *year);
}

uSStrong<LocalDatePattern*> LocalDatePattern::General_;

// private LocalDatePattern() [instance] :21
void LocalDatePattern::ctor_()
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", ".ctor()");
    _generalPattern = ((::g::Uno::Time::Text::FixedFormatPattern*)::g::Uno::Time::Text::FixedFormatPattern::New1(::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), NULL), uArray::Init<uObject*>(::TYPES[0/*Uno.Time.Text.IPatternPart`1*/]->MakeType(LocalDatePattern__LocalDateBucket_typeof(), NULL)->Array(), 6, (uObject*)((::g::Uno::Time::Text::SignPart*)::g::Uno::Time::Text::SignPart::New2(::g::Uno::Time::Text::SignPart_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), NULL), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDatePattern__SetSign_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDatePattern__GetSign_fn, this))), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), NULL), 4, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDatePattern__SetYear_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDatePattern__GetYear_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), NULL), true, '-', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDatePattern__SetMonth_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDatePattern__GetMonth_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), NULL), true, '-', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDatePattern__SetDay_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDatePattern__GetDay_fn, this))))));
}

// public string Format(Uno.Time.LocalDate value) [instance] :50
uString* LocalDatePattern::Format(::g::Uno::Time::LocalDate value)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "Format(Uno.Time.LocalDate)");
    LocalDatePattern__LocalDateBucket* collection1;
    uString* ret3;
    collection1 = LocalDatePattern__LocalDateBucket::New1();
    uPtr(collection1)->Sign = ((value.Year() < 0) ? -1 : 1);
    uPtr(collection1)->Year = value.Year();
    uPtr(collection1)->Month = value.Month();
    uPtr(collection1)->Day = value.Day();
    LocalDatePattern__LocalDateBucket* bucket = collection1;
    return (::g::Uno::Time::Text::FixedFormatPattern__Format_fn(uPtr(_generalPattern), bucket, &ret3), ret3);
}

// private int GetDay(Uno.Time.Text.LocalDatePattern.LocalDateBucket value) [instance] :97
int32_t LocalDatePattern::GetDay(LocalDatePattern__LocalDateBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "GetDay(Uno.Time.Text.LocalDatePattern.LocalDateBucket)");
    return uPtr(value)->Day;
}

// private int GetMonth(Uno.Time.Text.LocalDatePattern.LocalDateBucket value) [instance] :92
int32_t LocalDatePattern::GetMonth(LocalDatePattern__LocalDateBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "GetMonth(Uno.Time.Text.LocalDatePattern.LocalDateBucket)");
    return uPtr(value)->Month;
}

// private int GetSign(Uno.Time.Text.LocalDatePattern.LocalDateBucket value) [instance] :82
int32_t LocalDatePattern::GetSign(LocalDatePattern__LocalDateBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "GetSign(Uno.Time.Text.LocalDatePattern.LocalDateBucket)");
    return uPtr(value)->Sign;
}

// private int GetYear(Uno.Time.Text.LocalDatePattern.LocalDateBucket value) [instance] :87
int32_t LocalDatePattern::GetYear(LocalDatePattern__LocalDateBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "GetYear(Uno.Time.Text.LocalDatePattern.LocalDateBucket)");
    return uPtr(value)->Year;
}

// public Uno.Time.Text.ParseResult<Uno.Time.LocalDate> Parse(string text) [instance] :34
::g::Uno::Time::Text::ParseResult* LocalDatePattern::Parse(uString* text)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "Parse(string)");
    ::g::Uno::Time::Text::ParseResult* ret4;

    try
    {
        {
            LocalDatePattern__LocalDateBucket* bucket = LocalDatePattern__LocalDateBucket::New1();
            ::g::Uno::Time::Text::FixedFormatPattern__Parse_fn(uPtr(_generalPattern), text, bucket);
            ::g::Uno::Time::LocalDate ld = ::g::Uno::Time::LocalDate__New1(bucket->Sign * bucket->Year, bucket->Month, bucket->Day);
            return (::g::Uno::Time::Text::ParseResult__ForValue_fn(::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::LocalDate_typeof(), NULL), uCRef(ld), &ret4), ret4);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* ex = __t.Exception;
        return (::g::Uno::Time::Text::ParseResult*)::g::Uno::Time::Text::ParseResult::ForException(::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::LocalDate_typeof(), NULL), ex);
    }
}

// private void SetDay(Uno.Time.Text.LocalDatePattern.LocalDateBucket value, int day) [instance] :77
void LocalDatePattern::SetDay(LocalDatePattern__LocalDateBucket* value, int32_t day)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "SetDay(Uno.Time.Text.LocalDatePattern.LocalDateBucket,int)");
    uPtr(value)->Day = day;
}

// private void SetMonth(Uno.Time.Text.LocalDatePattern.LocalDateBucket value, int month) [instance] :72
void LocalDatePattern::SetMonth(LocalDatePattern__LocalDateBucket* value, int32_t month)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "SetMonth(Uno.Time.Text.LocalDatePattern.LocalDateBucket,int)");
    uPtr(value)->Month = month;
}

// private void SetSign(Uno.Time.Text.LocalDatePattern.LocalDateBucket value, int sign) [instance] :62
void LocalDatePattern::SetSign(LocalDatePattern__LocalDateBucket* value, int32_t sign)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "SetSign(Uno.Time.Text.LocalDatePattern.LocalDateBucket,int)");
    uPtr(value)->Sign = sign;
}

// private void SetYear(Uno.Time.Text.LocalDatePattern.LocalDateBucket value, int year) [instance] :67
void LocalDatePattern::SetYear(LocalDatePattern__LocalDateBucket* value, int32_t year)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "SetYear(Uno.Time.Text.LocalDatePattern.LocalDateBucket,int)");
    uPtr(value)->Year = year;
}

// private LocalDatePattern New() [static] :21
LocalDatePattern* LocalDatePattern::New1()
{
    LocalDatePattern* obj2 = (LocalDatePattern*)uNew(LocalDatePattern_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Uno.Time.Text.LocalDatePattern get_GeneralIsoPattern() [static] :9
LocalDatePattern* LocalDatePattern::GeneralIsoPattern()
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "get_GeneralIsoPattern()");

    if (LocalDatePattern::General_ == NULL)
        LocalDatePattern::General_ = LocalDatePattern::New1();

    return LocalDatePattern::General_;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/LocalDateTimePattern.uno
// -----------------------------------------------------------------------------------------

// private sealed class LocalDateTimePattern.LocalDateTimeBucket :142
// {
static void LocalDateTimePattern__LocalDateTimeBucket_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(LocalDateTimePattern__LocalDateTimeBucket, Sign), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalDateTimePattern__LocalDateTimeBucket, Year), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalDateTimePattern__LocalDateTimeBucket, Month), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalDateTimePattern__LocalDateTimeBucket, Day), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalDateTimePattern__LocalDateTimeBucket, Hour), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalDateTimePattern__LocalDateTimeBucket, Minute), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalDateTimePattern__LocalDateTimeBucket, Second), 0);
}

uType* LocalDateTimePattern__LocalDateTimeBucket_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(LocalDateTimePattern__LocalDateTimeBucket);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket", options);
    type->fp_build_ = LocalDateTimePattern__LocalDateTimeBucket_build;
    type->fp_ctor_ = (void*)LocalDateTimePattern__LocalDateTimeBucket__New1_fn;
    return type;
}

// public generated LocalDateTimeBucket() :142
void LocalDateTimePattern__LocalDateTimeBucket__ctor__fn(LocalDateTimePattern__LocalDateTimeBucket* __this)
{
    __this->ctor_();
}

// public generated LocalDateTimeBucket New() :142
void LocalDateTimePattern__LocalDateTimeBucket__New1_fn(LocalDateTimePattern__LocalDateTimeBucket** __retval)
{
    *__retval = LocalDateTimePattern__LocalDateTimeBucket::New1();
}

// public generated LocalDateTimeBucket() [instance] :142
void LocalDateTimePattern__LocalDateTimeBucket::ctor_()
{
}

// public generated LocalDateTimeBucket New() [static] :142
LocalDateTimePattern__LocalDateTimeBucket* LocalDateTimePattern__LocalDateTimeBucket::New1()
{
    LocalDateTimePattern__LocalDateTimeBucket* obj1 = (LocalDateTimePattern__LocalDateTimeBucket*)uNew(LocalDateTimePattern__LocalDateTimeBucket_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/LocalDateTimePattern.uno
// -----------------------------------------------------------------------------------------

// public sealed class LocalDateTimePattern :3
// {
static void LocalDateTimePattern_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), offsetof(LocalDateTimePattern, _generalPattern), 0,
        type, (uintptr_t)&LocalDateTimePattern::General_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Format", NULL, (void*)LocalDateTimePattern__Format_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Uno::Time::LocalDateTime_typeof()),
        new uFunction("get_GeneralIsoPattern", NULL, (void*)LocalDateTimePattern__get_GeneralIsoPattern_fn, 0, true, type, 0),
        new uFunction("Parse", NULL, (void*)LocalDateTimePattern__Parse_fn, 0, false, ::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::LocalDateTime_typeof(), NULL), 1, ::g::Uno::String_typeof()));
}

uType* LocalDateTimePattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LocalDateTimePattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.LocalDateTimePattern", options);
    type->fp_build_ = LocalDateTimePattern_build;
    type->fp_ctor_ = (void*)LocalDateTimePattern__New1_fn;
    return type;
}

// private LocalDateTimePattern() :21
void LocalDateTimePattern__ctor__fn(LocalDateTimePattern* __this)
{
    __this->ctor_();
}

// public string Format(Uno.Time.LocalDateTime value) :57
void LocalDateTimePattern__Format_fn(LocalDateTimePattern* __this, ::g::Uno::Time::LocalDateTime* value, uString** __retval)
{
    *__retval = __this->Format(*value);
}

// public static Uno.Time.Text.LocalDateTimePattern get_GeneralIsoPattern() :9
void LocalDateTimePattern__get_GeneralIsoPattern_fn(LocalDateTimePattern** __retval)
{
    *__retval = LocalDateTimePattern::GeneralIsoPattern();
}

// private int GetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :107
void LocalDateTimePattern__GetDay_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetDay(value);
}

// private int GetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :117
void LocalDateTimePattern__GetHour_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetHour(value);
}

// private int GetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :127
void LocalDateTimePattern__GetMinute_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetMinute(value);
}

// private int GetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :97
void LocalDateTimePattern__GetMonth_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetMonth(value);
}

// private int GetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :137
void LocalDateTimePattern__GetSecond_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetSecond(value);
}

// private int GetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :77
void LocalDateTimePattern__GetSign_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetSign(value);
}

// private int GetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :87
void LocalDateTimePattern__GetYear_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetYear(value);
}

// private LocalDateTimePattern New() :21
void LocalDateTimePattern__New1_fn(LocalDateTimePattern** __retval)
{
    *__retval = LocalDateTimePattern::New1();
}

// public Uno.Time.Text.ParseResult<Uno.Time.LocalDateTime> Parse(string text) :40
void LocalDateTimePattern__Parse_fn(LocalDateTimePattern* __this, uString* text, ::g::Uno::Time::Text::ParseResult** __retval)
{
    *__retval = __this->Parse(text);
}

// private void SetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int day) :102
void LocalDateTimePattern__SetDay_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* day)
{
    __this->SetDay(value, *day);
}

// private void SetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int hour) :112
void LocalDateTimePattern__SetHour_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* hour)
{
    __this->SetHour(value, *hour);
}

// private void SetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int minute) :122
void LocalDateTimePattern__SetMinute_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* minute)
{
    __this->SetMinute(value, *minute);
}

// private void SetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int month) :92
void LocalDateTimePattern__SetMonth_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* month)
{
    __this->SetMonth(value, *month);
}

// private void SetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int second) :132
void LocalDateTimePattern__SetSecond_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* second)
{
    __this->SetSecond(value, *second);
}

// private void SetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int sign) :72
void LocalDateTimePattern__SetSign_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* sign)
{
    __this->SetSign(value, *sign);
}

// private void SetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int year) :82
void LocalDateTimePattern__SetYear_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* year)
{
    __this->SetYear(value, *year);
}

uSStrong<LocalDateTimePattern*> LocalDateTimePattern::General_;

// private LocalDateTimePattern() [instance] :21
void LocalDateTimePattern::ctor_()
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", ".ctor()");
    _generalPattern = ((::g::Uno::Time::Text::FixedFormatPattern*)::g::Uno::Time::Text::FixedFormatPattern::New1(::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), uArray::Init<uObject*>(::TYPES[0/*Uno.Time.Text.IPatternPart`1*/]->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL)->Array(), 12, (uObject*)((::g::Uno::Time::Text::SignPart*)::g::Uno::Time::Text::SignPart::New2(::g::Uno::Time::Text::SignPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__SetSign_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__GetSign_fn, this))), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), 4, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__SetYear_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__GetYear_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), true, '-', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__SetMonth_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__GetMonth_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), true, '-', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__SetDay_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__GetDay_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), true, 'T', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__SetHour_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__GetHour_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__SetMinute_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__GetMinute_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__SetSecond_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__GetSecond_fn, this))))));
}

// public string Format(Uno.Time.LocalDateTime value) [instance] :57
uString* LocalDateTimePattern::Format(::g::Uno::Time::LocalDateTime value)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "Format(Uno.Time.LocalDateTime)");
    LocalDateTimePattern__LocalDateTimeBucket* collection1;
    uString* ret3;
    collection1 = LocalDateTimePattern__LocalDateTimeBucket::New1();
    uPtr(collection1)->Sign = ((value.Year() < 0) ? -1 : 1);
    uPtr(collection1)->Year = value.Year();
    uPtr(collection1)->Month = value.Month();
    uPtr(collection1)->Day = value.Day();
    uPtr(collection1)->Hour = value.Hour();
    uPtr(collection1)->Minute = value.Minute();
    uPtr(collection1)->Second = value.Second();
    LocalDateTimePattern__LocalDateTimeBucket* bucket = collection1;
    return (::g::Uno::Time::Text::FixedFormatPattern__Format_fn(uPtr(_generalPattern), bucket, &ret3), ret3);
}

// private int GetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :107
int32_t LocalDateTimePattern::GetDay(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "GetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket)");
    return uPtr(value)->Day;
}

// private int GetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :117
int32_t LocalDateTimePattern::GetHour(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "GetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket)");
    return uPtr(value)->Hour;
}

// private int GetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :127
int32_t LocalDateTimePattern::GetMinute(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "GetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket)");
    return uPtr(value)->Minute;
}

// private int GetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :97
int32_t LocalDateTimePattern::GetMonth(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "GetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket)");
    return uPtr(value)->Month;
}

// private int GetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :137
int32_t LocalDateTimePattern::GetSecond(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "GetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket)");
    return uPtr(value)->Second;
}

// private int GetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :77
int32_t LocalDateTimePattern::GetSign(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "GetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket)");
    return uPtr(value)->Sign;
}

// private int GetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :87
int32_t LocalDateTimePattern::GetYear(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "GetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket)");
    return uPtr(value)->Year;
}

// public Uno.Time.Text.ParseResult<Uno.Time.LocalDateTime> Parse(string text) [instance] :40
::g::Uno::Time::Text::ParseResult* LocalDateTimePattern::Parse(uString* text)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "Parse(string)");
    ::g::Uno::Time::Text::ParseResult* ret4;

    try
    {
        {
            LocalDateTimePattern__LocalDateTimeBucket* bucket = LocalDateTimePattern__LocalDateTimeBucket::New1();
            ::g::Uno::Time::Text::FixedFormatPattern__Parse_fn(uPtr(_generalPattern), text, bucket);
            ::g::Uno::Time::LocalDateTime ldt = ::g::Uno::Time::LocalDateTime__New2(bucket->Sign * bucket->Year, bucket->Month, bucket->Day, bucket->Hour, bucket->Minute, bucket->Second);
            return (::g::Uno::Time::Text::ParseResult__ForValue_fn(::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::LocalDateTime_typeof(), NULL), uCRef(ldt), &ret4), ret4);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* ex = __t.Exception;
        return (::g::Uno::Time::Text::ParseResult*)::g::Uno::Time::Text::ParseResult::ForException(::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::LocalDateTime_typeof(), NULL), ex);
    }
}

// private void SetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int day) [instance] :102
void LocalDateTimePattern::SetDay(LocalDateTimePattern__LocalDateTimeBucket* value, int32_t day)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "SetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket,int)");
    uPtr(value)->Day = day;
}

// private void SetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int hour) [instance] :112
void LocalDateTimePattern::SetHour(LocalDateTimePattern__LocalDateTimeBucket* value, int32_t hour)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "SetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket,int)");
    uPtr(value)->Hour = hour;
}

// private void SetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int minute) [instance] :122
void LocalDateTimePattern::SetMinute(LocalDateTimePattern__LocalDateTimeBucket* value, int32_t minute)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "SetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket,int)");
    uPtr(value)->Minute = minute;
}

// private void SetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int month) [instance] :92
void LocalDateTimePattern::SetMonth(LocalDateTimePattern__LocalDateTimeBucket* value, int32_t month)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "SetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket,int)");
    uPtr(value)->Month = month;
}

// private void SetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int second) [instance] :132
void LocalDateTimePattern::SetSecond(LocalDateTimePattern__LocalDateTimeBucket* value, int32_t second)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "SetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket,int)");
    uPtr(value)->Second = second;
}

// private void SetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int sign) [instance] :72
void LocalDateTimePattern::SetSign(LocalDateTimePattern__LocalDateTimeBucket* value, int32_t sign)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "SetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket,int)");
    uPtr(value)->Sign = sign;
}

// private void SetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int year) [instance] :82
void LocalDateTimePattern::SetYear(LocalDateTimePattern__LocalDateTimeBucket* value, int32_t year)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "SetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket,int)");
    uPtr(value)->Year = year;
}

// private LocalDateTimePattern New() [static] :21
LocalDateTimePattern* LocalDateTimePattern::New1()
{
    LocalDateTimePattern* obj2 = (LocalDateTimePattern*)uNew(LocalDateTimePattern_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Uno.Time.Text.LocalDateTimePattern get_GeneralIsoPattern() [static] :9
LocalDateTimePattern* LocalDateTimePattern::GeneralIsoPattern()
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "get_GeneralIsoPattern()");

    if (LocalDateTimePattern::General_ == NULL)
        LocalDateTimePattern::General_ = LocalDateTimePattern::New1();

    return LocalDateTimePattern::General_;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/LocalTimePattern.uno
// -------------------------------------------------------------------------------------

// private sealed class LocalTimePattern.LocalTimeBucket :103
// {
static void LocalTimePattern__LocalTimeBucket_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(LocalTimePattern__LocalTimeBucket, Hour), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalTimePattern__LocalTimeBucket, Minute), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalTimePattern__LocalTimeBucket, Second), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalTimePattern__LocalTimeBucket, Millisecond), 0);
}

uType* LocalTimePattern__LocalTimeBucket_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(LocalTimePattern__LocalTimeBucket);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.LocalTimePattern.LocalTimeBucket", options);
    type->fp_build_ = LocalTimePattern__LocalTimeBucket_build;
    type->fp_ctor_ = (void*)LocalTimePattern__LocalTimeBucket__New1_fn;
    return type;
}

// public generated LocalTimeBucket() :103
void LocalTimePattern__LocalTimeBucket__ctor__fn(LocalTimePattern__LocalTimeBucket* __this)
{
    __this->ctor_();
}

// public generated LocalTimeBucket New() :103
void LocalTimePattern__LocalTimeBucket__New1_fn(LocalTimePattern__LocalTimeBucket** __retval)
{
    *__retval = LocalTimePattern__LocalTimeBucket::New1();
}

// public generated LocalTimeBucket() [instance] :103
void LocalTimePattern__LocalTimeBucket::ctor_()
{
}

// public generated LocalTimeBucket New() [static] :103
LocalTimePattern__LocalTimeBucket* LocalTimePattern__LocalTimeBucket::New1()
{
    LocalTimePattern__LocalTimeBucket* obj1 = (LocalTimePattern__LocalTimeBucket*)uNew(LocalTimePattern__LocalTimeBucket_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/LocalTimePattern.uno
// -------------------------------------------------------------------------------------

// public sealed class LocalTimePattern :3
// {
static void LocalTimePattern_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), NULL), offsetof(LocalTimePattern, _generalPattern), 0,
        type, (uintptr_t)&LocalTimePattern::General_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Format", NULL, (void*)LocalTimePattern__Format_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Uno::Time::LocalTime_typeof()),
        new uFunction("get_GeneralIsoPattern", NULL, (void*)LocalTimePattern__get_GeneralIsoPattern_fn, 0, true, type, 0),
        new uFunction("Parse", NULL, (void*)LocalTimePattern__Parse_fn, 0, false, ::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::LocalTime_typeof(), NULL), 1, ::g::Uno::String_typeof()));
}

uType* LocalTimePattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LocalTimePattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.LocalTimePattern", options);
    type->fp_build_ = LocalTimePattern_build;
    type->fp_ctor_ = (void*)LocalTimePattern__New1_fn;
    return type;
}

// private LocalTimePattern() :21
void LocalTimePattern__ctor__fn(LocalTimePattern* __this)
{
    __this->ctor_();
}

// public string Format(Uno.Time.LocalTime value) :51
void LocalTimePattern__Format_fn(LocalTimePattern* __this, ::g::Uno::Time::LocalTime* value, uString** __retval)
{
    *__retval = __this->Format(*value);
}

// public static Uno.Time.Text.LocalTimePattern get_GeneralIsoPattern() :9
void LocalTimePattern__get_GeneralIsoPattern_fn(LocalTimePattern** __retval)
{
    *__retval = LocalTimePattern::GeneralIsoPattern();
}

// private int GetHour(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value) :68
void LocalTimePattern__GetHour_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetHour(value);
}

// private int GetMillisecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value) :98
void LocalTimePattern__GetMillisecond_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetMillisecond(value);
}

// private int GetMinute(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value) :78
void LocalTimePattern__GetMinute_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetMinute(value);
}

// private int GetSecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value) :88
void LocalTimePattern__GetSecond_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetSecond(value);
}

// private LocalTimePattern New() :21
void LocalTimePattern__New1_fn(LocalTimePattern** __retval)
{
    *__retval = LocalTimePattern::New1();
}

// public Uno.Time.Text.ParseResult<Uno.Time.LocalTime> Parse(string text) :35
void LocalTimePattern__Parse_fn(LocalTimePattern* __this, uString* text, ::g::Uno::Time::Text::ParseResult** __retval)
{
    *__retval = __this->Parse(text);
}

// private void SetHour(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value, int hour) :63
void LocalTimePattern__SetHour_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int32_t* hour)
{
    __this->SetHour(value, *hour);
}

// private void SetMillisecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value, int millisecond) :93
void LocalTimePattern__SetMillisecond_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int32_t* millisecond)
{
    __this->SetMillisecond(value, *millisecond);
}

// private void SetMinute(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value, int minute) :73
void LocalTimePattern__SetMinute_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int32_t* minute)
{
    __this->SetMinute(value, *minute);
}

// private void SetSecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value, int second) :83
void LocalTimePattern__SetSecond_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int32_t* second)
{
    __this->SetSecond(value, *second);
}

uSStrong<LocalTimePattern*> LocalTimePattern::General_;

// private LocalTimePattern() [instance] :21
void LocalTimePattern::ctor_()
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", ".ctor()");
    _generalPattern = ((::g::Uno::Time::Text::FixedFormatPattern*)::g::Uno::Time::Text::FixedFormatPattern::New1(::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), NULL), uArray::Init<uObject*>(::TYPES[0/*Uno.Time.Text.IPatternPart`1*/]->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), NULL)->Array(), 7, (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalTimePattern__SetHour_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalTimePattern__GetHour_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), NULL), true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalTimePattern__SetMinute_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalTimePattern__GetMinute_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), NULL), true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalTimePattern__SetSecond_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalTimePattern__GetSecond_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), NULL), false, '.', 0)), (uObject*)((::g::Uno::Time::Text::RangeNumberPart*)::g::Uno::Time::Text::RangeNumberPart::New1(::g::Uno::Time::Text::RangeNumberPart_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), NULL), 3, 7, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalTimePattern__SetMillisecond_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalTimePattern__GetMillisecond_fn, this))))));
}

// public string Format(Uno.Time.LocalTime value) [instance] :51
uString* LocalTimePattern::Format(::g::Uno::Time::LocalTime value)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "Format(Uno.Time.LocalTime)");
    LocalTimePattern__LocalTimeBucket* collection1;
    uString* ret3;
    collection1 = LocalTimePattern__LocalTimeBucket::New1();
    uPtr(collection1)->Hour = value.Hour();
    uPtr(collection1)->Minute = value.Minute();
    uPtr(collection1)->Second = value.Second();
    uPtr(collection1)->Millisecond = value.Millisecond();
    LocalTimePattern__LocalTimeBucket* bucket = collection1;
    return (::g::Uno::Time::Text::FixedFormatPattern__Format_fn(uPtr(_generalPattern), bucket, &ret3), ret3);
}

// private int GetHour(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value) [instance] :68
int32_t LocalTimePattern::GetHour(LocalTimePattern__LocalTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "GetHour(Uno.Time.Text.LocalTimePattern.LocalTimeBucket)");
    return uPtr(value)->Hour;
}

// private int GetMillisecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value) [instance] :98
int32_t LocalTimePattern::GetMillisecond(LocalTimePattern__LocalTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "GetMillisecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket)");
    return uPtr(value)->Millisecond;
}

// private int GetMinute(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value) [instance] :78
int32_t LocalTimePattern::GetMinute(LocalTimePattern__LocalTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "GetMinute(Uno.Time.Text.LocalTimePattern.LocalTimeBucket)");
    return uPtr(value)->Minute;
}

// private int GetSecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value) [instance] :88
int32_t LocalTimePattern::GetSecond(LocalTimePattern__LocalTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "GetSecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket)");
    return uPtr(value)->Second;
}

// public Uno.Time.Text.ParseResult<Uno.Time.LocalTime> Parse(string text) [instance] :35
::g::Uno::Time::Text::ParseResult* LocalTimePattern::Parse(uString* text)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "Parse(string)");
    ::g::Uno::Time::Text::ParseResult* ret4;

    try
    {
        {
            LocalTimePattern__LocalTimeBucket* bucket = LocalTimePattern__LocalTimeBucket::New1();
            ::g::Uno::Time::Text::FixedFormatPattern__Parse_fn(uPtr(_generalPattern), text, bucket);
            ::g::Uno::Time::LocalTime lt = ::g::Uno::Time::LocalTime__New3(bucket->Hour, bucket->Minute, bucket->Second, bucket->Millisecond);
            return (::g::Uno::Time::Text::ParseResult__ForValue_fn(::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::LocalTime_typeof(), NULL), uCRef(lt), &ret4), ret4);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* ex = __t.Exception;
        return (::g::Uno::Time::Text::ParseResult*)::g::Uno::Time::Text::ParseResult::ForException(::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::LocalTime_typeof(), NULL), ex);
    }
}

// private void SetHour(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value, int hour) [instance] :63
void LocalTimePattern::SetHour(LocalTimePattern__LocalTimeBucket* value, int32_t hour)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "SetHour(Uno.Time.Text.LocalTimePattern.LocalTimeBucket,int)");
    uPtr(value)->Hour = hour;
}

// private void SetMillisecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value, int millisecond) [instance] :93
void LocalTimePattern::SetMillisecond(LocalTimePattern__LocalTimeBucket* value, int32_t millisecond)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "SetMillisecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket,int)");
    uPtr(value)->Millisecond = millisecond;
}

// private void SetMinute(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value, int minute) [instance] :73
void LocalTimePattern::SetMinute(LocalTimePattern__LocalTimeBucket* value, int32_t minute)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "SetMinute(Uno.Time.Text.LocalTimePattern.LocalTimeBucket,int)");
    uPtr(value)->Minute = minute;
}

// private void SetSecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value, int second) [instance] :83
void LocalTimePattern::SetSecond(LocalTimePattern__LocalTimeBucket* value, int32_t second)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "SetSecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket,int)");
    uPtr(value)->Second = second;
}

// private LocalTimePattern New() [static] :21
LocalTimePattern* LocalTimePattern::New1()
{
    LocalTimePattern* obj2 = (LocalTimePattern*)uNew(LocalTimePattern_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Uno.Time.Text.LocalTimePattern get_GeneralIsoPattern() [static] :9
LocalTimePattern* LocalTimePattern::GeneralIsoPattern()
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "get_GeneralIsoPattern()");

    if (LocalTimePattern::General_ == NULL)
        LocalTimePattern::General_ = LocalTimePattern::New1();

    return LocalTimePattern::General_;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/PatternPart.uno
// --------------------------------------------------------------------------------

// internal sealed class NumberPart<T> :45
// {
static void NumberPart_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Not enough symbols at ");
    ::STRINGS[2] = uString::Const("Not found number at ");
    ::STRINGS[3] = uString::Const("{0:D");
    ::STRINGS[4] = uString::Const("}");
    ::TYPES[1] = uObject_typeof()->Array();
    type->SetBase(::g::Uno::Time::Text::PatternPart_typeof()->MakeType(type->T(0), ::g::Uno::Int_typeof(), NULL));
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Time::Text::PatternPart_type, interface0));
    type->SetFields(5);
}

::g::Uno::Time::Text::PatternPart_type* NumberPart_typeof()
{
    static uSStrong< ::g::Uno::Time::Text::PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::Text::PatternPart_typeof();
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NumberPart);
    options.TypeSize = sizeof(::g::Uno::Time::Text::PatternPart_type);
    type = (::g::Uno::Time::Text::PatternPart_type*)uClassType::New("Uno.Time.Text.NumberPart`1", options);
    type->fp_build_ = NumberPart_build;
    type->fp_Read = (void(*)(::g::Uno::Time::Text::PatternPart*, uString*, int32_t*, void*, int32_t*))NumberPart__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::Time::Text::PatternPart*, void*, uString**))NumberPart__Write_fn;
    type->interface0.fp_Read = (void(*)(uObject*, uString*, int32_t*, void*, int32_t*))NumberPart__Read_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))NumberPart__Write_fn;
    type->interface0.fp_get_SkipNextPartsCountIfThisNotSpecified = (void(*)(uObject*, int32_t*))::g::Uno::Time::Text::PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn;
    return type;
}

// public NumberPart(int size, bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :47
void NumberPart__ctor_1_fn(NumberPart* __this, int32_t* size, bool* obligatory, uDelegate* setter, uDelegate* getter)
{
    __this->ctor_1(*size, *obligatory, setter, getter);
}

// private string GetPart(string line, int index) :68
void NumberPart__GetPart_fn(NumberPart* __this, uString* line, int32_t* index, uString** __retval)
{
    *__retval = __this->GetPart(line, *index);
}

// public NumberPart New(int size, bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :47
void NumberPart__New1_fn(uType* __type, int32_t* size, bool* obligatory, uDelegate* setter, uDelegate* getter, NumberPart** __retval)
{
    *__retval = NumberPart::New1(__type, *size, *obligatory, setter, getter);
}

// public override sealed int Read(string line, int position, T value) :55
void NumberPart__Read_fn(NumberPart* __this, uString* line, int32_t* position, void* value, int32_t* __retval)
{
    uStackFrame __("Uno.Time.Text.NumberPart`1", "Read(string,int,T)");
    int32_t position_ = *position;
    uString* part = __this->GetPart(line, position_);

    if (::g::Uno::String::IsNullOrEmpty(part))
    {
        if (__this->Obligatory())
            U_THROW(::g::Uno::FormatException::New4(::g::Uno::String::op_Addition1(::STRINGS[2/*"Not found n...*/], uBox<int32_t>(::g::Uno::Int_typeof(), position_))));

        return *__retval = 0, void();
    }

    ::g::Uno::Time::Text::PatternPart__Set_fn(__this, value, uCRef<int32_t>(::g::Uno::Int::Parse(part)));
    return *__retval = __this->ExpectedSize(), void();
}

// public override sealed string Write(T value) :79
void NumberPart__Write_fn(NumberPart* __this, void* value, uString** __retval)
{
    uStackFrame __("Uno.Time.Text.NumberPart`1", "Write(T)");
    int32_t ret2;
    return *__retval = ::g::Uno::String::Format(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[3/*"{0:D"*/], uBox<int32_t>(::g::Uno::Int_typeof(), __this->ExpectedSize())), ::STRINGS[4/*"}"*/]), uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, uBox<int32_t>(::g::Uno::Int_typeof(), ::g::Uno::Math::Abs5((::g::Uno::Time::Text::PatternPart__Get_fn(__this, value, &ret2), ret2))))), void();
}

// public NumberPart(int size, bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [instance] :47
void NumberPart::ctor_1(int32_t size, bool obligatory, uDelegate* setter, uDelegate* getter)
{
    ctor_();
    Setter(setter);
    Getter(getter);
    ExpectedSize(size);
    Obligatory(obligatory);
}

// private string GetPart(string line, int index) [instance] :68
uString* NumberPart::GetPart(uString* line, int32_t index)
{
    uStackFrame __("Uno.Time.Text.NumberPart`1", "GetPart(string,int)");

    if ((index + ExpectedSize()) > uPtr(line)->Length())
    {
        if (Obligatory())
            U_THROW(::g::Uno::FormatException::New4(::g::Uno::String::op_Addition1(::STRINGS[1/*"Not enough ...*/], uBox<int32_t>(::g::Uno::Int_typeof(), index))));

        return ::g::Uno::String::Empty();
    }

    return ::g::Uno::String::Substring1(uPtr(line), index, ExpectedSize());
}

// public NumberPart New(int size, bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [static] :47
NumberPart* NumberPart::New1(uType* __type, int32_t size, bool obligatory, uDelegate* setter, uDelegate* getter)
{
    NumberPart* obj1 = (NumberPart*)uNew(__type);
    obj1->ctor_1(size, obligatory, setter, getter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/OffsetPattern.uno
// ----------------------------------------------------------------------------------

// private sealed class OffsetPattern.OffsetBucket :106
// {
static void OffsetPattern__OffsetBucket_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(OffsetPattern__OffsetBucket, Sign), 0,
        ::g::Uno::Int_typeof(), offsetof(OffsetPattern__OffsetBucket, Hour), 0,
        ::g::Uno::Int_typeof(), offsetof(OffsetPattern__OffsetBucket, Minute), 0,
        ::g::Uno::Int_typeof(), offsetof(OffsetPattern__OffsetBucket, Second), 0);
}

uType* OffsetPattern__OffsetBucket_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(OffsetPattern__OffsetBucket);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.OffsetPattern.OffsetBucket", options);
    type->fp_build_ = OffsetPattern__OffsetBucket_build;
    type->fp_ctor_ = (void*)OffsetPattern__OffsetBucket__New1_fn;
    return type;
}

// public generated OffsetBucket() :106
void OffsetPattern__OffsetBucket__ctor__fn(OffsetPattern__OffsetBucket* __this)
{
    __this->ctor_();
}

// public generated OffsetBucket New() :106
void OffsetPattern__OffsetBucket__New1_fn(OffsetPattern__OffsetBucket** __retval)
{
    *__retval = OffsetPattern__OffsetBucket::New1();
}

// public generated OffsetBucket() [instance] :106
void OffsetPattern__OffsetBucket::ctor_()
{
}

// public generated OffsetBucket New() [static] :106
OffsetPattern__OffsetBucket* OffsetPattern__OffsetBucket::New1()
{
    OffsetPattern__OffsetBucket* obj1 = (OffsetPattern__OffsetBucket*)uNew(OffsetPattern__OffsetBucket_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/OffsetDateTimePattern.uno
// ------------------------------------------------------------------------------------------

// private sealed class OffsetDateTimePattern.OffsetDateTimeBucket :169
// {
static void OffsetDateTimePattern__OffsetDateTimeBucket_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(OffsetDateTimePattern__OffsetDateTimeBucket, Sign), 0,
        ::g::Uno::Int_typeof(), offsetof(OffsetDateTimePattern__OffsetDateTimeBucket, Year), 0,
        ::g::Uno::Int_typeof(), offsetof(OffsetDateTimePattern__OffsetDateTimeBucket, Month), 0,
        ::g::Uno::Int_typeof(), offsetof(OffsetDateTimePattern__OffsetDateTimeBucket, Day), 0,
        ::g::Uno::Int_typeof(), offsetof(OffsetDateTimePattern__OffsetDateTimeBucket, Hour), 0,
        ::g::Uno::Int_typeof(), offsetof(OffsetDateTimePattern__OffsetDateTimeBucket, Minute), 0,
        ::g::Uno::Int_typeof(), offsetof(OffsetDateTimePattern__OffsetDateTimeBucket, Second), 0,
        ::g::Uno::Int_typeof(), offsetof(OffsetDateTimePattern__OffsetDateTimeBucket, Millisecond), 0,
        ::g::Uno::Time::Offset_typeof(), offsetof(OffsetDateTimePattern__OffsetDateTimeBucket, Offset), 0);
}

uType* OffsetDateTimePattern__OffsetDateTimeBucket_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(OffsetDateTimePattern__OffsetDateTimeBucket);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket", options);
    type->fp_build_ = OffsetDateTimePattern__OffsetDateTimeBucket_build;
    type->fp_ctor_ = (void*)OffsetDateTimePattern__OffsetDateTimeBucket__New1_fn;
    return type;
}

// public generated OffsetDateTimeBucket() :169
void OffsetDateTimePattern__OffsetDateTimeBucket__ctor__fn(OffsetDateTimePattern__OffsetDateTimeBucket* __this)
{
    __this->ctor_();
}

// public generated OffsetDateTimeBucket New() :169
void OffsetDateTimePattern__OffsetDateTimeBucket__New1_fn(OffsetDateTimePattern__OffsetDateTimeBucket** __retval)
{
    *__retval = OffsetDateTimePattern__OffsetDateTimeBucket::New1();
}

// public generated OffsetDateTimeBucket() [instance] :169
void OffsetDateTimePattern__OffsetDateTimeBucket::ctor_()
{
}

// public generated OffsetDateTimeBucket New() [static] :169
OffsetDateTimePattern__OffsetDateTimeBucket* OffsetDateTimePattern__OffsetDateTimeBucket::New1()
{
    OffsetDateTimePattern__OffsetDateTimeBucket* obj1 = (OffsetDateTimePattern__OffsetDateTimeBucket*)uNew(OffsetDateTimePattern__OffsetDateTimeBucket_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/OffsetDateTimePattern.uno
// ------------------------------------------------------------------------------------------

// public sealed class OffsetDateTimePattern :3
// {
static void OffsetDateTimePattern_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), offsetof(OffsetDateTimePattern, _generalPattern), 0,
        type, (uintptr_t)&OffsetDateTimePattern::General_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Format", NULL, (void*)OffsetDateTimePattern__Format_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Uno::Time::OffsetDateTime_typeof()),
        new uFunction("get_GeneralIsoPattern", NULL, (void*)OffsetDateTimePattern__get_GeneralIsoPattern_fn, 0, true, type, 0),
        new uFunction("Parse", NULL, (void*)OffsetDateTimePattern__Parse_fn, 0, false, ::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::OffsetDateTime_typeof(), NULL), 1, ::g::Uno::String_typeof()));
}

uType* OffsetDateTimePattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OffsetDateTimePattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.OffsetDateTimePattern", options);
    type->fp_build_ = OffsetDateTimePattern_build;
    type->fp_ctor_ = (void*)OffsetDateTimePattern__New1_fn;
    return type;
}

// private OffsetDateTimePattern() :21
void OffsetDateTimePattern__ctor__fn(OffsetDateTimePattern* __this)
{
    __this->ctor_();
}

// public string Format(Uno.Time.OffsetDateTime value) :62
void OffsetDateTimePattern__Format_fn(OffsetDateTimePattern* __this, ::g::Uno::Time::OffsetDateTime* value, uString** __retval)
{
    *__retval = __this->Format(*value);
}

// public static Uno.Time.Text.OffsetDateTimePattern get_GeneralIsoPattern() :9
void OffsetDateTimePattern__get_GeneralIsoPattern_fn(OffsetDateTimePattern** __retval)
{
    *__retval = OffsetDateTimePattern::GeneralIsoPattern();
}

// private int GetDay(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :114
void OffsetDateTimePattern__GetDay_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetDay(value);
}

// private int GetHour(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :124
void OffsetDateTimePattern__GetHour_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetHour(value);
}

// private int GetMillisecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :154
void OffsetDateTimePattern__GetMillisecond_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetMillisecond(value);
}

// private int GetMinute(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :134
void OffsetDateTimePattern__GetMinute_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetMinute(value);
}

// private int GetMonth(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :104
void OffsetDateTimePattern__GetMonth_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetMonth(value);
}

// private Uno.Time.Offset GetOffset(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :164
void OffsetDateTimePattern__GetOffset_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, ::g::Uno::Time::Offset* __retval)
{
    *__retval = __this->GetOffset(value);
}

// private int GetSecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :144
void OffsetDateTimePattern__GetSecond_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetSecond(value);
}

// private int GetSign(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :84
void OffsetDateTimePattern__GetSign_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetSign(value);
}

// private int GetYear(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :94
void OffsetDateTimePattern__GetYear_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t* __retval)
{
    *__retval = __this->GetYear(value);
}

// private OffsetDateTimePattern New() :21
void OffsetDateTimePattern__New1_fn(OffsetDateTimePattern** __retval)
{
    *__retval = OffsetDateTimePattern::New1();
}

// public Uno.Time.Text.ParseResult<Uno.Time.OffsetDateTime> Parse(string text) :44
void OffsetDateTimePattern__Parse_fn(OffsetDateTimePattern* __this, uString* text, ::g::Uno::Time::Text::ParseResult** __retval)
{
    *__retval = __this->Parse(text);
}

// private void SetDay(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int day) :109
void OffsetDateTimePattern__SetDay_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t* day)
{
    __this->SetDay(value, *day);
}

// private void SetHour(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int hour) :119
void OffsetDateTimePattern__SetHour_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t* hour)
{
    __this->SetHour(value, *hour);
}

// private void SetMillisecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int millisecond) :149
void OffsetDateTimePattern__SetMillisecond_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t* millisecond)
{
    __this->SetMillisecond(value, *millisecond);
}

// private void SetMinute(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int minute) :129
void OffsetDateTimePattern__SetMinute_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t* minute)
{
    __this->SetMinute(value, *minute);
}

// private void SetMonth(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int month) :99
void OffsetDateTimePattern__SetMonth_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t* month)
{
    __this->SetMonth(value, *month);
}

// private void SetOffset(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, Uno.Time.Offset offset) :159
void OffsetDateTimePattern__SetOffset_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, ::g::Uno::Time::Offset* offset)
{
    __this->SetOffset(value, *offset);
}

// private void SetSecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int second) :139
void OffsetDateTimePattern__SetSecond_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t* second)
{
    __this->SetSecond(value, *second);
}

// private void SetSign(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int sign) :79
void OffsetDateTimePattern__SetSign_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t* sign)
{
    __this->SetSign(value, *sign);
}

// private void SetYear(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int year) :89
void OffsetDateTimePattern__SetYear_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t* year)
{
    __this->SetYear(value, *year);
}

uSStrong<OffsetDateTimePattern*> OffsetDateTimePattern::General_;

// private OffsetDateTimePattern() [instance] :21
void OffsetDateTimePattern::ctor_()
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", ".ctor()");
    _generalPattern = ((::g::Uno::Time::Text::FixedFormatPattern*)::g::Uno::Time::Text::FixedFormatPattern::New1(::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), uArray::Init<uObject*>(::TYPES[0/*Uno.Time.Text.IPatternPart`1*/]->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL)->Array(), 15, (uObject*)((::g::Uno::Time::Text::SignPart*)::g::Uno::Time::Text::SignPart::New2(::g::Uno::Time::Text::SignPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetDateTimePattern__SetSign_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetDateTimePattern__GetSign_fn, this))), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), 4, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetDateTimePattern__SetYear_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetDateTimePattern__GetYear_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), true, '-', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetDateTimePattern__SetMonth_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetDateTimePattern__GetMonth_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), true, '-', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetDateTimePattern__SetDay_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetDateTimePattern__GetDay_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), true, 'T', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetDateTimePattern__SetHour_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetDateTimePattern__GetHour_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetDateTimePattern__SetMinute_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetDateTimePattern__GetMinute_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetDateTimePattern__SetSecond_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetDateTimePattern__GetSecond_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), false, '.', 1)), (uObject*)((::g::Uno::Time::Text::RangeNumberPart*)::g::Uno::Time::Text::RangeNumberPart::New1(::g::Uno::Time::Text::RangeNumberPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), 3, 3, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetDateTimePattern__SetMillisecond_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetDateTimePattern__GetMillisecond_fn, this))), (uObject*)((::g::Uno::Time::Text::OffsetPatternPart*)::g::Uno::Time::Text::OffsetPatternPart::New1(::g::Uno::Time::Text::OffsetPatternPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Time::Offset_typeof(), NULL), (void*)OffsetDateTimePattern__SetOffset_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Time::Offset_typeof(), NULL), (void*)OffsetDateTimePattern__GetOffset_fn, this))))));
}

// public string Format(Uno.Time.OffsetDateTime value) [instance] :62
uString* OffsetDateTimePattern::Format(::g::Uno::Time::OffsetDateTime value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "Format(Uno.Time.OffsetDateTime)");
    OffsetDateTimePattern__OffsetDateTimeBucket* collection1;
    uString* ret3;
    collection1 = OffsetDateTimePattern__OffsetDateTimeBucket::New1();
    uPtr(collection1)->Sign = ((value.Year() < 0) ? -1 : 1);
    uPtr(collection1)->Year = value.Year();
    uPtr(collection1)->Month = value.Month();
    uPtr(collection1)->Day = value.Day();
    uPtr(collection1)->Hour = value.Hour();
    uPtr(collection1)->Minute = value.Minute();
    uPtr(collection1)->Second = value.Second();
    uPtr(collection1)->Millisecond = value.Millisecond();
    uPtr(collection1)->Offset = value.Offset();
    OffsetDateTimePattern__OffsetDateTimeBucket* bucket = collection1;
    return (::g::Uno::Time::Text::FixedFormatPattern__Format_fn(uPtr(_generalPattern), bucket, &ret3), ret3);
}

// private int GetDay(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :114
int32_t OffsetDateTimePattern::GetDay(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetDay(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Day;
}

// private int GetHour(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :124
int32_t OffsetDateTimePattern::GetHour(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetHour(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Hour;
}

// private int GetMillisecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :154
int32_t OffsetDateTimePattern::GetMillisecond(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetMillisecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Millisecond;
}

// private int GetMinute(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :134
int32_t OffsetDateTimePattern::GetMinute(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetMinute(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Minute;
}

// private int GetMonth(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :104
int32_t OffsetDateTimePattern::GetMonth(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetMonth(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Month;
}

// private Uno.Time.Offset GetOffset(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :164
::g::Uno::Time::Offset OffsetDateTimePattern::GetOffset(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetOffset(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Offset;
}

// private int GetSecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :144
int32_t OffsetDateTimePattern::GetSecond(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetSecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Second;
}

// private int GetSign(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :84
int32_t OffsetDateTimePattern::GetSign(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetSign(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Sign;
}

// private int GetYear(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :94
int32_t OffsetDateTimePattern::GetYear(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetYear(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Year;
}

// public Uno.Time.Text.ParseResult<Uno.Time.OffsetDateTime> Parse(string text) [instance] :44
::g::Uno::Time::Text::ParseResult* OffsetDateTimePattern::Parse(uString* text)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "Parse(string)");
    ::g::Uno::Time::Text::ParseResult* ret4;

    try
    {
        {
            OffsetDateTimePattern__OffsetDateTimeBucket* bucket = OffsetDateTimePattern__OffsetDateTimeBucket::New1();
            ::g::Uno::Time::Text::FixedFormatPattern__Parse_fn(uPtr(_generalPattern), text, bucket);
            ::g::Uno::Time::LocalDateTime ldt = ::g::Uno::Time::LocalDateTime__New3(bucket->Sign * bucket->Year, bucket->Month, bucket->Day, bucket->Hour, bucket->Minute, bucket->Second, bucket->Millisecond);
            ::g::Uno::Time::OffsetDateTime result = ::g::Uno::Time::OffsetDateTime__New1(ldt, bucket->Offset);
            return (::g::Uno::Time::Text::ParseResult__ForValue_fn(::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::OffsetDateTime_typeof(), NULL), uCRef(result), &ret4), ret4);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* ex = __t.Exception;
        return (::g::Uno::Time::Text::ParseResult*)::g::Uno::Time::Text::ParseResult::ForException(::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::OffsetDateTime_typeof(), NULL), ex);
    }
}

// private void SetDay(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int day) [instance] :109
void OffsetDateTimePattern::SetDay(OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t day)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetDay(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,int)");
    uPtr(value)->Day = day;
}

// private void SetHour(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int hour) [instance] :119
void OffsetDateTimePattern::SetHour(OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t hour)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetHour(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,int)");
    uPtr(value)->Hour = hour;
}

// private void SetMillisecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int millisecond) [instance] :149
void OffsetDateTimePattern::SetMillisecond(OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t millisecond)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetMillisecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,int)");
    uPtr(value)->Millisecond = millisecond;
}

// private void SetMinute(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int minute) [instance] :129
void OffsetDateTimePattern::SetMinute(OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t minute)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetMinute(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,int)");
    uPtr(value)->Minute = minute;
}

// private void SetMonth(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int month) [instance] :99
void OffsetDateTimePattern::SetMonth(OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t month)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetMonth(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,int)");
    uPtr(value)->Month = month;
}

// private void SetOffset(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, Uno.Time.Offset offset) [instance] :159
void OffsetDateTimePattern::SetOffset(OffsetDateTimePattern__OffsetDateTimeBucket* value, ::g::Uno::Time::Offset offset)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetOffset(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,Uno.Time.Offset)");
    uPtr(value)->Offset = offset;
}

// private void SetSecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int second) [instance] :139
void OffsetDateTimePattern::SetSecond(OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t second)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetSecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,int)");
    uPtr(value)->Second = second;
}

// private void SetSign(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int sign) [instance] :79
void OffsetDateTimePattern::SetSign(OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t sign)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetSign(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,int)");
    uPtr(value)->Sign = sign;
}

// private void SetYear(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int year) [instance] :89
void OffsetDateTimePattern::SetYear(OffsetDateTimePattern__OffsetDateTimeBucket* value, int32_t year)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetYear(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,int)");
    uPtr(value)->Year = year;
}

// private OffsetDateTimePattern New() [static] :21
OffsetDateTimePattern* OffsetDateTimePattern::New1()
{
    OffsetDateTimePattern* obj2 = (OffsetDateTimePattern*)uNew(OffsetDateTimePattern_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Uno.Time.Text.OffsetDateTimePattern get_GeneralIsoPattern() [static] :9
OffsetDateTimePattern* OffsetDateTimePattern::GeneralIsoPattern()
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "get_GeneralIsoPattern()");

    if (OffsetDateTimePattern::General_ == NULL)
        OffsetDateTimePattern::General_ = OffsetDateTimePattern::New1();

    return OffsetDateTimePattern::General_;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/OffsetPattern.uno
// ----------------------------------------------------------------------------------

// public sealed class OffsetPattern :3
// {
static void OffsetPattern_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Time::Offset_typeof());
    type->SetFields(0,
        ::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL), offsetof(OffsetPattern, _generalPattern), 0,
        type, (uintptr_t)&OffsetPattern::General_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Format", NULL, (void*)OffsetPattern__Format_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Uno::Time::Offset_typeof()),
        new uFunction("get_GeneralIsoPattern", NULL, (void*)OffsetPattern__get_GeneralIsoPattern_fn, 0, true, type, 0),
        new uFunction("Parse", NULL, (void*)OffsetPattern__Parse_fn, 0, false, ::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::Offset_typeof(), NULL), 1, ::g::Uno::String_typeof()));
}

uType* OffsetPattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(OffsetPattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.OffsetPattern", options);
    type->fp_build_ = OffsetPattern_build;
    type->fp_ctor_ = (void*)OffsetPattern__New1_fn;
    return type;
}

// private OffsetPattern() :21
void OffsetPattern__ctor__fn(OffsetPattern* __this)
{
    __this->ctor_();
}

// public string Format(Uno.Time.Offset value) :54
void OffsetPattern__Format_fn(OffsetPattern* __this, ::g::Uno::Time::Offset* value, uString** __retval)
{
    *__retval = __this->Format(*value);
}

// public static Uno.Time.Text.OffsetPattern get_GeneralIsoPattern() :9
void OffsetPattern__get_GeneralIsoPattern_fn(OffsetPattern** __retval)
{
    *__retval = OffsetPattern::GeneralIsoPattern();
}

// private int GetHour(Uno.Time.Text.OffsetPattern.OffsetBucket value) :81
void OffsetPattern__GetHour_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int32_t* __retval)
{
    *__retval = __this->GetHour(value);
}

// private int GetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket value) :91
void OffsetPattern__GetMinute_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int32_t* __retval)
{
    *__retval = __this->GetMinute(value);
}

// private int GetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket value) :101
void OffsetPattern__GetSecond_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int32_t* __retval)
{
    *__retval = __this->GetSecond(value);
}

// private int GetSign(Uno.Time.Text.OffsetPattern.OffsetBucket value) :71
void OffsetPattern__GetSign_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int32_t* __retval)
{
    *__retval = __this->GetSign(value);
}

// private OffsetPattern New() :21
void OffsetPattern__New1_fn(OffsetPattern** __retval)
{
    *__retval = OffsetPattern::New1();
}

// public Uno.Time.Text.ParseResult<Uno.Time.Offset> Parse(string text) :34
void OffsetPattern__Parse_fn(OffsetPattern* __this, uString* text, ::g::Uno::Time::Text::ParseResult** __retval)
{
    *__retval = __this->Parse(text);
}

// private void SetHour(Uno.Time.Text.OffsetPattern.OffsetBucket value, int hour) :76
void OffsetPattern__SetHour_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int32_t* hour)
{
    __this->SetHour(value, *hour);
}

// private void SetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket value, int minute) :86
void OffsetPattern__SetMinute_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int32_t* minute)
{
    __this->SetMinute(value, *minute);
}

// private void SetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket value, int second) :96
void OffsetPattern__SetSecond_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int32_t* second)
{
    __this->SetSecond(value, *second);
}

// private void SetSign(Uno.Time.Text.OffsetPattern.OffsetBucket value, int sign) :66
void OffsetPattern__SetSign_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int32_t* sign)
{
    __this->SetSign(value, *sign);
}

uSStrong<OffsetPattern*> OffsetPattern::General_;

// private OffsetPattern() [instance] :21
void OffsetPattern::ctor_()
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", ".ctor()");
    _generalPattern = ((::g::Uno::Time::Text::FixedFormatPattern*)::g::Uno::Time::Text::FixedFormatPattern::New1(::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL), uArray::Init<uObject*>(::TYPES[0/*Uno.Time.Text.IPatternPart`1*/]->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL)->Array(), 6, (uObject*)((::g::Uno::Time::Text::SignPart*)::g::Uno::Time::Text::SignPart::New1(::g::Uno::Time::Text::SignPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL), true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetPattern__SetSign_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetPattern__GetSign_fn, this))), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetPattern__SetHour_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetPattern__GetHour_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New1(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL), false, true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL), 2, false, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetPattern__SetMinute_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetPattern__GetMinute_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New1(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL), false, true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL), 2, false, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetPattern__SetSecond_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetPattern__GetSecond_fn, this))))));
}

// public string Format(Uno.Time.Offset value) [instance] :54
uString* OffsetPattern::Format(::g::Uno::Time::Offset value)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "Format(Uno.Time.Offset)");
    uString* ret2;
    OffsetPattern__OffsetBucket* bucket = OffsetPattern__OffsetBucket::New1();
    bucket->Sign = ((value.Milliseconds() < 0) ? -1 : 1);
    bucket->Hour = (value.Milliseconds() / 3600000);
    int32_t remaining = value.Milliseconds() % 3600000;
    bucket->Minute = (remaining / 60000);
    remaining = remaining % 60000;
    bucket->Second = (remaining / 1000);
    return (::g::Uno::Time::Text::FixedFormatPattern__Format_fn(uPtr(_generalPattern), bucket, &ret2), ret2);
}

// private int GetHour(Uno.Time.Text.OffsetPattern.OffsetBucket value) [instance] :81
int32_t OffsetPattern::GetHour(OffsetPattern__OffsetBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "GetHour(Uno.Time.Text.OffsetPattern.OffsetBucket)");
    return uPtr(value)->Hour;
}

// private int GetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket value) [instance] :91
int32_t OffsetPattern::GetMinute(OffsetPattern__OffsetBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "GetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket)");
    return uPtr(value)->Minute;
}

// private int GetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket value) [instance] :101
int32_t OffsetPattern::GetSecond(OffsetPattern__OffsetBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "GetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket)");
    return uPtr(value)->Second;
}

// private int GetSign(Uno.Time.Text.OffsetPattern.OffsetBucket value) [instance] :71
int32_t OffsetPattern::GetSign(OffsetPattern__OffsetBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "GetSign(Uno.Time.Text.OffsetPattern.OffsetBucket)");
    return uPtr(value)->Sign;
}

// public Uno.Time.Text.ParseResult<Uno.Time.Offset> Parse(string text) [instance] :34
::g::Uno::Time::Text::ParseResult* OffsetPattern::Parse(uString* text)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "Parse(string)");
    ::g::Uno::Time::Text::ParseResult* ret3;
    ::g::Uno::Time::Text::ParseResult* ret4;

    try
    {
        {
            if (::g::Uno::String::op_Equality(text, uString::Const("Z")))
                return (::g::Uno::Time::Text::ParseResult__ForValue_fn(::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::Offset_typeof(), NULL), uCRef(::g::Uno::Time::Offset::Zero()), &ret3), ret3);

            OffsetPattern__OffsetBucket* bucket = OffsetPattern__OffsetBucket::New1();
            ::g::Uno::Time::Text::FixedFormatPattern__Parse_fn(uPtr(_generalPattern), text, bucket);
            ::g::Uno::Time::Offset offset = ::g::Uno::Time::Offset__FromHoursAndMinutes(bucket->Sign * bucket->Hour, bucket->Sign * bucket->Minute);
            return (::g::Uno::Time::Text::ParseResult__ForValue_fn(::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::Offset_typeof(), NULL), uCRef(offset), &ret4), ret4);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* ex = __t.Exception;
        return (::g::Uno::Time::Text::ParseResult*)::g::Uno::Time::Text::ParseResult::ForException(::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::Offset_typeof(), NULL), ex);
    }
}

// private void SetHour(Uno.Time.Text.OffsetPattern.OffsetBucket value, int hour) [instance] :76
void OffsetPattern::SetHour(OffsetPattern__OffsetBucket* value, int32_t hour)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "SetHour(Uno.Time.Text.OffsetPattern.OffsetBucket,int)");
    uPtr(value)->Hour = hour;
}

// private void SetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket value, int minute) [instance] :86
void OffsetPattern::SetMinute(OffsetPattern__OffsetBucket* value, int32_t minute)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "SetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket,int)");
    uPtr(value)->Minute = minute;
}

// private void SetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket value, int second) [instance] :96
void OffsetPattern::SetSecond(OffsetPattern__OffsetBucket* value, int32_t second)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "SetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket,int)");
    uPtr(value)->Second = second;
}

// private void SetSign(Uno.Time.Text.OffsetPattern.OffsetBucket value, int sign) [instance] :66
void OffsetPattern::SetSign(OffsetPattern__OffsetBucket* value, int32_t sign)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "SetSign(Uno.Time.Text.OffsetPattern.OffsetBucket,int)");
    uPtr(value)->Sign = sign;
}

// private OffsetPattern New() [static] :21
OffsetPattern* OffsetPattern::New1()
{
    OffsetPattern* obj1 = (OffsetPattern*)uNew(OffsetPattern_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Uno.Time.Text.OffsetPattern get_GeneralIsoPattern() [static] :9
OffsetPattern* OffsetPattern::GeneralIsoPattern()
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "get_GeneralIsoPattern()");

    if (OffsetPattern::General_ == NULL)
        OffsetPattern::General_ = OffsetPattern::New1();

    return OffsetPattern::General_;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/PatternPart.uno
// --------------------------------------------------------------------------------

// internal sealed class OffsetPatternPart<T> :227
// {
static void OffsetPatternPart_build(uType* type)
{
    type->SetBase(::g::Uno::Time::Text::PatternPart_typeof()->MakeType(type->T(0), ::g::Uno::Time::Offset_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Time::Text::PatternPart_type, interface0));
    type->SetFields(5);
}

::g::Uno::Time::Text::PatternPart_type* OffsetPatternPart_typeof()
{
    static uSStrong< ::g::Uno::Time::Text::PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::Text::PatternPart_typeof();
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(OffsetPatternPart);
    options.TypeSize = sizeof(::g::Uno::Time::Text::PatternPart_type);
    type = (::g::Uno::Time::Text::PatternPart_type*)uClassType::New("Uno.Time.Text.OffsetPatternPart`1", options);
    type->fp_build_ = OffsetPatternPart_build;
    type->fp_Read = (void(*)(::g::Uno::Time::Text::PatternPart*, uString*, int32_t*, void*, int32_t*))OffsetPatternPart__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::Time::Text::PatternPart*, void*, uString**))OffsetPatternPart__Write_fn;
    type->interface0.fp_Read = (void(*)(uObject*, uString*, int32_t*, void*, int32_t*))OffsetPatternPart__Read_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))OffsetPatternPart__Write_fn;
    type->interface0.fp_get_SkipNextPartsCountIfThisNotSpecified = (void(*)(uObject*, int32_t*))::g::Uno::Time::Text::PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn;
    return type;
}

// public OffsetPatternPart(Uno.Action<T, Uno.Time.Offset> setter, Uno.Func<T, Uno.Time.Offset> getter) :229
void OffsetPatternPart__ctor_1_fn(OffsetPatternPart* __this, uDelegate* setter, uDelegate* getter)
{
    __this->ctor_1(setter, getter);
}

// public OffsetPatternPart New(Uno.Action<T, Uno.Time.Offset> setter, Uno.Func<T, Uno.Time.Offset> getter) :229
void OffsetPatternPart__New1_fn(uType* __type, uDelegate* setter, uDelegate* getter, OffsetPatternPart** __retval)
{
    *__retval = OffsetPatternPart::New1(__type, setter, getter);
}

// public override sealed int Read(string line, int position, T value) :235
void OffsetPatternPart__Read_fn(OffsetPatternPart* __this, uString* line, int32_t* position, void* value, int32_t* __retval)
{
    uStackFrame __("Uno.Time.Text.OffsetPatternPart`1", "Read(string,int,T)");
    int32_t position_ = *position;
    ::g::Uno::Time::Offset ret2;
    ::g::Uno::Time::Text::ParseResult* parse = uPtr(::g::Uno::Time::Text::OffsetPattern::GeneralIsoPattern())->Parse(::g::Uno::String::Substring(uPtr(line), position_));
    ::g::Uno::Time::Text::PatternPart__Set_fn(__this, value, uCRef((::g::Uno::Time::Text::ParseResult__GetValueOrThrow_fn(uPtr(parse), &ret2), ret2)));
    return *__retval = line->Length() - position_, void();
}

// public override sealed string Write(T value) :242
void OffsetPatternPart__Write_fn(OffsetPatternPart* __this, void* value, uString** __retval)
{
    uStackFrame __("Uno.Time.Text.OffsetPatternPart`1", "Write(T)");
    ::g::Uno::Time::Offset ret3;
    return *__retval = uPtr(::g::Uno::Time::Text::OffsetPattern::GeneralIsoPattern())->Format((::g::Uno::Time::Text::PatternPart__Get_fn(__this, value, &ret3), ret3)), void();
}

// public OffsetPatternPart(Uno.Action<T, Uno.Time.Offset> setter, Uno.Func<T, Uno.Time.Offset> getter) [instance] :229
void OffsetPatternPart::ctor_1(uDelegate* setter, uDelegate* getter)
{
    ctor_();
    Setter(setter);
    Getter(getter);
}

// public OffsetPatternPart New(Uno.Action<T, Uno.Time.Offset> setter, Uno.Func<T, Uno.Time.Offset> getter) [static] :229
OffsetPatternPart* OffsetPatternPart::New1(uType* __type, uDelegate* setter, uDelegate* getter)
{
    OffsetPatternPart* obj1 = (OffsetPatternPart*)uNew(__type);
    obj1->ctor_1(setter, getter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/ParseResult.uno
// --------------------------------------------------------------------------------

// public sealed class ParseResult<T> :3
// {
static void ParseResult_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Exception_typeof(), offsetof(ParseResult, _exception), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("GetValueOrThrow", NULL, (void*)ParseResult__GetValueOrThrow_fn, 0, false, type->T(0), 0));
}

uType* ParseResult_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ParseResult);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.ParseResult`1", options);
    type->fp_build_ = ParseResult_build;
    return type;
}

// private ParseResult(T value) :13
void ParseResult__ctor__fn(ParseResult* __this, void* value)
{
    __this->_value() = value;
}

// private ParseResult(Uno.Exception exception) :8
void ParseResult__ctor_1_fn(ParseResult* __this, ::g::Uno::Exception* exception)
{
    __this->ctor_1(exception);
}

// internal static Uno.Time.Text.ParseResult<T> ForException(Uno.Exception exception) :55
void ParseResult__ForException_fn(uType* __type, ::g::Uno::Exception* exception, ParseResult** __retval)
{
    *__retval = ParseResult::ForException(__type, exception);
}

// internal static Uno.Time.Text.ParseResult<T> ForValue(T value) :50
void ParseResult__ForValue_fn(uType* __type, void* value, ParseResult** __retval)
{
    ParseResult* ret3;
    return *__retval = (ParseResult__New1_fn(__type, value, &ret3), ret3), void();
}

// public T GetValueOrThrow() :34
void ParseResult__GetValueOrThrow_fn(ParseResult* __this, uTRef __retval)
{
    uStackFrame __("Uno.Time.Text.ParseResult`1", "GetValueOrThrow()");

    if (__this->_exception == NULL)
        return __retval.Store(__this->_value()), void();

    U_THROW(__this->_exception);
}

// private ParseResult New(T value) :13
void ParseResult__New1_fn(uType* __type, void* value, ParseResult** __retval)
{
    ParseResult* obj2 = (ParseResult*)uNew(__type);
    ParseResult__ctor__fn(obj2, value);
    return *__retval = obj2, void();
}

// private ParseResult New(Uno.Exception exception) :8
void ParseResult__New2_fn(uType* __type, ::g::Uno::Exception* exception, ParseResult** __retval)
{
    *__retval = ParseResult::New2(__type, exception);
}

// private ParseResult(Uno.Exception exception) [instance] :8
void ParseResult::ctor_1(::g::Uno::Exception* exception)
{
    _exception = exception;
}

// internal static Uno.Time.Text.ParseResult<T> ForException(Uno.Exception exception) [static] :55
ParseResult* ParseResult::ForException(uType* __type, ::g::Uno::Exception* exception)
{
    return ParseResult::New2(__type, exception);
}

// private ParseResult New(Uno.Exception exception) [static] :8
ParseResult* ParseResult::New2(uType* __type, ::g::Uno::Exception* exception)
{
    ParseResult* obj1 = (ParseResult*)uNew(__type);
    obj1->ctor_1(exception);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/PatternPart.uno
// --------------------------------------------------------------------------------

// internal abstract class PatternPart<TBucket, T> :12
// {
static void PatternPart_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL), offsetof(PatternPart_type, interface0));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(PatternPart, _ExpectedSize), 0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(PatternPart, _Getter), 0,
        ::g::Uno::Bool_typeof(), offsetof(PatternPart, _Obligatory), 0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(PatternPart, _Setter), 0,
        ::g::Uno::Int_typeof(), offsetof(PatternPart, _SkipNextPartsCountIfThisNotSpecified), 0);
}

PatternPart_type* PatternPart_typeof()
{
    static uSStrong<PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PatternPart);
    options.TypeSize = sizeof(PatternPart_type);
    type = (PatternPart_type*)uClassType::New("Uno.Time.Text.PatternPart`2", options);
    type->fp_build_ = PatternPart_build;
    type->fp_Write = PatternPart__Write_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))PatternPart__Write_fn;
    type->interface0.fp_get_SkipNextPartsCountIfThisNotSpecified = (void(*)(uObject*, int32_t*))PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn;
    return type;
}

// protected generated PatternPart() :12
void PatternPart__ctor__fn(PatternPart* __this)
{
    __this->ctor_();
}

// public generated int get_ExpectedSize() :18
void PatternPart__get_ExpectedSize_fn(PatternPart* __this, int32_t* __retval)
{
    *__retval = __this->ExpectedSize();
}

// protected generated void set_ExpectedSize(int value) :18
void PatternPart__set_ExpectedSize_fn(PatternPart* __this, int32_t* value)
{
    __this->ExpectedSize(*value);
}

// protected T Get(TBucket bucket) :37
void PatternPart__Get_fn(PatternPart* __this, void* bucket, uTRef __retval)
{
    uStackFrame __("Uno.Time.Text.PatternPart`2", "Get(TBucket)");
    uT ret1(__this->__type->GetBase(PatternPart_typeof())->T(1), U_ALLOCA(__this->__type->GetBase(PatternPart_typeof())->T(1)->ValueSize));

    if (::g::Uno::Delegate::op_Inequality(__this->Getter(), NULL))
        return __retval.Store((uPtr(__this->Getter())->Invoke(&ret1, 1, bucket), ret1)), void();

    return __retval.Store(__this->__type->GetBase(PatternPart_typeof())->T(1), uT(__this->__type->GetBase(PatternPart_typeof())->T(1), U_ALLOCA(__this->__type->GetBase(PatternPart_typeof())->T(1)->ValueSize))), void();
}

// public generated Uno.Func<TBucket, T> get_Getter() :16
void PatternPart__get_Getter_fn(PatternPart* __this, uDelegate** __retval)
{
    *__retval = __this->Getter();
}

// protected generated void set_Getter(Uno.Func<TBucket, T> value) :16
void PatternPart__set_Getter_fn(PatternPart* __this, uDelegate* value)
{
    __this->Getter(value);
}

// public generated bool get_Obligatory() :22
void PatternPart__get_Obligatory_fn(PatternPart* __this, bool* __retval)
{
    *__retval = __this->Obligatory();
}

// protected generated void set_Obligatory(bool value) :22
void PatternPart__set_Obligatory_fn(PatternPart* __this, bool* value)
{
    __this->Obligatory(*value);
}

// protected void Set(TBucket bucket, T val) :31
void PatternPart__Set_fn(PatternPart* __this, void* bucket, void* val)
{
    uStackFrame __("Uno.Time.Text.PatternPart`2", "Set(TBucket,T)");

    if (::g::Uno::Delegate::op_Inequality(__this->Setter(), NULL))
        uPtr(__this->Setter())->Invoke(2, bucket, val);
}

// public generated Uno.Action<TBucket, T> get_Setter() :14
void PatternPart__get_Setter_fn(PatternPart* __this, uDelegate** __retval)
{
    *__retval = __this->Setter();
}

// protected generated void set_Setter(Uno.Action<TBucket, T> value) :14
void PatternPart__set_Setter_fn(PatternPart* __this, uDelegate* value)
{
    __this->Setter(value);
}

// public generated int get_SkipNextPartsCountIfThisNotSpecified() :20
void PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn(PatternPart* __this, int32_t* __retval)
{
    *__retval = __this->SkipNextPartsCountIfThisNotSpecified();
}

// protected generated void set_SkipNextPartsCountIfThisNotSpecified(int value) :20
void PatternPart__set_SkipNextPartsCountIfThisNotSpecified_fn(PatternPart* __this, int32_t* value)
{
    __this->SkipNextPartsCountIfThisNotSpecified(*value);
}

// public virtual string Write(TBucket value) :26
void PatternPart__Write_fn(PatternPart* __this, void* value, uString** __retval)
{
    uStackFrame __("Uno.Time.Text.PatternPart`2", "Write(TBucket)");
    uT ret2(__this->__type->GetBase(PatternPart_typeof())->T(1), U_ALLOCA(__this->__type->GetBase(PatternPart_typeof())->T(1)->ValueSize));
    return *__retval = ::g::Uno::Object::ToString(uBoxPtr(__this->__type->GetBase(PatternPart_typeof())->T(1), uPtr((PatternPart__Get_fn(__this, value, &ret2), ret2)), U_ALLOCA(__this->__type->GetBase(PatternPart_typeof())->T(1)->ObjectSize))), void();
}

// protected generated PatternPart() [instance] :12
void PatternPart::ctor_()
{
}

// public generated int get_ExpectedSize() [instance] :18
int32_t PatternPart::ExpectedSize()
{
    return _ExpectedSize;
}

// protected generated void set_ExpectedSize(int value) [instance] :18
void PatternPart::ExpectedSize(int32_t value)
{
    _ExpectedSize = value;
}

// public generated Uno.Func<TBucket, T> get_Getter() [instance] :16
uDelegate* PatternPart::Getter()
{
    return _Getter;
}

// protected generated void set_Getter(Uno.Func<TBucket, T> value) [instance] :16
void PatternPart::Getter(uDelegate* value)
{
    _Getter = value;
}

// public generated bool get_Obligatory() [instance] :22
bool PatternPart::Obligatory()
{
    return _Obligatory;
}

// protected generated void set_Obligatory(bool value) [instance] :22
void PatternPart::Obligatory(bool value)
{
    _Obligatory = value;
}

// public generated Uno.Action<TBucket, T> get_Setter() [instance] :14
uDelegate* PatternPart::Setter()
{
    return _Setter;
}

// protected generated void set_Setter(Uno.Action<TBucket, T> value) [instance] :14
void PatternPart::Setter(uDelegate* value)
{
    _Setter = value;
}

// public generated int get_SkipNextPartsCountIfThisNotSpecified() [instance] :20
int32_t PatternPart::SkipNextPartsCountIfThisNotSpecified()
{
    return _SkipNextPartsCountIfThisNotSpecified;
}

// protected generated void set_SkipNextPartsCountIfThisNotSpecified(int value) [instance] :20
void PatternPart::SkipNextPartsCountIfThisNotSpecified(int32_t value)
{
    _SkipNextPartsCountIfThisNotSpecified = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/PatternPart.uno
// --------------------------------------------------------------------------------

// internal sealed class RangeNumberPart<T> :85
// {
static void RangeNumberPart_build(uType* type)
{
    type->SetBase(::g::Uno::Time::Text::PatternPart_typeof()->MakeType(type->T(0), ::g::Uno::Int_typeof(), NULL));
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Time::Text::PatternPart_type, interface0));
    type->SetFields(5,
        ::g::Uno::Int_typeof(), offsetof(RangeNumberPart, _maxSize), 0);
}

::g::Uno::Time::Text::PatternPart_type* RangeNumberPart_typeof()
{
    static uSStrong< ::g::Uno::Time::Text::PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::Text::PatternPart_typeof();
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(RangeNumberPart);
    options.TypeSize = sizeof(::g::Uno::Time::Text::PatternPart_type);
    type = (::g::Uno::Time::Text::PatternPart_type*)uClassType::New("Uno.Time.Text.RangeNumberPart`1", options);
    type->fp_build_ = RangeNumberPart_build;
    type->fp_Read = (void(*)(::g::Uno::Time::Text::PatternPart*, uString*, int32_t*, void*, int32_t*))RangeNumberPart__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::Time::Text::PatternPart*, void*, uString**))RangeNumberPart__Write_fn;
    type->interface0.fp_Read = (void(*)(uObject*, uString*, int32_t*, void*, int32_t*))RangeNumberPart__Read_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))RangeNumberPart__Write_fn;
    type->interface0.fp_get_SkipNextPartsCountIfThisNotSpecified = (void(*)(uObject*, int32_t*))::g::Uno::Time::Text::PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn;
    return type;
}

// public RangeNumberPart(int size, int maxSize, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :94
void RangeNumberPart__ctor_1_fn(RangeNumberPart* __this, int32_t* size, int32_t* maxSize, uDelegate* setter, uDelegate* getter)
{
    __this->ctor_1(*size, *maxSize, setter, getter);
}

// public RangeNumberPart New(int size, int maxSize, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :94
void RangeNumberPart__New1_fn(uType* __type, int32_t* size, int32_t* maxSize, uDelegate* setter, uDelegate* getter, RangeNumberPart** __retval)
{
    *__retval = RangeNumberPart::New1(__type, *size, *maxSize, setter, getter);
}

// public override sealed int Read(string line, int position, T value) :102
void RangeNumberPart__Read_fn(RangeNumberPart* __this, uString* line, int32_t* position, void* value, int32_t* __retval)
{
    uStackFrame __("Uno.Time.Text.RangeNumberPart`1", "Read(string,int,T)");
    int32_t position_ = *position;
    int32_t numberCount = 0;

    for (int32_t i = position_; i < uPtr(line)->Length(); i++)
    {
        if (!::g::Uno::Char::IsDigit(uPtr(line)->Item(i)))
            break;

        numberCount++;

        if (numberCount >= __this->_maxSize)
            break;
    }

    if (numberCount == 0)
        return *__retval = 0, void();

    int32_t number = ::g::Uno::Int::Parse(::g::Uno::String::Substring1(uPtr(line), position_, (numberCount > __this->ExpectedSize()) ? __this->ExpectedSize() : numberCount));

    if (numberCount < __this->ExpectedSize())
        number = number * (int32_t)::g::Uno::Math::Pow1(10.0f, (float)(__this->ExpectedSize() - numberCount));

    ::g::Uno::Time::Text::PatternPart__Set_fn(__this, value, uCRef<int32_t>(number));
    return *__retval = numberCount, void();
}

// public override sealed string Write(T value) :133
void RangeNumberPart__Write_fn(RangeNumberPart* __this, void* value, uString** __retval)
{
    return *__retval = ::g::Uno::String::Empty(), void();
}

// public RangeNumberPart(int size, int maxSize, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [instance] :94
void RangeNumberPart::ctor_1(int32_t size, int32_t maxSize, uDelegate* setter, uDelegate* getter)
{
    ctor_();
    Setter(setter);
    Getter(getter);
    _maxSize = maxSize;
    ExpectedSize(size);
}

// public RangeNumberPart New(int size, int maxSize, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [static] :94
RangeNumberPart* RangeNumberPart::New1(uType* __type, int32_t size, int32_t maxSize, uDelegate* setter, uDelegate* getter)
{
    RangeNumberPart* obj2 = (RangeNumberPart*)uNew(__type);
    obj2->ctor_1(size, maxSize, setter, getter);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/PatternPart.uno
// --------------------------------------------------------------------------------

// internal sealed class SeparatorPart<T> :184
// {
static void SeparatorPart_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Separator at the end");
    ::STRINGS[6] = uString::Const("Wrong number format");
    ::TYPES[2] = ::g::Uno::Char_typeof();
    type->SetBase(::g::Uno::Time::Text::PatternPart_typeof()->MakeType(type->T(0), ::g::Uno::Char_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Time::Text::PatternPart_type, interface0));
    type->SetFields(5,
        ::TYPES[2/*char*/], offsetof(SeparatorPart, _separator), 0,
        ::g::Uno::Bool_typeof(), offsetof(SeparatorPart, _show), 0);
}

::g::Uno::Time::Text::PatternPart_type* SeparatorPart_typeof()
{
    static uSStrong< ::g::Uno::Time::Text::PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::Text::PatternPart_typeof();
    options.FieldCount = 7;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SeparatorPart);
    options.TypeSize = sizeof(::g::Uno::Time::Text::PatternPart_type);
    type = (::g::Uno::Time::Text::PatternPart_type*)uClassType::New("Uno.Time.Text.SeparatorPart`1", options);
    type->fp_build_ = SeparatorPart_build;
    type->fp_Read = (void(*)(::g::Uno::Time::Text::PatternPart*, uString*, int32_t*, void*, int32_t*))SeparatorPart__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::Time::Text::PatternPart*, void*, uString**))SeparatorPart__Write_fn;
    type->interface0.fp_Read = (void(*)(uObject*, uString*, int32_t*, void*, int32_t*))SeparatorPart__Read_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))SeparatorPart__Write_fn;
    type->interface0.fp_get_SkipNextPartsCountIfThisNotSpecified = (void(*)(uObject*, int32_t*))::g::Uno::Time::Text::PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn;
    return type;
}

// public SeparatorPart(bool obligatory, bool show, char separator, [int skipNextPartsCountIfThisNotSpecified]) :194
void SeparatorPart__ctor_1_fn(SeparatorPart* __this, bool* obligatory, bool* show, char16_t* separator, int32_t* skipNextPartsCountIfThisNotSpecified)
{
    __this->ctor_1(*obligatory, *show, *separator, *skipNextPartsCountIfThisNotSpecified);
}

// public SeparatorPart(bool obligatory, char separator, [int skipNextPartsCountIfThisNotSpecified]) :189
void SeparatorPart__ctor_2_fn(SeparatorPart* __this, bool* obligatory, char16_t* separator, int32_t* skipNextPartsCountIfThisNotSpecified)
{
    __this->ctor_2(*obligatory, *separator, *skipNextPartsCountIfThisNotSpecified);
}

// public SeparatorPart New(bool obligatory, bool show, char separator, [int skipNextPartsCountIfThisNotSpecified]) :194
void SeparatorPart__New1_fn(uType* __type, bool* obligatory, bool* show, char16_t* separator, int32_t* skipNextPartsCountIfThisNotSpecified, SeparatorPart** __retval)
{
    *__retval = SeparatorPart::New1(__type, *obligatory, *show, *separator, *skipNextPartsCountIfThisNotSpecified);
}

// public SeparatorPart New(bool obligatory, char separator, [int skipNextPartsCountIfThisNotSpecified]) :189
void SeparatorPart__New2_fn(uType* __type, bool* obligatory, char16_t* separator, int32_t* skipNextPartsCountIfThisNotSpecified, SeparatorPart** __retval)
{
    *__retval = SeparatorPart::New2(__type, *obligatory, *separator, *skipNextPartsCountIfThisNotSpecified);
}

// public override sealed int Read(string line, int position, T value) :203
void SeparatorPart__Read_fn(SeparatorPart* __this, uString* line, int32_t* position, void* value, int32_t* __retval)
{
    uStackFrame __("Uno.Time.Text.SeparatorPart`1", "Read(string,int,T)");
    int32_t position_ = *position;

    if ((position_ + __this->ExpectedSize()) >= uPtr(line)->Length())
    {
        if (__this->Obligatory() && ((position_ + __this->ExpectedSize()) == uPtr(line)->Length()))
            U_THROW(::g::Uno::FormatException::New4(::STRINGS[5/*"Separator a...*/]));

        return *__retval = 0, void();
    }

    if (uPtr(line)->Item(position_) == __this->_separator)
    {
        ::g::Uno::Time::Text::PatternPart__Set_fn(__this, value, uCRef<char16_t>(__this->_separator));
        return *__retval = 1, void();
    }

    if (__this->Obligatory())
        U_THROW(::g::Uno::FormatException::New4(::STRINGS[6/*"Wrong numbe...*/]));

    return *__retval = 0, void();
}

// public override sealed string Write(T value) :221
void SeparatorPart__Write_fn(SeparatorPart* __this, void* value, uString** __retval)
{
    uStackFrame __("Uno.Time.Text.SeparatorPart`1", "Write(T)");
    return *__retval = (__this->Obligatory() || __this->_show) ? (uString*)::g::Uno::Char::ToString(__this->_separator, ::TYPES[2/*char*/]) : (uString*)::g::Uno::String::Empty(), void();
}

// public SeparatorPart(bool obligatory, bool show, char separator, [int skipNextPartsCountIfThisNotSpecified]) [instance] :194
void SeparatorPart::ctor_1(bool obligatory, bool show, char16_t separator, int32_t skipNextPartsCountIfThisNotSpecified)
{
    ctor_();
    ExpectedSize(1);
    Obligatory(obligatory);
    SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    _separator = separator;
    _show = show;
}

// public SeparatorPart(bool obligatory, char separator, [int skipNextPartsCountIfThisNotSpecified]) [instance] :189
void SeparatorPart::ctor_2(bool obligatory, char16_t separator, int32_t skipNextPartsCountIfThisNotSpecified)
{
    ctor_1(obligatory, false, separator, skipNextPartsCountIfThisNotSpecified);
}

// public SeparatorPart New(bool obligatory, bool show, char separator, [int skipNextPartsCountIfThisNotSpecified]) [static] :194
SeparatorPart* SeparatorPart::New1(uType* __type, bool obligatory, bool show, char16_t separator, int32_t skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart* obj2 = (SeparatorPart*)uNew(__type);
    obj2->ctor_1(obligatory, show, separator, skipNextPartsCountIfThisNotSpecified);
    return obj2;
}

// public SeparatorPart New(bool obligatory, char separator, [int skipNextPartsCountIfThisNotSpecified]) [static] :189
SeparatorPart* SeparatorPart::New2(uType* __type, bool obligatory, char16_t separator, int32_t skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart* obj1 = (SeparatorPart*)uNew(__type);
    obj1->ctor_2(obligatory, separator, skipNextPartsCountIfThisNotSpecified);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/PatternPart.uno
// --------------------------------------------------------------------------------

// internal sealed class SignPart<T> :139
// {
static void SignPart_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Wrong number format");
    ::STRINGS[7] = uString::Const("+");
    ::STRINGS[8] = uString::Const("-");
    type->SetBase(::g::Uno::Time::Text::PatternPart_typeof()->MakeType(type->T(0), ::g::Uno::Int_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Time::Text::PatternPart_type, interface0));
    type->SetFields(5);
}

::g::Uno::Time::Text::PatternPart_type* SignPart_typeof()
{
    static uSStrong< ::g::Uno::Time::Text::PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::Text::PatternPart_typeof();
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SignPart);
    options.TypeSize = sizeof(::g::Uno::Time::Text::PatternPart_type);
    type = (::g::Uno::Time::Text::PatternPart_type*)uClassType::New("Uno.Time.Text.SignPart`1", options);
    type->fp_build_ = SignPart_build;
    type->fp_Read = (void(*)(::g::Uno::Time::Text::PatternPart*, uString*, int32_t*, void*, int32_t*))SignPart__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::Time::Text::PatternPart*, void*, uString**))SignPart__Write_fn;
    type->interface0.fp_Read = (void(*)(uObject*, uString*, int32_t*, void*, int32_t*))SignPart__Read_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))SignPart__Write_fn;
    type->interface0.fp_get_SkipNextPartsCountIfThisNotSpecified = (void(*)(uObject*, int32_t*))::g::Uno::Time::Text::PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn;
    return type;
}

// public SignPart(bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :146
void SignPart__ctor_1_fn(SignPart* __this, bool* obligatory, uDelegate* setter, uDelegate* getter)
{
    __this->ctor_1(*obligatory, setter, getter);
}

// public SignPart(Uno.Action<T, int> setter, Uno.Func<T, int> getter) :141
void SignPart__ctor_2_fn(SignPart* __this, uDelegate* setter, uDelegate* getter)
{
    __this->ctor_2(setter, getter);
}

// public SignPart New(bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :146
void SignPart__New1_fn(uType* __type, bool* obligatory, uDelegate* setter, uDelegate* getter, SignPart** __retval)
{
    *__retval = SignPart::New1(__type, *obligatory, setter, getter);
}

// public SignPart New(Uno.Action<T, int> setter, Uno.Func<T, int> getter) :141
void SignPart__New2_fn(uType* __type, uDelegate* setter, uDelegate* getter, SignPart** __retval)
{
    *__retval = SignPart::New2(__type, setter, getter);
}

// public override sealed int Read(string line, int position, T value) :154
void SignPart__Read_fn(SignPart* __this, uString* line, int32_t* position, void* value, int32_t* __retval)
{
    uStackFrame __("Uno.Time.Text.SignPart`1", "Read(string,int,T)");
    int32_t position_ = *position;

    if ((position_ + 1) >= uPtr(line)->Length())
    {
        if (__this->Obligatory())
            U_THROW(::g::Uno::FormatException::New4(::STRINGS[6/*"Wrong numbe...*/]));

        return *__retval = 0, void();
    }

    char16_t character = uPtr(line)->Item(position_);

    switch (character)
    {
        case '-':
        case '+':
        {
            ::g::Uno::Time::Text::PatternPart__Set_fn(__this, value, uCRef<int32_t>((character == '-') ? -1 : 1));
            return *__retval = 1, void();
        }
    }

    if (__this->Obligatory())
        U_THROW(::g::Uno::FormatException::New4(::STRINGS[6/*"Wrong numbe...*/]));

    ::g::Uno::Time::Text::PatternPart__Set_fn(__this, value, uCRef<int32_t>(1));
    return *__retval = 0, void();
}

// public override sealed string Write(T value) :176
void SignPart__Write_fn(SignPart* __this, void* value, uString** __retval)
{
    uStackFrame __("Uno.Time.Text.SignPart`1", "Write(T)");
    int32_t ret3;

    if ((::g::Uno::Time::Text::PatternPart__Get_fn(__this, value, &ret3), ret3) == 1)
        return *__retval = __this->Obligatory() ? ::STRINGS[7/*"+"*/] : (uString*)::g::Uno::String::Empty(), void();

    return *__retval = ::STRINGS[8/*"-"*/], void();
}

// public SignPart(bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [instance] :146
void SignPart::ctor_1(bool obligatory, uDelegate* setter, uDelegate* getter)
{
    ctor_();
    Setter(setter);
    Getter(getter);
    ExpectedSize(1);
    Obligatory(obligatory);
}

// public SignPart(Uno.Action<T, int> setter, Uno.Func<T, int> getter) [instance] :141
void SignPart::ctor_2(uDelegate* setter, uDelegate* getter)
{
    ctor_1(false, setter, getter);
}

// public SignPart New(bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [static] :146
SignPart* SignPart::New1(uType* __type, bool obligatory, uDelegate* setter, uDelegate* getter)
{
    SignPart* obj2 = (SignPart*)uNew(__type);
    obj2->ctor_1(obligatory, setter, getter);
    return obj2;
}

// public SignPart New(Uno.Action<T, int> setter, Uno.Func<T, int> getter) [static] :141
SignPart* SignPart::New2(uType* __type, uDelegate* setter, uDelegate* getter)
{
    SignPart* obj1 = (SignPart*)uNew(__type);
    obj1->ctor_2(setter, getter);
    return obj1;
}
// }

}}}} // ::g::Uno::Time::Text
