// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Bytecode/Exceptions.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct NonExhaustiveMatch;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class NonExhaustiveMatch :11
// {
::g::Uno::Exception_type* NonExhaustiveMatch_typeof();
void NonExhaustiveMatch__ctor_3_fn(NonExhaustiveMatch* __this);
void NonExhaustiveMatch__New4_fn(NonExhaustiveMatch** __retval);

struct NonExhaustiveMatch : ::g::Uno::Exception
{
    void ctor_3();
    static NonExhaustiveMatch* New4();
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
