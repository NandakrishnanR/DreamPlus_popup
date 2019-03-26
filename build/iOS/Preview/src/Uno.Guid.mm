// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Guid.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <iostream>
#include <sstream>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Exception.h>
#include <Uno.FormatException.h>
#include <Uno.Guid.h>
#include <Uno.Int.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.UInt.h>
#include <Uno.UShort.h>
static uString* STRINGS[6];
static uType* TYPES[3];

namespace g{
namespace Uno{

// public struct Guid :10
// {
static void Guid_build(uType* type)
{
    ::STRINGS[0] = uString::Const("g");
    ::STRINGS[1] = uString::Const("Unrecognised Guid format, requires format 'dddddddd-dddd-dddd-dddd-dddddddddddd'");
    ::STRINGS[2] = uString::Const("{0:X8}");
    ::STRINGS[3] = uString::Const("-");
    ::STRINGS[4] = uString::Const("{0:X4}");
    ::STRINGS[5] = uString::Const("{0:X2}");
    ::TYPES[0] = ::g::Uno::Exception_typeof();
    ::TYPES[1] = uObject_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Char_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::UInt_typeof(), offsetof(Guid, Data1), 0,
        ::g::Uno::UShort_typeof(), offsetof(Guid, Data2), 0,
        ::g::Uno::UShort_typeof(), offsetof(Guid, Data3), 0,
        ::g::Uno::Byte_typeof(), offsetof(Guid, Data4_1), 0,
        ::g::Uno::Byte_typeof(), offsetof(Guid, Data4_2), 0,
        ::g::Uno::Byte_typeof(), offsetof(Guid, Data4_3), 0,
        ::g::Uno::Byte_typeof(), offsetof(Guid, Data4_4), 0,
        ::g::Uno::Byte_typeof(), offsetof(Guid, Data4_5), 0,
        ::g::Uno::Byte_typeof(), offsetof(Guid, Data4_6), 0,
        ::g::Uno::Byte_typeof(), offsetof(Guid, Data4_7), 0,
        ::g::Uno::Byte_typeof(), offsetof(Guid, Data4_8), 0,
        type, (uintptr_t)&Guid::Empty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Empty", 11));
    type->Reflection.SetFunctions(2,
        new uFunction("Equals", NULL, (void*)Guid__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction(".ctor", NULL, (void*)Guid__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

uStructType* Guid_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.Alignment = alignof(Guid);
    options.ValueSize = sizeof(Guid);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Guid", options);
    type->fp_build_ = Guid_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Guid__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Guid__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Guid__ToString_fn;
    return type;
}

// public Guid(string g) :112
void Guid__ctor_3_fn(Guid* __this, uString* g)
{
    __this->ctor_3(g);
}

// public override sealed bool Equals(object other) :293
void Guid__Equals_fn(Guid* __this, uType* __type, uObject* other, bool* __retval)
{
    uStackFrame __("Uno.Guid", "Equals(object)");

    if ((other == NULL) || !uIs(other, __type))
        return *__retval = false, void();

    return *__retval = __this->Equals2(uUnbox<Guid>(__type, other)), void();
}

// public bool Equals(Uno.Guid other) :302
void Guid__Equals2_fn(Guid* __this, Guid* other, bool* __retval)
{
    *__retval = __this->Equals2(*other);
}

// public override sealed int GetHashCode() :318
void Guid__GetHashCode_fn(Guid* __this, uType* __type, int32_t* __retval)
{
    return *__retval = (((int32_t)__this->Data1 ^ (((int32_t)__this->Data2 << 16) | (int32_t)(int16_t)__this->Data3)) ^ (((((int32_t)__this->Data4_1 << 24) | ((int32_t)__this->Data4_2 << 16)) | ((int16_t)__this->Data4_3 << 8)) | (int32_t)__this->Data4_4)) ^ (((((int32_t)__this->Data4_5 << 24) | ((int32_t)__this->Data4_6 << 16)) | ((int16_t)__this->Data4_7 << 8)) | (int32_t)__this->Data4_8), void();
}

// public Guid New(string g) :112
void Guid__New4_fn(uString* g, Guid* __retval)
{
    *__retval = Guid__New4(g);
}

// public override sealed string ToString() :272
void Guid__ToString_fn(Guid* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.Guid", "ToString()");
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    sb->Append2(::g::Uno::String::Format(::STRINGS[2/*"{0:X8}"*/], uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, uBox<uint32_t>(::g::Uno::UInt_typeof(), __this->Data1))));
    sb->Append2(::STRINGS[3/*"-"*/]);
    sb->Append2(::g::Uno::String::Format(::STRINGS[4/*"{0:X4}"*/], uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, uBox<uint16_t>(::g::Uno::UShort_typeof(), __this->Data2))));
    sb->Append2(::STRINGS[3/*"-"*/]);
    sb->Append2(::g::Uno::String::Format(::STRINGS[4/*"{0:X4}"*/], uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, uBox<uint16_t>(::g::Uno::UShort_typeof(), __this->Data3))));
    sb->Append2(::STRINGS[3/*"-"*/]);
    sb->Append2(::g::Uno::String::Format(::STRINGS[5/*"{0:X2}"*/], uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, uBox<uint8_t>(::g::Uno::Byte_typeof(), __this->Data4_1))));
    sb->Append2(::g::Uno::String::Format(::STRINGS[5/*"{0:X2}"*/], uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, uBox<uint8_t>(::g::Uno::Byte_typeof(), __this->Data4_2))));
    sb->Append2(::STRINGS[3/*"-"*/]);
    sb->Append2(::g::Uno::String::Format(::STRINGS[5/*"{0:X2}"*/], uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, uBox<uint8_t>(::g::Uno::Byte_typeof(), __this->Data4_3))));
    sb->Append2(::g::Uno::String::Format(::STRINGS[5/*"{0:X2}"*/], uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, uBox<uint8_t>(::g::Uno::Byte_typeof(), __this->Data4_4))));
    sb->Append2(::g::Uno::String::Format(::STRINGS[5/*"{0:X2}"*/], uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, uBox<uint8_t>(::g::Uno::Byte_typeof(), __this->Data4_5))));
    sb->Append2(::g::Uno::String::Format(::STRINGS[5/*"{0:X2}"*/], uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, uBox<uint8_t>(::g::Uno::Byte_typeof(), __this->Data4_6))));
    sb->Append2(::g::Uno::String::Format(::STRINGS[5/*"{0:X2}"*/], uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, uBox<uint8_t>(::g::Uno::Byte_typeof(), __this->Data4_7))));
    sb->Append2(::g::Uno::String::Format(::STRINGS[5/*"{0:X2}"*/], uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, uBox<uint8_t>(::g::Uno::Byte_typeof(), __this->Data4_8))));
    return *__retval = ::g::Uno::String::ToLower(uPtr(sb->ToString())), void();
}

