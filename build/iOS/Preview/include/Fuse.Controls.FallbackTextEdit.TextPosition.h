// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.9.0/TextControls/FallbackTextEdit/TextPosition.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextPosition;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// internal sealed class TextPosition :6
// {
uType* TextPosition_typeof();
void TextPosition__ctor__fn(TextPosition* __this, int32_t* l, int32_t* c);
void TextPosition__Equals_fn(TextPosition* __this, uObject* obj, bool* __retval);
void TextPosition__GetHashCode_fn(TextPosition* __this, int32_t* __retval);
void TextPosition__Max_fn(TextPosition* a, TextPosition* b, TextPosition** __retval);
void TextPosition__Min_fn(TextPosition* a, TextPosition* b, TextPosition** __retval);
void TextPosition__New1_fn(int32_t* l, int32_t* c, TextPosition** __retval);
void TextPosition__op_Equality_fn(TextPosition* a, TextPosition* b, bool* __retval);
void TextPosition__op_GreaterThan_fn(TextPosition* a, TextPosition* b, bool* __retval);
void TextPosition__op_GreaterThanOrEqual_fn(TextPosition* a, TextPosition* b, bool* __retval);
void TextPosition__op_Inequality_fn(TextPosition* a, TextPosition* b, bool* __retval);
void TextPosition__op_LessThan_fn(TextPosition* a, TextPosition* b, bool* __retval);
void TextPosition__op_LessThanOrEqual_fn(TextPosition* a, TextPosition* b, bool* __retval);

struct TextPosition : uObject
{
    static uSStrong<TextPosition*> Default_;
    static uSStrong<TextPosition*>& Default() { return TextPosition_typeof()->Init(), Default_; }
    int32_t Line;
    int32_t Char;

    void ctor_(int32_t l, int32_t c);
    static TextPosition* Max(TextPosition* a, TextPosition* b);
    static TextPosition* Min(TextPosition* a, TextPosition* b);
    static TextPosition* New1(int32_t l, int32_t c);
    static bool op_Equality(TextPosition* a, TextPosition* b);
    static bool op_GreaterThan(TextPosition* a, TextPosition* b);
    static bool op_GreaterThanOrEqual(TextPosition* a, TextPosition* b);
    static bool op_Inequality(TextPosition* a, TextPosition* b);
    static bool op_LessThan(TextPosition* a, TextPosition* b);
    static bool op_LessThanOrEqual(TextPosition* a, TextPosition* b);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
