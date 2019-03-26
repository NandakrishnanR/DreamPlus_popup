// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Messages/Diagnostic.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Diagnostic;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class Diagnostic :17
// {
struct Diagnostic_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

Diagnostic_type* Diagnostic_typeof();
void Diagnostic__ctor__fn(Diagnostic* __this, uString* deviceId, uString* deviceName, uString* message, uString* details, uString* sourceFile, int32_t* lineNumber, int32_t* columnNumber, int32_t* diagnosticId);
void Diagnostic__get_ColumnNumber_fn(Diagnostic* __this, int32_t* __retval);
void Diagnostic__set_ColumnNumber_fn(Diagnostic* __this, int32_t* value);
void Diagnostic__get_Details_fn(Diagnostic* __this, uString** __retval);
void Diagnostic__set_Details_fn(Diagnostic* __this, uString* value);
void Diagnostic__get_DeviceId_fn(Diagnostic* __this, uString** __retval);
void Diagnostic__set_DeviceId_fn(Diagnostic* __this, uString* value);
void Diagnostic__get_DeviceName_fn(Diagnostic* __this, uString** __retval);
void Diagnostic__set_DeviceName_fn(Diagnostic* __this, uString* value);
void Diagnostic__get_DiagnosticId_fn(Diagnostic* __this, int32_t* __retval);
void Diagnostic__set_DiagnosticId_fn(Diagnostic* __this, int32_t* value);
void Diagnostic__get_DiagnosticType_fn(Diagnostic* __this, int32_t* __retval);
void Diagnostic__set_DiagnosticType_fn(Diagnostic* __this, int32_t* value);
void Diagnostic__get_LineNumber_fn(Diagnostic* __this, int32_t* __retval);
void Diagnostic__set_LineNumber_fn(Diagnostic* __this, int32_t* value);
void Diagnostic__get_Message_fn(Diagnostic* __this, uString** __retval);
void Diagnostic__set_Message_fn(Diagnostic* __this, uString* value);
void Diagnostic__New1_fn(uString* deviceId, uString* deviceName, uString* message, uString* details, uString* sourceFile, int32_t* lineNumber, int32_t* columnNumber, int32_t* diagnosticId, Diagnostic** __retval);
void Diagnostic__NullIfEmpty_fn(uString* s, uString** __retval);
void Diagnostic__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, Diagnostic** __retval);
void Diagnostic__get_SourceFile_fn(Diagnostic* __this, uString** __retval);
void Diagnostic__set_SourceFile_fn(Diagnostic* __this, uString* value);
void Diagnostic__get_Type_fn(Diagnostic* __this, uString** __retval);
void Diagnostic__WriteDataTo_fn(Diagnostic* __this, ::g::System::IO::BinaryWriter* writer);

struct Diagnostic : uObject
{
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return Diagnostic_typeof()->Init(), MessageType_; }
    static int32_t _idEnumerator_;
    static int32_t& _idEnumerator() { return Diagnostic_typeof()->Init(), _idEnumerator_; }
    int32_t _ColumnNumber;
    uStrong<uString*> _Details;
    uStrong<uString*> _DeviceId;
    uStrong<uString*> _DeviceName;
    int32_t _DiagnosticId;
    int32_t _DiagnosticType;
    int32_t _LineNumber;
    uStrong<uString*> _Message;
    uStrong<uString*> _SourceFile;

    void ctor_(uString* deviceId, uString* deviceName, uString* message, uString* details, uString* sourceFile, int32_t lineNumber, int32_t columnNumber, int32_t diagnosticId);
    int32_t ColumnNumber();
    void ColumnNumber(int32_t value);
    uString* Details();
    void Details(uString* value);
    uString* DeviceId();
    void DeviceId(uString* value);
    uString* DeviceName();
    void DeviceName(uString* value);
    int32_t DiagnosticId();
    void DiagnosticId(int32_t value);
    int32_t DiagnosticType();
    void DiagnosticType(int32_t value);
    int32_t LineNumber();
    void LineNumber(int32_t value);
    uString* Message();
    void Message(uString* value);
    uString* SourceFile();
    void SourceFile(uString* value);
    uString* Type();
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static Diagnostic* New1(uString* deviceId, uString* deviceName, uString* message, uString* details, uString* sourceFile, int32_t lineNumber, int32_t columnNumber, int32_t diagnosticId);
    static uString* NullIfEmpty(uString* s);
    static Diagnostic* ReadDataFrom(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
