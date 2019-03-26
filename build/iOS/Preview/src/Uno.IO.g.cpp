// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <dirent.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <Uno.Action1-1.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Environment.h>
#include <Uno.Float.h>
#include <Uno.FormatException.h>
#include <Uno.GC.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.BinaryWriter.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.Enumerable.h>
#include <Uno.IO.Directory.Enumerator.h>
#include <Uno.IO.Directory.EnumeratorMode.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.DirectoryInfo.h>
#include <Uno.IO.EndOfStreamException.h>
#include <Uno.IO.File.h>
#include <Uno.IO.FileAttributes.h>
#include <Uno.IO.FileInfo.h>
#include <Uno.IO.FileMode.h>
#include <Uno.IO.FileNotFoundException.h>
#include <Uno.IO.FILEPtr.h>
#include <Uno.IO.FileStatus.h>
#include <Uno.IO.FileStatusHelpers.h>
#include <Uno.IO.FileStream.h>
#include <Uno.IO.FileSystemInfo.h>
#include <Uno.IO.IOException.h>
#include <Uno.IO.MemoryStream.h>
#include <Uno.IO.Path.h>
#include <Uno.IO.SeekOrigin.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.IO.StreamWriter.h>
#include <Uno.IO.StringReader.h>
#include <Uno.IO.StringWriter.h>
#include <Uno.IO.TextReader.h>
#include <Uno.IO.TextWriter.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.NotImplementedException.h>
#include <Uno.NotSupportedException.h>
#include <Uno.ObjectDisposedException.h>
#include <Uno.Runtime.Implementation.BufferImpl.h>
#include <Uno.String.h>
#include <Uno.Text.Decoder.h>
#include <Uno.Text.Encoding.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Time.DateTimeZone.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
static uString* STRINGS[45];
static uType* TYPES[20];

namespace g{
namespace Uno{
namespace IO{

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/BinaryReader.uno
// --------------------------------------------------------------------------

// public sealed class BinaryReader :7
// {
static void BinaryReader_build(uType* type)
{
    ::STRINGS[0] = uString::Const("byteCount");
    ::STRINGS[1] = uString::Const("Invalid 7 bit encoded int");
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Byte_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(BinaryReader_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::Stream_typeof(), offsetof(BinaryReader, _stream), 0,
        ::TYPES[0/*byte[]*/], offsetof(BinaryReader, _buffer), 0,
        ::g::Uno::Bool_typeof(), offsetof(BinaryReader, _LittleEndian), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("Dispose", NULL, (void*)BinaryReader__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_LittleEndian", NULL, (void*)BinaryReader__get_LittleEndian_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_LittleEndian", NULL, (void*)BinaryReader__set_LittleEndian_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)BinaryReader__New1_fn, 0, true, type, 1, ::g::Uno::IO::Stream_typeof()),
        new uFunction("ReadBoolean", NULL, (void*)BinaryReader__ReadBoolean_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("ReadByte", NULL, (void*)BinaryReader__ReadByte_fn, 0, false, ::g::Uno::Byte_typeof(), 0),
        new uFunction("ReadBytes", NULL, (void*)BinaryReader__ReadBytes_fn, 0, false, ::TYPES[0/*byte[]*/], 1, ::g::Uno::Int_typeof()),
        new uFunction("ReadChar", NULL, (void*)BinaryReader__ReadChar_fn, 0, false, ::g::Uno::Char_typeof(), 0),
        new uFunction("ReadDouble", NULL, (void*)BinaryReader__ReadDouble_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("ReadInt", NULL, (void*)BinaryReader__ReadInt_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("ReadString", NULL, (void*)BinaryReader__ReadString_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

BinaryReader_type* BinaryReader_typeof()
{
    static uSStrong<BinaryReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryReader);
    options.TypeSize = sizeof(BinaryReader_type);
    type = (BinaryReader_type*)uClassType::New("Uno.IO.BinaryReader", options);
    type->fp_build_ = BinaryReader_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))BinaryReader__Dispose_fn;
    return type;
}

// public BinaryReader(Uno.IO.Stream stream) :14
void BinaryReader__ctor__fn(BinaryReader* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_(stream);
}

// public void Dispose() :32
void BinaryReader__Dispose_fn(BinaryReader* __this)
{
    __this->Dispose();
}

// private void FillBuffer(int byteCount) :37
void BinaryReader__FillBuffer_fn(BinaryReader* __this, int32_t* byteCount)
{
    __this->FillBuffer(*byteCount);
}

// public generated bool get_LittleEndian() :28
void BinaryReader__get_LittleEndian_fn(BinaryReader* __this, bool* __retval)
{
    *__retval = __this->LittleEndian();
}

// public generated void set_LittleEndian(bool value) :29
void BinaryReader__set_LittleEndian_fn(BinaryReader* __this, bool* value)
{
    __this->LittleEndian(*value);
}

// public BinaryReader New(Uno.IO.Stream stream) :14
void BinaryReader__New1_fn(::g::Uno::IO::Stream* stream, BinaryReader** __retval)
{
    *__retval = BinaryReader::New1(stream);
}

// protected internal int Read7BitEncodedInt() :332
void BinaryReader__Read7BitEncodedInt_fn(BinaryReader* __this, int32_t* __retval)
{
    *__retval = __this->Read7BitEncodedInt();
}

// public bool ReadBoolean() :90
void BinaryReader__ReadBoolean_fn(BinaryReader* __this, bool* __retval)
{
    *__retval = __this->ReadBoolean();
}

// public byte ReadByte() :102
void BinaryReader__ReadByte_fn(BinaryReader* __this, uint8_t* __retval)
{
    *__retval = __this->ReadByte();
}

// public byte[] ReadBytes(int byteCount) :56
void BinaryReader__ReadBytes_fn(BinaryReader* __this, int32_t* byteCount, uArray** __retval)
{
    *__retval = __this->ReadBytes(*byteCount);
}

// public char ReadChar() :108
void BinaryReader__ReadChar_fn(BinaryReader* __this, char16_t* __retval)
{
    *__retval = __this->ReadChar();
}

// public double ReadDouble() :163
void BinaryReader__ReadDouble_fn(BinaryReader* __this, double* __retval)
{
    *__retval = __this->ReadDouble();
}

// public int ReadInt() :133
void BinaryReader__ReadInt_fn(BinaryReader* __this, int32_t* __retval)
{
    *__retval = __this->ReadInt();
}

// public string ReadString() :350
void BinaryReader__ReadString_fn(BinaryReader* __this, uString** __retval)
{
    *__retval = __this->ReadString();
}

// public BinaryReader(Uno.IO.Stream stream) [instance] :14
void BinaryReader::ctor_(::g::Uno::IO::Stream* stream)
{
    _stream = stream;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 64);
    LittleEndian(true);
}

// public void Dispose() [instance] :32
void BinaryReader::Dispose()
{
    uStackFrame __("Uno.IO.BinaryReader", "Dispose()");
    uPtr(_stream)->Dispose();
}

// private void FillBuffer(int byteCount) [instance] :37
void BinaryReader::FillBuffer(int32_t byteCount)
{
    uStackFrame __("Uno.IO.BinaryReader", "FillBuffer(int)");

    if ((byteCount < 0) || (byteCount > 64))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[0/*"byteCount"*/]));

    int32_t offset = 0;

    do
    {
        int32_t read = uPtr(_stream)->Read(_buffer, offset, byteCount - offset);

        if (read == 0)
            U_THROW(::g::Uno::IO::EndOfStreamException::New5());

        offset = offset + read;
    }
    while (offset < byteCount);
}

// public generated bool get_LittleEndian() [instance] :28
bool BinaryReader::LittleEndian()
{
    return _LittleEndian;
}

// public generated void set_LittleEndian(bool value) [instance] :29
void BinaryReader::LittleEndian(bool value)
{
    _LittleEndian = value;
}

// protected internal int Read7BitEncodedInt() [instance] :332
int32_t BinaryReader::Read7BitEncodedInt()
{
    uStackFrame __("Uno.IO.BinaryReader", "Read7BitEncodedInt()");
    int32_t count = 0;
    int32_t shift = 0;

    while (shift != 35)
    {
        uint8_t b = ReadByte();
        count = count | ((int32_t)(b & 127) << shift);
        shift = shift + 7;

        if ((b & 128) == 0)
            return count;
    }

    U_THROW(::g::Uno::FormatException::New4(::STRINGS[1/*"Invalid 7 b...*/]));
}

// public bool ReadBoolean() [instance] :90
bool BinaryReader::ReadBoolean()
{
    uStackFrame __("Uno.IO.BinaryReader", "ReadBoolean()");
    FillBuffer(1);
    return uPtr(_buffer)->Item<uint8_t>(0) != 0;
}

// public byte ReadByte() [instance] :102
uint8_t BinaryReader::ReadByte()
{
    uStackFrame __("Uno.IO.BinaryReader", "ReadByte()");
    FillBuffer(1);
    return uPtr(_buffer)->Item<uint8_t>(0);
}

// public byte[] ReadBytes(int byteCount) [instance] :56
uArray* BinaryReader::ReadBytes(int32_t byteCount)
{
    uStackFrame __("Uno.IO.BinaryReader", "ReadBytes(int)");

    if (byteCount < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[0/*"byteCount"*/]));

    uArray* buffer = uArray::New(::TYPES[0/*byte[]*/], byteCount);
    int32_t offset = 0;

    do
    {
        int32_t read = uPtr(_stream)->Read(buffer, offset, byteCount - offset);
        offset = offset + read;

        if (read == 0)
            break;
    }
    while (offset < byteCount);

    if (offset == byteCount)
        return buffer;

    uArray* result = uArray::New(::TYPES[0/*byte[]*/], offset);

    for (int32_t i = 0; i < offset; i++)
        uPtr(result)->Item<uint8_t>(i) = uPtr(buffer)->Item<uint8_t>(i);

    return result;
}

// public char ReadChar() [instance] :108
char16_t BinaryReader::ReadChar()
{
    uStackFrame __("Uno.IO.BinaryReader", "ReadChar()");
    uint8_t ret2;
    FillBuffer(1);
    ::g::Uno::Collections::List* buffer = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<byte>*/]);
    ::g::Uno::Collections::List__Add_fn(buffer, uCRef<uint8_t>(uPtr(_buffer)->Item<uint8_t>(0)));

    if (((::g::Uno::Collections::List__get_Item_fn(buffer, uCRef<int32_t>(0), &ret2), ret2) & 128) != 0)
    {
        FillBuffer(1);
        ::g::Uno::Collections::List__Add_fn(uPtr(buffer), uCRef<uint8_t>(uPtr(_buffer)->Item<uint8_t>(0)));
    }

    return uPtr(::g::Uno::Text::Utf8::GetString((uArray*)buffer->ToArray()))->Item(0);
}

// public double ReadDouble() [instance] :163
double BinaryReader::ReadDouble()
{
    uStackFrame __("Uno.IO.BinaryReader", "ReadDouble()");
    FillBuffer(8);
    return ::g::Uno::Runtime::Implementation::BufferImpl::GetDouble(_buffer, 0, LittleEndian());
}

// public int ReadInt() [instance] :133
int32_t BinaryReader::ReadInt()
{
    uStackFrame __("Uno.IO.BinaryReader", "ReadInt()");
    FillBuffer(4);
    return ::g::Uno::Runtime::Implementation::BufferImpl::GetInt(_buffer, 0, LittleEndian());
}

// public string ReadString() [instance] :350
uString* BinaryReader::ReadString()
{
    uStackFrame __("Uno.IO.BinaryReader", "ReadString()");
    return ::g::Uno::Text::Utf8::GetString(ReadBytes(Read7BitEncodedInt()));
}

// public BinaryReader New(Uno.IO.Stream stream) [static] :14
BinaryReader* BinaryReader::New1(::g::Uno::IO::Stream* stream)
{
    BinaryReader* obj1 = (BinaryReader*)uNew(BinaryReader_typeof());
    obj1->ctor_(stream);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/BinaryWriter.uno
// --------------------------------------------------------------------------

// public sealed class BinaryWriter :6
// {
static void BinaryWriter_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Char_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(BinaryWriter_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::Stream_typeof(), offsetof(BinaryWriter, _stream), 0,
        ::TYPES[0/*byte[]*/], offsetof(BinaryWriter, _buffer), 0,
        ::g::Uno::Bool_typeof(), offsetof(BinaryWriter, _LittleEndian), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("Dispose", NULL, (void*)BinaryWriter__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_LittleEndian", NULL, (void*)BinaryWriter__get_LittleEndian_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_LittleEndian", NULL, (void*)BinaryWriter__set_LittleEndian_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)BinaryWriter__New1_fn, 0, true, type, 1, ::g::Uno::IO::Stream_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write2_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*byte[]*/]),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write5_fn, 0, false, uVoid_typeof(), 1, ::TYPES[2/*char*/]),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write6_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write13_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write24_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

BinaryWriter_type* BinaryWriter_typeof()
{
    static uSStrong<BinaryWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryWriter);
    options.TypeSize = sizeof(BinaryWriter_type);
    type = (BinaryWriter_type*)uClassType::New("Uno.IO.BinaryWriter", options);
    type->fp_build_ = BinaryWriter_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))BinaryWriter__Dispose_fn;
    return type;
}

// public BinaryWriter(Uno.IO.Stream stream) :13
void BinaryWriter__ctor__fn(BinaryWriter* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_(stream);
}

// public void Dispose() :31
void BinaryWriter__Dispose_fn(BinaryWriter* __this)
{
    __this->Dispose();
}

// public generated bool get_LittleEndian() :27
void BinaryWriter__get_LittleEndian_fn(BinaryWriter* __this, bool* __retval)
{
    *__retval = __this->LittleEndian();
}

// public generated void set_LittleEndian(bool value) :28
void BinaryWriter__set_LittleEndian_fn(BinaryWriter* __this, bool* value)
{
    __this->LittleEndian(*value);
}

// public BinaryWriter New(Uno.IO.Stream stream) :13
void BinaryWriter__New1_fn(::g::Uno::IO::Stream* stream, BinaryWriter** __retval)
{
    *__retval = BinaryWriter::New1(stream);
}

// public void Write(bool value) :36
void BinaryWriter__Write_fn(BinaryWriter* __this, bool* value)
{
    __this->Write(*value);
}

// public void Write(byte value) :53
void BinaryWriter__Write1_fn(BinaryWriter* __this, uint8_t* value)
{
    __this->Write1(*value);
}

// public void Write(byte[] value) :42
void BinaryWriter__Write2_fn(BinaryWriter* __this, uArray* value)
{
    __this->Write2(value);
}

// public void Write(char value) :59
void BinaryWriter__Write5_fn(BinaryWriter* __this, char16_t* value)
{
    __this->Write5(*value);
}

// public void Write(double value) :106
void BinaryWriter__Write6_fn(BinaryWriter* __this, double* value)
{
    __this->Write6(*value);
}

// public void Write(int value) :76
void BinaryWriter__Write13_fn(BinaryWriter* __this, int32_t* value)
{
    __this->Write13(*value);
}

// public void Write(string value) :233
void BinaryWriter__Write24_fn(BinaryWriter* __this, uString* value)
{
    __this->Write24(value);
}

// protected internal void Write7BitEncodedInt(int value) :222
void BinaryWriter__Write7BitEncodedInt_fn(BinaryWriter* __this, int32_t* value)
{
    __this->Write7BitEncodedInt(*value);
}

// public BinaryWriter(Uno.IO.Stream stream) [instance] :13
void BinaryWriter::ctor_(::g::Uno::IO::Stream* stream)
{
    _stream = stream;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 64);
    LittleEndian(true);
}

// public void Dispose() [instance] :31
void BinaryWriter::Dispose()
{
    uStackFrame __("Uno.IO.BinaryWriter", "Dispose()");
    uPtr(_stream)->Dispose();
}

// public generated bool get_LittleEndian() [instance] :27
bool BinaryWriter::LittleEndian()
{
    return _LittleEndian;
}

// public generated void set_LittleEndian(bool value) [instance] :28
void BinaryWriter::LittleEndian(bool value)
{
    _LittleEndian = value;
}

// public void Write(bool value) [instance] :36
void BinaryWriter::Write(bool value)
{
    uStackFrame __("Uno.IO.BinaryWriter", "Write(bool)");
    uPtr(_buffer)->Item<uint8_t>(0) = (uint8_t)(value ? 1 : 0);
    uPtr(_stream)->Write(_buffer, 0, 1);
}

// public void Write(byte value) [instance] :53
void BinaryWriter::Write1(uint8_t value)
{
    uStackFrame __("Uno.IO.BinaryWriter", "Write(byte)");
    uPtr(_buffer)->Item<uint8_t>(0) = value;
    uPtr(_stream)->Write(_buffer, 0, 1);
}

// public void Write(byte[] value) [instance] :42
void BinaryWriter::Write2(uArray* value)
{
    uStackFrame __("Uno.IO.BinaryWriter", "Write(byte[])");
    uPtr(_stream)->Write(value, 0, uPtr(value)->Length());
}

// public void Write(char value) [instance] :59
void BinaryWriter::Write5(char16_t value)
{
    uStackFrame __("Uno.IO.BinaryWriter", "Write(char)");
    Write2(::g::Uno::Text::Utf8::GetBytes(::g::Uno::Char::ToString(value, ::TYPES[2/*char*/])));
}

// public void Write(double value) [instance] :106
void BinaryWriter::Write6(double value)
{
    uStackFrame __("Uno.IO.BinaryWriter", "Write(double)");
    ::g::Uno::Runtime::Implementation::BufferImpl::SetDouble(_buffer, 0, value, LittleEndian());
    uPtr(_stream)->Write(_buffer, 0, 8);
}

// public void Write(int value) [instance] :76
void BinaryWriter::Write13(int32_t value)
{
    uStackFrame __("Uno.IO.BinaryWriter", "Write(int)");
    ::g::Uno::Runtime::Implementation::BufferImpl::SetInt(_buffer, 0, value, LittleEndian());
    uPtr(_stream)->Write(_buffer, 0, 4);
}

// public void Write(string value) [instance] :233
void BinaryWriter::Write24(uString* value)
{
    uStackFrame __("Uno.IO.BinaryWriter", "Write(string)");
    uArray* bytes = ::g::Uno::Text::Utf8::GetBytes(value);
    Write7BitEncodedInt(uPtr(bytes)->Length());
    Write2(bytes);
}

// protected internal void Write7BitEncodedInt(int value) [instance] :222
void BinaryWriter::Write7BitEncodedInt(int32_t value)
{
    uStackFrame __("Uno.IO.BinaryWriter", "Write7BitEncodedInt(int)");
    uint32_t v = (uint32_t)value;

    while (v >= 128U)
    {
        Write1((uint8_t)(v | 128U));
        v = v >> 7;
    }

    Write1((uint8_t)v);
}

