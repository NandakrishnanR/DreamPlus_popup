// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.9.0/Triggers/TextInputActionTriggered.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextInputActionArgs;}}}
namespace g{namespace Fuse{namespace Triggers{struct TextInputActionTriggered;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class TextInputActionTriggered :20
// {
::g::Fuse::Triggers::Trigger_type* TextInputActionTriggered_typeof();
void TextInputActionTriggered__ctor_5_fn(TextInputActionTriggered* __this);
void TextInputActionTriggered__New2_fn(TextInputActionTriggered** __retval);
void TextInputActionTriggered__OnActionTriggered_fn(TextInputActionTriggered* __this, uObject* s, ::g::Fuse::Controls::TextInputActionArgs* args);
void TextInputActionTriggered__OnRooted_fn(TextInputActionTriggered* __this);
void TextInputActionTriggered__OnUnrooted_fn(TextInputActionTriggered* __this);
void TextInputActionTriggered__get_Type_fn(TextInputActionTriggered* __this, int32_t* __retval);
void TextInputActionTriggered__set_Type_fn(TextInputActionTriggered* __this, int32_t* value);

struct TextInputActionTriggered : ::g::Fuse::Triggers::Trigger
{
    int32_t _type;
    uStrong<uObject*> _textEdit;

    void ctor_5();
    void OnActionTriggered(uObject* s, ::g::Fuse::Controls::TextInputActionArgs* args);
    int32_t Type();
    void Type(int32_t value);
    static TextInputActionTriggered* New2();
};
// }

}}} // ::g::Fuse::Triggers
