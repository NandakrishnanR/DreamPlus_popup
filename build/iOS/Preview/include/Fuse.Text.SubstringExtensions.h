// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Substring.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{struct Substring;}}}
namespace g{namespace Fuse{namespace Text{struct SubstringExtensions;}}}

namespace g{
namespace Fuse{
namespace Text{

// internal static class SubstringExtensions :253
// {
uClassType* SubstringExtensions_typeof();
void SubstringExtensions__CharStart_fn(::g::Fuse::Text::Substring* s, int32_t* i, int32_t* __retval);
void SubstringExtensions__CharStart1_fn(uString* s, int32_t* i, int32_t* __retval);
void SubstringExtensions__DeleteAt_fn(uString* s, int32_t* index, uString** __retval);
void SubstringExtensions__DeleteSpan_fn(uString* s, int32_t* start, int32_t* end, uString** __retval);
void SubstringExtensions__InclusiveRange_fn(::g::Fuse::Text::Substring* s, int32_t* start, int32_t* end, ::g::Fuse::Text::Substring** __retval);
void SubstringExtensions__IsLeadingSurrogate_fn(char16_t* c, bool* __retval);
void SubstringExtensions__IsTrailingSurrogate_fn(char16_t* c, bool* __retval);
void SubstringExtensions__NextCharIndex_fn(uString* s, int32_t* i, int32_t* __retval);
void SubstringExtensions__PrevCharIndex_fn(uString* s, int32_t* i, int32_t* __retval);
void SubstringExtensions__SafeInsert_fn(uString* s, int32_t* index, uString* insert, uString** __retval);
void SubstringExtensions__SafeSubstring_fn(uString* s, int32_t* start, uString** __retval);
void SubstringExtensions__SafeSubstring1_fn(uString* s, int32_t* start, int32_t* length, uString** __retval);
void SubstringExtensions__TrimLine_fn(::g::Fuse::Text::Substring* line, ::g::Fuse::Text::Substring** __retval);
void SubstringExtensions__TrimmedLines_fn(::g::Fuse::Text::Substring* str, uObject** __retval);

struct SubstringExtensions : uObject
{
    static int32_t CharStart(::g::Fuse::Text::Substring* s, int32_t i);
    static int32_t CharStart1(uString* s, int32_t i);
    static uString* DeleteAt(uString* s, int32_t* index);
    static uString* DeleteSpan(uString* s, int32_t start, int32_t end);
    static ::g::Fuse::Text::Substring* InclusiveRange(::g::Fuse::Text::Substring* s, int32_t start, int32_t end);
    static bool IsLeadingSurrogate(char16_t c);
    static bool IsTrailingSurrogate(char16_t c);
    static int32_t NextCharIndex(uString* s, int32_t i);
    static int32_t PrevCharIndex(uString* s, int32_t i);
    static uString* SafeInsert(uString* s, int32_t index, uString* insert);
    static uString* SafeSubstring(uString* s, int32_t start);
    static uString* SafeSubstring1(uString* s, int32_t start, int32_t length);
    static ::g::Fuse::Text::Substring* TrimLine(::g::Fuse::Text::Substring* line);
    static uObject* TrimmedLines(::g::Fuse::Text::Substring* str);
};
// }

}}} // ::g::Fuse::Text