// public BinaryWriter New(Uno.IO.Stream stream) [static] :13
BinaryWriter* BinaryWriter::New1(::g::Uno::IO::Stream* stream)
{
    BinaryWriter* obj1 = (BinaryWriter*)uNew(BinaryWriter_typeof());
    obj1->ctor_(stream);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Bundle.uno
// --------------------------------------------------------------------

// public sealed class Bundle :202
// {
// static Bundle() :228
static void Bundle__cctor__fn(uType* __type)
{
    uArray* array1;
    int32_t index2;
    int32_t length3;
    Bundle::_bundles_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<string, Uno.IO.Bundle>*/]));
    Bundle::_allFiles_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Uno.IO.BundleFile>*/]));

    for (array1 = ::g::Uno::String::Split(uPtr(::g::Uno::IO::BundleFile::New1(Bundle::New1(NULL), ::STRINGS[2/*"bundle"*/], ::STRINGS[2/*"bundle"*/])->ReadAllText()), uArray::Init<int32_t>(::TYPES[5/*char[]*/], 1, 10)), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        uString* line = uPtr(array1)->Strong<uString*>(index2);
        uArray* parts = ::g::Uno::String::Split(uPtr(line), uArray::Init<int32_t>(::TYPES[5/*char[]*/], 1, ':'));
        Bundle* bundle = Bundle::New1(uPtr(parts)->Strong<uString*>(0));
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(Bundle::_bundles_), parts->Strong<uString*>(0), bundle);

        for (int32_t i = 1; i < parts->Length(); i = i + 2)
        {
            ::g::Uno::IO::BundleFile* file = ::g::Uno::IO::BundleFile::New1(bundle, uPtr(parts)->Strong<uString*>(i), uPtr(parts)->Strong<uString*>(i + 1));
            ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(bundle)->_files), file);
            ::g::Uno::Collections::List__Add_fn(uPtr(Bundle::_allFiles_), file);
        }
    }
}

static void Bundle_build(uType* type)
{
    ::STRINGS[2] = uString::Const("bundle");
    ::STRINGS[3] = uString::Const("BundleFile not found: ");
    ::TYPES[3] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), type, NULL);
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[6] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Bundle, _packageName), 0,
        ::TYPES[4/*Uno.Collections.List<Uno.IO.BundleFile>*/], offsetof(Bundle, _files), 0,
        ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/], offsetof(Bundle, Created1), 0,
        ::TYPES[3/*Uno.Collections.Dictionary<string, Uno.IO.Bundle>*/], (uintptr_t)&Bundle::_bundles_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Collections.List<Uno.IO.BundleFile>*/], (uintptr_t)&Bundle::_allFiles_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("get_AllFiles", NULL, (void*)Bundle__get_AllFiles_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL), 0),
        new uFunction("add_Created", NULL, (void*)Bundle__add_Created_fn, 0, false, uVoid_typeof(), 1, ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]),
        new uFunction("remove_Created", NULL, (void*)Bundle__remove_Created_fn, 0, false, uVoid_typeof(), 1, ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]),
        new uFunction("CreateFile", NULL, (void*)Bundle__CreateFile_fn, 0, false, ::g::Uno::IO::BundleFile_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()),
        new uFunction("get_Files", NULL, (void*)Bundle__get_Files_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL), 0),
        new uFunction("Get", NULL, (void*)Bundle__Get_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("GetFile", NULL, (void*)Bundle__GetFile_fn, 0, false, ::g::Uno::IO::BundleFile_typeof(), 1, ::g::Uno::String_typeof()));
}

uType* Bundle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Bundle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.IO.Bundle", options);
    type->fp_build_ = Bundle_build;
    type->fp_cctor_ = Bundle__cctor__fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Bundle__ToString_fn;
    return type;
}

// private Bundle(string packageName) :271
void Bundle__ctor__fn(Bundle* __this, uString* packageName)
{
    __this->ctor_(packageName);
}

// public static Uno.Collections.IEnumerable<Uno.IO.BundleFile> get_AllFiles() :259
void Bundle__get_AllFiles_fn(uObject** __retval)
{
    *__retval = Bundle::AllFiles();
}

// public generated void add_Created(Uno.Action<Uno.IO.BundleFile> value) :205
void Bundle__add_Created_fn(Bundle* __this, uDelegate* value)
{
    __this->add_Created(value);
}

// public generated void remove_Created(Uno.Action<Uno.IO.BundleFile> value) :205
void Bundle__remove_Created_fn(Bundle* __this, uDelegate* value)
{
    __this->remove_Created(value);
}

// public extern Uno.IO.BundleFile CreateFile(string path, byte[] bytes) :209
void Bundle__CreateFile_fn(Bundle* __this, uString* path, uArray* bytes, ::g::Uno::IO::BundleFile** __retval)
{
    *__retval = __this->CreateFile(path, bytes);
}

// public Uno.Collections.IEnumerable<Uno.IO.BundleFile> get_Files() :283
void Bundle__get_Files_fn(Bundle* __this, uObject** __retval)
{
    *__retval = __this->Files();
}

// public static Uno.IO.Bundle Get([string package]) :251
void Bundle__Get_fn(uString* package, Bundle** __retval)
{
    *__retval = Bundle::Get(package);
}

// public Uno.IO.BundleFile GetFile(string filename) :286
void Bundle__GetFile_fn(Bundle* __this, uString* filename, ::g::Uno::IO::BundleFile** __retval)
{
    *__retval = __this->GetFile(filename);
}

// private Bundle New(string packageName) :271
void Bundle__New1_fn(uString* packageName, Bundle** __retval)
{
    *__retval = Bundle::New1(packageName);
}

// public override sealed string ToString() :295
void Bundle__ToString_fn(Bundle* __this, uString** __retval)
{
    return *__retval = __this->_packageName, void();
}

uSStrong< ::g::Uno::Collections::Dictionary*> Bundle::_bundles_;
uSStrong< ::g::Uno::Collections::List*> Bundle::_allFiles_;

// private Bundle(string packageName) [instance] :271
void Bundle::ctor_(uString* packageName)
{
    _files = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Uno.IO.BundleFile>*/]));
    _packageName = packageName;
}

// public generated void add_Created(Uno.Action<Uno.IO.BundleFile> value) [instance] :205
void Bundle::add_Created(uDelegate* value)
{
    uStackFrame __("Uno.IO.Bundle", "add_Created(Uno.Action<Uno.IO.BundleFile>)");
    Created1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Created1, value), ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]);
}

// public generated void remove_Created(Uno.Action<Uno.IO.BundleFile> value) [instance] :205
void Bundle::remove_Created(uDelegate* value)
{
    uStackFrame __("Uno.IO.Bundle", "remove_Created(Uno.Action<Uno.IO.BundleFile>)");
    Created1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Created1, value), ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]);
}

// public extern Uno.IO.BundleFile CreateFile(string path, byte[] bytes) [instance] :209
::g::Uno::IO::BundleFile* Bundle::CreateFile(uString* path, uArray* bytes)
{
    uStackFrame __("Uno.IO.Bundle", "CreateFile(string,byte[])");
    ::g::Uno::IO::BundleFile* file = ::g::Uno::IO::BundleFile::New1(this, path, NULL);
    file->Update(bytes);

    if (::g::Uno::Delegate::op_Inequality(Created1, NULL))
        uPtr(Created1)->InvokeVoid(file);

    ::g::Uno::Threading::Monitor::Enter(_files);

    {
        try
        {
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(_files), file);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(_files);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(_files);
        }
        __after_finally_0:;
    }

    ::g::Uno::Threading::Monitor::Enter(Bundle::_allFiles_);

    {
        try
        {
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(Bundle::_allFiles_), file);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(Bundle::_allFiles_);
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(Bundle::_allFiles_);
        }
        __after_finally_1:;
    }

    return file;
}

// public Uno.Collections.IEnumerable<Uno.IO.BundleFile> get_Files() [instance] :283
uObject* Bundle::Files()
{
    uStackFrame __("Uno.IO.Bundle", "get_Files()");
    return (uObject*)_files;
}

// public Uno.IO.BundleFile GetFile(string filename) [instance] :286
::g::Uno::IO::BundleFile* Bundle::GetFile(uString* filename)
{
    uStackFrame __("Uno.IO.Bundle", "GetFile(string)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::IO::BundleFile*> > ret7;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::IO::BundleFile*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_files), &ret7), ret7);

    {
        try
        {
            {
                while (enum4.MoveNext(::TYPES[6/*Uno.Collections.List<Uno.IO.BundleFile>.Enumerator*/]))
                {
                    ::g::Uno::IO::BundleFile* f = enum4.Current(::TYPES[6/*Uno.Collections.List<Uno.IO.BundleFile>.Enumerator*/]);

                    if (::g::Uno::String::op_Equality(uPtr(f)->SourcePath(), filename) || ::g::Uno::String::op_Equality(uPtr(f)->BundlePath(), filename))
                    {
                        ::g::Uno::IO::BundleFile* __uno_retval = f;
                        enum4.Dispose(::TYPES[6/*Uno.Collections.List<Uno.IO.BundleFile>.Enumerator*/]);
                        return __uno_retval;
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum4.Dispose(::TYPES[6/*Uno.Collections.List<Uno.IO.BundleFile>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_2;
        }

        {
            enum4.Dispose(::TYPES[6/*Uno.Collections.List<Uno.IO.BundleFile>.Enumerator*/]);
        }
        __after_finally_2:;
    }

    U_THROW(::g::Uno::IO::FileNotFoundException::New5(::g::Uno::String::op_Addition2(::STRINGS[3/*"BundleFile ...*/], filename), filename));
}

// public static Uno.IO.Bundle Get([string package]) [static] :251
Bundle* Bundle::Get(uString* package)
{
    uStackFrame __("Uno.IO.Bundle", "Get([string])");
    Bundle_typeof()->Init();
    Bundle* ret6;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Bundle::_bundles_), package, &ret6), ret6);
}

// private Bundle New(string packageName) [static] :271
Bundle* Bundle::New1(uString* packageName)
{
    Bundle* obj5 = (Bundle*)uNew(Bundle_typeof());
    obj5->ctor_(packageName);
    return obj5;
}

// public static Uno.Collections.IEnumerable<Uno.IO.BundleFile> get_AllFiles() [static] :259
uObject* Bundle::AllFiles()
{
    uStackFrame __("Uno.IO.Bundle", "get_AllFiles()");
    Bundle_typeof()->Init();
    return (uObject*)Bundle::_allFiles_;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Bundle.uno
// --------------------------------------------------------------------

// public sealed class BundleFile :26
// {
// static generated BundleFile() :26
static void BundleFile__cctor__fn(uType* __type)
{
    BundleFile::BundleDirectory_ = BundleFile::GetBundleDirectory();
}

static void BundleFile_build(uType* type)
{
    ::STRINGS[4] = uString::Const("Bundle not found: ");
    ::STRINGS[5] = uString::Const("data");
    ::STRINGS[6] = uString::Const("Uno.IO.BundleFile.BundlePath");
    ::STRINGS[7] = uString::Const("bytes");
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[8] = ::g::Uno::IDisposable_typeof();
    ::TYPES[7] = ::g::Uno::Action1_typeof()->MakeType(type, NULL);
    type->SetDependencies(
        ::g::Uno::IO::Path_typeof());
    type->SetFields(0,
        ::TYPES[0/*byte[]*/], offsetof(BundleFile, _bytes), 0,
        ::g::Uno::IO::Bundle_typeof(), offsetof(BundleFile, _Bundle), uFieldFlagsWeak,
        ::g::Uno::String_typeof(), offsetof(BundleFile, _BundlePath), 0,
        ::g::Uno::Bool_typeof(), offsetof(BundleFile, _IsFile), 0,
        ::g::Uno::String_typeof(), offsetof(BundleFile, _SourcePath), 0,
        ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/], offsetof(BundleFile, Changed1), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&BundleFile::BundleDirectory_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(11,
        new uFunction("get_Bundle", NULL, (void*)BundleFile__get_Bundle_fn, 0, false, ::g::Uno::IO::Bundle_typeof(), 0),
        new uFunction("get_BundlePath", NULL, (void*)BundleFile__get_BundlePath_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("add_Changed", NULL, (void*)BundleFile__add_Changed_fn, 0, false, uVoid_typeof(), 1, ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]),
        new uFunction("remove_Changed", NULL, (void*)BundleFile__remove_Changed_fn, 0, false, uVoid_typeof(), 1, ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]),
        new uFunction("get_IsFile", NULL, (void*)BundleFile__get_IsFile_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_NativeBundlePath", NULL, (void*)BundleFile__get_NativeBundlePath_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("OpenRead", NULL, (void*)BundleFile__OpenRead_fn, 0, false, ::g::Uno::IO::Stream_typeof(), 0),
        new uFunction("ReadAllBytes", NULL, (void*)BundleFile__ReadAllBytes_fn, 0, false, ::TYPES[0/*byte[]*/], 0),
        new uFunction("ReadAllText", NULL, (void*)BundleFile__ReadAllText_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_SourcePath", NULL, (void*)BundleFile__get_SourcePath_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("Update", NULL, (void*)BundleFile__Update_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*byte[]*/]));
}

uType* BundleFile_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(BundleFile);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.IO.BundleFile", options);
    type->fp_build_ = BundleFile_build;
    type->fp_cctor_ = BundleFile__cctor__fn;
    type->fp_ToString = (void(*)(uObject*, uString**))BundleFile__ToString_fn;
    return type;
}

// internal BundleFile(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) :73
void BundleFile__ctor__fn(BundleFile* __this, ::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath)
{
    __this->ctor_(bundle, sourcePath, bundlePath);
}

// public generated Uno.IO.Bundle get_Bundle() :34
void BundleFile__get_Bundle_fn(BundleFile* __this, ::g::Uno::IO::Bundle** __retval)
{
    *__retval = __this->Bundle();
}

// private generated void set_Bundle(Uno.IO.Bundle value) :34
void BundleFile__set_Bundle_fn(BundleFile* __this, ::g::Uno::IO::Bundle* value)
{
    __this->Bundle(value);
}

// public generated string get_BundlePath() :38
void BundleFile__get_BundlePath_fn(BundleFile* __this, uString** __retval)
{
    *__retval = __this->BundlePath();
}

// private generated void set_BundlePath(string value) :38
void BundleFile__set_BundlePath_fn(BundleFile* __this, uString* value)
{
    __this->BundlePath(value);
}

// public generated void add_Changed(Uno.Action<Uno.IO.BundleFile> value) :31
void BundleFile__add_Changed_fn(BundleFile* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// public generated void remove_Changed(Uno.Action<Uno.IO.BundleFile> value) :31
void BundleFile__remove_Changed_fn(BundleFile* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// private static extern string GetBundleDirectory() :56
void BundleFile__GetBundleDirectory_fn(uString** __retval)
{
    *__retval = BundleFile::GetBundleDirectory();
}

// public generated bool get_IsFile() :39
void BundleFile__get_IsFile_fn(BundleFile* __this, bool* __retval)
{
    *__retval = __this->IsFile();
}

// private generated void set_IsFile(bool value) :39
void BundleFile__set_IsFile_fn(BundleFile* __this, bool* value)
{
    __this->IsFile(*value);
}

// public string get_NativeBundlePath() :43
void BundleFile__get_NativeBundlePath_fn(BundleFile* __this, uString** __retval)
{
    *__retval = __this->NativeBundlePath();
}

// internal BundleFile New(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) :73
void BundleFile__New1_fn(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath, BundleFile** __retval)
{
    *__retval = BundleFile::New1(bundle, sourcePath, bundlePath);
}

// public Uno.IO.Stream OpenRead() :85
void BundleFile__OpenRead_fn(BundleFile* __this, ::g::Uno::IO::Stream** __retval)
{
    *__retval = __this->OpenRead();
}

// public byte[] ReadAllBytes() :153
void BundleFile__ReadAllBytes_fn(BundleFile* __this, uArray** __retval)
{
    *__retval = __this->ReadAllBytes();
}

// public string ReadAllText() :170
void BundleFile__ReadAllText_fn(BundleFile* __this, uString** __retval)
{
    *__retval = __this->ReadAllText();
}

// public generated string get_SourcePath() :37
void BundleFile__get_SourcePath_fn(BundleFile* __this, uString** __retval)
{
    *__retval = __this->SourcePath();
}

// private generated void set_SourcePath(string value) :37
void BundleFile__set_SourcePath_fn(BundleFile* __this, uString* value)
{
    __this->SourcePath(value);
}

// public override sealed string ToString() :196
void BundleFile__ToString_fn(BundleFile* __this, uString** __retval)
{
    return *__retval = __this->SourcePath(), void();
}

// public extern void Update(byte[] bytes) :183
void BundleFile__Update_fn(BundleFile* __this, uArray* bytes)
{
    __this->Update(bytes);
}

uSStrong<uString*> BundleFile::BundleDirectory_;

// internal BundleFile(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) [instance] :73
void BundleFile::ctor_(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath)
{
    Bundle(bundle);
    SourcePath(sourcePath);
    BundlePath(bundlePath);
    IsFile(::g::Uno::String::op_Inequality(bundlePath, NULL));
}

// public generated Uno.IO.Bundle get_Bundle() [instance] :34
::g::Uno::IO::Bundle* BundleFile::Bundle()
{
    return _Bundle;
}

// private generated void set_Bundle(Uno.IO.Bundle value) [instance] :34
void BundleFile::Bundle(::g::Uno::IO::Bundle* value)
{
    _Bundle = value;
}

// public generated string get_BundlePath() [instance] :38
uString* BundleFile::BundlePath()
{
    return _BundlePath;
}

// private generated void set_BundlePath(string value) [instance] :38
void BundleFile::BundlePath(uString* value)
{
    _BundlePath = value;
}

// public generated void add_Changed(Uno.Action<Uno.IO.BundleFile> value) [instance] :31
void BundleFile::add_Changed(uDelegate* value)
{
    uStackFrame __("Uno.IO.BundleFile", "add_Changed(Uno.Action<Uno.IO.BundleFile>)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]);
}

// public generated void remove_Changed(Uno.Action<Uno.IO.BundleFile> value) [instance] :31
void BundleFile::remove_Changed(uDelegate* value)
{
    uStackFrame __("Uno.IO.BundleFile", "remove_Changed(Uno.Action<Uno.IO.BundleFile>)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]);
}

// public generated bool get_IsFile() [instance] :39
bool BundleFile::IsFile()
{
    return _IsFile;
}

// private generated void set_IsFile(bool value) [instance] :39
void BundleFile::IsFile(bool value)
{
    _IsFile = value;
}

// public string get_NativeBundlePath() [instance] :43
uString* BundleFile::NativeBundlePath()
{
    uStackFrame __("Uno.IO.BundleFile", "get_NativeBundlePath()");
    return ::g::Uno::IO::Path::Combine(BundleFile::BundleDirectory_, BundlePath());
}

// public Uno.IO.Stream OpenRead() [instance] :85
::g::Uno::IO::Stream* BundleFile::OpenRead()
{
    uStackFrame __("Uno.IO.BundleFile", "OpenRead()");

    if (_bytes != NULL)
        return ::g::Uno::IO::MemoryStream::New3(_bytes, false);

    if (::g::Uno::String::op_Equality(BundlePath(), NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[6/*"Uno.IO.Bund...*/]));

    return ::g::Uno::IO::File::OpenRead(NativeBundlePath());
}

// public byte[] ReadAllBytes() [instance] :153
uArray* BundleFile::ReadAllBytes()
{
    uStackFrame __("Uno.IO.BundleFile", "ReadAllBytes()");
    ::g::Uno::IO::Stream* stream = OpenRead();

    {
        try
        {
            {
                uArray* result = uArray::New(::TYPES[0/*byte[]*/], (int32_t)uPtr(stream)->Length());
                stream->Read(result, 0, result->Length());
                uArray* __uno_retval = result;
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::TYPES[8/*Uno.IDisposable*/]));
                return __uno_retval;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::TYPES[8/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_3;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::TYPES[8/*Uno.IDisposable*/]));
        }
        __after_finally_3:;
    }
}

// public string ReadAllText() [instance] :170
uString* BundleFile::ReadAllText()
{
    uStackFrame __("Uno.IO.BundleFile", "ReadAllText()");

    if (_bytes != NULL)
        return ::g::Uno::Text::Utf8::GetString(_bytes);

    return ::g::Uno::Text::Utf8::GetString(ReadAllBytes());
}

// public generated string get_SourcePath() [instance] :37
uString* BundleFile::SourcePath()
{
    return _SourcePath;
}

// private generated void set_SourcePath(string value) [instance] :37
void BundleFile::SourcePath(uString* value)
{
    _SourcePath = value;
}

// public extern void Update(byte[] bytes) [instance] :183
void BundleFile::Update(uArray* bytes)
{
    uStackFrame __("Uno.IO.BundleFile", "Update(byte[])");

    if (bytes == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[7/*"bytes"*/]));

    BundlePath(NULL);
    IsFile(false);
    _bytes = bytes;

    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->InvokeVoid(this);
}

// private static extern string GetBundleDirectory() [static] :56
uString* BundleFile::GetBundleDirectory()
{
    uStackFrame __("Uno.IO.BundleFile", "GetBundleDirectory()");
    BundleFile_typeof()->Init();
    int32_t i = 0;

    for (uString* parent = ::g::Uno::IO::Directory::GetBaseDirectory(); ; parent = ::g::Uno::IO::Path::GetDirectoryName(parent))
    {
        if (::g::Uno::String::IsNullOrEmpty(parent) || ((i++) == 4))
            U_THROW(::g::Uno::IO::FileNotFoundException::New5(::g::Uno::String::op_Addition2(::STRINGS[4/*"Bundle not ...*/], ::STRINGS[5/*"data"*/]), ::STRINGS[5/*"data"*/]));

        uString* test = ::g::Uno::IO::Path::Combine(parent, ::STRINGS[5/*"data"*/]);

        if (::g::Uno::IO::Directory::Exists(test))
            return test;
    }
}

// internal BundleFile New(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) [static] :73
BundleFile* BundleFile::New1(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath)
{
    BundleFile* obj1 = (BundleFile*)uNew(BundleFile_typeof());
    obj1->ctor_(bundle, sourcePath, bundlePath);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/DirectoryInfo.uno
// ---------------------------------------------------------------------------

// public sealed class DirectoryInfo :5
// {
static void DirectoryInfo_build(uType* type)
{
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DirectoryInfo__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::IO::FileSystemInfo_type* DirectoryInfo_typeof()
{
    static uSStrong< ::g::Uno::IO::FileSystemInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::FileSystemInfo_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(DirectoryInfo);
    options.TypeSize = sizeof(::g::Uno::IO::FileSystemInfo_type);
    type = (::g::Uno::IO::FileSystemInfo_type*)uClassType::New("Uno.IO.DirectoryInfo", options);
    type->fp_build_ = DirectoryInfo_build;
    type->fp_LoadStatus = (void(*)(::g::Uno::IO::FileSystemInfo*, ::g::Uno::IO::FileStatus**))DirectoryInfo__LoadStatus_fn;
    return type;
}

// public DirectoryInfo(string originalPath) :7
void DirectoryInfo__ctor_1_fn(DirectoryInfo* __this, uString* originalPath)
{
    __this->ctor_1(originalPath);
}

// internal override sealed extern Uno.IO.FileStatus LoadStatus() :18
void DirectoryInfo__LoadStatus_fn(DirectoryInfo* __this, ::g::Uno::IO::FileStatus** __retval)
{
    uStackFrame __("Uno.IO.DirectoryInfo", "LoadStatus()");
    ::g::Uno::IO::FileStatus* ret2;
    ::g::Uno::IO::FileStatus* status = (::g::Uno::IO::FileSystemInfo__LoadStatus_fn(__this, &ret2), ret2);

    if ((uPtr(status)->Attributes() & 16) == 0)
        return *__retval = ::g::Uno::IO::FileStatus::New1(), void();

    return *__retval = status, void();
}

// public DirectoryInfo New(string originalPath) :7
void DirectoryInfo__New1_fn(uString* originalPath, DirectoryInfo** __retval)
{
    *__retval = DirectoryInfo::New1(originalPath);
}

// public DirectoryInfo(string originalPath) [instance] :7
void DirectoryInfo::ctor_1(uString* originalPath)
{
    uStackFrame __("Uno.IO.DirectoryInfo", ".ctor(string)");
    ctor_(originalPath);
}

// public DirectoryInfo New(string originalPath) [static] :7
DirectoryInfo* DirectoryInfo::New1(uString* originalPath)
{
    DirectoryInfo* obj1 = (DirectoryInfo*)uNew(DirectoryInfo_typeof());
    obj1->ctor_1(originalPath);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/IOException.uno
// -------------------------------------------------------------------------

// public sealed class EndOfStreamException :15
// {
static void EndOfStreamException_build(uType* type)
{
    ::STRINGS[8] = uString::Const("Reached end of stream");
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)EndOfStreamException__New5_fn, 0, true, type, 0));
}

::g::Uno::Exception_type* EndOfStreamException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::IOException_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(EndOfStreamException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.IO.EndOfStreamException", options);
    type->fp_build_ = EndOfStreamException_build;
    type->fp_ctor_ = (void*)EndOfStreamException__New5_fn;
    return type;
}

// public EndOfStreamException() :17
void EndOfStreamException__ctor_4_fn(EndOfStreamException* __this)
{
    __this->ctor_4();
}

// public EndOfStreamException New() :17
void EndOfStreamException__New5_fn(EndOfStreamException** __retval)
{
    *__retval = EndOfStreamException::New5();
}

// public EndOfStreamException() [instance] :17
void EndOfStreamException::ctor_4()
{
    ctor_3(::STRINGS[8/*"Reached end...*/]);
}

// public EndOfStreamException New() [static] :17
EndOfStreamException* EndOfStreamException::New5()
{
    EndOfStreamException* obj1 = (EndOfStreamException*)uNew(EndOfStreamException_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Directory.uno
// -----------------------------------------------------------------------

// private sealed class Directory.Enumerable :407
// {
static void Directory__Enumerable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Directory__Enumerable_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Directory__Enumerable, _dirName), 0,
        ::g::Uno::IO::Directory__EnumeratorMode_typeof(), offsetof(Directory__Enumerable, _mode), 0);
}

Directory__Enumerable_type* Directory__Enumerable_typeof()
{
    static uSStrong<Directory__Enumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Directory__Enumerable);
    options.TypeSize = sizeof(Directory__Enumerable_type);
    type = (Directory__Enumerable_type*)uClassType::New("Uno.IO.Directory.Enumerable", options);
    type->fp_build_ = Directory__Enumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))Directory__Enumerable__GetEnumerator_fn;
    return type;
}

