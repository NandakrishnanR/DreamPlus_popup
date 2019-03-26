// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Substring.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.Substring.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{struct Substring__LineEnumerator;}}}

namespace g{
namespace Fuse{
namespace Text{

// private sealed class Substring.LineEnumerator :177
// {
struct Substring__LineEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

Substring__LineEnumerator_type* Substring__LineEnumerator_typeof();
void Substring__LineEnumerator__ctor__fn(Substring__LineEnumerator* __this, ::g::Fuse::Text::Substring* text);
void Substring__LineEnumerator__get_Current_fn(Substring__LineEnumerator* __this, ::g::Fuse::Text::Substring** __retval);
void Substring__LineEnumerator__Dispose_fn(Substring__LineEnumerator* __this);
void Substring__LineEnumerator__MoveNext_fn(Substring__LineEnumerator* __this, bool* __retval);
void Substring__LineEnumerator__New1_fn(::g::Fuse::Text::Substring* text, Substring__LineEnumerator** __retval);
void Substring__LineEnumerator__Reset_fn(Substring__LineEnumerator* __this);

struct Substring__LineEnumerator : uObject
{
    uStrong< ::g::Fuse::Text::Substring*> _text;
    int32_t _lineStart;
    int32_t _lineLength;
    int32_t _skip;

    void ctor_(::g::Fuse::Text::Substring* text);
    ::g::Fuse::Text::Substring* Current();
    void Dispose();
    bool MoveNext();
    void Reset();
    static Substring__LineEnumerator* New1(::g::Fuse::Text::Substring* text);
};
// }

}}} // ::g::Fuse::Text
