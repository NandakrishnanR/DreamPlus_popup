// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Client.ShowingModalDialog.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct DialogButton;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct Faulted;}}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal sealed class Faulted :430
// {
::g::Outracks::Simulator::Client::State_type* Faulted_typeof();
void Faulted__ctor_2_fn(Faulted* __this, bool* isOnline, ::g::Uno::Exception* exception, uArray* buttons);
void Faulted__New2_fn(bool* isOnline, ::g::Uno::Exception* exception, uArray* buttons, Faulted** __retval);

struct Faulted : ::g::Outracks::Simulator::Client::ShowingModalDialog
{
    void ctor_2(bool isOnline, ::g::Uno::Exception* exception, uArray* buttons);
    static Faulted* New2(bool isOnline, ::g::Uno::Exception* exception, uArray* buttons);
};
// }

}}}} // ::g::Outracks::Simulator::Client
