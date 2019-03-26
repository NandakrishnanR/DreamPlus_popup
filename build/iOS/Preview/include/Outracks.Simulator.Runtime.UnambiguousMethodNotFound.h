// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/IReflection.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct UnambiguousMethodNotFound;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UnambiguousMethodNotFound :31
// {
::g::Uno::Exception_type* UnambiguousMethodNotFound_typeof();
void UnambiguousMethodNotFound__ctor_3_fn(UnambiguousMethodNotFound* __this, uString* type, uString* member);
void UnambiguousMethodNotFound__New4_fn(uString* type, uString* member, UnambiguousMethodNotFound** __retval);

struct UnambiguousMethodNotFound : ::g::Uno::Exception
{
    uStrong<uString*> Type;
    uStrong<uString*> Member;

    void ctor_3(uString* type, uString* member);
    static UnambiguousMethodNotFound* New4(uString* type, uString* member);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
