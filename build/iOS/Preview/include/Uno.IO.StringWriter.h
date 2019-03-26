// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/StringWriter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.TextWriter.h>
namespace g{namespace Uno{namespace IO{struct StringWriter;}}}
namespace g{namespace Uno{namespace Text{struct StringBuilder;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class StringWriter :7
// {
::g::Uno::IO::TextWriter_type* StringWriter_typeof();
void StringWriter__ctor_1_fn(StringWriter* __this);
void StringWriter__Close_fn(StringWriter* __this);
void StringWriter__Dispose1_fn(StringWriter* __this, bool* disposing);
void StringWriter__New1_fn(StringWriter** __retval);
void StringWriter__ToString_fn(StringWriter* __this, uString** __retval);
void StringWriter__Write1_fn(StringWriter* __this, char16_t* value);
void StringWriter__Write3_fn(StringWriter* __this, uArray* buffer, int32_t* index, int32_t* count);
void StringWriter__WriteBuffer_fn(StringWriter* __this);

struct StringWriter : ::g::Uno::IO::TextWriter
{
    bool _open;
    uStrong< ::g::Uno::Text::StringBuilder*> _stringBuilder;
    uStrong<uArray*> _buffer;
    int32_t _index;

    void ctor_1();
    void WriteBuffer();
    static StringWriter* New1();
};
// }

}}} // ::g::Uno::IO
