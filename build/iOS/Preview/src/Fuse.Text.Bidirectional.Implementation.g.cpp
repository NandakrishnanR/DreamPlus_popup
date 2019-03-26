// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Text.Bidirectional.Implementation.UBidiRuns.h>
#include <Fuse.Text.Bidirectional.Run.h>
#include <Fuse.Text.Implementation.ICU.ErrorCode.h>
#include <Fuse.Text.Implementation.ICU.h>
#include <Fuse.Text.Substring.h>
#include <string.h>
#include <unicode/ubidi.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.String.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Text{
namespace Bidirectional{
namespace Implementation{

// /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/UBidi.uno
// ----------------------------------------------------------------------

// internal static extern class UBidiRuns :11
// {
static void UBidiRuns_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::Bidirectional::Run_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Byte_typeof()->Array();
}

uClassType* UBidiRuns_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Bidirectional.Implementation.UBidiRuns", options);
    type->fp_build_ = UBidiRuns_build;
    return type;
}

// private static void Close(Uno.IntPtr ubidi) :82
void UBidiRuns__Close_fn(void** ubidi)
{
    UBidiRuns::Close(*ubidi);
}

// private static Fuse.Text.Implementation.ICU.ErrorCode GetLevels(Uno.IntPtr ubidi, byte[] outLevels, int length) :65
void UBidiRuns__GetLevels_fn(void** ubidi, uArray* outLevels, int32_t* length, int32_t* __retval)
{
    *__retval = UBidiRuns::GetLevels(*ubidi, outLevels, *length);
}

// private static Uno.Collections.List<Fuse.Text.Bidirectional.Run> GetLevels(Uno.IntPtr ubidi, Fuse.Text.Substring text) :32
void UBidiRuns__GetLevels1_fn(void** ubidi, ::g::Fuse::Text::Substring* text, ::g::Uno::Collections::List** __retval)
{
    *__retval = UBidiRuns::GetLevels1(*ubidi, text);
}

// public static Uno.Collections.List<Fuse.Text.Bidirectional.Run> GetLogical(Fuse.Text.Substring text) :13
void UBidiRuns__GetLogical_fn(::g::Fuse::Text::Substring* text, ::g::Uno::Collections::List** __retval)
{
    *__retval = UBidiRuns::GetLogical(text);
}

// private static Uno.IntPtr Open() :76
void UBidiRuns__Open_fn(void** __retval)
{
    *__retval = UBidiRuns::Open();
}

// private static void SetPara(Uno.IntPtr ubidi, Fuse.Text.Substring text) :27
void UBidiRuns__SetPara_fn(void** ubidi, ::g::Fuse::Text::Substring* text)
{
    UBidiRuns::SetPara(*ubidi, text);
}

// private static Fuse.Text.Implementation.ICU.ErrorCode SetPara_Raw(Uno.IntPtr ubidi, string text, int offset, int length) :57
void UBidiRuns__SetPara_Raw_fn(void** ubidi, uString* text, int32_t* offset, int32_t* length, int32_t* __retval)
{
    *__retval = UBidiRuns::SetPara_Raw(*ubidi, text, *offset, *length);
}

// private static void Close(Uno.IntPtr ubidi) [static] :82
void UBidiRuns::Close(void* ubidi)
{
    return ubidi_close((UBiDi*)ubidi);
}

// private static Fuse.Text.Implementation.ICU.ErrorCode GetLevels(Uno.IntPtr ubidi, byte[] outLevels, int length) [static] :65
int32_t UBidiRuns::GetLevels(void* ubidi, uArray* outLevels, int32_t length)
{
    return [] (void* ubidi, uint8_t* outLevels, int length) -> int
    {
        UErrorCode errorCode = U_ZERO_ERROR;
        const UBiDiLevel* levels = ubidi_getLevels((UBiDi*)ubidi, &errorCode);
        if (U_FAILURE(errorCode))
        	return (int)errorCode;
        memcpy(outLevels, levels, length);
        return (int)errorCode;
    } (ubidi, (uint8_t*)(outLevels == nullptr ? nullptr : outLevels->Ptr()), length);
}