// private extern uint ToUint(string str) :262
void Guid__ToUint_fn(Guid* __this, uString* str, uint32_t* __retval)
{
    *__retval = __this->ToUint(str);
}

// private string[] ValidateGuid(string guid) :210
void Guid__ValidateGuid_fn(Guid* __this, uString* guid, uArray** __retval)
{
    *__retval = __this->ValidateGuid(guid);
}

// private void ValidatePart(string part, int expectedLength) :225
void Guid__ValidatePart_fn(Guid* __this, uString* part, int32_t* expectedLength)
{
    __this->ValidatePart(part, *expectedLength);
}

Guid Guid::Empty_;

// public Guid(string g) [instance] :112
void Guid::ctor_3(uString* g)
{
    uStackFrame __("Uno.Guid", ".ctor(string)");

    if (::g::Uno::String::op_Equality(g, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"g"*/]));

    try
    {
        {
            uArray* parts = ValidateGuid(g);
            Data1 = ToUint(uPtr(parts)->Strong<uString*>(0));
            Data2 = (uint16_t)ToUint(parts->Strong<uString*>(1));
            Data3 = (uint16_t)ToUint(parts->Strong<uString*>(2));
            Data4_1 = (uint8_t)ToUint(::g::Uno::String::Substring1(uPtr(parts->Strong<uString*>(3)), 0, 2));
            Data4_2 = (uint8_t)ToUint(::g::Uno::String::Substring1(uPtr(parts->Strong<uString*>(3)), 2, 2));
            Data4_3 = (uint8_t)ToUint(::g::Uno::String::Substring1(uPtr(parts->Strong<uString*>(4)), 0, 2));
            Data4_4 = (uint8_t)ToUint(::g::Uno::String::Substring1(uPtr(parts->Strong<uString*>(4)), 2, 2));
            Data4_5 = (uint8_t)ToUint(::g::Uno::String::Substring1(uPtr(parts->Strong<uString*>(4)), 4, 2));
            Data4_6 = (uint8_t)ToUint(::g::Uno::String::Substring1(uPtr(parts->Strong<uString*>(4)), 6, 2));
            Data4_7 = (uint8_t)ToUint(::g::Uno::String::Substring1(uPtr(parts->Strong<uString*>(4)), 8, 2));
            Data4_8 = (uint8_t)ToUint(::g::Uno::String::Substring1(uPtr(parts->Strong<uString*>(4)), 10, 2));
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        U_THROW(::g::Uno::FormatException::New4(::STRINGS[1/*"Unrecognise...*/]));
    }
}

