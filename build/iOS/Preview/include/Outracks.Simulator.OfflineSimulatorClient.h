// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/SimulatorClient.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.ISimulatorClient.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct ConcurrentQueue;}}}
namespace g{namespace Outracks{namespace Simulator{struct OfflineSimulatorClient;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class OfflineSimulatorClient :25
// {
struct OfflineSimulatorClient_type : uType
{
    ::g::Outracks::Simulator::ISimulatorClient interface0;
    ::g::Uno::IDisposable interface1;
};

OfflineSimulatorClient_type* OfflineSimulatorClient_typeof();
void OfflineSimulatorClient__ctor__fn(OfflineSimulatorClient* __this, uArray* initialMessages);
void OfflineSimulatorClient__Dispose_fn(OfflineSimulatorClient* __this);
void OfflineSimulatorClient__get_IncommingMessages_fn(OfflineSimulatorClient* __this, ::g::Outracks::Simulator::ConcurrentQueue** __retval);
void OfflineSimulatorClient__get_IsOnline_fn(OfflineSimulatorClient* __this, bool* __retval);
void OfflineSimulatorClient__New1_fn(uArray* initialMessages, OfflineSimulatorClient** __retval);
void OfflineSimulatorClient__Send_fn(OfflineSimulatorClient* __this, uObject* message);

struct OfflineSimulatorClient : uObject
{
    uStrong< ::g::Outracks::Simulator::ConcurrentQueue*> _messagesFromClient;
    uStrong< ::g::Outracks::Simulator::ConcurrentQueue*> _messagesToClient;

    void ctor_(uArray* initialMessages);
    void Dispose();
    ::g::Outracks::Simulator::ConcurrentQueue* IncommingMessages();
    bool IsOnline();
    void Send(uObject* message);
    static OfflineSimulatorClient* New1(uArray* initialMessages);
};
// }

}}} // ::g::Outracks::Simulator
