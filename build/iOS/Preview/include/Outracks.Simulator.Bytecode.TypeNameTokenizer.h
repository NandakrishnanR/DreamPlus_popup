// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Bytecode/TypeNameTokenizer.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeNameTokenizer;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class TypeNameTokenizer :6
// {
uType* TypeNameTokenizer_typeof();
void TypeNameTokenizer__ctor__fn(TypeNameTokenizer* __this, uString* name);
void TypeNameTokenizer__IsSpecialChar_fn(char16_t* c, bool* __retval);
void TypeNameTokenizer__New1_fn(uString* name, TypeNameTokenizer** __retval);
void TypeNameTokenizer__ReadName_fn(TypeNameTokenizer* __this);
void TypeNameTokenizer__Tokenize_fn(TypeNameTokenizer* __this);
void TypeNameTokenizer__Tokenize1_fn(uString* name, ::g::Uno::Collections::List** __retval);

struct TypeNameTokenizer : uObject
{
    uStrong<uString*> _name;
    int32_t _idx;
    uStrong< ::g::Uno::Collections::List*> _tokens;

    void ctor_(uString* name);
    void ReadName();
    void Tokenize();
    static bool IsSpecialChar(char16_t c);
    static TypeNameTokenizer* New1(uString* name);
    static ::g::Uno::Collections::List* Tokenize1(uString* name);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
