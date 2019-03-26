// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Platform/TextInputEventArgs.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Uno{namespace Platform{struct TextInputEventArgs;}}}

namespace g{
namespace Uno{
namespace Platform{

// public sealed class TextInputEventArgs :6
// {
uType* TextInputEventArgs_typeof();
void TextInputEventArgs__get_Handled_fn(TextInputEventArgs* __this, bool* __retval);
void TextInputEventArgs__set_Handled_fn(TextInputEventArgs* __this, bool* value);
void TextInputEventArgs__get_Text_fn(TextInputEventArgs* __this, uString** __retval);
void TextInputEventArgs__set_Text_fn(TextInputEventArgs* __this, uString* value);

struct TextInputEventArgs : ::g::Uno::EventArgs
{
    bool _Handled;
    uStrong<uString*> _Text;

    bool Handled();
    void Handled(bool value);
    uString* Text();
    void Text(uString* value);
};
// }

}}} // ::g::Uno::Platform