// public Enumerable(string dirName, Uno.IO.Directory.EnumeratorMode mode) :412
void Directory__Enumerable__ctor__fn(Directory__Enumerable* __this, uString* dirName, int32_t* mode)
{
    __this->ctor_(dirName, *mode);
}

// public Uno.Collections.IEnumerator<string> GetEnumerator() :418
void Directory__Enumerable__GetEnumerator_fn(Directory__Enumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Enumerable New(string dirName, Uno.IO.Directory.EnumeratorMode mode) :412
void Directory__Enumerable__New1_fn(uString* dirName, int32_t* mode, Directory__Enumerable** __retval)
{
    *__retval = Directory__Enumerable::New1(dirName, *mode);
}

// public Enumerable(string dirName, Uno.IO.Directory.EnumeratorMode mode) [instance] :412
void Directory__Enumerable::ctor_(uString* dirName, int32_t mode)
{
    _dirName = dirName;
    _mode = mode;
}

// public Uno.Collections.IEnumerator<string> GetEnumerator() [instance] :418
uObject* Directory__Enumerable::GetEnumerator()
{
    uStackFrame __("Uno.IO.Directory.Enumerable", "GetEnumerator()");
    return (uObject*)::g::Uno::IO::Directory__Enumerator::New1(_dirName, _mode);
}

// public Enumerable New(string dirName, Uno.IO.Directory.EnumeratorMode mode) [static] :412
Directory__Enumerable* Directory__Enumerable::New1(uString* dirName, int32_t mode)
{
    Directory__Enumerable* obj1 = (Directory__Enumerable*)uNew(Directory__Enumerable_typeof());
    obj1->ctor_(dirName, mode);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Directory.uno
// -----------------------------------------------------------------------

// private sealed class Directory.Enumerator :425
// {
static void Directory__Enumerator_build(uType* type)
{
    ::STRINGS[9] = uString::Const("dirName");
    ::STRINGS[10] = uString::Const("Directory not found: ");
    ::STRINGS[11] = uString::Const(".");
    ::STRINGS[12] = uString::Const("");
    ::TYPES[5] = ::g::Uno::Char_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::IO::Path_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Directory__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Directory__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Directory__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::IO::Directory__EnumeratorMode_typeof(), offsetof(Directory__Enumerator, _mode), 0,
        ::g::Uno::String_typeof(), offsetof(Directory__Enumerator, _prefix), 0,
        ::g::Uno::String_typeof(), offsetof(Directory__Enumerator, _current), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(Directory__Enumerator, _handle), 0);
}

Directory__Enumerator_type* Directory__Enumerator_typeof()
{
    static uSStrong<Directory__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Directory__Enumerator);
    options.TypeSize = sizeof(Directory__Enumerator_type);
    type = (Directory__Enumerator_type*)uClassType::New("Uno.IO.Directory.Enumerator", options);
    type->fp_build_ = Directory__Enumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))Directory__Enumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Directory__Enumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))Directory__Enumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))Directory__Enumerator__MoveNext_fn;
    return type;
}

// public Enumerator(string dirName, Uno.IO.Directory.EnumeratorMode mode) :436
void Directory__Enumerator__ctor__fn(Directory__Enumerator* __this, uString* dirName, int32_t* mode)
{
    __this->ctor_(dirName, *mode);
}

// public string get_Current() :434
void Directory__Enumerator__get_Current_fn(Directory__Enumerator* __this, uString** __retval)
{
    *__retval = __this->Current();
}

// public void Dispose() :458
void Directory__Enumerator__Dispose_fn(Directory__Enumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :485
void Directory__Enumerator__MoveNext_fn(Directory__Enumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public Enumerator New(string dirName, Uno.IO.Directory.EnumeratorMode mode) :436
void Directory__Enumerator__New1_fn(uString* dirName, int32_t* mode, Directory__Enumerator** __retval)
{
    *__retval = Directory__Enumerator::New1(dirName, *mode);
}

// public void Reset() :469
void Directory__Enumerator__Reset_fn(Directory__Enumerator* __this)
{
    __this->Reset();
}

// public Enumerator(string dirName, Uno.IO.Directory.EnumeratorMode mode) [instance] :436
void Directory__Enumerator::ctor_(uString* dirName, int32_t mode)
{
    uStackFrame __("Uno.IO.Directory.Enumerator", ".ctor(string,Uno.IO.Directory.EnumeratorMode)");

    if (::g::Uno::String::op_Equality(dirName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[9/*"dirName"*/]));

    dirName = ::g::Uno::String::TrimEnd(uPtr(dirName), uArray::Init<int32_t>(::TYPES[5/*char[]*/], 1, ::g::Uno::IO::Path::DirectorySeparatorChar()));

    if (!::g::Uno::IO::Directory::Exists(dirName))
        U_THROW(::g::Uno::IO::FileNotFoundException::New5(::g::Uno::String::op_Addition2(::STRINGS[10/*"Directory n...*/], dirName), dirName));

    _mode = mode;
    _prefix = (::g::Uno::String::op_Inequality(dirName, ::STRINGS[11/*"."*/]) ? (uString*)::g::Uno::String::op_Addition1(dirName, uBox<char16_t>(::TYPES[2/*char*/], ::g::Uno::IO::Path::DirectorySeparatorChar())) : ::STRINGS[12/*""*/]);
}

// public string get_Current() [instance] :434
uString* Directory__Enumerator::Current()
{
    return _current;
}

// public void Dispose() [instance] :458
void Directory__Enumerator::Dispose()
{
    Reset();
}

// public bool MoveNext() [instance] :485
bool Directory__Enumerator::MoveNext()
{
    uStackFrame __("Uno.IO.Directory.Enumerator", "MoveNext()");

    if (::g::Uno::IntPtr::op_Equality(_handle, ::g::Uno::IntPtr::Zero_))
        _handle = opendir(uCString(this->_prefix).Ptr);

    struct dirent *ep;

    while ((ep = readdir((DIR*) this->_handle)))
    {
        if (!strcmp(".", ep->d_name) || !strcmp("..", ep->d_name))
            continue;
        _current = ::g::Uno::String::op_Addition2(_prefix, uString::Utf8(ep->d_name));

        switch (_mode)
        {
            case 1:
            {
                if (!::g::Uno::IO::Directory::Exists(_current))
                    continue;

                break;
            }
            case 2:
            {
                if (!::g::Uno::IO::File::Exists(_current))
                    continue;

                break;
            }
        }

        return true;
    }

    return false;
}

// public void Reset() [instance] :469
void Directory__Enumerator::Reset()
{
    _current = NULL;
    closedir((DIR*) this->_handle);
    this->_handle = NULL;
}

// public Enumerator New(string dirName, Uno.IO.Directory.EnumeratorMode mode) [static] :436
Directory__Enumerator* Directory__Enumerator::New1(uString* dirName, int32_t mode)
{
    Directory__Enumerator* obj1 = (Directory__Enumerator*)uNew(Directory__Enumerator_typeof());
    obj1->ctor_(dirName, mode);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Directory.uno
// -----------------------------------------------------------------------

// private enum Directory.EnumeratorMode :563
uEnumType* Directory__EnumeratorMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.Directory.EnumeratorMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "AllEntries", 0LL,
        "Directories", 1LL,
        "Files", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/File.uno
// ------------------------------------------------------------------

// public static class File :14
// {
static void File_build(uType* type)
{
    ::STRINGS[13] = uString::Const("sourceFile");
    ::STRINGS[14] = uString::Const("destinationFile");
    ::STRINGS[15] = uString::Const("Unable to copy from file '");
    ::STRINGS[16] = uString::Const("'");
    ::STRINGS[17] = uString::Const("Unable to copy to file '");
    ::STRINGS[18] = uString::Const("filename");
    ::STRINGS[19] = uString::Const("Unable to delete file '");
    ::STRINGS[20] = uString::Const("oldName");
    ::STRINGS[21] = uString::Const("newName");
    ::STRINGS[22] = uString::Const("Unable to move file '");
    ::STRINGS[23] = uString::Const("' to '");
    ::STRINGS[24] = uString::Const("rb");
    ::TYPES[8] = ::g::Uno::IDisposable_typeof();
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    type->Reflection.SetFunctions(12,
        new uFunction("AppendAllText", NULL, (void*)File__AppendAllText_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Copy", NULL, (void*)File__Copy_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Copy", NULL, (void*)File__Copy1_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Delete", NULL, (void*)File__Delete_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Exists", NULL, (void*)File__Exists_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Move", NULL, (void*)File__Move_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Open", NULL, (void*)File__Open_fn, 0, true, ::g::Uno::IO::FileStream_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::IO::FileMode_typeof()),
        new uFunction("OpenRead", NULL, (void*)File__OpenRead_fn, 0, true, ::g::Uno::IO::FileStream_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("ReadAllBytes", NULL, (void*)File__ReadAllBytes_fn, 0, true, ::TYPES[0/*byte[]*/], 1, ::g::Uno::String_typeof()),
        new uFunction("ReadAllText", NULL, (void*)File__ReadAllText_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("WriteAllBytes", NULL, (void*)File__WriteAllBytes_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::TYPES[0/*byte[]*/]),
        new uFunction("WriteAllText", NULL, (void*)File__WriteAllText_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

uClassType* File_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.File", options);
    type->fp_build_ = File_build;
    return type;
}

// public static void AppendAllText(string filename, string contents) :173
void File__AppendAllText_fn(uString* filename, uString* contents)
{
    File::AppendAllText(filename, contents);
}

// public static void Copy(string sourceFile, string destinationFile) :57
void File__Copy_fn(uString* sourceFile, uString* destinationFile)
{
    File::Copy(sourceFile, destinationFile);
}

// public static void Copy(string sourceFile, string destinationFile, bool overwrite) :62
void File__Copy1_fn(uString* sourceFile, uString* destinationFile, bool* overwrite)
{
    File::Copy1(sourceFile, destinationFile, *overwrite);
}

// public static void Delete(string filename) :37
void File__Delete_fn(uString* filename)
{
    File::Delete(filename);
}

// public static bool Exists(string filename) :143
void File__Exists_fn(uString* filename, bool* __retval)
{
    *__retval = File::Exists(filename);
}

// public static void Move(string oldName, string newName) :120
void File__Move_fn(uString* oldName, uString* newName)
{
    File::Move(oldName, newName);
}

// public static Uno.IO.FileStream Open(string filename, Uno.IO.FileMode filemode) :16
void File__Open_fn(uString* filename, int32_t* filemode, ::g::Uno::IO::FileStream** __retval)
{
    *__retval = File::Open(filename, *filemode);
}

// public static Uno.IO.FileStream OpenRead(string filename) :21
void File__OpenRead_fn(uString* filename, ::g::Uno::IO::FileStream** __retval)
{
    *__retval = File::OpenRead(filename);
}

// public static byte[] ReadAllBytes(string filename) :194
void File__ReadAllBytes_fn(uString* filename, uArray** __retval)
{
    *__retval = File::ReadAllBytes(filename);
}

// public static string ReadAllText(string filename) :179
void File__ReadAllText_fn(uString* filename, uString** __retval)
{
    *__retval = File::ReadAllText(filename);
}

// public static void WriteAllBytes(string filename, byte[] bytes) :210
void File__WriteAllBytes_fn(uString* filename, uArray* bytes)
{
    File::WriteAllBytes(filename, bytes);
}

// public static void WriteAllText(string filename, string text) :204
void File__WriteAllText_fn(uString* filename, uString* text)
{
    File::WriteAllText(filename, text);
}

// public static void AppendAllText(string filename, string contents) [static] :173
void File::AppendAllText(uString* filename, uString* contents)
{
    uStackFrame __("Uno.IO.File", "AppendAllText(string,string)");
    ::g::Uno::IO::StreamWriter* w = ::g::Uno::IO::StreamWriter::New1(File::Open(filename, 6));

    {
        try
        {
            {
                uPtr(w)->Write9(contents);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)w), ::TYPES[8/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_4;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)w), ::TYPES[8/*Uno.IDisposable*/]));
        }
        __after_finally_4:;
    }
}

// public static void Copy(string sourceFile, string destinationFile) [static] :57
void File::Copy(uString* sourceFile, uString* destinationFile)
{
    uStackFrame __("Uno.IO.File", "Copy(string,string)");
    File::Copy1(sourceFile, destinationFile, false);
}

// public static void Copy(string sourceFile, string destinationFile, bool overwrite) [static] :62
void File::Copy1(uString* sourceFile, uString* destinationFile, bool overwrite)
{
    uStackFrame __("Uno.IO.File", "Copy(string,string,bool)");

    if (::g::Uno::String::op_Equality(sourceFile, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[13/*"sourceFile"*/]));

    if (::g::Uno::String::op_Equality(destinationFile, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[14/*"destination...*/]));

    int32_t source;
    int32_t destination;
    uCString sourceFileU8(sourceFile);
    source = open(sourceFileU8.Ptr, O_RDONLY);

    if (source == -1)
        U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[15/*"Unable to c...*/], sourceFile), ::STRINGS[16/*"'"*/])));

    uCString destinationFileU8(destinationFile);
    int createFlags = O_WRONLY | O_CREAT;
    
    if (!overwrite)
        createFlags |= O_EXCL;
    
    struct stat stat_buf;
    fstat(source, &stat_buf);
    destination = open(destinationFileU8.Ptr, createFlags, stat_buf.st_mode);

    if (destination == -1)
    {
        close(source);
        U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[17/*"Unable to c...*/], destinationFile), ::STRINGS[16/*"'"*/])));
    }

    char buf[BUFSIZ];
    size_t size = 0;
    
    while ((size = read(source, buf, BUFSIZ)) > 0)
        write(destination, buf, size);
    
    close(source);
    close(destination);
}

