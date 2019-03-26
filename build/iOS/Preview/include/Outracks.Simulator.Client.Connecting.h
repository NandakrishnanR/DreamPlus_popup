// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Client.State.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct Connecting;}}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal abstract class Connecting :41
// {
::g::Outracks::Simulator::Client::State_type* Connecting_typeof();
void Connecting__ctor_1_fn(Connecting* __this);
void Connecting__OnException_fn(Connecting* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval);

struct Connecting : ::g::Outracks::Simulator::Client::State
{
    void ctor_1();
};
// }

}}}} // ::g::Outracks::Simulator::Client
