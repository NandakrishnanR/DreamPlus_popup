// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Bytecode/Statements.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Optional1-1.h>
#include <Outracks.Simulator.Bytecode.Statement.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct NoOperation;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class NoOperation :6
// {
::g::Outracks::Simulator::Bytecode::Statement_type* NoOperation_typeof();
void NoOperation__ctor_1_fn(NoOperation* __this, ::g::Outracks::Optional1<uStrong<uString*> >* description);
void NoOperation__New1_fn(::g::Outracks::Optional1<uStrong<uString*> >* description, NoOperation** __retval);
void NoOperation__Read1_fn(::g::System::IO::BinaryReader* reader, NoOperation** __retval);
void NoOperation__get_StatementId_fn(NoOperation* __this, char16_t* __retval);
void NoOperation__ToString_fn(NoOperation* __this, uString** __retval);
void NoOperation__WriteStatement_fn(NoOperation* __this, ::g::System::IO::BinaryWriter* writer);

struct NoOperation : ::g::Outracks::Simulator::Bytecode::Statement
{
    uTField Description() { return __type->Field(this, 0); }

    void ctor_1(::g::Outracks::Optional1<uStrong<uString*> > description);
    static NoOperation* New1(::g::Outracks::Optional1<uStrong<uString*> > description);
    static NoOperation* Read1(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