// public static void Delete(string filename) [static] :37
void File::Delete(uString* filename)
{
    uStackFrame __("Uno.IO.File", "Delete(string)");

    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[18/*"filename"*/]));

    uCString cstr(filename);

    if (unlink(cstr.Ptr) != 0)
        U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[19/*"Unable to d...*/], filename), ::STRINGS[16/*"'"*/])));
}

// public static bool Exists(string filename) [static] :143
bool File::Exists(uString* filename)
{
    uStackFrame __("Uno.IO.File", "Exists(string)");

    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[18/*"filename"*/]));

    struct stat attributes;
    return stat(uCString(filename).Ptr, &attributes) != -1 &&
        !S_ISDIR(attributes.st_mode);
}

// public static void Move(string oldName, string newName) [static] :120
void File::Move(uString* oldName, uString* newName)
{
    uStackFrame __("Uno.IO.File", "Move(string,string)");

    if (::g::Uno::String::op_Equality(oldName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[20/*"oldName"*/]));

    if (::g::Uno::String::op_Equality(newName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[21/*"newName"*/]));

    uCString oldNameU8(oldName);
    uCString newNameU8(newName);

    if (rename(oldNameU8.Ptr, newNameU8.Ptr) != 0)
        U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[22/*"Unable to m...*/], oldName), ::STRINGS[23/*"' to '"*/]), newName), ::STRINGS[16/*"'"*/])));
}

// public static Uno.IO.FileStream Open(string filename, Uno.IO.FileMode filemode) [static] :16
::g::Uno::IO::FileStream* File::Open(uString* filename, int32_t filemode)
{
    return ::g::Uno::IO::FileStream::New1(filename, filemode);
}

// public static Uno.IO.FileStream OpenRead(string filename) [static] :21
::g::Uno::IO::FileStream* File::OpenRead(uString* filename)
{
    uStackFrame __("Uno.IO.File", "OpenRead(string)");
    return ::g::Uno::IO::FileStream::New2(::g::Uno::IO::FILEPtr::OpenOrThrow(filename, ::STRINGS[24/*"rb"*/]), true, false);
}

// public static byte[] ReadAllBytes(string filename) [static] :194
uArray* File::ReadAllBytes(uString* filename)
{
    uStackFrame __("Uno.IO.File", "ReadAllBytes(string)");
    ::g::Uno::IO::FileStream* f = File::Open(filename, 3);

    {
        try
        {
            {
                uArray* result = uArray::New(::TYPES[0/*byte[]*/], (int32_t)uPtr(f)->Length());
                f->Read(result, 0, result->Length());
                uArray* __uno_retval = result;
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)f), ::TYPES[8/*Uno.IDisposable*/]));
                return __uno_retval;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)f), ::TYPES[8/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_5;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)f), ::TYPES[8/*Uno.IDisposable*/]));
        }
        __after_finally_5:;
    }
}

// public static string ReadAllText(string filename) [static] :179
uString* File::ReadAllText(uString* filename)
{
    uStackFrame __("Uno.IO.File", "ReadAllText(string)");
    ::g::Uno::IO::StreamReader* r = ::g::Uno::IO::StreamReader::New1(File::Open(filename, 3));

    {
        try
        {
            {
                uString* __uno_retval = uPtr(r)->ReadToEnd();
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)r), ::TYPES[8/*Uno.IDisposable*/]));
                return __uno_retval;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)r), ::TYPES[8/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_6;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)r), ::TYPES[8/*Uno.IDisposable*/]));
        }
        __after_finally_6:;
    }
}

// public static void WriteAllBytes(string filename, byte[] bytes) [static] :210
void File::WriteAllBytes(uString* filename, uArray* bytes)
{
    uStackFrame __("Uno.IO.File", "WriteAllBytes(string,byte[])");
    ::g::Uno::IO::FileStream* f = File::Open(filename, 2);

    {
        try
        {
            {
                uPtr(f)->Write(bytes, 0, uPtr(bytes)->Length());
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)f), ::TYPES[8/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_7;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)f), ::TYPES[8/*Uno.IDisposable*/]));
        }
        __after_finally_7:;
    }
}

// public static void WriteAllText(string filename, string text) [static] :204
void File::WriteAllText(uString* filename, uString* text)
{
    uStackFrame __("Uno.IO.File", "WriteAllText(string,string)");
    ::g::Uno::IO::StreamWriter* w = ::g::Uno::IO::StreamWriter::New1(File::Open(filename, 2));

    {
        try
        {
            {
                uPtr(w)->Write9(text);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)w), ::TYPES[8/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_8;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)w), ::TYPES[8/*Uno.IDisposable*/]));
        }
        __after_finally_8:;
    }
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/FileAttributes.uno
// ----------------------------------------------------------------------------

// public enum FileAttributes :3
uEnumType* FileAttributes_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.FileAttributes", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Directory", 16LL,
        "Device", 64LL,
        "ReparsePoint", 1024LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/FileInfo.uno
// ----------------------------------------------------------------------

// public sealed class FileInfo :5
// {
static void FileInfo_build(uType* type)
{
    type->SetFields(3);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Length", NULL, (void*)FileInfo__get_Length_fn, 0, false, ::g::Uno::Long_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)FileInfo__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::IO::FileSystemInfo_type* FileInfo_typeof()
{
    static uSStrong< ::g::Uno::IO::FileSystemInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::FileSystemInfo_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FileInfo);
    options.TypeSize = sizeof(::g::Uno::IO::FileSystemInfo_type);
    type = (::g::Uno::IO::FileSystemInfo_type*)uClassType::New("Uno.IO.FileInfo", options);
    type->fp_build_ = FileInfo_build;
    type->fp_LoadStatus = (void(*)(::g::Uno::IO::FileSystemInfo*, ::g::Uno::IO::FileStatus**))FileInfo__LoadStatus_fn;
    return type;
}

// public FileInfo(string originalPath) :10
void FileInfo__ctor_1_fn(FileInfo* __this, uString* originalPath)
{
    __this->ctor_1(originalPath);
}

// public long get_Length() :34
void FileInfo__get_Length_fn(FileInfo* __this, int64_t* __retval)
{
    *__retval = __this->Length();
}

// internal override sealed extern Uno.IO.FileStatus LoadStatus() :21
void FileInfo__LoadStatus_fn(FileInfo* __this, ::g::Uno::IO::FileStatus** __retval)
{
    uStackFrame __("Uno.IO.FileInfo", "LoadStatus()");
    ::g::Uno::IO::FileStatus* ret2;
    ::g::Uno::IO::FileStatus* status = (::g::Uno::IO::FileSystemInfo__LoadStatus_fn(__this, &ret2), ret2);

    if ((uPtr(status)->Attributes() & 16) != 0)
        return *__retval = ::g::Uno::IO::FileStatus::New1(), void();

    return *__retval = status, void();
}

// public FileInfo New(string originalPath) :10
void FileInfo__New1_fn(uString* originalPath, FileInfo** __retval)
{
    *__retval = FileInfo::New1(originalPath);
}

// public FileInfo(string originalPath) [instance] :10
void FileInfo::ctor_1(uString* originalPath)
{
    uStackFrame __("Uno.IO.FileInfo", ".ctor(string)");
    ctor_(originalPath);
}

// public long get_Length() [instance] :34
int64_t FileInfo::Length()
{
    uStackFrame __("Uno.IO.FileInfo", "get_Length()");
    return uPtr(Status())->Length();
}

// public FileInfo New(string originalPath) [static] :10
FileInfo* FileInfo::New1(uString* originalPath)
{
    FileInfo* obj1 = (FileInfo*)uNew(FileInfo_typeof());
    obj1->ctor_1(originalPath);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/FileMode.uno
// ----------------------------------------------------------------------

// public enum FileMode :6
uEnumType* FileMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.FileMode", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "CreateNew", 1LL,
        "Create", 2LL,
        "Open", 3LL,
        "OpenOrCreate", 4LL,
        "Truncate", 5LL,
        "Append", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/IOException.uno
// -------------------------------------------------------------------------

// public sealed class FileNotFoundException :24
// {
static void FileNotFoundException_build(uType* type)
{
    type->SetFields(4,
        ::g::Uno::String_typeof(), offsetof(FileNotFoundException, _FileName), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_FileName", NULL, (void*)FileNotFoundException__get_FileName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)FileNotFoundException__New5_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* FileNotFoundException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::IOException_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FileNotFoundException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.IO.FileNotFoundException", options);
    type->fp_build_ = FileNotFoundException_build;
    return type;
}

// public FileNotFoundException(string message, string filename) :28
void FileNotFoundException__ctor_4_fn(FileNotFoundException* __this, uString* message, uString* filename)
{
    __this->ctor_4(message, filename);
}

// public generated string get_FileName() :26
void FileNotFoundException__get_FileName_fn(FileNotFoundException* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// private generated void set_FileName(string value) :26
void FileNotFoundException__set_FileName_fn(FileNotFoundException* __this, uString* value)
{
    __this->FileName(value);
}

// public FileNotFoundException New(string message, string filename) :28
void FileNotFoundException__New5_fn(uString* message, uString* filename, FileNotFoundException** __retval)
{
    *__retval = FileNotFoundException::New5(message, filename);
}

// public FileNotFoundException(string message, string filename) [instance] :28
void FileNotFoundException::ctor_4(uString* message, uString* filename)
{
    ctor_3(message);
    FileName(filename);
}

// public generated string get_FileName() [instance] :26
uString* FileNotFoundException::FileName()
{
    return _FileName;
}

// private generated void set_FileName(string value) [instance] :26
void FileNotFoundException::FileName(uString* value)
{
    _FileName = value;
}

// public FileNotFoundException New(string message, string filename) [static] :28
FileNotFoundException* FileNotFoundException::New5(uString* message, uString* filename)
{
    FileNotFoundException* obj1 = (FileNotFoundException*)uNew(FileNotFoundException_typeof());
    obj1->ctor_4(message, filename);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/FileStream.uno
// ------------------------------------------------------------------------

// internal extern struct FILEPtr :9
// {
static void FILEPtr_build(uType* type)
{
    ::STRINGS[18] = uString::Const("filename");
    ::STRINGS[25] = uString::Const("Can't open file: ");
}

uStructType* FILEPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(FILE*);
    options.ValueSize = sizeof(FILE*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.IO.FILEPtr", options);
    type->fp_build_ = FILEPtr_build;
    return type;
}

// public static Uno.IO.FILEPtr OpenOrThrow(string filename, string mode) :12
void FILEPtr__OpenOrThrow_fn(uString* filename, uString* mode, FILE** __retval)
{
    *__retval = FILEPtr::OpenOrThrow(filename, mode);
}

// private static void Throw(string filename) :33
void FILEPtr__Throw_fn(uString* filename)
{
    FILEPtr::Throw(filename);
}

// public static Uno.IO.FILEPtr OpenOrThrow(string filename, string mode) [static] :12
FILE* FILEPtr::OpenOrThrow(uString* filename, uString* mode)
{
    uStackFrame __("Uno.IO.FILEPtr", "OpenOrThrow(string,string)");

    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[18/*"filename"*/]));

    FILE* retval = fopen(uCString(filename).Ptr, uCString(mode).Ptr);
    if (!retval)
        FILEPtr::Throw(filename);
    return retval;
}

// private static void Throw(string filename) [static] :33
void FILEPtr::Throw(uString* filename)
{
    uStackFrame __("Uno.IO.FILEPtr", "Throw(string)");
    U_THROW(::g::Uno::IO::FileNotFoundException::New5(::g::Uno::String::op_Addition2(::STRINGS[25/*"Can't open ...*/], filename), filename));
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/FileStatus.uno
// ------------------------------------------------------------------------

// internal sealed class FileStatus :6
// {
// static generated FileStatus() :6
static void FileStatus__cctor__fn(uType* __type)
{
    FileStatus::FileTimeEpoch_ = ::g::Uno::Time::Instant__FromUtc(1601, 1, 1, 0, 0);
}

static void FileStatus_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Time::DateTimeZone_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(FileStatus, _exists), 0,
        ::g::Uno::Long_typeof(), offsetof(FileStatus, _length), 0,
        ::g::Uno::IO::FileAttributes_typeof(), offsetof(FileStatus, _attributes), 0,
        ::g::Uno::Time::ZonedDateTime_typeof(), offsetof(FileStatus, _creationTimeUtc), 0,
        ::g::Uno::Time::ZonedDateTime_typeof(), offsetof(FileStatus, _lastAccessTimeUtc), 0,
        ::g::Uno::Time::ZonedDateTime_typeof(), offsetof(FileStatus, _lastWriteTimeUtc), 0,
        ::g::Uno::Time::Instant_typeof(), (uintptr_t)&FileStatus::FileTimeEpoch_, uFieldFlagsStatic);
}

uType* FileStatus_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FileStatus);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.IO.FileStatus", options);
    type->fp_build_ = FileStatus_build;
    type->fp_ctor_ = (void*)FileStatus__New1_fn;
    type->fp_cctor_ = FileStatus__cctor__fn;
    return type;
}

// public FileStatus() :18
void FileStatus__ctor__fn(FileStatus* __this)
{
    __this->ctor_();
}

// public FileStatus(long length, Uno.IO.FileAttributes attributes, Uno.Time.ZonedDateTime creationTimeUtc, Uno.Time.ZonedDateTime lastAccessTimeUtc, Uno.Time.ZonedDateTime lastWriteTimeUtc) :34
void FileStatus__ctor_1_fn(FileStatus* __this, int64_t* length, int32_t* attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc)
{
    __this->ctor_1(*length, *attributes, creationTimeUtc, lastAccessTimeUtc, lastWriteTimeUtc);
}

// public Uno.IO.FileAttributes get_Attributes() :55
void FileStatus__get_Attributes_fn(FileStatus* __this, int32_t* __retval)
{
    *__retval = __this->Attributes();
}

// public bool get_Exists() :53
void FileStatus__get_Exists_fn(FileStatus* __this, bool* __retval)
{
    *__retval = __this->Exists();
}

// public Uno.Time.ZonedDateTime get_LastAccessTimeUtc() :57
void FileStatus__get_LastAccessTimeUtc_fn(FileStatus* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->LastAccessTimeUtc();
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() :59
void FileStatus__get_LastWriteTimeUtc_fn(FileStatus* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->LastWriteTimeUtc();
}

// public long get_Length() :61
void FileStatus__get_Length_fn(FileStatus* __this, int64_t* __retval)
{
    *__retval = __this->Length();
}

// public FileStatus New() :18
void FileStatus__New1_fn(FileStatus** __retval)
{
    *__retval = FileStatus::New1();
}

// public FileStatus New(long length, Uno.IO.FileAttributes attributes, Uno.Time.ZonedDateTime creationTimeUtc, Uno.Time.ZonedDateTime lastAccessTimeUtc, Uno.Time.ZonedDateTime lastWriteTimeUtc) :34
void FileStatus__New2_fn(int64_t* length, int32_t* attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc, FileStatus** __retval)
{
    *__retval = FileStatus::New2(*length, *attributes, creationTimeUtc, lastAccessTimeUtc, lastWriteTimeUtc);
}

::g::Uno::Time::Instant FileStatus::FileTimeEpoch_;

// public FileStatus() [instance] :18
void FileStatus::ctor_()
{
    ::g::Uno::Time::ZonedDateTime* defaultTime = ::g::Uno::Time::ZonedDateTime::New1(FileStatus::FileTimeEpoch_, ::g::Uno::Time::DateTimeZone::Utc());
    _creationTimeUtc = defaultTime;
    _lastWriteTimeUtc = defaultTime;
    _lastAccessTimeUtc = defaultTime;
    _exists = false;
    _attributes = -1;
}

// public FileStatus(long length, Uno.IO.FileAttributes attributes, Uno.Time.ZonedDateTime creationTimeUtc, Uno.Time.ZonedDateTime lastAccessTimeUtc, Uno.Time.ZonedDateTime lastWriteTimeUtc) [instance] :34
void FileStatus::ctor_1(int64_t length, int32_t attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc)
{
    _length = length;
    _attributes = attributes;
    _creationTimeUtc = creationTimeUtc;
    _lastWriteTimeUtc = lastWriteTimeUtc;
    _lastAccessTimeUtc = lastAccessTimeUtc;
    _exists = true;
}

// public Uno.IO.FileAttributes get_Attributes() [instance] :55
int32_t FileStatus::Attributes()
{
    return _attributes;
}

// public bool get_Exists() [instance] :53
bool FileStatus::Exists()
{
    return _exists;
}

// public Uno.Time.ZonedDateTime get_LastAccessTimeUtc() [instance] :57
::g::Uno::Time::ZonedDateTime* FileStatus::LastAccessTimeUtc()
{
    return _lastAccessTimeUtc;
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() [instance] :59
::g::Uno::Time::ZonedDateTime* FileStatus::LastWriteTimeUtc()
{
    return _lastWriteTimeUtc;
}

// public long get_Length() [instance] :61
int64_t FileStatus::Length()
{
    return _length;
}

// public FileStatus New() [static] :18
FileStatus* FileStatus::New1()
{
    FileStatus* obj1 = (FileStatus*)uNew(FileStatus_typeof());
    obj1->ctor_();
    return obj1;
}

// public FileStatus New(long length, Uno.IO.FileAttributes attributes, Uno.Time.ZonedDateTime creationTimeUtc, Uno.Time.ZonedDateTime lastAccessTimeUtc, Uno.Time.ZonedDateTime lastWriteTimeUtc) [static] :34
FileStatus* FileStatus::New2(int64_t length, int32_t attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc)
{
    FileStatus* obj2 = (FileStatus*)uNew(FileStatus_typeof());
    obj2->ctor_1(length, attributes, creationTimeUtc, lastAccessTimeUtc, lastWriteTimeUtc);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/FileStatusHelpers.Unix.uno
// ------------------------------------------------------------------------------------

// internal static extern class FileStatusHelpers :10
// {
static void FileStatusHelpers_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Time::DateTimeZone_typeof());
}

uClassType* FileStatusHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.FileStatusHelpers", options);
    type->fp_build_ = FileStatusHelpers_build;
    return type;
}

// public static extern Uno.IO.FileStatus GetFileStatus(string path) :18
void FileStatusHelpers__GetFileStatus_fn(uString* path, ::g::Uno::IO::FileStatus** __retval)
{
    *__retval = FileStatusHelpers::GetFileStatus(path);
}

// private static extern Uno.Time.ZonedDateTime UnixTimeToZoned(long sec) :12
void FileStatusHelpers__UnixTimeToZoned_fn(int64_t* sec, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = FileStatusHelpers::UnixTimeToZoned(*sec);
}

