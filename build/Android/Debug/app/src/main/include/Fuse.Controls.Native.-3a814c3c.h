// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/Android/TextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-9abb3393.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TextInput;}}}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class TextInput :27
// {
::g::Fuse::Controls::Native::Android::TextView_type* TextInput_typeof();
void TextInput__Dispose_fn(TextInput* __this);
void TextInput__Measure_fn(TextInput* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval);
void TextInput__Measure2_fn(::g::Java::Object* handle, int32_t* w, int32_t* h, bool* hasX, bool* hasY, uArray* measuredSize);
void TextInput__OnEditorAction_fn(TextInput* __this, int32_t* actionCode, bool* __retval);
void TextInput__OnTextChanged_fn(TextInput* __this, uString* value);

struct TextInput : ::g::Fuse::Controls::Native::Android::TextView
{
    uStrong<uObject*> _host;
    uStrong<uObject*> _focusEvent;
    bool _isMultiline;

    bool OnEditorAction(int32_t actionCode);
    void OnTextChanged(uString* value);
    static void Measure2(::g::Java::Object* handle, int32_t w, int32_t h, bool hasX, bool hasY, uArray* measuredSize);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
