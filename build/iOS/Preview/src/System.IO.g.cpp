// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <System.IO.BinaryReader.h>
#include <System.IO.BinaryWriter.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.BinaryWriter.h>
#include <Uno.IO.Stream.h>
#include <Uno.String.h>

namespace g{
namespace System{
namespace IO{

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/MissingStuff.cs
// ----------------------------------------------------------------------------------------

// public sealed class BinaryReader :30
// {
static void BinaryReader_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(BinaryReader_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::BinaryReader_typeof(), offsetof(BinaryReader, _reader), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("Dispose", NULL, (void*)BinaryReader__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)BinaryReader__New1_fn, 0, true, type, 1, ::g::Uno::IO::Stream_typeof()),
        new uFunction("ReadBoolean", NULL, (void*)BinaryReader__ReadBoolean_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("ReadBytes", NULL, (void*)BinaryReader__ReadBytes_fn, 0, false, ::g::Uno::Byte_typeof()->Array(), 1, ::g::Uno::Int_typeof()),
        new uFunction("ReadChar", NULL, (void*)BinaryReader__ReadChar_fn, 0, false, ::g::Uno::Char_typeof(), 0),
        new uFunction("ReadDouble", NULL, (void*)BinaryReader__ReadDouble_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("ReadInt32", NULL, (void*)BinaryReader__ReadInt32_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("ReadString", NULL, (void*)BinaryReader__ReadString_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

BinaryReader_type* BinaryReader_typeof()
{
    static uSStrong<BinaryReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryReader);
    options.TypeSize = sizeof(BinaryReader_type);
    type = (BinaryReader_type*)uClassType::New("System.IO.BinaryReader", options);
    type->fp_build_ = BinaryReader_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))BinaryReader__Dispose_fn;
    return type;
}

// public BinaryReader(Uno.IO.Stream stream) :42
void BinaryReader__ctor__fn(BinaryReader* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_(stream);
}

// public void Dispose() :44
void BinaryReader__Dispose_fn(BinaryReader* __this)
{
    __this->Dispose();
}

// public BinaryReader New(Uno.IO.Stream stream) :42
void BinaryReader__New1_fn(::g::Uno::IO::Stream* stream, BinaryReader** __retval)
{
    *__retval = BinaryReader::New1(stream);
}

// public bool ReadBoolean() :40
void BinaryReader__ReadBoolean_fn(BinaryReader* __this, bool* __retval)
{
    *__retval = __this->ReadBoolean();
}

// public byte[] ReadBytes(int length) :41
void BinaryReader__ReadBytes_fn(BinaryReader* __this, int32_t* length, uArray** __retval)
{
    *__retval = __this->ReadBytes(*length);
}

// public char ReadChar() :39
void BinaryReader__ReadChar_fn(BinaryReader* __this, char16_t* __retval)
{
    *__retval = __this->ReadChar();
}

// public double ReadDouble() :35
void BinaryReader__ReadDouble_fn(BinaryReader* __this, double* __retval)
{
    *__retval = __this->ReadDouble();
}

// public int ReadInt32() :38
void BinaryReader__ReadInt32_fn(BinaryReader* __this, int32_t* __retval)
{
    *__retval = __this->ReadInt32();
}

// public string ReadString() :37
void BinaryReader__ReadString_fn(BinaryReader* __this, uString** __retval)
{
    *__retval = __this->ReadString();
}

// public BinaryReader(Uno.IO.Stream stream) [instance] :42
void BinaryReader::ctor_(::g::Uno::IO::Stream* stream)
{
    _reader = ::g::Uno::IO::BinaryReader::New1(stream);
}

// public void Dispose() [instance] :44
void BinaryReader::Dispose()
{
    uStackFrame __("System.IO.BinaryReader", "Dispose()");
    uPtr(_reader)->Dispose();
}

// public bool ReadBoolean() [instance] :40
bool BinaryReader::ReadBoolean()
{
    uStackFrame __("System.IO.BinaryReader", "ReadBoolean()");
    return uPtr(_reader)->ReadBoolean();
}

// public byte[] ReadBytes(int length) [instance] :41
uArray* BinaryReader::ReadBytes(int32_t length)
{
    uStackFrame __("System.IO.BinaryReader", "ReadBytes(int)");
    return uPtr(_reader)->ReadBytes(length);
}

// public char ReadChar() [instance] :39
char16_t BinaryReader::ReadChar()
{
    uStackFrame __("System.IO.BinaryReader", "ReadChar()");
    return uPtr(_reader)->ReadChar();
}

// public double ReadDouble() [instance] :35
double BinaryReader::ReadDouble()
{
    uStackFrame __("System.IO.BinaryReader", "ReadDouble()");
    return uPtr(_reader)->ReadDouble();
}

// public int ReadInt32() [instance] :38
int32_t BinaryReader::ReadInt32()
{
    uStackFrame __("System.IO.BinaryReader", "ReadInt32()");
    return uPtr(_reader)->ReadInt();
}

// public string ReadString() [instance] :37
uString* BinaryReader::ReadString()
{
    uStackFrame __("System.IO.BinaryReader", "ReadString()");
    return uPtr(_reader)->ReadString();
}

// public BinaryReader New(Uno.IO.Stream stream) [static] :42
BinaryReader* BinaryReader::New1(::g::Uno::IO::Stream* stream)
{
    BinaryReader* obj1 = (BinaryReader*)uNew(BinaryReader_typeof());
    obj1->ctor_(stream);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/MissingStuff.cs
// ----------------------------------------------------------------------------------------

// public sealed class BinaryWriter :9
// {
static void BinaryWriter_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(BinaryWriter_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::BinaryWriter_typeof(), offsetof(BinaryWriter, _writer), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("Dispose", NULL, (void*)BinaryWriter__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)BinaryWriter__New1_fn, 0, true, type, 1, ::g::Uno::IO::Stream_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte_typeof()->Array()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write2_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Char_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write3_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write5_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write6_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

BinaryWriter_type* BinaryWriter_typeof()
{
    static uSStrong<BinaryWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryWriter);
    options.TypeSize = sizeof(BinaryWriter_type);
    type = (BinaryWriter_type*)uClassType::New("System.IO.BinaryWriter", options);
    type->fp_build_ = BinaryWriter_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))BinaryWriter__Dispose_fn;
    return type;
}

// public BinaryWriter(Uno.IO.Stream stream) :22
void BinaryWriter__ctor__fn(BinaryWriter* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_(stream);
}

// public void Dispose() :23
void BinaryWriter__Dispose_fn(BinaryWriter* __this)
{
    __this->Dispose();
}

// public BinaryWriter New(Uno.IO.Stream stream) :22
void BinaryWriter__New1_fn(::g::Uno::IO::Stream* stream, BinaryWriter** __retval)
{
    *__retval = BinaryWriter::New1(stream);
}

// public void Write(bool value) :19
void BinaryWriter__Write_fn(BinaryWriter* __this, bool* value)
{
    __this->Write(*value);
}

// public void Write(byte[] bytes) :20
void BinaryWriter__Write1_fn(BinaryWriter* __this, uArray* bytes)
{
    __this->Write1(bytes);
}

// public void Write(char value) :18
void BinaryWriter__Write2_fn(BinaryWriter* __this, char16_t* value)
{
    __this->Write2(*value);
}

// public void Write(double value) :14
void BinaryWriter__Write3_fn(BinaryWriter* __this, double* value)
{
    __this->Write3(*value);
}

// public void Write(int value) :17
void BinaryWriter__Write5_fn(BinaryWriter* __this, int32_t* value)
{
    __this->Write5(*value);
}

// public void Write(string value) :16
void BinaryWriter__Write6_fn(BinaryWriter* __this, uString* value)
{
    __this->Write6(value);
}

// public BinaryWriter(Uno.IO.Stream stream) [instance] :22
void BinaryWriter::ctor_(::g::Uno::IO::Stream* stream)
{
    _writer = ::g::Uno::IO::BinaryWriter::New1(stream);
}

// public void Dispose() [instance] :23
void BinaryWriter::Dispose()
{
    uStackFrame __("System.IO.BinaryWriter", "Dispose()");
    uPtr(_writer)->Dispose();
}

// public void Write(bool value) [instance] :19
void BinaryWriter::Write(bool value)
{
    uStackFrame __("System.IO.BinaryWriter", "Write(bool)");
    uPtr(_writer)->Write(value);
}

// public void Write(byte[] bytes) [instance] :20
void BinaryWriter::Write1(uArray* bytes)
{
    uStackFrame __("System.IO.BinaryWriter", "Write(byte[])");
    uPtr(_writer)->Write2(bytes);
}

// public void Write(char value) [instance] :18
void BinaryWriter::Write2(char16_t value)
{
    uStackFrame __("System.IO.BinaryWriter", "Write(char)");
    uPtr(_writer)->Write5(value);
}

// public void Write(double value) [instance] :14
void BinaryWriter::Write3(double value)
{
    uStackFrame __("System.IO.BinaryWriter", "Write(double)");
    uPtr(_writer)->Write6(value);
}

// public void Write(int value) [instance] :17
void BinaryWriter::Write5(int32_t value)
{
    uStackFrame __("System.IO.BinaryWriter", "Write(int)");
    uPtr(_writer)->Write13(value);
}

// public void Write(string value) [instance] :16
void BinaryWriter::Write6(uString* value)
{
    uStackFrame __("System.IO.BinaryWriter", "Write(string)");
    uPtr(_writer)->Write24(value);
}

// public BinaryWriter New(Uno.IO.Stream stream) [static] :22
BinaryWriter* BinaryWriter::New1(::g::Uno::IO::Stream* stream)
{
    BinaryWriter* obj1 = (BinaryWriter*)uNew(BinaryWriter_typeof());
    obj1->ctor_(stream);
    return obj1;
}
// }

}}} // ::g::System::IO