// public static extern Uno.IO.FileStatus GetFileStatus(string path) [static] :18
::g::Uno::IO::FileStatus* FileStatusHelpers::GetFileStatus(uString* path)
{
    struct stat s;
    
    if (stat(uCString(path).Ptr, &s) == -1)
        return ::g::Uno::IO::FileStatus::New1();
    
    int32_t attributes = 0;
    
    // ReadOnly used to be mapped the following way in uno-base,
    // but until we're sure this is the correct way to do we just avoid
    // mapping the ReadOnly attribute at all.
    //
    // if (!(((s.st_mode & S_IWOTH) == S_IWOTH)
    //    || (s.st_gid == getgid() && ((s.st_mode & S_IWGRP) == S_IWGRP))
    //    || (s.st_uid == getuid() && ((s.st_mode & S_IWUSR) == S_IWUSR))))
    //    attributes |= AT{FileAttributes.ReadOnly};
    
    if (S_ISDIR(s.st_mode))
        attributes |= 16;
    
    if (S_ISCHR(s.st_mode) || S_ISBLK(s.st_mode))
        attributes |= 64;
    
    if (S_ISLNK(s.st_mode))
        attributes |= 1024;
    
    // Apparently posix stat standard doesn't define a way to get creation time,
    // so we'll just use lastWriteTime.
    // TODO: It seems like this might be possible on macOS though, in some non-posix way..
    ::g::Uno::Time::ZonedDateTime* lastWriteTime =
        FileStatusHelpers::UnixTimeToZoned(s.st_mtime);
    ::g::Uno::Time::ZonedDateTime* lastAccessTime =
        FileStatusHelpers::UnixTimeToZoned(s.st_atime);
    
    return ::g::Uno::IO::FileStatus::New2(s.st_size, attributes, lastWriteTime, lastAccessTime, lastWriteTime);
}

// private static extern Uno.Time.ZonedDateTime UnixTimeToZoned(long sec) [static] :12
::g::Uno::Time::ZonedDateTime* FileStatusHelpers::UnixTimeToZoned(int64_t sec)
{
    int64_t ticks = sec * 10000000LL;
    return ::g::Uno::Time::ZonedDateTime::New1(::g::Uno::Time::Instant__New1(ticks), ::g::Uno::Time::DateTimeZone::Utc());
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/FileStream.uno
// ------------------------------------------------------------------------

// public sealed class FileStream :40
// {
static void FileStream_build(uType* type)
{
    ::STRINGS[26] = uString::Const("The file stream was closed");
    ::STRINGS[27] = uString::Const("File not found: ");
    ::STRINGS[28] = uString::Const("wb");
    ::STRINGS[29] = uString::Const("r+b");
    ::STRINGS[30] = uString::Const("File already exists: ");
    ::STRINGS[31] = uString::Const("ab");
    ::STRINGS[32] = uString::Const("mode");
    ::STRINGS[33] = uString::Const("File stream is not readable");
    ::STRINGS[34] = uString::Const("Error while seeking in file stream");
    ::STRINGS[35] = uString::Const("File stream is not writable");
    ::STRINGS[36] = uString::Const("Error while writing to file stream");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::FILEPtr_typeof(), offsetof(FileStream, _fp), 0,
        ::g::Uno::Bool_typeof(), offsetof(FileStream, _canRead), 0,
        ::g::Uno::Bool_typeof(), offsetof(FileStream, _canWrite), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FileStream__New1_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::IO::FileMode_typeof()));
}

::g::Uno::IO::Stream_type* FileStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::Stream_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FileStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Uno.IO.FileStream", options);
    type->fp_build_ = FileStream_build;
    type->fp_get_CanRead = (void(*)(::g::Uno::IO::Stream*, bool*))FileStream__get_CanRead_fn;
    type->fp_get_CanSeek = (void(*)(::g::Uno::IO::Stream*, bool*))FileStream__get_CanSeek_fn;
    type->fp_get_CanWrite = (void(*)(::g::Uno::IO::Stream*, bool*))FileStream__get_CanWrite_fn;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::Stream*, bool*))FileStream__Dispose1_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))FileStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))FileStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))FileStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))FileStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*, int32_t*))FileStream__Read_fn;
    type->fp_Seek = (void(*)(::g::Uno::IO::Stream*, int64_t*, int32_t*, int64_t*))FileStream__Seek_fn;
    type->fp_SetLength = (void(*)(::g::Uno::IO::Stream*, int64_t*))FileStream__SetLength_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*))FileStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public FileStream(string filename, Uno.IO.FileMode mode) :45
void FileStream__ctor_1_fn(FileStream* __this, uString* filename, int32_t* mode)
{
    __this->ctor_1(filename, *mode);
}

// internal extern FileStream(Uno.IO.FILEPtr fp, bool canRead, bool canWrite) :54
void FileStream__ctor_2_fn(FileStream* __this, FILE** fp, bool* canRead, bool* canWrite)
{
    __this->ctor_2(*fp, *canRead, *canWrite);
}

// public override sealed bool get_CanRead() :117
void FileStream__get_CanRead_fn(FileStream* __this, bool* __retval)
{
    return *__retval = __this->_canRead, void();
}

// public override sealed bool get_CanSeek() :127
void FileStream__get_CanSeek_fn(FileStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed bool get_CanWrite() :122
void FileStream__get_CanWrite_fn(FileStream* __this, bool* __retval)
{
    return *__retval = __this->_canWrite, void();
}

// private void CheckDisposed() :250
void FileStream__CheckDisposed_fn(FileStream* __this)
{
    __this->CheckDisposed();
}

// public override sealed void Dispose(bool disposing) :239
void FileStream__Dispose1_fn(FileStream* __this, bool* disposing)
{
    bool disposing_ = *disposing;
    if (!__this->_fp)
        return;
    fclose(__this->_fp);
    __this->_fp = NULL;
}

// public override sealed void Flush() :232
void FileStream__Flush_fn(FileStream* __this)
{
    uStackFrame __("Uno.IO.FileStream", "Flush()");
    __this->CheckDisposed();
    fflush(__this->_fp);
}

// private extern string GetNativeFileMode(string filename, Uno.IO.FileMode mode) :62
void FileStream__GetNativeFileMode_fn(FileStream* __this, uString* filename, int32_t* mode, uString** __retval)
{
    *__retval = __this->GetNativeFileMode(filename, *mode);
}

// public override sealed long get_Length() :132
void FileStream__get_Length_fn(FileStream* __this, int64_t* __retval)
{
    uStackFrame __("Uno.IO.FileStream", "get_Length()");
    __this->CheckDisposed();
    long p = ftell(__this->_fp);
    fseek(__this->_fp, 0, SEEK_END);
    long l = ftell(__this->_fp);
    fseek(__this->_fp, p, SEEK_SET);
    return *__retval = l, void();
}

// public FileStream New(string filename, Uno.IO.FileMode mode) :45
void FileStream__New1_fn(uString* filename, int32_t* mode, FileStream** __retval)
{
    *__retval = FileStream::New1(filename, *mode);
}

// internal extern FileStream New(Uno.IO.FILEPtr fp, bool canRead, bool canWrite) :54
void FileStream__New2_fn(FILE** fp, bool* canRead, bool* canWrite, FileStream** __retval)
{
    *__retval = FileStream::New2(*fp, *canRead, *canWrite);
}

// public override sealed long get_Position() :150
void FileStream__get_Position_fn(FileStream* __this, int64_t* __retval)
{
    uStackFrame __("Uno.IO.FileStream", "get_Position()");
    __this->CheckDisposed();
    return *__retval = ftell(__this->_fp), void();
}

// public override sealed void set_Position(long value) :158
void FileStream__set_Position_fn(FileStream* __this, int64_t* value)
{
    uStackFrame __("Uno.IO.FileStream", "set_Position(long)");
    int64_t value_ = *value;
    __this->Seek(value_, 0);
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :169
void FileStream__Read_fn(FileStream* __this, uArray* dst, int32_t* byteOffset, int32_t* byteCount, int32_t* __retval)
{
    uStackFrame __("Uno.IO.FileStream", "Read(byte[],int,int)");
    int32_t byteOffset_ = *byteOffset;
    int32_t byteCount_ = *byteCount;
    __this->CheckDisposed();

    if (__this->_canRead && __this->_canWrite)
        __this->Flush();
    else if (!__this->_canRead)
        U_THROW(::g::Uno::IO::IOException::New4(::STRINGS[33/*"File stream...*/]));

    return *__retval = (int)fread((uint8_t*)dst->Ptr() + byteOffset_, 1, byteCount_, __this->_fp), void();
}

// public override sealed long Seek(long byteOffset, Uno.IO.SeekOrigin origin) :206
void FileStream__Seek_fn(FileStream* __this, int64_t* byteOffset, int32_t* origin, int64_t* __retval)
{
    uStackFrame __("Uno.IO.FileStream", "Seek(long,Uno.IO.SeekOrigin)");
    int64_t byteOffset_ = *byteOffset;
    int32_t origin_ = *origin;
    switch (origin_)
    {
    case 0:
        if (fseek(__this->_fp, (long)byteOffset_, SEEK_SET) == 0)
            return *__retval = ftell(__this->_fp), void();
        break;
    
    case 1:
        if (fseek(__this->_fp, (long)byteOffset_, SEEK_CUR) == 0)
            return *__retval = ftell(__this->_fp), void();
        break;
    
    case 2:
        if (fseek(__this->_fp, (long)byteOffset_, SEEK_END) == 0)
            return *__retval = ftell(__this->_fp), void();
        break;
    }
    U_THROW(::g::Uno::IO::IOException::New4(::STRINGS[34/*"Error while...*/]));
}

// public override sealed void SetLength(long value) :164
void FileStream__SetLength_fn(FileStream* __this, int64_t* value)
{
    uStackFrame __("Uno.IO.FileStream", "SetLength(long)");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :185
void FileStream__Write_fn(FileStream* __this, uArray* src, int32_t* byteOffset, int32_t* byteCount)
{
    uStackFrame __("Uno.IO.FileStream", "Write(byte[],int,int)");
    int32_t byteOffset_ = *byteOffset;
    int32_t byteCount_ = *byteCount;
    __this->CheckDisposed();

    if (__this->_canRead && __this->_canWrite)
        __this->Seek(0LL, 1);
    else if (!__this->_canWrite)
        U_THROW(::g::Uno::IO::IOException::New4(::STRINGS[35/*"File stream...*/]));

    int32_t result = (int)fwrite((const uint8_t*)src->Ptr() + byteOffset_, 1, byteCount_, __this->_fp);

    if (result != byteCount_)
        U_THROW(::g::Uno::IO::IOException::New4(::STRINGS[36/*"Error while...*/]));
}

// public FileStream(string filename, Uno.IO.FileMode mode) [instance] :45
void FileStream::ctor_1(uString* filename, int32_t mode)
{
    uStackFrame __("Uno.IO.FileStream", ".ctor(string,Uno.IO.FileMode)");
    ctor_();
    _fp = ::g::Uno::IO::FILEPtr::OpenOrThrow(filename, GetNativeFileMode(filename, mode));
}

// internal extern FileStream(Uno.IO.FILEPtr fp, bool canRead, bool canWrite) [instance] :54
void FileStream::ctor_2(FILE* fp, bool canRead, bool canWrite)
{
    ctor_();
    _fp = fp;
    _canRead = canRead;
    _canWrite = canWrite;
}

// private void CheckDisposed() [instance] :250
void FileStream::CheckDisposed()
{
    uStackFrame __("Uno.IO.FileStream", "CheckDisposed()");

    if (!this->_fp)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[26/*"The file st...*/]));
}

// private extern string GetNativeFileMode(string filename, Uno.IO.FileMode mode) [instance] :62
uString* FileStream::GetNativeFileMode(uString* filename, int32_t mode)
{
    uStackFrame __("Uno.IO.FileStream", "GetNativeFileMode(string,Uno.IO.FileMode)");

    switch (mode)
    {
        case 5:
        {
            if (!::g::Uno::IO::File::Exists(filename))
                U_THROW(::g::Uno::IO::FileNotFoundException::New5(::g::Uno::String::op_Addition2(::STRINGS[27/*"File not fo...*/], filename), filename));

            _canRead = true;
            _canWrite = true;
            fclose(::g::Uno::IO::FILEPtr::OpenOrThrow(filename, ::STRINGS[28/*"wb"*/]));
            return ::STRINGS[29/*"r+b"*/];
        }
        case 2:
        {
            _canRead = true;
            _canWrite = true;
            fclose(::g::Uno::IO::FILEPtr::OpenOrThrow(filename, ::STRINGS[28/*"wb"*/]));
            return ::STRINGS[29/*"r+b"*/];
        }
        case 1:
        {
            if (::g::Uno::IO::File::Exists(filename))
                U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::STRINGS[30/*"File alread...*/], filename)));

            _canWrite = true;
            return ::STRINGS[28/*"wb"*/];
        }
        case 4:
        {
            if (!::g::Uno::IO::File::Exists(filename))
                fclose(::g::Uno::IO::FILEPtr::OpenOrThrow(filename, ::STRINGS[28/*"wb"*/]));

            _canRead = true;
            _canWrite = true;
            return ::STRINGS[29/*"r+b"*/];
        }
        case 3:
        {
            _canRead = true;
            _canWrite = true;
            return ::STRINGS[29/*"r+b"*/];
        }
        case 6:
        {
            _canWrite = true;
            return ::STRINGS[31/*"ab"*/];
        }
    }

    U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[32/*"mode"*/]));
}

// public FileStream New(string filename, Uno.IO.FileMode mode) [static] :45
FileStream* FileStream::New1(uString* filename, int32_t mode)
{
    FileStream* obj1 = (FileStream*)uNew(FileStream_typeof());
    obj1->ctor_1(filename, mode);
    return obj1;
}

// internal extern FileStream New(Uno.IO.FILEPtr fp, bool canRead, bool canWrite) [static] :54
FileStream* FileStream::New2(FILE* fp, bool canRead, bool canWrite)
{
    FileStream* obj2 = (FileStream*)uNew(FileStream_typeof());
    obj2->ctor_2(fp, canRead, canWrite);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/FileSystemInfo.uno
// ----------------------------------------------------------------------------

// public abstract class FileSystemInfo :7
// {
static void FileSystemInfo_build(uType* type)
{
    ::STRINGS[37] = uString::Const("originalPath");
    ::TYPES[9] = ::g::Uno::Time::ZonedDateTime_typeof();
    type->SetDependencies(
        ::g::Uno::IO::Path_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(FileSystemInfo, _fullPath), 0,
        ::g::Uno::String_typeof(), offsetof(FileSystemInfo, _originalPath), 0,
        ::g::Uno::IO::FileStatus_typeof(), offsetof(FileSystemInfo, _status), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Exists", NULL, (void*)FileSystemInfo__get_Exists_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_FullName", NULL, (void*)FileSystemInfo__get_FullName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_LastAccessTimeUtc", NULL, (void*)FileSystemInfo__get_LastAccessTimeUtc_fn, 0, false, ::TYPES[9/*Uno.Time.ZonedDateTime*/], 0),
        new uFunction("get_LastWriteTimeUtc", NULL, (void*)FileSystemInfo__get_LastWriteTimeUtc_fn, 0, false, ::TYPES[9/*Uno.Time.ZonedDateTime*/], 0),
        new uFunction("Refresh", NULL, (void*)FileSystemInfo__Refresh_fn, 0, false, uVoid_typeof(), 0));
}

FileSystemInfo_type* FileSystemInfo_typeof()
{
    static uSStrong<FileSystemInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FileSystemInfo);
    options.TypeSize = sizeof(FileSystemInfo_type);
    type = (FileSystemInfo_type*)uClassType::New("Uno.IO.FileSystemInfo", options);
    type->fp_build_ = FileSystemInfo_build;
    type->fp_LoadStatus = FileSystemInfo__LoadStatus_fn;
    return type;
}

// protected FileSystemInfo(string originalPath) :13
void FileSystemInfo__ctor__fn(FileSystemInfo* __this, uString* originalPath)
{
    __this->ctor_(originalPath);
}

// private static Uno.Time.ZonedDateTime ConvertTime(object time) :33
void FileSystemInfo__ConvertTime_fn(uObject* time, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = FileSystemInfo::ConvertTime(time);
}

// public bool get_Exists() :48
void FileSystemInfo__get_Exists_fn(FileSystemInfo* __this, bool* __retval)
{
    *__retval = __this->Exists();
}

// public string get_FullName() :50
void FileSystemInfo__get_FullName_fn(FileSystemInfo* __this, uString** __retval)
{
    *__retval = __this->FullName();
}

