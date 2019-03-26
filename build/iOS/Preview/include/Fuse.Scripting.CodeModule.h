// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.9.0/FileModule.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct CodeModule;}}}
namespace g{namespace Uno{namespace IO{struct Bundle;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class CodeModule :8
// {
::g::Fuse::Scripting::ScriptModule_type* CodeModule_typeof();
void CodeModule__ctor_2_fn(CodeModule* __this, ::g::Uno::IO::Bundle* bundle, uString* fileName, uString* code, int32_t* lineNumberOffset);
void CodeModule__New2_fn(::g::Uno::IO::Bundle* bundle, uString* fileName, uString* code, int32_t* lineNumberOffset, CodeModule** __retval);

struct CodeModule : ::g::Fuse::Scripting::ScriptModule
{
    void ctor_2(::g::Uno::IO::Bundle* bundle, uString* fileName, uString* code, int32_t lineNumberOffset);
    static CodeModule* New2(::g::Uno::IO::Bundle* bundle, uString* fileName, uString* code, int32_t lineNumberOffset);
};
// }

}}} // ::g::Fuse::Scripting
