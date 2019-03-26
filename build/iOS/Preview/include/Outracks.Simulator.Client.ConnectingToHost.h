// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Client.Connecting.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct ConnectingToHost;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct State;}}}}
namespace g{namespace Outracks{namespace Simulator{struct Task;}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal sealed class ConnectingToHost :100
// {
::g::Outracks::Simulator::Client::State_type* ConnectingToHost_typeof();
void ConnectingToHost__ctor_2_fn(ConnectingToHost* __this, uObject* simulatorEndpoints);
void ConnectingToHost__New1_fn(uObject* simulatorEndpoints, ConnectingToHost** __retval);
void ConnectingToHost__OnEnterState_fn(ConnectingToHost* __this, ::g::Outracks::Simulator::Client::State** __retval);
void ConnectingToHost__OnUpdate_fn(ConnectingToHost* __this, ::g::Outracks::Simulator::Client::State** __retval);

struct ConnectingToHost : ::g::Outracks::Simulator::Client::Connecting
{
    uStrong<uArray*> _simulatorEndpoints;
    uStrong< ::g::Outracks::Simulator::Task*> _connecting;

    void ctor_2(uObject* simulatorEndpoints);
    static ConnectingToHost* New1(uObject* simulatorEndpoints);
};
// }

}}}} // ::g::Outracks::Simulator::Client
