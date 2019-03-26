// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Bytecode/Exceptions.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct InvalidDataException;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class InvalidDataException :6
// {
::g::Uno::Exception_type* InvalidDataException_typeof();
void InvalidDataException__ctor_3_fn(InvalidDataException* __this);
void InvalidDataException__New4_fn(InvalidDataException** __retval);

struct InvalidDataException : ::g::Uno::Exception
{
    void ctor_3();
    static InvalidDataException* New4();
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
