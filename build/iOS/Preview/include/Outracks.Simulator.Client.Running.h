// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Client.Connected.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct Running;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct State;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct UserAppState;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct BytecodeGenerated;}}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal sealed class Running :341
// {
::g::Outracks::Simulator::Client::Connected_type* Running_typeof();
void Running__ctor_2_fn(Running* __this, uObject* client, ::g::Outracks::Simulator::Client::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* runningReify);
void Running__New1_fn(uObject* client, ::g::Outracks::Simulator::Client::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* runningReify, Running** __retval);
void Running__OnEnterState_fn(Running* __this, ::g::Outracks::Simulator::Client::State** __retval);
void Running__OnFaulted_fn(Running* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval);
void Running__OnLeaveState_fn(Running* __this);
void Running__OnUpdate_fn(Running* __this, ::g::Outracks::Simulator::Client::State** __retval);
void Running__QueryDensity_fn(float* __retval);

struct Running : ::g::Outracks::Simulator::Client::Connected
{
    uStrong< ::g::Outracks::Simulator::Protocol::BytecodeGenerated*> _runningReify;
    float _zoomWhenRooted;
    uStrong< ::g::Outracks::Simulator::Client::UserAppState*> _userApp;

    void ctor_2(uObject* client, ::g::Outracks::Simulator::Client::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* runningReify);
    static Running* New1(uObject* client, ::g::Outracks::Simulator::Client::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* runningReify);
    static float QueryDensity();
};
// }

}}}} // ::g::Outracks::Simulator::Client