// public Uno.Time.ZonedDateTime get_LastAccessTimeUtc() :52
void FileSystemInfo__get_LastAccessTimeUtc_fn(FileSystemInfo* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->LastAccessTimeUtc();
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() :54
void FileSystemInfo__get_LastWriteTimeUtc_fn(FileSystemInfo* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->LastWriteTimeUtc();
}

// internal virtual extern Uno.IO.FileStatus LoadStatus() :70
void FileSystemInfo__LoadStatus_fn(FileSystemInfo* __this, ::g::Uno::IO::FileStatus** __retval)
{
    return *__retval = ::g::Uno::IO::FileStatusHelpers::GetFileStatus(__this->_fullPath), void();
}

// public void Refresh() :23
void FileSystemInfo__Refresh_fn(FileSystemInfo* __this)
{
    __this->Refresh();
}

// internal extern Uno.IO.FileStatus get_Status() :61
void FileSystemInfo__get_Status_fn(FileSystemInfo* __this, ::g::Uno::IO::FileStatus** __retval)
{
    *__retval = __this->Status();
}

// protected FileSystemInfo(string originalPath) [instance] :13
void FileSystemInfo::ctor_(uString* originalPath)
{
    uStackFrame __("Uno.IO.FileSystemInfo", ".ctor(string)");

    if (::g::Uno::String::op_Equality(originalPath, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[37/*"originalPath"*/]));

    _originalPath = originalPath;
    _fullPath = ::g::Uno::IO::Path::GetFullPath(_originalPath);
}

// public bool get_Exists() [instance] :48
bool FileSystemInfo::Exists()
{
    uStackFrame __("Uno.IO.FileSystemInfo", "get_Exists()");
    return uPtr(Status())->Exists();
}

// public string get_FullName() [instance] :50
uString* FileSystemInfo::FullName()
{
    return _fullPath;
}

// public Uno.Time.ZonedDateTime get_LastAccessTimeUtc() [instance] :52
::g::Uno::Time::ZonedDateTime* FileSystemInfo::LastAccessTimeUtc()
{
    uStackFrame __("Uno.IO.FileSystemInfo", "get_LastAccessTimeUtc()");
    return FileSystemInfo::ConvertTime(uPtr(Status())->LastAccessTimeUtc());
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() [instance] :54
::g::Uno::Time::ZonedDateTime* FileSystemInfo::LastWriteTimeUtc()
{
    uStackFrame __("Uno.IO.FileSystemInfo", "get_LastWriteTimeUtc()");
    return FileSystemInfo::ConvertTime(uPtr(Status())->LastWriteTimeUtc());
}

// public void Refresh() [instance] :23
void FileSystemInfo::Refresh()
{
    uStackFrame __("Uno.IO.FileSystemInfo", "Refresh()");
    _status = LoadStatus();
}

// internal extern Uno.IO.FileStatus get_Status() [instance] :61
::g::Uno::IO::FileStatus* FileSystemInfo::Status()
{
    uStackFrame __("Uno.IO.FileSystemInfo", "get_Status()");

    if (_status == NULL)
        Refresh();

    return _status;
}

// private static Uno.Time.ZonedDateTime ConvertTime(object time) [static] :33
::g::Uno::Time::ZonedDateTime* FileSystemInfo::ConvertTime(uObject* time)
{
    uStackFrame __("Uno.IO.FileSystemInfo", "ConvertTime(object)");
    return uCast< ::g::Uno::Time::ZonedDateTime*>(time, ::TYPES[9/*Uno.Time.ZonedDateTime*/]);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/IOException.uno
// -------------------------------------------------------------------------

// public class IOException :6
// {
static void IOException_build(uType* type)
{
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)IOException__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* IOException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(IOException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.IO.IOException", options);
    type->fp_build_ = IOException_build;
    return type;
}

// public IOException(string message) :8
void IOException__ctor_3_fn(IOException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public IOException New(string message) :8
void IOException__New4_fn(uString* message, IOException** __retval)
{
    *__retval = IOException::New4(message);
}

// public IOException(string message) [instance] :8
void IOException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public IOException New(string message) [static] :8
IOException* IOException::New4(uString* message)
{
    IOException* obj1 = (IOException*)uNew(IOException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/MemoryStream.uno
// --------------------------------------------------------------------------

// public sealed class MemoryStream :7
// {
static void MemoryStream_build(uType* type)
{
    ::STRINGS[38] = uString::Const("buffer");
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[10] = ::g::Uno::Array_typeof()->MakeMethod(1/*Copy<byte>*/, ::g::Uno::Byte_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(MemoryStream, _canWrite), 0,
        ::g::Uno::Bool_typeof(), offsetof(MemoryStream, _canResize), 0,
        ::TYPES[0/*byte[]*/], offsetof(MemoryStream, _buffer), 0,
        ::g::Uno::Int_typeof(), offsetof(MemoryStream, _nextIncrease), 0,
        ::g::Uno::Long_typeof(), offsetof(MemoryStream, _length), 0,
        ::g::Uno::Long_typeof(), offsetof(MemoryStream, _Position), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Capacity", NULL, (void*)MemoryStream__get_Capacity_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetBuffer", NULL, (void*)MemoryStream__GetBuffer_fn, 0, false, ::TYPES[0/*byte[]*/], 0),
        new uFunction(".ctor", NULL, (void*)MemoryStream__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)MemoryStream__New2_fn, 0, true, type, 1, ::TYPES[0/*byte[]*/]),
        new uFunction(".ctor", NULL, (void*)MemoryStream__New3_fn, 0, true, type, 2, ::TYPES[0/*byte[]*/], ::g::Uno::Bool_typeof()));
}

::g::Uno::IO::Stream_type* MemoryStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::Stream_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MemoryStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Uno.IO.MemoryStream", options);
    type->fp_build_ = MemoryStream_build;
    type->fp_ctor_ = (void*)MemoryStream__New1_fn;
    type->fp_get_CanRead = (void(*)(::g::Uno::IO::Stream*, bool*))MemoryStream__get_CanRead_fn;
    type->fp_get_CanSeek = (void(*)(::g::Uno::IO::Stream*, bool*))MemoryStream__get_CanSeek_fn;
    type->fp_get_CanTimeout = (void(*)(::g::Uno::IO::Stream*, bool*))MemoryStream__get_CanTimeout_fn;
    type->fp_get_CanWrite = (void(*)(::g::Uno::IO::Stream*, bool*))MemoryStream__get_CanWrite_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))MemoryStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*, int32_t*))MemoryStream__Read_fn;
    type->fp_Seek = (void(*)(::g::Uno::IO::Stream*, int64_t*, int32_t*, int64_t*))MemoryStream__Seek_fn;
    type->fp_SetLength = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__SetLength_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*))MemoryStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public MemoryStream() :50
void MemoryStream__ctor_1_fn(MemoryStream* __this)
{
    __this->ctor_1();
}

// public MemoryStream(byte[] buffer) :54
void MemoryStream__ctor_2_fn(MemoryStream* __this, uArray* buffer)
{
    __this->ctor_2(buffer);
}

// public MemoryStream(byte[] buffer, bool writable) :58
void MemoryStream__ctor_3_fn(MemoryStream* __this, uArray* buffer, bool* writable)
{
    __this->ctor_3(buffer, *writable);
}

// public override sealed bool get_CanRead() :11
void MemoryStream__get_CanRead_fn(MemoryStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed bool get_CanSeek() :21
void MemoryStream__get_CanSeek_fn(MemoryStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed bool get_CanTimeout() :26
void MemoryStream__get_CanTimeout_fn(MemoryStream* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public override sealed bool get_CanWrite() :16
void MemoryStream__get_CanWrite_fn(MemoryStream* __this, bool* __retval)
{
    return *__retval = __this->_canWrite, void();
}

// public int get_Capacity() :36
void MemoryStream__get_Capacity_fn(MemoryStream* __this, int32_t* __retval)
{
    *__retval = __this->Capacity();
}

// private void EnsureCapacity(int byteCount) :114
void MemoryStream__EnsureCapacity_fn(MemoryStream* __this, int32_t* byteCount)
{
    __this->EnsureCapacity(*byteCount);
}

// public override sealed void Flush() :151
void MemoryStream__Flush_fn(MemoryStream* __this)
{
}

// public byte[] GetBuffer() :141
void MemoryStream__GetBuffer_fn(MemoryStream* __this, uArray** __retval)
{
    *__retval = __this->GetBuffer();
}

// public override sealed long get_Length() :31
void MemoryStream__get_Length_fn(MemoryStream* __this, int64_t* __retval)
{
    return *__retval = __this->_length, void();
}

// public MemoryStream New() :50
void MemoryStream__New1_fn(MemoryStream** __retval)
{
    *__retval = MemoryStream::New1();
}

// public MemoryStream New(byte[] buffer) :54
void MemoryStream__New2_fn(uArray* buffer, MemoryStream** __retval)
{
    *__retval = MemoryStream::New2(buffer);
}

// public MemoryStream New(byte[] buffer, bool writable) :58
void MemoryStream__New3_fn(uArray* buffer, bool* writable, MemoryStream** __retval)
{
    *__retval = MemoryStream::New3(buffer, *writable);
}

// public generated override sealed long get_Position() :41
void MemoryStream__get_Position_fn(MemoryStream* __this, int64_t* __retval)
{
    return *__retval = __this->_Position, void();
}

// public generated override sealed void set_Position(long value) :41
void MemoryStream__set_Position_fn(MemoryStream* __this, int64_t* value)
{
    int64_t value_ = *value;
    __this->_Position = value_;
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :86
void MemoryStream__Read_fn(MemoryStream* __this, uArray* dst, int32_t* byteOffset, int32_t* byteCount, int32_t* __retval)
{
    uStackFrame __("Uno.IO.MemoryStream", "Read(byte[],int,int)");
    int32_t byteCount_ = *byteCount;
    int32_t byteOffset_ = *byteOffset;
    int32_t i = 0;

    for (; (i < byteCount_) && ((__this->Position() + (int64_t)i) < __this->Length()); i++)
        uPtr(dst)->Item<uint8_t>(i + byteOffset_) = uPtr(__this->_buffer)->Item<uint8_t>((int32_t)__this->Position() + i);

    __this->Position(__this->Position() + (int64_t)i);
    return *__retval = i, void();
}

// private void ResizeTo(int newSize) :130
void MemoryStream__ResizeTo_fn(MemoryStream* __this, int32_t* newSize)
{
    __this->ResizeTo(*newSize);
}

// public override sealed long Seek(long byteOffset, Uno.IO.SeekOrigin origin) :97
void MemoryStream__Seek_fn(MemoryStream* __this, int64_t* byteOffset, int32_t* origin, int64_t* __retval)
{
    int32_t origin_ = *origin;
    int64_t byteOffset_ = *byteOffset;

    switch (origin_)
    {
        case 0:
        {
            __this->Position(byteOffset_);
            break;
        }
        case 2:
        {
            __this->Position(__this->Length() + byteOffset_);
            break;
        }
        default:
        {
            __this->Position(__this->Position() + byteOffset_);
            break;
        }
    }

    return *__retval = __this->Position(), void();
}

// public override sealed void SetLength(long value) :146
void MemoryStream__SetLength_fn(MemoryStream* __this, int64_t* value)
{
    uStackFrame __("Uno.IO.MemoryStream", "SetLength(long)");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :69
void MemoryStream__Write_fn(MemoryStream* __this, uArray* src, int32_t* byteOffset, int32_t* byteCount)
{
    uStackFrame __("Uno.IO.MemoryStream", "Write(byte[],int,int)");
    int32_t byteCount_ = *byteCount;
    int32_t byteOffset_ = *byteOffset;

    if (!__this->_canWrite)
        U_THROW(::g::Uno::NotSupportedException::New4());

    __this->EnsureCapacity(byteCount_);

    for (int32_t i = byteOffset_; i < (byteOffset_ + byteCount_); i++)
    {
        uPtr(__this->_buffer)->Item<uint8_t>((int32_t)__this->Position()) = uPtr(src)->Item<uint8_t>(i);
        __this->Position(__this->Position() + 1LL);
    }

    if (__this->Position() > __this->Length())
        __this->_length = __this->Position();
}

// public MemoryStream() [instance] :50
void MemoryStream::ctor_1()
{
    _canWrite = true;
    _canResize = true;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 0);
    _nextIncrease = 256;
    ctor_();
}

// public MemoryStream(byte[] buffer) [instance] :54
void MemoryStream::ctor_2(uArray* buffer)
{
    uStackFrame __("Uno.IO.MemoryStream", ".ctor(byte[])");
    _canWrite = true;
    _canResize = true;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 0);
    _nextIncrease = 256;
    ctor_3(buffer, true);
}

// public MemoryStream(byte[] buffer, bool writable) [instance] :58
void MemoryStream::ctor_3(uArray* buffer, bool writable)
{
    uStackFrame __("Uno.IO.MemoryStream", ".ctor(byte[],bool)");
    _canWrite = true;
    _canResize = true;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 0);
    _nextIncrease = 256;
    ctor_();

    if (buffer == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[38/*"buffer"*/]));

    _buffer = buffer;
    _length = (int64_t)uPtr(_buffer)->Length();
    _canResize = false;
    _canWrite = writable;
}

// public int get_Capacity() [instance] :36
int32_t MemoryStream::Capacity()
{
    uStackFrame __("Uno.IO.MemoryStream", "get_Capacity()");
    return uPtr(_buffer)->Length();
}

// private void EnsureCapacity(int byteCount) [instance] :114
void MemoryStream::EnsureCapacity(int32_t byteCount)
{
    uStackFrame __("Uno.IO.MemoryStream", "EnsureCapacity(int)");

    if ((Position() + (int64_t)byteCount) <= (int64_t)Capacity())
        return;
    else if ((Position() + (int64_t)byteCount) <= (int64_t)(Capacity() + _nextIncrease))
        ResizeTo(Capacity() + _nextIncrease);
    else
        ResizeTo((int32_t)Position() + byteCount);
}

// public byte[] GetBuffer() [instance] :141
uArray* MemoryStream::GetBuffer()
{
    return _buffer;
}

// private void ResizeTo(int newSize) [instance] :130
void MemoryStream::ResizeTo(int32_t newSize)
{
    uStackFrame __("Uno.IO.MemoryStream", "ResizeTo(int)");

    if (!_canResize)
        U_THROW(::g::Uno::NotSupportedException::New4());

    uArray* newBuffer = uArray::New(::TYPES[0/*byte[]*/], newSize);
    ::g::Uno::Array::Copy1(::TYPES[10/*Uno.Array.Copy<byte>*/], _buffer, newBuffer, uPtr(_buffer)->Length());
    _buffer = newBuffer;
    _nextIncrease = Capacity();
}

// public MemoryStream New() [static] :50
MemoryStream* MemoryStream::New1()
{
    MemoryStream* obj1 = (MemoryStream*)uNew(MemoryStream_typeof());
    obj1->ctor_1();
    return obj1;
}

// public MemoryStream New(byte[] buffer) [static] :54
MemoryStream* MemoryStream::New2(uArray* buffer)
{
    MemoryStream* obj2 = (MemoryStream*)uNew(MemoryStream_typeof());
    obj2->ctor_2(buffer);
    return obj2;
}

// public MemoryStream New(byte[] buffer, bool writable) [static] :58
MemoryStream* MemoryStream::New3(uArray* buffer, bool writable)
{
    MemoryStream* obj3 = (MemoryStream*)uNew(MemoryStream_typeof());
    obj3->ctor_3(buffer, writable);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/SeekOrigin.uno
// ------------------------------------------------------------------------

// public enum SeekOrigin :6
uEnumType* SeekOrigin_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.SeekOrigin", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Begin", 0LL,
        "Current", 1LL,
        "End", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Stream.uno
// --------------------------------------------------------------------

// public abstract class Stream :7
// {
static void Stream_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Stream_type, interface0));
    type->Reflection.SetFunctions(19,
        new uFunction("get_CanRead", NULL, NULL, offsetof(Stream_type, fp_get_CanRead), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanSeek", NULL, NULL, offsetof(Stream_type, fp_get_CanSeek), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanTimeout", NULL, NULL, offsetof(Stream_type, fp_get_CanTimeout), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanWrite", NULL, NULL, offsetof(Stream_type, fp_get_CanWrite), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Close", NULL, (void*)Stream__Close_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)Stream__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, NULL, offsetof(Stream_type, fp_Dispose1), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Flush", NULL, NULL, offsetof(Stream_type, fp_Flush), false, uVoid_typeof(), 0),
        new uFunction("get_Length", NULL, NULL, offsetof(Stream_type, fp_get_Length), false, ::g::Uno::Long_typeof(), 0),
        new uFunction("get_Position", NULL, NULL, offsetof(Stream_type, fp_get_Position), false, ::g::Uno::Long_typeof(), 0),
        new uFunction("set_Position", NULL, NULL, offsetof(Stream_type, fp_set_Position), false, uVoid_typeof(), 1, ::g::Uno::Long_typeof()),
        new uFunction("Read", NULL, NULL, offsetof(Stream_type, fp_Read), false, ::g::Uno::Int_typeof(), 3, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_ReadTimeout", NULL, (void*)Stream__get_ReadTimeout_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_ReadTimeout", NULL, (void*)Stream__set_ReadTimeout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Seek", NULL, NULL, offsetof(Stream_type, fp_Seek), false, ::g::Uno::Long_typeof(), 2, ::g::Uno::Long_typeof(), ::g::Uno::IO::SeekOrigin_typeof()),
        new uFunction("SetLength", NULL, NULL, offsetof(Stream_type, fp_SetLength), false, uVoid_typeof(), 1, ::g::Uno::Long_typeof()),
        new uFunction("Write", NULL, NULL, offsetof(Stream_type, fp_Write), false, uVoid_typeof(), 3, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_WriteTimeout", NULL, (void*)Stream__get_WriteTimeout_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_WriteTimeout", NULL, (void*)Stream__set_WriteTimeout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()));
}

Stream_type* Stream_typeof()
{
    static uSStrong<Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Stream);
    options.TypeSize = sizeof(Stream_type);
    type = (Stream_type*)uClassType::New("Uno.IO.Stream", options);
    type->fp_build_ = Stream_build;
    type->fp_get_CanTimeout = Stream__get_CanTimeout_fn;
    type->fp_Dispose1 = Stream__Dispose1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Stream__Dispose_fn;
    return type;
}

// protected generated Stream() :7
void Stream__ctor__fn(Stream* __this)
{
    __this->ctor_();
}

// public virtual bool get_CanTimeout() :26
void Stream__get_CanTimeout_fn(Stream* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public void Close() :63
void Stream__Close_fn(Stream* __this)
{
    __this->Close();
}

// public void Dispose() :69
void Stream__Dispose_fn(Stream* __this)
{
    __this->Dispose();
}

// public virtual void Dispose(bool disposing) :59
void Stream__Dispose1_fn(Stream* __this, bool* disposing)
{
}

// public int get_ReadTimeout() :31
void Stream__get_ReadTimeout_fn(Stream* __this, int32_t* __retval)
{
    *__retval = __this->ReadTimeout();
}

// public void set_ReadTimeout(int value) :32
void Stream__set_ReadTimeout_fn(Stream* __this, int32_t* value)
{
    __this->ReadTimeout(*value);
}

// public int get_WriteTimeout() :37
void Stream__get_WriteTimeout_fn(Stream* __this, int32_t* __retval)
{
    *__retval = __this->WriteTimeout();
}

// public void set_WriteTimeout(int value) :38
void Stream__set_WriteTimeout_fn(Stream* __this, int32_t* value)
{
    __this->WriteTimeout(*value);
}

// protected generated Stream() [instance] :7
void Stream::ctor_()
{
}

// public void Close() [instance] :63
void Stream::Close()
{
    uStackFrame __("Uno.IO.Stream", "Close()");
    Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(this);
}

// public void Dispose() [instance] :69
void Stream::Dispose()
{
    uStackFrame __("Uno.IO.Stream", "Dispose()");
    Close();
}

// public int get_ReadTimeout() [instance] :31
int32_t Stream::ReadTimeout()
{
    uStackFrame __("Uno.IO.Stream", "get_ReadTimeout()");
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public void set_ReadTimeout(int value) [instance] :32
void Stream::ReadTimeout(int32_t value)
{
    uStackFrame __("Uno.IO.Stream", "set_ReadTimeout(int)");
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public int get_WriteTimeout() [instance] :37
int32_t Stream::WriteTimeout()
{
    uStackFrame __("Uno.IO.Stream", "get_WriteTimeout()");
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public void set_WriteTimeout(int value) [instance] :38
void Stream::WriteTimeout(int32_t value)
{
    uStackFrame __("Uno.IO.Stream", "set_WriteTimeout(int)");
    U_THROW(::g::Uno::NotSupportedException::New4());
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/StreamReader.uno
// --------------------------------------------------------------------------

// public sealed class StreamReader :7
// {
static void StreamReader_build(uType* type)
{
    ::STRINGS[39] = uString::Const("StreamReader");
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Char_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextReader_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::Stream_typeof(), offsetof(StreamReader, _stream), 0,
        ::g::Uno::Text::Decoder_typeof(), offsetof(StreamReader, _decoder), 0,
        ::TYPES[0/*byte[]*/], offsetof(StreamReader, _byteBuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(StreamReader, _byteLen), 0,
        ::TYPES[5/*char[]*/], offsetof(StreamReader, _charBuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(StreamReader, _charPos), 0,
        ::g::Uno::Int_typeof(), offsetof(StreamReader, _charLen), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)StreamReader__New1_fn, 0, true, type, 1, ::g::Uno::IO::Stream_typeof()),
        new uFunction("ReadToEnd", NULL, (void*)StreamReader__ReadToEnd_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

::g::Uno::IO::TextReader_type* StreamReader_typeof()
{
    static uSStrong< ::g::Uno::IO::TextReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::TextReader_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StreamReader);
    options.TypeSize = sizeof(::g::Uno::IO::TextReader_type);
    type = (::g::Uno::IO::TextReader_type*)uClassType::New("Uno.IO.StreamReader", options);
    type->fp_build_ = StreamReader_build;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::TextReader*, bool*))StreamReader__Dispose1_fn;
    type->fp_Peek = (void(*)(::g::Uno::IO::TextReader*, int32_t*))StreamReader__Peek_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::TextReader*, int32_t*))StreamReader__Read_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::TextReader__Dispose_fn;
    return type;
}

// public StreamReader(Uno.IO.Stream stream) :41
void StreamReader__ctor_1_fn(StreamReader* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_1(stream);
}

// protected override sealed void Dispose(bool disposing) :59
void StreamReader__Dispose1_fn(StreamReader* __this, bool* disposing)
{
    uStackFrame __("Uno.IO.StreamReader", "Dispose(bool)");
    bool disposing_ = *disposing;

    if (disposing_ && (__this->_stream != NULL))
    {
        uPtr(__this->_stream)->Close();
        __this->_stream = NULL;
    }

    ::g::Uno::IO::TextReader__Dispose1_fn(__this, uCRef(disposing_));
}

// public StreamReader New(Uno.IO.Stream stream) :41
void StreamReader__New1_fn(::g::Uno::IO::Stream* stream, StreamReader** __retval)
{
    *__retval = StreamReader::New1(stream);
}

// public override sealed int Peek() :69
void StreamReader__Peek_fn(StreamReader* __this, int32_t* __retval)
{
    uStackFrame __("Uno.IO.StreamReader", "Peek()");

    if (__this->_stream == NULL)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[39/*"StreamReader"*/]));

    if (__this->_charPos == __this->_charLen)
    {
        __this->ReadBuffer();

        if (__this->_charLen == 0)
            return *__retval = -1, void();
    }

    return *__retval = (int32_t)uPtr(__this->_charBuffer)->Item<char16_t>(__this->_charPos), void();
}

