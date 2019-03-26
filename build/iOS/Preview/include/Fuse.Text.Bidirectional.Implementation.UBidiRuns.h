// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/UBidi.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{namespace Implementation{struct UBidiRuns;}}}}}
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{struct Run;}}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Bidirectional{
namespace Implementation{

// internal static extern class UBidiRuns :11
// {
uClassType* UBidiRuns_typeof();
void UBidiRuns__Close_fn(void** ubidi);
void UBidiRuns__GetLevels_fn(void** ubidi, uArray* outLevels, int32_t* length, int32_t* __retval);
void UBidiRuns__GetLevels1_fn(void** ubidi, ::g::Fuse::Text::Substring* text, ::g::Uno::Collections::List** __retval);
void UBidiRuns__GetLogical_fn(::g::Fuse::Text::Substring* text, ::g::Uno::Collections::List** __retval);
void UBidiRuns__Open_fn(void** __retval);
void UBidiRuns__SetPara_fn(void** ubidi, ::g::Fuse::Text::Substring* text);
void UBidiRuns__SetPara_Raw_fn(void** ubidi, uString* text, int32_t* offset, int32_t* length, int32_t* __retval);

struct UBidiRuns : uObject
{
    static void Close(void* ubidi);
    static int32_t GetLevels(void* ubidi, uArray* outLevels, int32_t length);
    static ::g::Uno::Collections::List* GetLevels1(void* ubidi, ::g::Fuse::Text::Substring* text);
    static ::g::Uno::Collections::List* GetLogical(::g::Fuse::Text::Substring* text);
    static void* Open();
    static void SetPara(void* ubidi, ::g::Fuse::Text::Substring* text);
    static int32_t SetPara_Raw(void* ubidi, uString* text, int32_t offset, int32_t length);
};
// }

}}}}} // ::g::Fuse::Text::Bidirectional::Implementation
