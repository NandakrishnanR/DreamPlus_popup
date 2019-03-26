// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/VarArgFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.SimpleVarArgFunction.h>
namespace g{namespace Fuse{namespace Reactive{struct NamedFunctionCall;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class NamedFunctionCall :176
// {
::g::Fuse::Reactive::SimpleVarArgFunction_type* NamedFunctionCall_typeof();
void NamedFunctionCall__ctor_3_fn(NamedFunctionCall* __this, uString* name);
void NamedFunctionCall__get_Name_fn(NamedFunctionCall* __this, uString** __retval);
void NamedFunctionCall__set_Name_fn(NamedFunctionCall* __this, uString* value);
void NamedFunctionCall__New1_fn(uString* name, NamedFunctionCall** __retval);

struct NamedFunctionCall : ::g::Fuse::Reactive::SimpleVarArgFunction
{
    uStrong<uString*> _Name;

    void ctor_3(uString* name);
    uString* Name();
    void Name(uString* value);
    static NamedFunctionCall* New1(uString* name);
};
// }

}}} // ::g::Fuse::Reactive
