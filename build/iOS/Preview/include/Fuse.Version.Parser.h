// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Version.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Version__Parser;}}
namespace g{namespace Uno{namespace IO{struct TextReader;}}}
namespace g{namespace Uno{struct Int3;}}

namespace g{
namespace Fuse{

// internal sealed class Version.Parser :10
// {
uType* Version__Parser_typeof();
void Version__Parser__ctor__fn(Version__Parser* __this, ::g::Uno::IO::TextReader* textReader);
void Version__Parser__Consume_fn(Version__Parser* __this, char16_t* __retval);
void Version__Parser__Expect_fn(Version__Parser* __this, char16_t* ch);
void Version__Parser__New1_fn(::g::Uno::IO::TextReader* textReader, Version__Parser** __retval);
void Version__Parser__Parse_fn(uString* str, ::g::Uno::Int3* __retval);
void Version__Parser__ParseInt_fn(Version__Parser* __this, int32_t* __retval);
void Version__Parser__ParseVersion_fn(Version__Parser* __this, ::g::Uno::Int3* __retval);
void Version__Parser__Peek_fn(Version__Parser* __this, char16_t* __retval);

struct Version__Parser : uObject
{
    uStrong< ::g::Uno::IO::TextReader*> _textReader;

    void ctor_(::g::Uno::IO::TextReader* textReader);
    char16_t Consume();
    void Expect(char16_t ch);
    int32_t ParseInt();
    ::g::Uno::Int3 ParseVersion();
    char16_t Peek();
    static Version__Parser* New1(::g::Uno::IO::TextReader* textReader);
    static ::g::Uno::Int3 Parse(uString* str);
};
// }

}} // ::g::Fuse