// private static Uno.Collections.List<Fuse.Text.Bidirectional.Run> GetLevels(Uno.IntPtr ubidi, Fuse.Text.Substring text) [static] :32
::g::Uno::Collections::List* UBidiRuns::GetLevels1(void* ubidi, ::g::Fuse::Text::Substring* text)
{
    uStackFrame __("Fuse.Text.Bidirectional.Implementation.UBidiRuns", "GetLevels(Uno.IntPtr,Fuse.Text.Substring)");
    int32_t length = uPtr(text)->Length;

    if (length == 0)
        return (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Text.Bidirectional.Run>*/]);

    uArray* levels = uArray::New(::TYPES[1/*byte[]*/], length);
    ::g::Fuse::Text::Implementation::ICU::CheckError(UBidiRuns::GetLevels(ubidi, levels, length));
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Text.Bidirectional.Run>*/]);
    int32_t start = 0;
    uint8_t lastLevel = levels->Item<uint8_t>(0);

    for (int32_t i = 1; i < length; ++i)
    {
        uint8_t currentLevel = uPtr(levels)->Item<uint8_t>(i);

        if (currentLevel != lastLevel)
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Fuse::Text::Bidirectional::Run__New1(uPtr(text)->GetSubstring1(start, i - start), (int32_t)lastLevel)));
            start = i;
            lastLevel = currentLevel;
        }
    }

    ::g::Uno::Collections::List__Add_fn(result, uCRef(::g::Fuse::Text::Bidirectional::Run__New1(text->GetSubstring1(start, length - start), (int32_t)lastLevel)));
    return result;
}

// public static Uno.Collections.List<Fuse.Text.Bidirectional.Run> GetLogical(Fuse.Text.Substring text) [static] :13
::g::Uno::Collections::List* UBidiRuns::GetLogical(::g::Fuse::Text::Substring* text)
{
    uStackFrame __("Fuse.Text.Bidirectional.Implementation.UBidiRuns", "GetLogical(Fuse.Text.Substring)");
    void* ubidi = UBidiRuns::Open();

    {
        try
        {
            {
                UBidiRuns::SetPara(ubidi, text);
                ::g::Uno::Collections::List* __uno_retval = UBidiRuns::GetLevels1(ubidi, text);
                UBidiRuns::Close(ubidi);
                return __uno_retval;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                UBidiRuns::Close(ubidi);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            UBidiRuns::Close(ubidi);
        }
        __after_finally_0:;
    }
}

// private static Uno.IntPtr Open() [static] :76
void* UBidiRuns::Open()
{
    return ubidi_open();
}

// private static void SetPara(Uno.IntPtr ubidi, Fuse.Text.Substring text) [static] :27
void UBidiRuns::SetPara(void* ubidi, ::g::Fuse::Text::Substring* text)
{
    uStackFrame __("Fuse.Text.Bidirectional.Implementation.UBidiRuns", "SetPara(Uno.IntPtr,Fuse.Text.Substring)");
    ::g::Fuse::Text::Implementation::ICU::CheckError(UBidiRuns::SetPara_Raw(ubidi, uPtr(text)->_parent, uPtr(text)->_start, uPtr(text)->Length));
}

// private static Fuse.Text.Implementation.ICU.ErrorCode SetPara_Raw(Uno.IntPtr ubidi, string text, int offset, int length) [static] :57
int32_t UBidiRuns::SetPara_Raw(void* ubidi, uString* text, int32_t offset, int32_t length)
{
    return [] (void* ubidi, const char16_t* text, int offset, int length) -> int
    {
        UErrorCode errorCode = U_ZERO_ERROR;
        ubidi_setPara((UBiDi*)ubidi, (const ::UChar*)(text + offset), length, UBIDI_DEFAULT_LTR, NULL, &errorCode);
        return (int)errorCode;
    } (ubidi, (char16_t*)(text == nullptr ? nullptr : text->Ptr()), offset, length);
}
// }

}}}}} // ::g::Fuse::Text::Bidirectional::Implementation
