// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Client.Connected.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct Idle;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct State;}}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal sealed class Idle :268
// {
::g::Outracks::Simulator::Client::Connected_type* Idle_typeof();
void Idle__ctor_2_fn(Idle* __this, uObject* client);
void Idle__New1_fn(uObject* client, Idle** __retval);
void Idle__OnEnterState_fn(Idle* __this, ::g::Outracks::Simulator::Client::State** __retval);
void Idle__OnFaulted_fn(Idle* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval);

struct Idle : ::g::Outracks::Simulator::Client::Connected
{
    void ctor_2(uObject* client);
    static Idle* New1(uObject* client);
};
// }

}}}} // ::g::Outracks::Simulator::Client
