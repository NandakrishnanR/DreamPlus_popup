// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Client.State.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct Uninitialized;}}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal sealed class Uninitialized :23
// {
::g::Outracks::Simulator::Client::State_type* Uninitialized_typeof();
void Uninitialized__ctor_1_fn(Uninitialized* __this);
void Uninitialized__New1_fn(Uninitialized** __retval);
void Uninitialized__OnException_fn(Uninitialized* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval);
void Uninitialized__OnUpdate_fn(Uninitialized* __this, ::g::Outracks::Simulator::Client::State** __retval);

struct Uninitialized : ::g::Outracks::Simulator::Client::State
{
    void ctor_1();
    static Uninitialized* New1();
};
// }

}}}} // ::g::Outracks::Simulator::Client
