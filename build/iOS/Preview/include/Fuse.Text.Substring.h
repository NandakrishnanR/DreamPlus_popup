// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Substring.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Char.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{struct Substring;}}}

namespace g{
namespace Fuse{
namespace Text{

// public sealed class Substring :8
// {
struct Substring_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

Substring_type* Substring_typeof();
void Substring__ctor__fn(Substring* __this, uString* parent);
void Substring__ctor_1_fn(Substring* __this, uString* parent, int32_t* start);
void Substring__ctor_2_fn(Substring* __this, uString* parent, int32_t* start, int32_t* length);
void Substring__Equals2_fn(Substring* __this, Substring* s, bool* __retval);
void Substring__Equals_fn(Substring* __this, uObject* o, bool* __retval);
void Substring__GetEnumerator_fn(Substring* __this, uObject** __retval);
void Substring__GetHashCode_fn(Substring* __this, int32_t* __retval);
void Substring__GetSubstring_fn(Substring* __this, int32_t* start, Substring** __retval);
void Substring__GetSubstring1_fn(Substring* __this, int32_t* start, int32_t* length, Substring** __retval);
void Substring__get_Item_fn(Substring* __this, int32_t* index, char16_t* __retval);
void Substring__get_Lines_fn(Substring* __this, uObject** __retval);
void Substring__New1_fn(uString* parent, Substring** __retval);
void Substring__New2_fn(uString* parent, int32_t* start, Substring** __retval);
void Substring__New3_fn(uString* parent, int32_t* start, int32_t* length, Substring** __retval);
void Substring__ToString_fn(Substring* __this, uString** __retval);
void Substring__TrimLeadingNewline_fn(Substring* __this, Substring** __retval);
void Substring__TrimTrailingNewline_fn(Substring* __this, Substring** __retval);

struct Substring : uObject
{
    uStrong<uString*> _parent;
    int32_t _start;
    int32_t Length;

    void ctor_(uString* parent);
    void ctor_1(uString* parent, int32_t start);
    void ctor_2(uString* parent, int32_t start, int32_t length);
    bool Equals2(Substring* s);
    uObject* GetEnumerator();
    Substring* GetSubstring(int32_t start);
    Substring* GetSubstring1(int32_t start, int32_t length);
    char16_t Item(int32_t index);
    uObject* Lines();
    Substring* TrimLeadingNewline();
    Substring* TrimTrailingNewline();
    static Substring* New1(uString* parent);
    static Substring* New2(uString* parent, int32_t start);
    static Substring* New3(uString* parent, int32_t start, int32_t length);
};
// }

}}} // ::g::Fuse::Text
