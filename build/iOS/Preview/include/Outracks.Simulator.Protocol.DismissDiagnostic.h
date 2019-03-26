// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Messages/Diagnostic.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct DismissDiagnostic;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class DismissDiagnostic :121
// {
struct DismissDiagnostic_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

DismissDiagnostic_type* DismissDiagnostic_typeof();
void DismissDiagnostic__ctor__fn(DismissDiagnostic* __this, uString* deviceId, uString* deviceName, int32_t* diagnosticId);
void DismissDiagnostic__get_DeviceId_fn(DismissDiagnostic* __this, uString** __retval);
void DismissDiagnostic__set_DeviceId_fn(DismissDiagnostic* __this, uString* value);
void DismissDiagnostic__get_DeviceName_fn(DismissDiagnostic* __this, uString** __retval);
void DismissDiagnostic__set_DeviceName_fn(DismissDiagnostic* __this, uString* value);
void DismissDiagnostic__get_DiagnosticId_fn(DismissDiagnostic* __this, int32_t* __retval);
void DismissDiagnostic__set_DiagnosticId_fn(DismissDiagnostic* __this, int32_t* value);
void DismissDiagnostic__New1_fn(uString* deviceId, uString* deviceName, int32_t* diagnosticId, DismissDiagnostic** __retval);
void DismissDiagnostic__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, DismissDiagnostic** __retval);
void DismissDiagnostic__get_Type_fn(DismissDiagnostic* __this, uString** __retval);
void DismissDiagnostic__WriteDataTo_fn(DismissDiagnostic* __this, ::g::System::IO::BinaryWriter* writer);

struct DismissDiagnostic : uObject
{
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return DismissDiagnostic_typeof()->Init(), MessageType_; }
    uStrong<uString*> _DeviceId;
    uStrong<uString*> _DeviceName;
    int32_t _DiagnosticId;

    void ctor_(uString* deviceId, uString* deviceName, int32_t diagnosticId);
    uString* DeviceId();
    void DeviceId(uString* value);
    uString* DeviceName();
    void DeviceName(uString* value);
    int32_t DiagnosticId();
    void DiagnosticId(int32_t value);
    uString* Type();
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static DismissDiagnostic* New1(uString* deviceId, uString* deviceName, int32_t diagnosticId);
    static DismissDiagnostic* ReadDataFrom(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