// public override sealed int Read() :82
void StreamReader__Read_fn(StreamReader* __this, int32_t* __retval)
{
    uStackFrame __("Uno.IO.StreamReader", "Read()");

    if (__this->_stream == NULL)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[39/*"StreamReader"*/]));

    if (__this->_charPos == __this->_charLen)
    {
        __this->ReadBuffer();

        if (__this->_charLen == 0)
            return *__retval = -1, void();
    }

    return *__retval = (int32_t)uPtr(__this->_charBuffer)->Item<char16_t>(__this->_charPos++), void();
}

// private void ReadBuffer() :144
void StreamReader__ReadBuffer_fn(StreamReader* __this)
{
    __this->ReadBuffer();
}

// public string ReadToEnd() :127
void StreamReader__ReadToEnd_fn(StreamReader* __this, uString** __retval)
{
    *__retval = __this->ReadToEnd();
}

// public StreamReader(Uno.IO.Stream stream) [instance] :41
void StreamReader::ctor_1(::g::Uno::IO::Stream* stream)
{
    uStackFrame __("Uno.IO.StreamReader", ".ctor(Uno.IO.Stream)");
    ctor_();
    _stream = stream;
    _decoder = uPtr(::g::Uno::Text::Encoding::UTF8())->GetDecoder();
    _byteBuffer = uArray::New(::TYPES[0/*byte[]*/], 256);
    _byteLen = 0;
    _charBuffer = uArray::New(::TYPES[5/*char[]*/], 256);
    _charPos = 0;
    _charLen = 0;
}

// private void ReadBuffer() [instance] :144
void StreamReader::ReadBuffer()
{
    uStackFrame __("Uno.IO.StreamReader", "ReadBuffer()");
    _charPos = 0;
    _charLen = 0;

    do
    {
        _byteLen = uPtr(_stream)->Read(_byteBuffer, 0, uPtr(_byteBuffer)->Length());

        if (_byteLen == 0)
            return;

        _charLen = (_charLen + uPtr(_decoder)->GetChars(_byteBuffer, 0, _byteLen, _charBuffer, _charLen));
    }
    while (_charLen == 0);
}

// public string ReadToEnd() [instance] :127
uString* StreamReader::ReadToEnd()
{
    uStackFrame __("Uno.IO.StreamReader", "ReadToEnd()");
    ::g::Uno::Text::StringBuilder* stringBuilder = ::g::Uno::Text::StringBuilder::New1();

    if (_charLen == 0)
        ReadBuffer();

    while (_charLen != 0)
    {
        int32_t count = _charLen - _charPos;
        uArray* array = uArray::New(::TYPES[5/*char[]*/], count);

        for (int32_t i = 0; i < count; i++)
            uPtr(array)->Item<char16_t>(i) = uPtr(_charBuffer)->Item<char16_t>(_charPos + i);

        uPtr(stringBuilder)->Append1(array);
        ReadBuffer();
    }

    return stringBuilder->ToString();
}

// public StreamReader New(Uno.IO.Stream stream) [static] :41
StreamReader* StreamReader::New1(::g::Uno::IO::Stream* stream)
{
    StreamReader* obj1 = (StreamReader*)uNew(StreamReader_typeof());
    obj1->ctor_1(stream);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/StreamWriter.uno
// --------------------------------------------------------------------------

// public sealed class StreamWriter :8
// {
static void StreamWriter_build(uType* type)
{
    ::STRINGS[38] = uString::Const("buffer");
    ::STRINGS[40] = uString::Const("index");
    ::STRINGS[41] = uString::Const("count");
    ::STRINGS[42] = uString::Const("range");
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Char_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextWriter_type, interface0));
    type->SetFields(1,
        ::g::Uno::IO::Stream_typeof(), offsetof(StreamWriter, _stream), 0,
        ::TYPES[0/*byte[]*/], offsetof(StreamWriter, _buffer), 0,
        ::g::Uno::Int_typeof(), offsetof(StreamWriter, _index), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StreamWriter__New1_fn, 0, true, type, 1, ::g::Uno::IO::Stream_typeof()));
}

::g::Uno::IO::TextWriter_type* StreamWriter_typeof()
{
    static uSStrong< ::g::Uno::IO::TextWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::TextWriter_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StreamWriter);
    options.TypeSize = sizeof(::g::Uno::IO::TextWriter_type);
    type = (::g::Uno::IO::TextWriter_type*)uClassType::New("Uno.IO.StreamWriter", options);
    type->fp_build_ = StreamWriter_build;
    type->fp_Close = (void(*)(::g::Uno::IO::TextWriter*))StreamWriter__Close_fn;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::TextWriter*, bool*))StreamWriter__Dispose1_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::TextWriter*))StreamWriter__Flush_fn;
    type->fp_Write1 = (void(*)(::g::Uno::IO::TextWriter*, char16_t*))StreamWriter__Write1_fn;
    type->fp_Write3 = (void(*)(::g::Uno::IO::TextWriter*, uArray*, int32_t*, int32_t*))StreamWriter__Write3_fn;
    type->fp_Write9 = (void(*)(::g::Uno::IO::TextWriter*, uString*))StreamWriter__Write9_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::TextWriter__Dispose_fn;
    return type;
}

// public StreamWriter(Uno.IO.Stream stream) :24
void StreamWriter__ctor_1_fn(StreamWriter* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_1(stream);
}

// public override sealed void Close() :42
void StreamWriter__Close_fn(StreamWriter* __this)
{
    uStackFrame __("Uno.IO.StreamWriter", "Close()");
    __this->Dispose1(true);
}

// protected override sealed void Dispose(bool disposing) :32
void StreamWriter__Dispose1_fn(StreamWriter* __this, bool* disposing)
{
    uStackFrame __("Uno.IO.StreamWriter", "Dispose(bool)");
    bool disposing_ = *disposing;
    __this->Flush();

    if (disposing_ && (__this->_stream != NULL))
        uPtr(__this->_stream)->Close();

    ::g::Uno::IO::TextWriter__Dispose1_fn(__this, uCRef(disposing_));
}

// public override sealed void Flush() :98
void StreamWriter__Flush_fn(StreamWriter* __this)
{
    uStackFrame __("Uno.IO.StreamWriter", "Flush()");

    if (__this->_index != 0)
    {
        uPtr(__this->_stream)->Write(__this->_buffer, 0, __this->_index);
        __this->_index = 0;
    }

    uPtr(__this->_stream)->Flush();
}

// public StreamWriter New(Uno.IO.Stream stream) :24
void StreamWriter__New1_fn(::g::Uno::IO::Stream* stream, StreamWriter** __retval)
{
    *__retval = StreamWriter::New1(stream);
}

// private void Write(byte[] array, int index, int count) :80
void StreamWriter__Write13_fn(StreamWriter* __this, uArray* array, int32_t* index, int32_t* count)
{
    __this->Write13(array, *index, *count);
}

// public override sealed void Write(char value) :47
void StreamWriter__Write1_fn(StreamWriter* __this, char16_t* value)
{
    uStackFrame __("Uno.IO.StreamWriter", "Write(char)");
    char16_t value_ = *value;
    __this->Write13(::g::Uno::Text::Utf8::GetBytes(::g::Uno::Char::ToString(value_, ::TYPES[2/*char*/])), 0, 1);
}

// public override sealed void Write(char[] buffer, int index, int count) :52
void StreamWriter__Write3_fn(StreamWriter* __this, uArray* buffer, int32_t* index, int32_t* count)
{
    uStackFrame __("Uno.IO.StreamWriter", "Write(char[],int,int)");
    int32_t index_ = *index;
    int32_t count_ = *count;

    if (buffer == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[38/*"buffer"*/]));

    if (index_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[40/*"index"*/]));

    if (count_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[41/*"count"*/]));

    if ((index_ + count_) > uPtr(buffer)->Length())
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[42/*"range"*/]));

    uArray* array = ::g::Uno::Text::Utf8::GetBytes(uString::CharArray(buffer));
    __this->Write13(array, index_, count_);
}

// public override sealed void Write(string value) :74
void StreamWriter__Write9_fn(StreamWriter* __this, uString* value)
{
    uStackFrame __("Uno.IO.StreamWriter", "Write(string)");
    uArray* array = ::g::Uno::Text::Utf8::GetBytes(value);
    __this->Write13(array, 0, uPtr(array)->Length());
}

// public StreamWriter(Uno.IO.Stream stream) [instance] :24
void StreamWriter::ctor_1(::g::Uno::IO::Stream* stream)
{
    ctor_();
    _stream = stream;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 256);
    _index = 0;
}

// private void Write(byte[] array, int index, int count) [instance] :80
void StreamWriter::Write13(uArray* array, int32_t index, int32_t count)
{
    uStackFrame __("Uno.IO.StreamWriter", "Write(byte[],int,int)");

    if ((_index + count) >= 256)
    {
        uPtr(_stream)->Write(_buffer, 0, _index);
        _index = 0;
    }

    if (count >= 256)
    {
        uPtr(_stream)->Write(array, index, count);
        return;
    }

    for (int32_t i = 0; i < count; i++)
        uPtr(_buffer)->Item<uint8_t>(_index++) = uPtr(array)->Item<uint8_t>(index + i);
}

// public StreamWriter New(Uno.IO.Stream stream) [static] :24
StreamWriter* StreamWriter::New1(::g::Uno::IO::Stream* stream)
{
    StreamWriter* obj1 = (StreamWriter*)uNew(StreamWriter_typeof());
    obj1->ctor_1(stream);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/StringReader.uno
// --------------------------------------------------------------------------

// public sealed class StringReader :6
// {
static void StringReader_build(uType* type)
{
    ::STRINGS[43] = uString::Const("StringReader");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextReader_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(StringReader, _string), 0,
        ::g::Uno::Int_typeof(), offsetof(StringReader, _index), 0,
        ::g::Uno::Int_typeof(), offsetof(StringReader, _length), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StringReader__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::IO::TextReader_type* StringReader_typeof()
{
    static uSStrong< ::g::Uno::IO::TextReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::TextReader_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StringReader);
    options.TypeSize = sizeof(::g::Uno::IO::TextReader_type);
    type = (::g::Uno::IO::TextReader_type*)uClassType::New("Uno.IO.StringReader", options);
    type->fp_build_ = StringReader_build;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::TextReader*, bool*))StringReader__Dispose1_fn;
    type->fp_Peek = (void(*)(::g::Uno::IO::TextReader*, int32_t*))StringReader__Peek_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::TextReader*, int32_t*))StringReader__Read_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::TextReader__Dispose_fn;
    return type;
}

// public StringReader(string text) :12
void StringReader__ctor_1_fn(StringReader* __this, uString* text)
{
    __this->ctor_1(text);
}

// protected override sealed void Dispose(bool disposing) :24
void StringReader__Dispose1_fn(StringReader* __this, bool* disposing)
{
}

// public StringReader New(string text) :12
void StringReader__New1_fn(uString* text, StringReader** __retval)
{
    *__retval = StringReader::New1(text);
}

// public override sealed int Peek() :28
void StringReader__Peek_fn(StringReader* __this, int32_t* __retval)
{
    uStackFrame __("Uno.IO.StringReader", "Peek()");

    if (::g::Uno::String::op_Equality(__this->_string, NULL))
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[43/*"StringReader"*/]));

    if (__this->_index == __this->_length)
        return *__retval = -1, void();

    return *__retval = (int32_t)uPtr(__this->_string)->Item(__this->_index), void();
}

// public override sealed int Read() :39
void StringReader__Read_fn(StringReader* __this, int32_t* __retval)
{
    uStackFrame __("Uno.IO.StringReader", "Read()");

    if (::g::Uno::String::op_Equality(__this->_string, NULL))
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[43/*"StringReader"*/]));

    if (__this->_index == __this->_length)
        return *__retval = -1, void();

    return *__retval = (int32_t)uPtr(__this->_string)->Item(__this->_index++), void();
}

// public StringReader(string text) [instance] :12
void StringReader::ctor_1(uString* text)
{
    uStackFrame __("Uno.IO.StringReader", ".ctor(string)");
    ctor_();
    _string = text;
    _index = 0;
    _length = (::g::Uno::String::op_Equality(text, NULL) ? 0 : uPtr(text)->Length());
}

// public StringReader New(string text) [static] :12
StringReader* StringReader::New1(uString* text)
{
    StringReader* obj1 = (StringReader*)uNew(StringReader_typeof());
    obj1->ctor_1(text);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/StringWriter.uno
// --------------------------------------------------------------------------

// public sealed class StringWriter :7
// {
static void StringWriter_build(uType* type)
{
    ::STRINGS[44] = uString::Const("StringWriter");
    ::STRINGS[38] = uString::Const("buffer");
    ::STRINGS[40] = uString::Const("index");
    ::STRINGS[41] = uString::Const("count");
    ::STRINGS[42] = uString::Const("range");
    ::TYPES[5] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[11] = ::g::Uno::Array_typeof()->MakeMethod(0/*Copy<char>*/, ::g::Uno::Char_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextWriter_type, interface0));
    type->SetFields(1,
        ::g::Uno::Bool_typeof(), offsetof(StringWriter, _open), 0,
        ::g::Uno::Text::StringBuilder_typeof(), offsetof(StringWriter, _stringBuilder), 0,
        ::TYPES[5/*char[]*/], offsetof(StringWriter, _buffer), 0,
        ::g::Uno::Int_typeof(), offsetof(StringWriter, _index), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StringWriter__New1_fn, 0, true, type, 0));
}

::g::Uno::IO::TextWriter_type* StringWriter_typeof()
{
    static uSStrong< ::g::Uno::IO::TextWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::TextWriter_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StringWriter);
    options.TypeSize = sizeof(::g::Uno::IO::TextWriter_type);
    type = (::g::Uno::IO::TextWriter_type*)uClassType::New("Uno.IO.StringWriter", options);
    type->fp_build_ = StringWriter_build;
    type->fp_ctor_ = (void*)StringWriter__New1_fn;
    type->fp_Close = (void(*)(::g::Uno::IO::TextWriter*))StringWriter__Close_fn;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::TextWriter*, bool*))StringWriter__Dispose1_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))StringWriter__ToString_fn;
    type->fp_Write1 = (void(*)(::g::Uno::IO::TextWriter*, char16_t*))StringWriter__Write1_fn;
    type->fp_Write3 = (void(*)(::g::Uno::IO::TextWriter*, uArray*, int32_t*, int32_t*))StringWriter__Write3_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::TextWriter__Dispose_fn;
    return type;
}

// public StringWriter() :17
void StringWriter__ctor_1_fn(StringWriter* __this)
{
    __this->ctor_1();
}

// public override sealed void Close() :39
void StringWriter__Close_fn(StringWriter* __this)
{
    uStackFrame __("Uno.IO.StringWriter", "Close()");
    __this->Dispose1(true);
    __this->_open = false;
}

// protected override sealed void Dispose(bool disposing) :31
void StringWriter__Dispose1_fn(StringWriter* __this, bool* disposing)
{
    uStackFrame __("Uno.IO.StringWriter", "Dispose(bool)");
    bool disposing_ = *disposing;
    __this->_open = false;

    if (__this->_index != 0)
        __this->WriteBuffer();

    ::g::Uno::IO::TextWriter__Dispose1_fn(__this, uCRef(disposing_));
}

// public StringWriter New() :17
void StringWriter__New1_fn(StringWriter** __retval)
{
    *__retval = StringWriter::New1();
}

// public override sealed string ToString() :105
void StringWriter__ToString_fn(StringWriter* __this, uString** __retval)
{
    uStackFrame __("Uno.IO.StringWriter", "ToString()");

    if (__this->_index != 0)
        __this->WriteBuffer();

    return *__retval = uPtr(__this->_stringBuilder)->ToString(), void();
}

// public override sealed void Write(char value) :45
void StringWriter__Write1_fn(StringWriter* __this, char16_t* value)
{
    uStackFrame __("Uno.IO.StringWriter", "Write(char)");
    char16_t value_ = *value;

    if (!__this->_open)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[44/*"StringWriter"*/]));

    uPtr(__this->_buffer)->Item<char16_t>(__this->_index++) = value_;

    if (__this->_index == 256)
        __this->WriteBuffer();
}

// public override sealed void Write(char[] buffer, int index, int count) :58
void StringWriter__Write3_fn(StringWriter* __this, uArray* buffer, int32_t* index, int32_t* count)
{
    uStackFrame __("Uno.IO.StringWriter", "Write(char[],int,int)");
    int32_t index_ = *index;
    int32_t count_ = *count;

    if (buffer == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[38/*"buffer"*/]));

    if (index_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[40/*"index"*/]));

    if (count_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[41/*"count"*/]));

    if ((index_ + count_) > uPtr(buffer)->Length())
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[42/*"range"*/]));

    if (!__this->_open)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[44/*"StringWriter"*/]));

    if ((__this->_index + count_) >= 256)
        __this->WriteBuffer();

    if (count_ >= 256)
    {
        uArray* array = uArray::New(::TYPES[5/*char[]*/], count_);
        ::g::Uno::Array::Copy(::TYPES[11/*Uno.Array.Copy<char>*/], buffer, index_, array, 0, count_);
        uPtr(__this->_stringBuilder)->Append1(array);
    }
    else
    {
        ::g::Uno::Array::Copy(::TYPES[11/*Uno.Array.Copy<char>*/], buffer, index_, __this->_buffer, __this->_index, count_);
        __this->_index = (__this->_index + count_);
    }
}

// private void WriteBuffer() :97
void StringWriter__WriteBuffer_fn(StringWriter* __this)
{
    __this->WriteBuffer();
}

// public StringWriter() [instance] :17
void StringWriter::ctor_1()
{
    ctor_();
    _stringBuilder = ::g::Uno::Text::StringBuilder::New1();
    _open = true;
    _buffer = uArray::New(::TYPES[5/*char[]*/], 256);
    _index = 0;
}