// public bool Equals(Uno.Guid other) [instance] :302
bool Guid::Equals2(Guid other)
{
    return ((((((((((Data1 == other.Data1) && (Data2 == other.Data2)) && (Data3 == other.Data3)) && (Data4_1 == other.Data4_1)) && (Data4_2 == other.Data4_2)) && (Data4_3 == other.Data4_3)) && (Data4_4 == other.Data4_4)) && (Data4_5 == other.Data4_5)) && (Data4_6 == other.Data4_6)) && (Data4_7 == other.Data4_7)) && (Data4_8 == other.Data4_8);
}

// private extern uint ToUint(string str) [instance] :262
uint32_t Guid::ToUint(uString* str)
{
    uCString cstr(str);
    unsigned long i;
    std::stringstream ss;
    ss << std::hex << cstr.Ptr;
    ss >> i;
    return i;
}

// private string[] ValidateGuid(string guid) [instance] :210
uArray* Guid::ValidateGuid(uString* guid)
{
    uStackFrame __("Uno.Guid", "ValidateGuid(string)");
    uArray* parts = ::g::Uno::String::Split(uPtr(guid), uArray::Init<int32_t>(::TYPES[2/*char[]*/], 1, '-'));

    if (uPtr(parts)->Length() != 5)
        U_THROW(::g::Uno::Exception::New1());

    ValidatePart(uPtr(parts)->Strong<uString*>(0), 8);
    ValidatePart(parts->Strong<uString*>(1), 4);
    ValidatePart(parts->Strong<uString*>(2), 4);
    ValidatePart(parts->Strong<uString*>(3), 4);
    ValidatePart(parts->Strong<uString*>(4), 12);
    return parts;
}

// private void ValidatePart(string part, int expectedLength) [instance] :225
void Guid::ValidatePart(uString* part, int32_t expectedLength)
{
    uStackFrame __("Uno.Guid", "ValidatePart(string,int)");
    uString* array1;
    int32_t index2;
    int32_t length3;

    if (uPtr(part)->Length() != expectedLength)
        U_THROW(::g::Uno::Exception::New1());

    for (array1 = part, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        char16_t c = uPtr(array1)->Item(index2);

        if ((((((!::g::Uno::Char::IsDigit(c) && (c != 'a')) && (c != 'b')) && (c != 'c')) && (c != 'd')) && (c != 'e')) && (c != 'f'))
            U_THROW(::g::Uno::Exception::New1());
    }
}

// public Guid New(string g) [static] :112
Guid Guid__New4(uString* g)
{
    Guid obj8;
    obj8.ctor_3(g);
    return obj8;
}
// }

}} // ::g::Uno