// private void WriteBuffer() [instance] :97
void StringWriter::WriteBuffer()
{
    uStackFrame __("Uno.IO.StringWriter", "WriteBuffer()");
    uArray* array = uArray::New(::TYPES[5/*char[]*/], _index);
    ::g::Uno::Array::Copy(::TYPES[11/*Uno.Array.Copy<char>*/], _buffer, 0, array, 0, _index);
    uPtr(_stringBuilder)->Append1(array);
    _index = 0;
}

// public StringWriter New() [static] :17
StringWriter* StringWriter::New1()
{
    StringWriter* obj1 = (StringWriter*)uNew(StringWriter_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/TextReader.uno
// ------------------------------------------------------------------------

// public abstract class TextReader :8
// {
static void TextReader_build(uType* type)
{
    ::TYPES[12] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Char_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextReader_type, interface0));
    type->Reflection.SetFunctions(4,
        new uFunction("Dispose", NULL, (void*)TextReader__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Peek", NULL, NULL, offsetof(TextReader_type, fp_Peek), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Read", NULL, NULL, offsetof(TextReader_type, fp_Read), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("ReadLine", NULL, (void*)TextReader__ReadLine_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

TextReader_type* TextReader_typeof()
{
    static uSStrong<TextReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextReader);
    options.TypeSize = sizeof(TextReader_type);
    type = (TextReader_type*)uClassType::New("Uno.IO.TextReader", options);
    type->fp_build_ = TextReader_build;
    type->fp_Dispose1 = TextReader__Dispose1_fn;
    type->fp_Peek = TextReader__Peek_fn;
    type->fp_Read = TextReader__Read_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TextReader__Dispose_fn;
    return type;
}

// protected generated TextReader() :8
void TextReader__ctor__fn(TextReader* __this)
{
    __this->ctor_();
}

// public void Dispose() :12
void TextReader__Dispose_fn(TextReader* __this)
{
    __this->Dispose();
}

// protected virtual void Dispose(bool disposing) :18
void TextReader__Dispose1_fn(TextReader* __this, bool* disposing)
{
}

// public virtual int Peek() :28
void TextReader__Peek_fn(TextReader* __this, int32_t* __retval)
{
    return *__retval = -1, void();
}

// public virtual int Read() :33
void TextReader__Read_fn(TextReader* __this, int32_t* __retval)
{
    return *__retval = -1, void();
}

// public string ReadLine() :95
void TextReader__ReadLine_fn(TextReader* __this, uString** __retval)
{
    *__retval = __this->ReadLine();
}

// protected generated TextReader() [instance] :8
void TextReader::ctor_()
{
}

// public void Dispose() [instance] :12
void TextReader::Dispose()
{
    uStackFrame __("Uno.IO.TextReader", "Dispose()");
    Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(this);
}

// public string ReadLine() [instance] :95
uString* TextReader::ReadLine()
{
    uStackFrame __("Uno.IO.TextReader", "ReadLine()");
    ::g::Uno::Collections::List* buffer = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[12/*Uno.Collections.List<char>*/], 16);
    int32_t symbol = 0;

    while (true)
    {
        symbol = Read();

        if (((symbol == -1) || (symbol == 13)) || (symbol == 10))
            break;

        ::g::Uno::Collections::List__Add_fn(uPtr(buffer), uCRef<char16_t>((char16_t)symbol));
    }

    if ((symbol == 13) && (Peek() == 10))
        Read();

    if ((buffer->Count() == 0) && (symbol == -1))
        return NULL;

    return uString::CharArray((uArray*)buffer->ToArray());
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/TextWriter.uno
// ------------------------------------------------------------------------

// public abstract class TextWriter :7
// {
static void TextWriter_build(uType* type)
{
    ::TYPES[13] = ::g::Uno::Bool_typeof();
    ::TYPES[14] = ::g::Uno::Double_typeof();
    ::TYPES[15] = ::g::Uno::Float_typeof();
    ::TYPES[16] = ::g::Uno::Int_typeof();
    ::TYPES[17] = ::g::Uno::Long_typeof();
    ::TYPES[18] = ::g::Uno::UInt_typeof();
    ::TYPES[19] = ::g::Uno::ULong_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextWriter_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(TextWriter, _newline), 0);
    type->Reflection.SetFunctions(32,
        new uFunction("Close", NULL, NULL, offsetof(TextWriter_type, fp_Close), false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)TextWriter__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Flush", NULL, NULL, offsetof(TextWriter_type, fp_Flush), false, uVoid_typeof(), 0),
        new uFunction("get_NewLine", NULL, (void*)TextWriter__get_NewLine_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_NewLine", NULL, (void*)TextWriter__set_NewLine_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Write", NULL, (void*)TextWriter__Write_fn, 0, false, uVoid_typeof(), 1, ::TYPES[13/*bool*/]),
        new uFunction("Write", NULL, NULL, offsetof(TextWriter_type, fp_Write1), false, uVoid_typeof(), 1, ::g::Uno::Char_typeof()),
        new uFunction("Write", NULL, (void*)TextWriter__Write2_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Char_typeof()->Array()),
        new uFunction("Write", NULL, NULL, offsetof(TextWriter_type, fp_Write3), false, uVoid_typeof(), 3, ::g::Uno::Char_typeof()->Array(), ::TYPES[16/*int*/], ::TYPES[16/*int*/]),
        new uFunction("Write", NULL, (void*)TextWriter__Write4_fn, 0, false, uVoid_typeof(), 1, ::TYPES[14/*double*/]),
        new uFunction("Write", NULL, (void*)TextWriter__Write5_fn, 0, false, uVoid_typeof(), 1, ::TYPES[15/*float*/]),
        new uFunction("Write", NULL, (void*)TextWriter__Write6_fn, 0, false, uVoid_typeof(), 1, ::TYPES[16/*int*/]),
        new uFunction("Write", NULL, (void*)TextWriter__Write7_fn, 0, false, uVoid_typeof(), 1, ::TYPES[17/*long*/]),
        new uFunction("Write", NULL, (void*)TextWriter__Write8_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("Write", NULL, NULL, offsetof(TextWriter_type, fp_Write9), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Write", NULL, (void*)TextWriter__Write10_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("Write", NULL, (void*)TextWriter__Write11_fn, 0, false, uVoid_typeof(), 1, ::TYPES[18/*uint*/]),
        new uFunction("Write", NULL, (void*)TextWriter__Write12_fn, 0, false, uVoid_typeof(), 1, ::TYPES[19/*ulong*/]),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine1_fn, 0, false, uVoid_typeof(), 1, ::TYPES[13/*bool*/]),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine2_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Char_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine3_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Char_typeof()->Array()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine4_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Char_typeof()->Array(), ::TYPES[16/*int*/], ::TYPES[16/*int*/]),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine5_fn, 0, false, uVoid_typeof(), 1, ::TYPES[14/*double*/]),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine6_fn, 0, false, uVoid_typeof(), 1, ::TYPES[15/*float*/]),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine7_fn, 0, false, uVoid_typeof(), 1, ::TYPES[16/*int*/]),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine8_fn, 0, false, uVoid_typeof(), 1, ::TYPES[17/*long*/]),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine9_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine10_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine11_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine12_fn, 0, false, uVoid_typeof(), 1, ::TYPES[18/*uint*/]),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine13_fn, 0, false, uVoid_typeof(), 1, ::TYPES[19/*ulong*/]));
}

TextWriter_type* TextWriter_typeof()
{
    static uSStrong<TextWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextWriter);
    options.TypeSize = sizeof(TextWriter_type);
    type = (TextWriter_type*)uClassType::New("Uno.IO.TextWriter", options);
    type->fp_build_ = TextWriter_build;
    type->fp_Close = TextWriter__Close_fn;
    type->fp_Dispose1 = TextWriter__Dispose1_fn;
    type->fp_Flush = TextWriter__Flush_fn;
    type->fp_Write1 = TextWriter__Write1_fn;
    type->fp_Write3 = TextWriter__Write3_fn;
    type->fp_Write9 = TextWriter__Write9_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TextWriter__Dispose_fn;
    return type;
}

// protected generated TextWriter() :7
void TextWriter__ctor__fn(TextWriter* __this)
{
    __this->ctor_();
}

// public virtual void Close() :29
void TextWriter__Close_fn(TextWriter* __this)
{
    uStackFrame __("Uno.IO.TextWriter", "Close()");
    __this->Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(__this);
}

// public void Dispose() :19
void TextWriter__Dispose_fn(TextWriter* __this)
{
    __this->Dispose();
}

// protected virtual void Dispose(bool disposing) :25
void TextWriter__Dispose1_fn(TextWriter* __this, bool* disposing)
{
}

// public virtual void Flush() :35
void TextWriter__Flush_fn(TextWriter* __this)
{
}

// public string get_NewLine() :15
void TextWriter__get_NewLine_fn(TextWriter* __this, uString** __retval)
{
    *__retval = __this->NewLine();
}

// public void set_NewLine(string value) :16
void TextWriter__set_NewLine_fn(TextWriter* __this, uString* value)
{
    __this->NewLine(value);
}

// public void Write(bool value) :55
void TextWriter__Write_fn(TextWriter* __this, bool* value)
{
    __this->Write(*value);
}

// public virtual void Write(char value) :39
void TextWriter__Write1_fn(TextWriter* __this, char16_t* value)
{
}

// public void Write(char[] buffer) :47
void TextWriter__Write2_fn(TextWriter* __this, uArray* buffer)
{
    __this->Write2(buffer);
}

// public virtual void Write(char[] buffer, int index, int count) :43
void TextWriter__Write3_fn(TextWriter* __this, uArray* buffer, int32_t* index, int32_t* count)
{
}

// public void Write(double value) :85
void TextWriter__Write4_fn(TextWriter* __this, double* value)
{
    __this->Write4(*value);
}

// public void Write(float value) :80
void TextWriter__Write5_fn(TextWriter* __this, float* value)
{
    __this->Write5(*value);
}

// public void Write(int value) :60
void TextWriter__Write6_fn(TextWriter* __this, int32_t* value)
{
    __this->Write6(*value);
}

// public void Write(long value) :70
void TextWriter__Write7_fn(TextWriter* __this, int64_t* value)
{
    __this->Write7(*value);
}

// public void Write(object value) :98
void TextWriter__Write8_fn(TextWriter* __this, uObject* value)
{
    __this->Write8(value);
}

// public virtual void Write(string value) :90
void TextWriter__Write9_fn(TextWriter* __this, uString* value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(string)");

    if (::g::Uno::String::op_Inequality(value, NULL))
        __this->Write2(::g::Uno::String::ToCharArray(uPtr(value)));
}

// public void Write(string format, object[] args) :106
void TextWriter__Write10_fn(TextWriter* __this, uString* format, uArray* args)
{
    __this->Write10(format, args);
}

// public void Write(uint value) :65
void TextWriter__Write11_fn(TextWriter* __this, uint32_t* value)
{
    __this->Write11(*value);
}

// public void Write(ulong value) :75
void TextWriter__Write12_fn(TextWriter* __this, uint64_t* value)
{
    __this->Write12(*value);
}

// public void WriteLine() :111
void TextWriter__WriteLine_fn(TextWriter* __this)
{
    __this->WriteLine();
}

// public void WriteLine(bool value) :134
void TextWriter__WriteLine1_fn(TextWriter* __this, bool* value)
{
    __this->WriteLine1(*value);
}

// public void WriteLine(char value) :116
void TextWriter__WriteLine2_fn(TextWriter* __this, char16_t* value)
{
    __this->WriteLine2(*value);
}

// public void WriteLine(char[] buffer) :122
void TextWriter__WriteLine3_fn(TextWriter* __this, uArray* buffer)
{
    __this->WriteLine3(buffer);
}

// public void WriteLine(char[] buffer, int index, int count) :128
void TextWriter__WriteLine4_fn(TextWriter* __this, uArray* buffer, int32_t* index, int32_t* count)
{
    __this->WriteLine4(buffer, *index, *count);
}

// public void WriteLine(double value) :170
void TextWriter__WriteLine5_fn(TextWriter* __this, double* value)
{
    __this->WriteLine5(*value);
}

// public void WriteLine(float value) :164
void TextWriter__WriteLine6_fn(TextWriter* __this, float* value)
{
    __this->WriteLine6(*value);
}

// public void WriteLine(int value) :140
void TextWriter__WriteLine7_fn(TextWriter* __this, int32_t* value)
{
    __this->WriteLine7(*value);
}

// public void WriteLine(long value) :152
void TextWriter__WriteLine8_fn(TextWriter* __this, int64_t* value)
{
    __this->WriteLine8(*value);
}

// public void WriteLine(object value) :182
void TextWriter__WriteLine9_fn(TextWriter* __this, uObject* value)
{
    __this->WriteLine9(value);
}

// public void WriteLine(string value) :176
void TextWriter__WriteLine10_fn(TextWriter* __this, uString* value)
{
    __this->WriteLine10(value);
}

// public void WriteLine(string format, object[] args) :192
void TextWriter__WriteLine11_fn(TextWriter* __this, uString* format, uArray* args)
{
    __this->WriteLine11(format, args);
}

// public void WriteLine(uint value) :146
void TextWriter__WriteLine12_fn(TextWriter* __this, uint32_t* value)
{
    __this->WriteLine12(*value);
}

// public void WriteLine(ulong value) :158
void TextWriter__WriteLine13_fn(TextWriter* __this, uint64_t* value)
{
    __this->WriteLine13(*value);
}

// protected generated TextWriter() [instance] :7
void TextWriter::ctor_()
{
    _newline = ::g::Uno::Environment::NewLine();
}

// public void Dispose() [instance] :19
void TextWriter::Dispose()
{
    uStackFrame __("Uno.IO.TextWriter", "Dispose()");
    Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(this);
}

// public string get_NewLine() [instance] :15
uString* TextWriter::NewLine()
{
    return _newline;
}

// public void set_NewLine(string value) [instance] :16
void TextWriter::NewLine(uString* value)
{
    _newline = ((value != NULL) ? value : (uString*)::g::Uno::Environment::NewLine());
}

// public void Write(bool value) [instance] :55
void TextWriter::Write(bool value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(bool)");
    bool value_ = value;
    Write9(::g::Uno::Bool::ToString(value_, ::TYPES[13/*bool*/]));
}

// public void Write(char[] buffer) [instance] :47
void TextWriter::Write2(uArray* buffer)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(char[])");

    if (buffer != NULL)
        Write3(buffer, 0, uPtr(buffer)->Length());
}

// public void Write(double value) [instance] :85
void TextWriter::Write4(double value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(double)");
    double value_ = value;
    Write9(::g::Uno::Double::ToString(value_, ::TYPES[14/*double*/]));
}

// public void Write(float value) [instance] :80
void TextWriter::Write5(float value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(float)");
    float value_ = value;
    Write9(::g::Uno::Float::ToString(value_, ::TYPES[15/*float*/]));
}

// public void Write(int value) [instance] :60
void TextWriter::Write6(int32_t value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(int)");
    int32_t value_ = value;
    Write9(::g::Uno::Int::ToString(value_, ::TYPES[16/*int*/]));
}

// public void Write(long value) [instance] :70
void TextWriter::Write7(int64_t value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(long)");
    int64_t value_ = value;
    Write9(::g::Uno::Long::ToString(value_, ::TYPES[17/*long*/]));
}

// public void Write(object value) [instance] :98
void TextWriter::Write8(uObject* value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(object)");

    if (value != NULL)
        Write9(::g::Uno::Object::ToString(uPtr(value)));
}

// public void Write(string format, object[] args) [instance] :106
void TextWriter::Write10(uString* format, uArray* args)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(string,object[])");
    Write9(::g::Uno::String::Format(format, args));
}

// public void Write(uint value) [instance] :65
void TextWriter::Write11(uint32_t value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(uint)");
    uint32_t value_ = value;
    Write9(::g::Uno::UInt::ToString(value_, ::TYPES[18/*uint*/]));
}

// public void Write(ulong value) [instance] :75
void TextWriter::Write12(uint64_t value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(ulong)");
    uint64_t value_ = value;
    Write9(::g::Uno::ULong::ToString(value_, ::TYPES[19/*ulong*/]));
}

// public void WriteLine() [instance] :111
void TextWriter::WriteLine()
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine()");
    Write9(NewLine());
}

// public void WriteLine(bool value) [instance] :134
void TextWriter::WriteLine1(bool value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(bool)");
    bool value_ = value;
    Write(value_);
    WriteLine();
}

// public void WriteLine(char value) [instance] :116
void TextWriter::WriteLine2(char16_t value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(char)");
    char16_t value_ = value;
    Write1(value_);
    WriteLine();
}

// public void WriteLine(char[] buffer) [instance] :122
void TextWriter::WriteLine3(uArray* buffer)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(char[])");
    Write2(buffer);
    WriteLine();
}

// public void WriteLine(char[] buffer, int index, int count) [instance] :128
void TextWriter::WriteLine4(uArray* buffer, int32_t index, int32_t count)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(char[],int,int)");
    int32_t index_ = index;
    int32_t count_ = count;
    Write3(buffer, index_, count_);
    WriteLine();
}

// public void WriteLine(double value) [instance] :170
void TextWriter::WriteLine5(double value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(double)");
    double value_ = value;
    Write4(value_);
    WriteLine();
}

// public void WriteLine(float value) [instance] :164
void TextWriter::WriteLine6(float value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(float)");
    float value_ = value;
    Write5(value_);
    WriteLine();
}

// public void WriteLine(int value) [instance] :140
void TextWriter::WriteLine7(int32_t value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(int)");
    int32_t value_ = value;
    Write6(value_);
    WriteLine();
}

// public void WriteLine(long value) [instance] :152
void TextWriter::WriteLine8(int64_t value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(long)");
    int64_t value_ = value;
    Write7(value_);
    WriteLine();
}

// public void WriteLine(object value) [instance] :182
void TextWriter::WriteLine9(uObject* value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(object)");

    if (value == NULL)
    {
        WriteLine();
        return;
    }

    WriteLine10(::g::Uno::Object::ToString(uPtr(value)));
}

// public void WriteLine(string value) [instance] :176
void TextWriter::WriteLine10(uString* value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(string)");
    Write9(value);
    WriteLine();
}

// public void WriteLine(string format, object[] args) [instance] :192
void TextWriter::WriteLine11(uString* format, uArray* args)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(string,object[])");
    Write9(::g::Uno::String::Format(format, args));
    WriteLine();
}

// public void WriteLine(uint value) [instance] :146
void TextWriter::WriteLine12(uint32_t value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(uint)");
    uint32_t value_ = value;
    Write11(value_);
    WriteLine();
}

// public void WriteLine(ulong value) [instance] :158
void TextWriter::WriteLine13(uint64_t value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(ulong)");
    uint64_t value_ = value;
    Write12(value_);
    WriteLine();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Directory.uno
// -----------------------------------------------------------------------

// public enum UserDirectory :7
uEnumType* UserDirectory_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.UserDirectory", ::g::Uno::Int_typeof(), 11);
    type->SetLiterals(
        "Cache", 0LL,
        "Config", 1LL,
        "Data", 2LL,
        "Desktop", 3LL,
        "Downloads", 4LL,
        "Templates", 5LL,
        "Public", 6LL,
        "Documents", 7LL,
        "Music", 8LL,
        "Pictures", 9LL,
        "Videos", 10LL);
    return type;
}

}}} // ::g::Uno::IO
