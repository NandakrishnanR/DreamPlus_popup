// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Optional1-1.h>
#include <Outracks.Simulator.Bytecode.AddEventHandler.h>
#include <Outracks.Simulator.Bytecode.BindVariable.h>
#include <Outracks.Simulator.Bytecode.BlobLiteral.h>
#include <Outracks.Simulator.Bytecode.BooleanLiteral.h>
#include <Outracks.Simulator.Bytecode.CallDynamicMethod.h>
#include <Outracks.Simulator.Bytecode.CallLambda.h>
#include <Outracks.Simulator.Bytecode.CallStaticMethod.h>
#include <Outracks.Simulator.Bytecode.EnumLiteral.h>
#include <Outracks.Simulator.Bytecode.Expression.h>
#include <Outracks.Simulator.Bytecode.Instantiate.h>
#include <Outracks.Simulator.Bytecode.IsType.h>
#include <Outracks.Simulator.Bytecode.Lambda.h>
#include <Outracks.Simulator.Bytecode.Literal.h>
#include <Outracks.Simulator.Bytecode.LogicalOr.h>
#include <Outracks.Simulator.Bytecode.MethodGroup.h>
#include <Outracks.Simulator.Bytecode.NumberLiteral.h>
#include <Outracks.Simulator.Bytecode.NumberType.h>
#include <Outracks.Simulator.Bytecode.Parameter.h>
#include <Outracks.Simulator.Bytecode.ReadProperty.h>
#include <Outracks.Simulator.Bytecode.ReadStaticField.h>
#include <Outracks.Simulator.Bytecode.ReadVariable.h>
#include <Outracks.Simulator.Bytecode.RemoveEventHandler.h>
#include <Outracks.Simulator.Bytecode.Return.h>
#include <Outracks.Simulator.Bytecode.Signature.h>
#include <Outracks.Simulator.Bytecode.Statement.h>
#include <Outracks.Simulator.Bytecode.StaticMemberName.h>
#include <Outracks.Simulator.Bytecode.StringLiteral.h>
#include <Outracks.Simulator.Bytecode.TypeMemberName.h>
#include <Outracks.Simulator.Bytecode.TypeName.h>
#include <Outracks.Simulator.Bytecode.Variable.h>
#include <Outracks.Simulator.Bytecode.WriteProperty.h>
#include <Outracks.Simulator.ImmutableList-1.h>
#include <Outracks.Simulator.Runtime.ArrayStream.h>
#include <Outracks.Simulator.Runtime.Bundle.h>
#include <Outracks.Simulator.Runtime.Environment.h>
#include <Outracks.Simulator.Runtime.FileCache.h>
#include <Outracks.Simulator.Runtime.HashableWeakReference.h>
#include <Outracks.Simulator.Runtime.IReflection.h>
#include <Outracks.Simulator.Runtime.LambdaClosure.h>
#include <Outracks.Simulator.Runtime.MemberNotFound.h>
#include <Outracks.Simulator.Runtime.ObjectTagRegistry.CurrentEach.h>
#include <Outracks.Simulator.Runtime.ObjectTagRegistry.h>
#include <Outracks.Simulator.Runtime.ScopeClosure.h>
#include <Outracks.Simulator.Runtime.TypeNotFound.h>
#include <Outracks.Simulator.Runtime.UnambiguousMethodNotFound.h>
#include <Outracks.Simulator.Runtime.UxFileSource.h>
#include <Outracks.Simulator.Runtime.UxProperty-1.h>
#include <Outracks.Simulator.Runtime.UxTemplate.h>
#include <Outracks.Simulator.Runtime.VariableNotBound.h>
#include <Outracks.Simulator.Runtime.WeakDictionary-2.h>
#include <Uno.Action.h>
#include <Uno.Action10-10.h>
#include <Uno.Action1-1.h>
#include <Uno.Action11-11.h>
#include <Uno.Action12-12.h>
#include <Uno.Action13-13.h>
#include <Uno.Action14-14.h>
#include <Uno.Action15-15.h>
#include <Uno.Action16-16.h>
#include <Uno.Action2-2.h>
#include <Uno.Action3-3.h>
#include <Uno.Action4-4.h>
#include <Uno.Action5-5.h>
#include <Uno.Action6-6.h>
#include <Uno.Action7-7.h>
#include <Uno.Action8-8.h>
#include <Uno.Action9-9.h>
#include <Uno.ArgumentException.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Func-1.h>
#include <Uno.Func10-11.h>
#include <Uno.Func11-12.h>
#include <Uno.Func1-2.h>
#include <Uno.Func12-13.h>
#include <Uno.Func13-14.h>
#include <Uno.Func14-15.h>
#include <Uno.Func15-16.h>
#include <Uno.Func16-17.h>
#include <Uno.Func2-3.h>
#include <Uno.Func3-4.h>
#include <Uno.Func4-5.h>
#include <Uno.Func5-6.h>
#include <Uno.Func6-7.h>
#include <Uno.Func7-8.h>
#include <Uno.Func8-9.h>
#include <Uno.Func9-10.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.SeekOrigin.h>
#include <Uno.IO.Stream.h>
#include <Uno.Long.h>
#include <Uno.NotImplementedException.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.SByte.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UShort.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.WeakReference-1.h>
static uString* STRINGS[12];
static uType* TYPES[81];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/ArrayStream.cs
// ----------------------------------------------------------------------------------------

// public sealed class ArrayStream :9
// {
static void ArrayStream_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Array_typeof()->MakeMethod(1/*Copy<byte>*/, ::g::Uno::Byte_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::TYPES[0/*byte[]*/], offsetof(ArrayStream, _buffer), 0,
        ::g::Uno::Int_typeof(), offsetof(ArrayStream, _nextIncrease), 0,
        ::g::Uno::Long_typeof(), offsetof(ArrayStream, _length), 0,
        ::g::Uno::Long_typeof(), offsetof(ArrayStream, _Position), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Capacity", NULL, (void*)ArrayStream__get_Capacity_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetBuffer", NULL, (void*)ArrayStream__GetBuffer_fn, 0, false, ::TYPES[0/*byte[]*/], 0),
        new uFunction(".ctor", NULL, (void*)ArrayStream__New1_fn, 0, true, type, 1, ::TYPES[0/*byte[]*/]));
}

::g::Uno::IO::Stream_type* ArrayStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::Stream_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ArrayStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Outracks.Simulator.Runtime.ArrayStream", options);
    type->fp_build_ = ArrayStream_build;
    type->fp_get_CanRead = (void(*)(::g::Uno::IO::Stream*, bool*))ArrayStream__get_CanRead_fn;
    type->fp_get_CanSeek = (void(*)(::g::Uno::IO::Stream*, bool*))ArrayStream__get_CanSeek_fn;
    type->fp_get_CanTimeout = (void(*)(::g::Uno::IO::Stream*, bool*))ArrayStream__get_CanTimeout_fn;
    type->fp_get_CanWrite = (void(*)(::g::Uno::IO::Stream*, bool*))ArrayStream__get_CanWrite_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))ArrayStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))ArrayStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))ArrayStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))ArrayStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*, int32_t*))ArrayStream__Read_fn;
    type->fp_Seek = (void(*)(::g::Uno::IO::Stream*, int64_t*, int32_t*, int64_t*))ArrayStream__Seek_fn;
    type->fp_SetLength = (void(*)(::g::Uno::IO::Stream*, int64_t*))ArrayStream__SetLength_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*))ArrayStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public ArrayStream(byte[] buffer) :54
void ArrayStream__ctor_1_fn(ArrayStream* __this, uArray* buffer)
{
    __this->ctor_1(buffer);
}

// public override sealed bool get_CanRead() :18
void ArrayStream__get_CanRead_fn(ArrayStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed bool get_CanSeek() :28
void ArrayStream__get_CanSeek_fn(ArrayStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed bool get_CanTimeout() :33
void ArrayStream__get_CanTimeout_fn(ArrayStream* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public override sealed bool get_CanWrite() :23
void ArrayStream__get_CanWrite_fn(ArrayStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public int get_Capacity() :46
void ArrayStream__get_Capacity_fn(ArrayStream* __this, int32_t* __retval)
{
    *__retval = __this->Capacity();
}

// private void EnsureCapacity(int byteCount) :102
void ArrayStream__EnsureCapacity_fn(ArrayStream* __this, int32_t* byteCount)
{
    __this->EnsureCapacity(*byteCount);
}

// public override sealed void Flush() :136
void ArrayStream__Flush_fn(ArrayStream* __this)
{
}

// public byte[] GetBuffer() :126
void ArrayStream__GetBuffer_fn(ArrayStream* __this, uArray** __retval)
{
    *__retval = __this->GetBuffer();
}

// public override sealed long get_Length() :38
void ArrayStream__get_Length_fn(ArrayStream* __this, int64_t* __retval)
{
    return *__retval = __this->_length, void();
}

// public ArrayStream New(byte[] buffer) :54
void ArrayStream__New1_fn(uArray* buffer, ArrayStream** __retval)
{
    *__retval = ArrayStream::New1(buffer);
}

// public generated override sealed long get_Position() :52
void ArrayStream__get_Position_fn(ArrayStream* __this, int64_t* __retval)
{
    return *__retval = __this->_Position, void();
}

// public generated override sealed void set_Position(long value) :52
void ArrayStream__set_Position_fn(ArrayStream* __this, int64_t* value)
{
    int64_t value_ = *value;
    __this->_Position = value_;
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :74
void ArrayStream__Read_fn(ArrayStream* __this, uArray* dst, int32_t* byteOffset, int32_t* byteCount, int32_t* __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.ArrayStream", "Read(byte[],int,int)");
    int32_t byteCount_ = *byteCount;
    int32_t byteOffset_ = *byteOffset;
    int32_t i = 0;

    for (; (i < byteCount_) && ((__this->Position() + (int64_t)i) < __this->Length()); i++)
        uPtr(dst)->Item<uint8_t>(i + byteOffset_) = uPtr(__this->_buffer)->Item<uint8_t>((int32_t)__this->Position() + i);

    __this->Position(__this->Position() + (int64_t)i);
    return *__retval = i, void();
}

// private void ResizeTo(int newSize) :118
void ArrayStream__ResizeTo_fn(ArrayStream* __this, int32_t* newSize)
{
    __this->ResizeTo(*newSize);
}

// public override sealed long Seek(long byteOffset, Uno.IO.SeekOrigin origin) :85
void ArrayStream__Seek_fn(ArrayStream* __this, int64_t* byteOffset, int32_t* origin, int64_t* __retval)
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

// public override sealed void SetLength(long value) :131
void ArrayStream__SetLength_fn(ArrayStream* __this, int64_t* value)
{
    uStackFrame __("Outracks.Simulator.Runtime.ArrayStream", "SetLength(long)");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :60
void ArrayStream__Write_fn(ArrayStream* __this, uArray* src, int32_t* byteOffset, int32_t* byteCount)
{
    uStackFrame __("Outracks.Simulator.Runtime.ArrayStream", "Write(byte[],int,int)");
    int32_t byteCount_ = *byteCount;
    int32_t byteOffset_ = *byteOffset;
    __this->EnsureCapacity(byteCount_);

    for (int32_t i = byteOffset_; i < (byteOffset_ + byteCount_); i++)
    {
        uPtr(__this->_buffer)->Item<uint8_t>((int32_t)__this->Position()) = uPtr(src)->Item<uint8_t>(i);
        __this->Position(__this->Position() + 1LL);
    }

    if (__this->Position() > __this->Length())
        __this->_length = __this->Position();
}

// public ArrayStream(byte[] buffer) [instance] :54
void ArrayStream::ctor_1(uArray* buffer)
{
    uStackFrame __("Outracks.Simulator.Runtime.ArrayStream", ".ctor(byte[])");
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 0);
    _nextIncrease = 256;
    ctor_();
    _buffer = buffer;
    _length = (int64_t)uPtr(_buffer)->Length();
}

// public int get_Capacity() [instance] :46
int32_t ArrayStream::Capacity()
{
    uStackFrame __("Outracks.Simulator.Runtime.ArrayStream", "get_Capacity()");
    return uPtr(_buffer)->Length();
}

// private void EnsureCapacity(int byteCount) [instance] :102
void ArrayStream::EnsureCapacity(int32_t byteCount)
{
    uStackFrame __("Outracks.Simulator.Runtime.ArrayStream", "EnsureCapacity(int)");

    if ((Position() + (int64_t)byteCount) <= (int64_t)Capacity())
        return;
    else if ((Position() + (int64_t)byteCount) <= (int64_t)(Capacity() + _nextIncrease))
        ResizeTo(Capacity() + _nextIncrease);
    else
        ResizeTo((int32_t)Position() + byteCount);
}

// public byte[] GetBuffer() [instance] :126
uArray* ArrayStream::GetBuffer()
{
    return _buffer;
}

// private void ResizeTo(int newSize) [instance] :118
void ArrayStream::ResizeTo(int32_t newSize)
{
    uStackFrame __("Outracks.Simulator.Runtime.ArrayStream", "ResizeTo(int)");
    uArray* newBuffer = uArray::New(::TYPES[0/*byte[]*/], newSize);
    ::g::Uno::Array::Copy1(::TYPES[1/*Uno.Array.Copy<byte>*/], _buffer, newBuffer, uPtr(_buffer)->Length());
    _buffer = newBuffer;
    _nextIncrease = Capacity();
}

// public ArrayStream New(byte[] buffer) [static] :54
ArrayStream* ArrayStream::New1(uArray* buffer)
{
    ArrayStream* obj1 = (ArrayStream*)uNew(ArrayStream_typeof());
    obj1->ctor_1(buffer);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Bundle.cs
// -----------------------------------------------------------------------------------

// public static class Bundle :5
// {
static void Bundle_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    type->SetDependencies(
        ::g::Uno::IO::Bundle_typeof());
    type->SetFields(0,
        ::g::Uno::IO::Bundle_typeof(), (uintptr_t)&Bundle::_bundle_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("AddOrUpdateFile", NULL, (void*)Bundle__AddOrUpdateFile_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()),
        new uFunction("Initialize", NULL, (void*)Bundle__Initialize_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

uClassType* Bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Runtime.Bundle", options);
    type->fp_build_ = Bundle_build;
    return type;
}

// public static extern void AddOrUpdateFile(string projectRelativeFilePath, byte[] data) :14
void Bundle__AddOrUpdateFile_fn(uString* projectRelativeFilePath, uArray* data)
{
    Bundle::AddOrUpdateFile(projectRelativeFilePath, data);
}

// public static void Initialize(string projectName) :8
void Bundle__Initialize_fn(uString* projectName)
{
    Bundle::Initialize(projectName);
}

uSStrong< ::g::Uno::IO::Bundle*> Bundle::_bundle_;

// public static extern void AddOrUpdateFile(string projectRelativeFilePath, byte[] data) [static] :14
void Bundle::AddOrUpdateFile(uString* projectRelativeFilePath, uArray* data)
{
    uStackFrame __("Outracks.Simulator.Runtime.Bundle", "AddOrUpdateFile(string,byte[])");
    ::g::Uno::IO::BundleFile* ret2;
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(Bundle::_bundle_)->Files()), ::TYPES[2/*Uno.Collections.IEnumerable<Uno.IO.BundleFile>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Uno::IO::BundleFile* exisitingFile = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[4/*Uno.Collections.IEnumerator<Uno.IO.BundleFile>*/]), &ret2), ret2);

                    if (::g::Uno::String::op_Equality(uPtr(exisitingFile)->SourcePath(), projectRelativeFilePath))
                    {
                        uPtr(exisitingFile)->Update(data);
                        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[5/*Uno.IDisposable*/]));
                        return;
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[5/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[5/*Uno.IDisposable*/]));
        }
        __after_finally_0:;
    }

    uPtr(Bundle::_bundle_)->CreateFile(projectRelativeFilePath, data);
}

// public static void Initialize(string projectName) [static] :8
void Bundle::Initialize(uString* projectName)
{
    uStackFrame __("Outracks.Simulator.Runtime.Bundle", "Initialize(string)");
    Bundle::_bundle_ = ::g::Uno::IO::Bundle::Get(projectName);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/ObjectTagRegistry.cs
// ----------------------------------------------------------------------------------------------

// private sealed class ObjectTagRegistry.CurrentEach :146
// {
static void ObjectTagRegistry__CurrentEach_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::IDisposable_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::IDisposable_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    type->SetDependencies(
        ::g::Outracks::Simulator::Runtime::ObjectTagRegistry_typeof());
    type->SetInterfaces(
        ::TYPES[5/*Uno.IDisposable*/], offsetof(ObjectTagRegistry__CurrentEach_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ObjectTagRegistry__CurrentEach, _id), 0,
        ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL), offsetof(ObjectTagRegistry__CurrentEach, _func), 0,
        ::TYPES[6/*Uno.Collections.List<Uno.IDisposable>*/], offsetof(ObjectTagRegistry__CurrentEach, _garbage), 0);
}

ObjectTagRegistry__CurrentEach_type* ObjectTagRegistry__CurrentEach_typeof()
{
    static uSStrong<ObjectTagRegistry__CurrentEach_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ObjectTagRegistry__CurrentEach);
    options.TypeSize = sizeof(ObjectTagRegistry__CurrentEach_type);
    type = (ObjectTagRegistry__CurrentEach_type*)uClassType::New("Outracks.Simulator.Runtime.ObjectTagRegistry.CurrentEach", options);
    type->fp_build_ = ObjectTagRegistry__CurrentEach_build;
    type->fp_ctor_ = (void*)ObjectTagRegistry__CurrentEach__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ObjectTagRegistry__CurrentEach__Dispose_fn;
    return type;
}

// public generated CurrentEach() :146
void ObjectTagRegistry__CurrentEach__ctor__fn(ObjectTagRegistry__CurrentEach* __this)
{
    __this->ctor_();
}

// public void Dispose() :153
void ObjectTagRegistry__CurrentEach__Dispose_fn(ObjectTagRegistry__CurrentEach* __this)
{
    __this->Dispose();
}

// public generated CurrentEach New() :146
void ObjectTagRegistry__CurrentEach__New1_fn(ObjectTagRegistry__CurrentEach** __retval)
{
    *__retval = ObjectTagRegistry__CurrentEach::New1();
}

// public void OnObjectCreated(object obj) :168
void ObjectTagRegistry__CurrentEach__OnObjectCreated_fn(ObjectTagRegistry__CurrentEach* __this, uObject* obj)
{
    __this->OnObjectCreated(obj);
}

// public void OnObjectCreated(string id, object obj) :160
void ObjectTagRegistry__CurrentEach__OnObjectCreated1_fn(ObjectTagRegistry__CurrentEach* __this, uString* id, uObject* obj)
{
    __this->OnObjectCreated1(id, obj);
}

// public generated CurrentEach() [instance] :146
void ObjectTagRegistry__CurrentEach::ctor_()
{
    _garbage = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[6/*Uno.Collections.List<Uno.IDisposable>*/]));
}

// public void Dispose() [instance] :153
void ObjectTagRegistry__CurrentEach::Dispose()
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry.CurrentEach", "Dispose()");
    bool ret3;
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret4;
    ::g::Uno::Collections::List__Remove_fn(uPtr(::g::Outracks::Simulator::Runtime::ObjectTagRegistry::_eaches()), this, &ret3);
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_garbage), &ret4), ret4);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[7/*Uno.Collections.List<Uno.IDisposable>.Enumerator*/]))
                {
                    uObject* disposable = enum1.Current(::TYPES[7/*Uno.Collections.List<Uno.IDisposable>.Enumerator*/]);
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(disposable), ::TYPES[5/*Uno.IDisposable*/]));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[7/*Uno.Collections.List<Uno.IDisposable>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            enum1.Dispose(::TYPES[7/*Uno.Collections.List<Uno.IDisposable>.Enumerator*/]);
        }
        __after_finally_1:;
    }
}

// public void OnObjectCreated(object obj) [instance] :168
void ObjectTagRegistry__CurrentEach::OnObjectCreated(uObject* obj)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry.CurrentEach", "OnObjectCreated(object)");
    uObject* disposable = uAs<uObject*>(uPtr(_func)->Invoke(1, obj), ::TYPES[5/*Uno.IDisposable*/]);

    if (disposable != NULL)
        ::g::Uno::Collections::List__Add_fn(uPtr(_garbage), disposable);
}

// public void OnObjectCreated(string id, object obj) [instance] :160
void ObjectTagRegistry__CurrentEach::OnObjectCreated1(uString* id, uObject* obj)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry.CurrentEach", "OnObjectCreated(string,object)");

    if (::g::Uno::String::op_Inequality(id, _id))
        return;

    OnObjectCreated(obj);
}

// public generated CurrentEach New() [static] :146
ObjectTagRegistry__CurrentEach* ObjectTagRegistry__CurrentEach::New1()
{
    ObjectTagRegistry__CurrentEach* obj2 = (ObjectTagRegistry__CurrentEach*)uNew(ObjectTagRegistry__CurrentEach_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Scope.cs
// ----------------------------------------------------------------------------------

// public sealed class Environment :9
// {
static void Environment_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Variable_typeof(), uObject_typeof(), NULL);
    ::TYPES[9] = ::g::Outracks::Optional1_typeof()->MakeType(type, NULL);
    type->SetFields(0,
        ::TYPES[8/*Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.Variable, object>*/], offsetof(Environment, _variableBindings), 0,
        ::TYPES[9/*Outracks.Optional<Outracks.Simulator.Runtime.Environment>*/], (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(4,
        new uFunction("Bind", NULL, (void*)Environment__Bind_fn, 0, false, uVoid_typeof(), 2, ::g::Outracks::Simulator::Bytecode::Variable_typeof(), uObject_typeof()),
        new uFunction("Bind", NULL, (void*)Environment__Bind1_fn, 0, false, uVoid_typeof(), 2, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Parameter_typeof(), NULL), uObject_typeof()->Array()),
        new uFunction("GetValue", NULL, (void*)Environment__GetValue_fn, 0, false, uObject_typeof(), 1, ::g::Outracks::Simulator::Bytecode::Variable_typeof()),
        new uFunction(".ctor", NULL, (void*)Environment__New1_fn, 0, true, type, 1, ::TYPES[9/*Outracks.Optional<Outracks.Simulator.Runtime.Environment>*/]));
}

uType* Environment_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Environment);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.Environment", options);
    type->fp_build_ = Environment_build;
    return type;
}

// public Environment(Outracks.Optional<Outracks.Simulator.Runtime.Environment> parent) :15
void Environment__ctor__fn(Environment* __this, ::g::Outracks::Optional1<uStrong<Environment*> >* parent)
{
    __this->ctor_(*parent);
}

// public void Bind(Outracks.Simulator.Bytecode.Variable variable, object value) :26
void Environment__Bind_fn(Environment* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable, uObject* value)
{
    __this->Bind(variable, value);
}

// public void Bind(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter> parameters, object[] arguments) :20
void Environment__Bind1_fn(Environment* __this, ::g::Outracks::Simulator::ImmutableList* parameters, uArray* arguments)
{
    __this->Bind1(parameters, arguments);
}

// public object GetValue(Outracks.Simulator.Bytecode.Variable variable) :31
void Environment__GetValue_fn(Environment* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable, uObject** __retval)
{
    *__retval = __this->GetValue(variable);
}

// public Environment New(Outracks.Optional<Outracks.Simulator.Runtime.Environment> parent) :15
void Environment__New1_fn(::g::Outracks::Optional1<uStrong<Environment*> >* parent, Environment** __retval)
{
    *__retval = Environment::New1(*parent);
}

// public Environment(Outracks.Optional<Outracks.Simulator.Runtime.Environment> parent) [instance] :15
void Environment::ctor_(::g::Outracks::Optional1<uStrong<Environment*> > parent)
{
    _variableBindings = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[8/*Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.Variable, object>*/]));
    _parent().Value< ::g::Outracks::Optional1<uStrong<Environment*> > >() = parent;
}

// public void Bind(Outracks.Simulator.Bytecode.Variable variable, object value) [instance] :26
void Environment::Bind(::g::Outracks::Simulator::Bytecode::Variable* variable, uObject* value)
{
    uStackFrame __("Outracks.Simulator.Runtime.Environment", "Bind(Outracks.Simulator.Bytecode.Variable,object)");
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_variableBindings), variable, value);
}

// public void Bind(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter> parameters, object[] arguments) [instance] :20
void Environment::Bind1(::g::Outracks::Simulator::ImmutableList* parameters, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.Environment", "Bind(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter>,object[])");
    ::g::Outracks::Simulator::Bytecode::Parameter* ret4;

    for (int32_t i = 0; i < uPtr(parameters)->Count(); i++)
        Bind(uPtr((::g::Outracks::Simulator::ImmutableList__Get_fn(uPtr(parameters), uCRef<int32_t>(i), &ret4), ret4))->Name, uPtr(arguments)->Strong<uObject*>(i));
}

// public object GetValue(Outracks.Simulator.Bytecode.Variable variable) [instance] :31
uObject* Environment::GetValue(::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    uStackFrame __("Outracks.Simulator.Runtime.Environment", "GetValue(Outracks.Simulator.Bytecode.Variable)");
    ::g::Outracks::Optional1<uStrong<Environment*> > ind1;
    ::g::Outracks::Optional1<uStrong<Environment*> > ind2;
    bool ret5;
    uObject* value;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_variableBindings), variable, (void**)(&value), &ret5), ret5))
        return value;

    if ((ind1 = _parent().Value< ::g::Outracks::Optional1<uStrong<Environment*> > >(), (&ind1))->HasValue(::TYPES[9/*Outracks.Optional<Outracks.Simulator.Runtime.Environment>*/]))
        return uPtr((ind2 = _parent().Value< ::g::Outracks::Optional1<uStrong<Environment*> > >(), (&ind2))->Value(::TYPES[9/*Outracks.Optional<Outracks.Simulator.Runtime.Environment>*/]))->GetValue(variable);

    U_THROW(::g::Outracks::Simulator::Runtime::VariableNotBound::New4(variable));
}

// public Environment New(Outracks.Optional<Outracks.Simulator.Runtime.Environment> parent) [static] :15
Environment* Environment::New1(::g::Outracks::Optional1<uStrong<Environment*> > parent)
{
    Environment* obj3 = (Environment*)uNew(Environment_typeof());
    obj3->ctor_(parent);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/FileCache.cs
// --------------------------------------------------------------------------------------

// public sealed class FileCache :7
// {
// static generated FileCache() :7
static void FileCache__cctor__fn(uType* __type)
{
    FileCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[10/*Uno.Collections.Dictionary<string, Outracks.Simulator.Runtime.UxFileSource>*/]));
}

static void FileCache_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Outracks::Simulator::Runtime::UxFileSource_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[10/*Uno.Collections.Dictionary<string, Outracks.Simulator.Runtime.UxFileSource>*/], (uintptr_t)&FileCache::_cache_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("GetFileSource", NULL, (void*)FileCache__GetFileSource_fn, 0, true, ::g::Outracks::Simulator::Runtime::UxFileSource_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)FileCache__New1_fn, 0, true, type, 0),
        new uFunction("Update", NULL, (void*)FileCache__Update_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()));
}

uType* FileCache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FileCache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.FileCache", options);
    type->fp_build_ = FileCache_build;
    type->fp_ctor_ = (void*)FileCache__New1_fn;
    type->fp_cctor_ = FileCache__cctor__fn;
    return type;
}

// public generated FileCache() :7
void FileCache__ctor__fn(FileCache* __this)
{
    __this->ctor_();
}

// public static Outracks.Simulator.Runtime.UxFileSource GetFileSource(string path) :20
void FileCache__GetFileSource_fn(uString* path, ::g::Outracks::Simulator::Runtime::UxFileSource** __retval)
{
    *__retval = FileCache::GetFileSource(path);
}

// public generated FileCache New() :7
void FileCache__New1_fn(FileCache** __retval)
{
    *__retval = FileCache::New1();
}

// public static void Update(string path, byte[] bytes) :11
void FileCache__Update_fn(uString* path, uArray* bytes)
{
    FileCache::Update(path, bytes);
}

uSStrong< ::g::Uno::Collections::Dictionary*> FileCache::_cache_;

// public generated FileCache() [instance] :7
void FileCache::ctor_()
{
}

// public static Outracks.Simulator.Runtime.UxFileSource GetFileSource(string path) [static] :20
::g::Outracks::Simulator::Runtime::UxFileSource* FileCache::GetFileSource(uString* path)
{
    uStackFrame __("Outracks.Simulator.Runtime.FileCache", "GetFileSource(string)");
    FileCache_typeof()->Init();
    ::g::Outracks::Simulator::Runtime::UxFileSource* ret2;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(FileCache::_cache_), path, &ret2), ret2);
}

// public generated FileCache New() [static] :7
FileCache* FileCache::New1()
{
    FileCache* obj1 = (FileCache*)uNew(FileCache_typeof());
    obj1->ctor_();
    return obj1;
}

// public static void Update(string path, byte[] bytes) [static] :11
void FileCache::Update(uString* path, uArray* bytes)
{
    uStackFrame __("Outracks.Simulator.Runtime.FileCache", "Update(string,byte[])");
    FileCache_typeof()->Init();
    bool ret3;
    ::g::Outracks::Simulator::Runtime::UxFileSource* fs = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(FileCache::_cache_), path, (void**)(&fs), &ret3), ret3))
        uPtr(fs)->Update(bytes);
    else
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(FileCache::_cache_), path, ::g::Outracks::Simulator::Runtime::UxFileSource::New1(path, bytes));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/WeakDictionary.cs
// -------------------------------------------------------------------------------------------

// public sealed class HashableWeakReference :10
// {
static void HashableWeakReference_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof(), NULL), offsetof(HashableWeakReference, _reference), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)HashableWeakReference__New1_fn, 0, true, type, 1, ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof(), NULL)),
        new uFunction("TryGetTarget", NULL, (void*)HashableWeakReference__TryGetTarget_fn, 0, false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()->ByRef()));
}

uType* HashableWeakReference_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(HashableWeakReference);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.HashableWeakReference", options);
    type->fp_build_ = HashableWeakReference_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))HashableWeakReference__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))HashableWeakReference__GetHashCode_fn;
    return type;
}

// public HashableWeakReference(Uno.WeakReference<object> reference) :14
void HashableWeakReference__ctor__fn(HashableWeakReference* __this, ::g::Uno::WeakReference* reference)
{
    __this->ctor_(reference);
}

// public override sealed bool Equals(object that) :33
void HashableWeakReference__Equals_fn(HashableWeakReference* __this, uObject* that, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.HashableWeakReference", "Equals(object)");

    if (::g::Uno::Object::ReferenceEquals(__this, that))
        return *__retval = true, void();

    uObject* a = NULL;
    uObject* b = NULL;

    if (!uPtr(__this->_reference)->TryGetTarget((uObject**)(&a)))
        return *__retval = false, void();

    if (!uIs(that, __this->__type) || !uPtr(uPtr(uCast<HashableWeakReference*>(that, __this->__type))->_reference)->TryGetTarget((uObject**)(&b)))
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uPtr(a), b), void();
}

// public override sealed int GetHashCode() :24
void HashableWeakReference__GetHashCode_fn(HashableWeakReference* __this, int32_t* __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.HashableWeakReference", "GetHashCode()");
    uObject* obj;

    if (!uPtr(__this->_reference)->TryGetTarget((uObject**)(&obj)))
        return *__retval = 0, void();

    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(obj)), void();
}

// public HashableWeakReference New(Uno.WeakReference<object> reference) :14
void HashableWeakReference__New1_fn(::g::Uno::WeakReference* reference, HashableWeakReference** __retval)
{
    *__retval = HashableWeakReference::New1(reference);
}

// public bool TryGetTarget(object& obj) :19
void HashableWeakReference__TryGetTarget_fn(HashableWeakReference* __this, uObject** obj, bool* __retval)
{
    *__retval = __this->TryGetTarget(obj);
}

// public HashableWeakReference(Uno.WeakReference<object> reference) [instance] :14
void HashableWeakReference::ctor_(::g::Uno::WeakReference* reference)
{
    _reference = reference;
}

// public bool TryGetTarget(object& obj) [instance] :19
bool HashableWeakReference::TryGetTarget(uObject** obj)
{
    uStackFrame __("Outracks.Simulator.Runtime.HashableWeakReference", "TryGetTarget(object&)");
    return uPtr(_reference)->TryGetTarget((uObject**)obj);
}

// public HashableWeakReference New(Uno.WeakReference<object> reference) [static] :14
HashableWeakReference* HashableWeakReference::New1(::g::Uno::WeakReference* reference)
{
    HashableWeakReference* obj1 = (HashableWeakReference*)uNew(HashableWeakReference_typeof());
    obj1->ctor_(reference);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/IReflection.cs
// ----------------------------------------------------------------------------------------

// public abstract interface IReflection :44
// {
uInterfaceType* IReflection_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.Runtime.IReflection", 0, 0);
    type->Reflection.SetFunctions(12,
        new uFunction("AddEventHandler", NULL, NULL, offsetof(IReflection, fp_AddEventHandler), false, uVoid_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("CallDynamic", NULL, NULL, offsetof(IReflection, fp_CallDynamic), false, uObject_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("CallStatic", NULL, NULL, offsetof(IReflection, fp_CallStatic), false, uObject_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("CreateDelegate", NULL, NULL, offsetof(IReflection, fp_CreateDelegate), false, uObject_typeof(), 4, uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array(), ::g::Uno::String_typeof()),
        new uFunction("GetEnumValue", NULL, NULL, offsetof(IReflection, fp_GetEnumValue), false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetPropertyValue", NULL, NULL, offsetof(IReflection, fp_GetPropertyValue), false, uObject_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetStaticPropertyOrFieldValue", NULL, NULL, offsetof(IReflection, fp_GetStaticPropertyOrFieldValue), false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Instantiate", NULL, NULL, offsetof(IReflection, fp_Instantiate), false, uObject_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("IsSubtype", NULL, NULL, offsetof(IReflection, fp_IsSubtype), false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("IsType", NULL, NULL, offsetof(IReflection, fp_IsType), false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("RemoveEventHandler", NULL, NULL, offsetof(IReflection, fp_RemoveEventHandler), false, uVoid_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("SetPropertyValue", NULL, NULL, offsetof(IReflection, fp_SetPropertyValue), false, uVoid_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/VirtualMachine.cs
// -------------------------------------------------------------------------------------------

// internal sealed class LambdaClosure :315
// {
static void LambdaClosure_build(uType* type)
{
    ::TYPES[11] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), offsetof(LambdaClosure, _lambda), 0,
        ::g::Uno::Func2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Lambda_typeof(), ::TYPES[11/*object[]*/], uObject_typeof(), NULL), offsetof(LambdaClosure, _execute), 0);
}

uType* LambdaClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LambdaClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.LambdaClosure", options);
    type->fp_build_ = LambdaClosure_build;
    return type;
}

// public LambdaClosure(Outracks.Simulator.Bytecode.Lambda lambda, Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object> execute) :320
void LambdaClosure__ctor__fn(LambdaClosure* __this, ::g::Outracks::Simulator::Bytecode::Lambda* lambda, uDelegate* execute)
{
    __this->ctor_(lambda, execute);
}

// public void Action() :326
void LambdaClosure__Action_fn(LambdaClosure* __this)
{
    __this->Action();
}

// public void Action(object a1) :331
void LambdaClosure__Action1_fn(LambdaClosure* __this, uObject* a1)
{
    __this->Action1(a1);
}

// public void Action(object a1, object a2) :336
void LambdaClosure__Action2_fn(LambdaClosure* __this, uObject* a1, uObject* a2)
{
    __this->Action2(a1, a2);
}

// public void Action(object a1, object a2, object a3) :341
void LambdaClosure__Action3_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3)
{
    __this->Action3(a1, a2, a3);
}

// public void Action(object a1, object a2, object a3, object a4) :346
void LambdaClosure__Action4_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4)
{
    __this->Action4(a1, a2, a3, a4);
}

// public void Action(object a1, object a2, object a3, object a4, object a5) :351
void LambdaClosure__Action5_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5)
{
    __this->Action5(a1, a2, a3, a4, a5);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6) :356
void LambdaClosure__Action6_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6)
{
    __this->Action6(a1, a2, a3, a4, a5, a6);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7) :361
void LambdaClosure__Action7_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7)
{
    __this->Action7(a1, a2, a3, a4, a5, a6, a7);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8) :366
void LambdaClosure__Action8_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8)
{
    __this->Action8(a1, a2, a3, a4, a5, a6, a7, a8);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9) :371
void LambdaClosure__Action9_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9)
{
    __this->Action9(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10) :376
void LambdaClosure__Action10_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10)
{
    __this->Action10(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11) :381
void LambdaClosure__Action11_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11)
{
    __this->Action11(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12) :386
void LambdaClosure__Action12_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12)
{
    __this->Action12(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13) :391
void LambdaClosure__Action13_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13)
{
    __this->Action13(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14) :396
void LambdaClosure__Action14_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14)
{
    __this->Action14(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14, object a15) :401
void LambdaClosure__Action15_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject* a15)
{
    __this->Action15(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14, object a15, object a16) :406
void LambdaClosure__Action16_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject* a15, uObject* a16)
{
    __this->Action16(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
}

// public object Func() :411
void LambdaClosure__Func_fn(LambdaClosure* __this, uObject** __retval)
{
    *__retval = __this->Func();
}

// public object Func(object a1) :416
void LambdaClosure__Func1_fn(LambdaClosure* __this, uObject* a1, uObject** __retval)
{
    *__retval = __this->Func1(a1);
}

// public object Func(object a1, object a2) :421
void LambdaClosure__Func2_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject** __retval)
{
    *__retval = __this->Func2(a1, a2);
}

// public object Func(object a1, object a2, object a3) :426
void LambdaClosure__Func3_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject** __retval)
{
    *__retval = __this->Func3(a1, a2, a3);
}

// public object Func(object a1, object a2, object a3, object a4) :431
void LambdaClosure__Func4_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject** __retval)
{
    *__retval = __this->Func4(a1, a2, a3, a4);
}

// public object Func(object a1, object a2, object a3, object a4, object a5) :436
void LambdaClosure__Func5_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject** __retval)
{
    *__retval = __this->Func5(a1, a2, a3, a4, a5);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6) :441
void LambdaClosure__Func6_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject** __retval)
{
    *__retval = __this->Func6(a1, a2, a3, a4, a5, a6);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7) :446
void LambdaClosure__Func7_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject** __retval)
{
    *__retval = __this->Func7(a1, a2, a3, a4, a5, a6, a7);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8) :451
void LambdaClosure__Func8_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject** __retval)
{
    *__retval = __this->Func8(a1, a2, a3, a4, a5, a6, a7, a8);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9) :456
void LambdaClosure__Func9_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject** __retval)
{
    *__retval = __this->Func9(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10) :461
void LambdaClosure__Func10_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject** __retval)
{
    *__retval = __this->Func10(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11) :466
void LambdaClosure__Func11_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject** __retval)
{
    *__retval = __this->Func11(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12) :471
void LambdaClosure__Func12_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject** __retval)
{
    *__retval = __this->Func12(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13) :476
void LambdaClosure__Func13_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject** __retval)
{
    *__retval = __this->Func13(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14) :481
void LambdaClosure__Func14_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject** __retval)
{
    *__retval = __this->Func14(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14, object a15) :486
void LambdaClosure__Func15_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject* a15, uObject** __retval)
{
    *__retval = __this->Func15(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14, object a15, object a16) :491
void LambdaClosure__Func16_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject* a15, uObject* a16, uObject** __retval)
{
    *__retval = __this->Func16(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
}

// public LambdaClosure New(Outracks.Simulator.Bytecode.Lambda lambda, Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object> execute) :320
void LambdaClosure__New1_fn(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uDelegate* execute, LambdaClosure** __retval)
{
    *__retval = LambdaClosure::New1(lambda, execute);
}

// public LambdaClosure(Outracks.Simulator.Bytecode.Lambda lambda, Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object> execute) [instance] :320
void LambdaClosure::ctor_(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uDelegate* execute)
{
    _lambda = lambda;
    _execute = execute;
}

// public void Action() [instance] :326
void LambdaClosure::Action()
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action()");
    Func();
}

// public void Action(object a1) [instance] :331
void LambdaClosure::Action1(uObject* a1)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object)");
    Func1(a1);
}

// public void Action(object a1, object a2) [instance] :336
void LambdaClosure::Action2(uObject* a1, uObject* a2)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object)");
    Func2(a1, a2);
}

// public void Action(object a1, object a2, object a3) [instance] :341
void LambdaClosure::Action3(uObject* a1, uObject* a2, uObject* a3)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object)");
    Func3(a1, a2, a3);
}

// public void Action(object a1, object a2, object a3, object a4) [instance] :346
void LambdaClosure::Action4(uObject* a1, uObject* a2, uObject* a3, uObject* a4)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object)");
    Func4(a1, a2, a3, a4);
}

// public void Action(object a1, object a2, object a3, object a4, object a5) [instance] :351
void LambdaClosure::Action5(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object)");
    Func5(a1, a2, a3, a4, a5);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6) [instance] :356
void LambdaClosure::Action6(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object)");
    Func6(a1, a2, a3, a4, a5, a6);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7) [instance] :361
void LambdaClosure::Action7(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object)");
    Func7(a1, a2, a3, a4, a5, a6, a7);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8) [instance] :366
void LambdaClosure::Action8(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object)");
    Func8(a1, a2, a3, a4, a5, a6, a7, a8);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9) [instance] :371
void LambdaClosure::Action9(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object,object)");
    Func9(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10) [instance] :376
void LambdaClosure::Action10(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object,object,object)");
    Func10(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11) [instance] :381
void LambdaClosure::Action11(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object,object,object,object)");
    Func11(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12) [instance] :386
void LambdaClosure::Action12(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object,object,object,object,object)");
    Func12(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13) [instance] :391
void LambdaClosure::Action13(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object,object,object,object,object,object)");
    Func13(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14) [instance] :396
void LambdaClosure::Action14(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object,object,object,object,object,object,object)");
    Func14(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14, object a15) [instance] :401
void LambdaClosure::Action15(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject* a15)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object,object,object,object,object,object,object,object)");
    Func15(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14, object a15, object a16) [instance] :406
void LambdaClosure::Action16(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject* a15, uObject* a16)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object,object,object,object,object,object,object,object,object)");
    Func16(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
}

// public object Func() [instance] :411
uObject* LambdaClosure::Func()
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func()");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::New(::TYPES[11/*object[]*/], 0));
}

// public object Func(object a1) [instance] :416
uObject* LambdaClosure::Func1(uObject* a1)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 1, a1));
}

// public object Func(object a1, object a2) [instance] :421
uObject* LambdaClosure::Func2(uObject* a1, uObject* a2)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 2, a1, a2));
}

// public object Func(object a1, object a2, object a3) [instance] :426
uObject* LambdaClosure::Func3(uObject* a1, uObject* a2, uObject* a3)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 3, a1, a2, a3));
}

// public object Func(object a1, object a2, object a3, object a4) [instance] :431
uObject* LambdaClosure::Func4(uObject* a1, uObject* a2, uObject* a3, uObject* a4)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 4, a1, a2, a3, a4));
}

// public object Func(object a1, object a2, object a3, object a4, object a5) [instance] :436
uObject* LambdaClosure::Func5(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 5, a1, a2, a3, a4, a5));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6) [instance] :441
uObject* LambdaClosure::Func6(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 6, a1, a2, a3, a4, a5, a6));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7) [instance] :446
uObject* LambdaClosure::Func7(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 7, a1, a2, a3, a4, a5, a6, a7));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8) [instance] :451
uObject* LambdaClosure::Func8(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 8, a1, a2, a3, a4, a5, a6, a7, a8));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9) [instance] :456
uObject* LambdaClosure::Func9(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 9, a1, a2, a3, a4, a5, a6, a7, a8, a9));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10) [instance] :461
uObject* LambdaClosure::Func10(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 10, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11) [instance] :466
uObject* LambdaClosure::Func11(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 11, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12) [instance] :471
uObject* LambdaClosure::Func12(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 12, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13) [instance] :476
uObject* LambdaClosure::Func13(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 13, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14) [instance] :481
uObject* LambdaClosure::Func14(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 14, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14, object a15) [instance] :486
uObject* LambdaClosure::Func15(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject* a15)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 15, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14, object a15, object a16) [instance] :491
uObject* LambdaClosure::Func16(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject* a15, uObject* a16)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object,object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[11/*object[]*/], 16, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16));
}

// public LambdaClosure New(Outracks.Simulator.Bytecode.Lambda lambda, Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object> execute) [static] :320
LambdaClosure* LambdaClosure::New1(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uDelegate* execute)
{
    LambdaClosure* obj1 = (LambdaClosure*)uNew(LambdaClosure_typeof());
    obj1->ctor_(lambda, execute);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/IReflection.cs
// ----------------------------------------------------------------------------------------

// public sealed class MemberNotFound :7
// {
static void MemberNotFound_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Member '");
    ::STRINGS[1] = uString::Const("' could not be found on object of type '");
    ::STRINGS[2] = uString::Const("'");
    type->SetFields(4,
        ::g::Uno::String_typeof(), offsetof(MemberNotFound, Type), 0,
        ::g::Uno::String_typeof(), offsetof(MemberNotFound, Member), 0);
    type->Reflection.SetFields(2,
        new uField("Member", 5),
        new uField("Type", 4));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MemberNotFound__New4_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* MemberNotFound_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(MemberNotFound);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.Runtime.MemberNotFound", options);
    type->fp_build_ = MemberNotFound_build;
    return type;
}

// public MemberNotFound(string type, string member) :12
void MemberNotFound__ctor_3_fn(MemberNotFound* __this, uString* type, uString* member)
{
    __this->ctor_3(type, member);
}

// public MemberNotFound New(string type, string member) :12
void MemberNotFound__New4_fn(uString* type, uString* member, MemberNotFound** __retval)
{
    *__retval = MemberNotFound::New4(type, member);
}

// public MemberNotFound(string type, string member) [instance] :12
void MemberNotFound::ctor_3(uString* type, uString* member)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[0/*"Member '"*/], member), ::STRINGS[1/*"' could not...*/]), type), ::STRINGS[2/*"'"*/]));
    Type = type;
    Member = member;
}

// public MemberNotFound New(string type, string member) [static] :12
MemberNotFound* MemberNotFound::New4(uString* type, uString* member)
{
    MemberNotFound* obj1 = (MemberNotFound*)uNew(MemberNotFound_typeof());
    obj1->ctor_3(type, member);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/ObjectTagRegistry.cs
// ----------------------------------------------------------------------------------------------

// public static class ObjectTagRegistry :13
// {
// static generated ObjectTagRegistry() :13
static void ObjectTagRegistry__cctor__fn(uType* __type)
{
    ObjectTagRegistry::_tagToObjects_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[79/*Uno.Collections.Dictionary`2*/]->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), NULL)));
    ObjectTagRegistry::ObjectToTag_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[79/*Uno.Collections.Dictionary`2*/]->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), NULL)));
    ObjectTagRegistry::_eaches_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(ObjectTagRegistry__CurrentEach_typeof(), NULL)));
}

static void ObjectTagRegistry_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&ObjectTagRegistry::_visualId_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), NULL), (uintptr_t)&ObjectTagRegistry::_tagToObjects_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), NULL), (uintptr_t)&ObjectTagRegistry::ObjectToTag_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(ObjectTagRegistry__CurrentEach_typeof(), NULL), (uintptr_t)&ObjectTagRegistry::_eaches_, uFieldFlagsStatic,
        ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL), (uintptr_t)&ObjectTagRegistry::OnObjectTagRegistered1_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("ObjectToTag", 2));
    type->Reflection.SetFunctions(11,
        new uFunction("Clear", NULL, (void*)ObjectTagRegistry__Clear_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("DisposeAndUnregister", NULL, (void*)ObjectTagRegistry__DisposeAndUnregister_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Each", NULL, (void*)ObjectTagRegistry__Each_fn, 0, true, ::g::Uno::IDisposable_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL)),
        new uFunction("GetFirstObjectWithTag", NULL, (void*)ObjectTagRegistry__GetFirstObjectWithTag_fn, 0, true, uObject_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetObjectsWithTag", NULL, (void*)ObjectTagRegistry__GetObjectsWithTag_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(uObject_typeof(), NULL), 1, ::g::Uno::String_typeof()),
        new uFunction("GetTagHash", NULL, (void*)ObjectTagRegistry__GetTagHash_fn, 0, true, ::g::Uno::String_typeof(), 1, uObject_typeof()),
        new uFunction("add_OnObjectTagRegistered", NULL, (void*)ObjectTagRegistry__add_OnObjectTagRegistered_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL)),
        new uFunction("remove_OnObjectTagRegistered", NULL, (void*)ObjectTagRegistry__remove_OnObjectTagRegistered_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL)),
        new uFunction("RegisterObjectTag", NULL, (void*)ObjectTagRegistry__RegisterObjectTag_fn, 0, true, uObject_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("get_TagToObjects", NULL, (void*)ObjectTagRegistry__get_TagToObjects_fn, 0, true, ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), NULL), 0),
        new uFunction("TryExecuteOnObjectsWithTag", NULL, (void*)ObjectTagRegistry__TryExecuteOnObjectsWithTag_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL)));
}

uClassType* ObjectTagRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Runtime.ObjectTagRegistry", options);
    type->fp_build_ = ObjectTagRegistry_build;
    type->fp_cctor_ = ObjectTagRegistry__cctor__fn;
    return type;
}

// public static void Clear() :24
void ObjectTagRegistry__Clear_fn()
{
    ObjectTagRegistry::Clear();
}

// public static void DisposeAndUnregister(string tag) :50
void ObjectTagRegistry__DisposeAndUnregister_fn(uString* tag)
{
    ObjectTagRegistry::DisposeAndUnregister(tag);
}

// public static Uno.IDisposable Each(string tag, Uno.Func<object, object> func) :119
void ObjectTagRegistry__Each_fn(uString* tag, uDelegate* func, uObject** __retval)
{
    *__retval = ObjectTagRegistry::Each(tag, func);
}

// public static object GetFirstObjectWithTag(string tag) :85
void ObjectTagRegistry__GetFirstObjectWithTag_fn(uString* tag, uObject** __retval)
{
    *__retval = ObjectTagRegistry::GetFirstObjectWithTag(tag);
}

// public static Uno.Collections.IEnumerable<object> GetObjectsWithTag(string tag) :102
void ObjectTagRegistry__GetObjectsWithTag_fn(uString* tag, uObject** __retval)
{
    *__retval = ObjectTagRegistry::GetObjectsWithTag(tag);
}

// public static string GetTagHash(object obj) :112
void ObjectTagRegistry__GetTagHash_fn(uObject* obj, uString** __retval)
{
    *__retval = ObjectTagRegistry::GetTagHash(obj);
}

// public static generated void add_OnObjectTagRegistered(Uno.Action<object, int, string> value) :21
void ObjectTagRegistry__add_OnObjectTagRegistered_fn(uDelegate* value)
{
    ObjectTagRegistry::add_OnObjectTagRegistered(value);
}

// public static generated void remove_OnObjectTagRegistered(Uno.Action<object, int, string> value) :21
void ObjectTagRegistry__remove_OnObjectTagRegistered_fn(uDelegate* value)
{
    ObjectTagRegistry::remove_OnObjectTagRegistered(value);
}

// public static object RegisterObjectTag(object obj, string tagHash) :30
void ObjectTagRegistry__RegisterObjectTag_fn(uObject* obj, uString* tagHash, uObject** __retval)
{
    *__retval = ObjectTagRegistry::RegisterObjectTag(obj, tagHash);
}

// public static Uno.Collections.Dictionary<string, Uno.Collections.List<object>> get_TagToObjects() :18
void ObjectTagRegistry__get_TagToObjects_fn(::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = ObjectTagRegistry::TagToObjects();
}

// public static void TryExecuteOnObjectsWithTag(string tag, Uno.Action<object> action) :70
void ObjectTagRegistry__TryExecuteOnObjectsWithTag_fn(uString* tag, uDelegate* action)
{
    ObjectTagRegistry::TryExecuteOnObjectsWithTag(tag, action);
}

int32_t ObjectTagRegistry::_visualId_;
uSStrong< ::g::Uno::Collections::Dictionary*> ObjectTagRegistry::_tagToObjects_;
uSStrong< ::g::Uno::Collections::Dictionary*> ObjectTagRegistry::ObjectToTag_;
uSStrong< ::g::Uno::Collections::List*> ObjectTagRegistry::_eaches_;
uSStrong<uDelegate*> ObjectTagRegistry::OnObjectTagRegistered1_;

// public static void Clear() [static] :24
void ObjectTagRegistry::Clear()
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "Clear()");
    ObjectTagRegistry_typeof()->Init();
    uPtr(ObjectTagRegistry::TagToObjects())->Clear();
    uPtr(ObjectTagRegistry::ObjectToTag_)->Clear();
}

// public static void DisposeAndUnregister(string tag) [static] :50
void ObjectTagRegistry::DisposeAndUnregister(uString* tag)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "DisposeAndUnregister(string)");
    ObjectTagRegistry_typeof()->Init();
    bool ret7;
    uObject* ret8;
    uObject* objects = ObjectTagRegistry::GetObjectsWithTag(tag);
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(ObjectTagRegistry::_tagToObjects_), tag, &ret7);
    uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(objects), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(uObject_typeof(), NULL)));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
                {
                    uObject* obj = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(uObject_typeof(), NULL)), &ret8), ret8);

                    try
                    {
                        {
                            uObject* disposable = uAs<uObject*>(obj, ::TYPES[5/*Uno.IDisposable*/]);

                            if (disposable != NULL)
                                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(disposable), ::TYPES[5/*Uno.IDisposable*/]));
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        ::g::Uno::Exception* e = __t.Exception;
                        ::g::Uno::Diagnostics::Debug::Log3(uPtr(e)->ToString(), 0, uString::Const("/usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/ObjectTagRegistry.cs"), 65);
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[5/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_2;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[5/*Uno.IDisposable*/]));
        }
        __after_finally_2:;
    }
}

// public static Uno.IDisposable Each(string tag, Uno.Func<object, object> func) [static] :119
uObject* ObjectTagRegistry::Each(uString* tag, uDelegate* func)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "Each(string,Uno.Func<object, object>)");
    ObjectTagRegistry_typeof()->Init();
    ObjectTagRegistry__CurrentEach* collection5;
    uObject* ret9;
    collection5 = ObjectTagRegistry__CurrentEach::New1();
    uPtr(collection5)->_id = tag;
    uPtr(collection5)->_func = func;
    ObjectTagRegistry__CurrentEach* each = collection5;
    uObject* enum6 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(ObjectTagRegistry::GetObjectsWithTag(tag)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(uObject_typeof(), NULL)));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum6), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
                {
                    uObject* obj = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum6), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(uObject_typeof(), NULL)), &ret9), ret9);

                    try
                    {
                        {
                            uPtr(each)->OnObjectCreated(obj);
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        ::g::Uno::Exception* e = __t.Exception;
                        ::g::Uno::Diagnostics::Debug::Log3(uPtr(e)->ToString(), 0, uString::Const("/usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/ObjectTagRegistry.cs"), 135);
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum6), ::TYPES[5/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_3;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum6), ::TYPES[5/*Uno.IDisposable*/]));
        }
        __after_finally_3:;
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(ObjectTagRegistry::_eaches_), each);
    return (uObject*)each;
}

// public static object GetFirstObjectWithTag(string tag) [static] :85
uObject* ObjectTagRegistry::GetFirstObjectWithTag(uString* tag)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "GetFirstObjectWithTag(string)");
    ObjectTagRegistry_typeof()->Init();
    uObject* ret10;
    uObject* enum4 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(ObjectTagRegistry::GetObjectsWithTag(tag)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(uObject_typeof(), NULL)));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum4), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
                {
                    uObject* obj = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum4), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(uObject_typeof(), NULL)), &ret10), ret10);

                    try
                    {
                        {
                            uObject* __uno_retval = obj;
                            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum4), ::TYPES[5/*Uno.IDisposable*/]));
                            return __uno_retval;
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        ::g::Uno::Exception* e = __t.Exception;
                        ::g::Uno::Diagnostics::Debug::Log3(uPtr(e)->ToString(), 0, uString::Const("/usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/ObjectTagRegistry.cs"), 95);
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum4), ::TYPES[5/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_4;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum4), ::TYPES[5/*Uno.IDisposable*/]));
        }
        __after_finally_4:;
    }

    return NULL;
}

// public static Uno.Collections.IEnumerable<object> GetObjectsWithTag(string tag) [static] :102
uObject* ObjectTagRegistry::GetObjectsWithTag(uString* tag)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "GetObjectsWithTag(string)");
    ObjectTagRegistry_typeof()->Init();
    bool ret11;
    ::g::Uno::Collections::List* objects = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ObjectTagRegistry::_tagToObjects_), tag, (void**)(&objects), &ret11), ret11))
        return (uObject*)objects;

    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(uObject_typeof(), NULL), uArray::New(::TYPES[11/*object[]*/], 0)));
}

// public static string GetTagHash(object obj) [static] :112
uString* ObjectTagRegistry::GetTagHash(uObject* obj)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "GetTagHash(object)");
    ObjectTagRegistry_typeof()->Init();
    bool ret12;
    uString* tagHash = NULL;
    ::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ObjectTagRegistry::ObjectToTag_), obj, (void**)(&tagHash), &ret12);
    return tagHash;
}

// public static object RegisterObjectTag(object obj, string tagHash) [static] :30
uObject* ObjectTagRegistry::RegisterObjectTag(uObject* obj, uString* tagHash)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "RegisterObjectTag(object,string)");
    ObjectTagRegistry_typeof()->Init();
    bool ret13;
    ::g::Uno::Collections::List__Enumerator<uStrong<ObjectTagRegistry__CurrentEach*> > ret14;
    ::g::Uno::Collections::List* objects = NULL;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ObjectTagRegistry::_tagToObjects_), tagHash, (void**)(&objects), &ret13), ret13))
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(ObjectTagRegistry::_tagToObjects_), tagHash, objects = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL)));

    ::g::Uno::Collections::List__Add_fn(uPtr(objects), obj);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(ObjectTagRegistry::ObjectToTag_), obj, tagHash);

    if (::g::Uno::Delegate::op_Inequality(ObjectTagRegistry::OnObjectTagRegistered1_, NULL))
        uPtr(ObjectTagRegistry::OnObjectTagRegistered1_)->Invoke(3, obj, uCRef<int32_t>(++ObjectTagRegistry::_visualId_), tagHash);

    ::g::Uno::Collections::List__Enumerator<uStrong<ObjectTagRegistry__CurrentEach*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(ObjectTagRegistry::_eaches_), &ret14), ret14);

    {
        try
        {
            {
                while (enum1.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(ObjectTagRegistry__CurrentEach_typeof(), NULL)))
                {
                    ObjectTagRegistry__CurrentEach* each = enum1.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(ObjectTagRegistry__CurrentEach_typeof(), NULL));
                    uPtr(each)->OnObjectCreated1(tagHash, obj);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(ObjectTagRegistry__CurrentEach_typeof(), NULL));
            }
                        throw __t;
            goto __after_finally_5;
        }

        {
            enum1.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(ObjectTagRegistry__CurrentEach_typeof(), NULL));
        }
        __after_finally_5:;
    }

    return obj;
}

// public static void TryExecuteOnObjectsWithTag(string tag, Uno.Action<object> action) [static] :70
void ObjectTagRegistry::TryExecuteOnObjectsWithTag(uString* tag, uDelegate* action)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "TryExecuteOnObjectsWithTag(string,Uno.Action<object>)");
    ObjectTagRegistry_typeof()->Init();
    uObject* ret15;
    uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(ObjectTagRegistry::GetObjectsWithTag(tag)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(uObject_typeof(), NULL)));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
                {
                    uObject* obj = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(uObject_typeof(), NULL)), &ret15), ret15);

                    try
                    {
                        {
                            uPtr(action)->InvokeVoid(obj);
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        ::g::Uno::Exception* e = __t.Exception;
                        ::g::Uno::Diagnostics::Debug::Log3(uPtr(e)->ToString(), 0, uString::Const("/usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/ObjectTagRegistry.cs"), 80);
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum3), ::TYPES[5/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_6;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum3), ::TYPES[5/*Uno.IDisposable*/]));
        }
        __after_finally_6:;
    }
}

// public static Uno.Collections.Dictionary<string, Uno.Collections.List<object>> get_TagToObjects() [static] :18
::g::Uno::Collections::Dictionary* ObjectTagRegistry::TagToObjects()
{
    ObjectTagRegistry_typeof()->Init();
    return ObjectTagRegistry::_tagToObjects_;
}

// public static generated void add_OnObjectTagRegistered(Uno.Action<object, int, string> value) [static] :21
void ObjectTagRegistry::add_OnObjectTagRegistered(uDelegate* value)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "add_OnObjectTagRegistered(Uno.Action<object, int, string>)");
    ObjectTagRegistry_typeof()->Init();
    ObjectTagRegistry::OnObjectTagRegistered1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ObjectTagRegistry::OnObjectTagRegistered1_, value), ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL));
}

// public static generated void remove_OnObjectTagRegistered(Uno.Action<object, int, string> value) [static] :21
void ObjectTagRegistry::remove_OnObjectTagRegistered(uDelegate* value)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "remove_OnObjectTagRegistered(Uno.Action<object, int, string>)");
    ObjectTagRegistry_typeof()->Init();
    ObjectTagRegistry::OnObjectTagRegistered1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ObjectTagRegistry::OnObjectTagRegistered1_, value), ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/VirtualMachine.cs
// -------------------------------------------------------------------------------------------

// public sealed class ScopeClosure :8
// {
static void ScopeClosure_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Illegal parameter count");
    ::STRINGS[4] = uString::Const("Invalid number type ");
    ::TYPES[12] = ::g::Outracks::Simulator::Runtime::IReflection_typeof();
    ::TYPES[13] = ::g::Outracks::Simulator::Bytecode::Expression_typeof()->MakeMethod(0/*Match<object>*/, uObject_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadVariable_typeof(), uObject_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Literal_typeof(), uObject_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Lambda_typeof(), uObject_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::MethodGroup_typeof(), uObject_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::IsType_typeof(), uObject_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::LogicalOr_typeof(), uObject_typeof(), NULL);
    ::TYPES[20] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Instantiate_typeof(), uObject_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallLambda_typeof(), uObject_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallStaticMethod_typeof(), uObject_typeof(), NULL);
    ::TYPES[23] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallDynamicMethod_typeof(), uObject_typeof(), NULL);
    ::TYPES[24] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadStaticField_typeof(), uObject_typeof(), NULL);
    ::TYPES[25] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadProperty_typeof(), uObject_typeof(), NULL);
    ::TYPES[26] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::WriteProperty_typeof(), uObject_typeof(), NULL);
    ::TYPES[27] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::AddEventHandler_typeof(), uObject_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::RemoveEventHandler_typeof(), uObject_typeof(), NULL);
    ::TYPES[29] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), NULL);
    ::TYPES[30] = ::g::Uno::Func_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[31] = ::g::Uno::Func2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Lambda_typeof(), uObject_typeof()->Array(), uObject_typeof(), NULL);
    ::TYPES[32] = ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[33] = ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[34] = ::g::Uno::Func3_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[35] = ::g::Uno::Func4_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[36] = ::g::Uno::Func5_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[37] = ::g::Uno::Func6_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[38] = ::g::Uno::Func7_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[39] = ::g::Uno::Func8_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[40] = ::g::Uno::Func9_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[41] = ::g::Uno::Func10_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[42] = ::g::Uno::Func11_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[43] = ::g::Uno::Func12_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[44] = ::g::Uno::Func13_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[45] = ::g::Uno::Func14_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[46] = ::g::Uno::Func15_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[47] = ::g::Uno::Action_typeof();
    ::TYPES[48] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[49] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[50] = ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[51] = ::g::Uno::Action4_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[52] = ::g::Uno::Action5_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[53] = ::g::Uno::Action6_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[54] = ::g::Uno::Action7_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[55] = ::g::Uno::Action8_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[56] = ::g::Uno::Action9_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[57] = ::g::Uno::Action10_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[58] = ::g::Uno::Action11_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[59] = ::g::Uno::Action12_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[60] = ::g::Uno::Action13_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[61] = ::g::Uno::Action14_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[62] = ::g::Uno::Action15_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[63] = ::g::Outracks::Simulator::Bytecode::Literal_typeof()->MakeMethod(0/*Match<object>*/, uObject_typeof(), NULL);
    ::TYPES[64] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BooleanLiteral_typeof(), uObject_typeof(), NULL);
    ::TYPES[65] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::StringLiteral_typeof(), uObject_typeof(), NULL);
    ::TYPES[66] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::NumberLiteral_typeof(), uObject_typeof(), NULL);
    ::TYPES[67] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::EnumLiteral_typeof(), uObject_typeof(), NULL);
    ::TYPES[68] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BlobLiteral_typeof(), uObject_typeof(), NULL);
    ::TYPES[69] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Signature_typeof(), NULL);
    ::TYPES[70] = ::g::Uno::String_typeof()->Array();
    ::TYPES[11] = uObject_typeof()->Array();
    ::TYPES[71] = ::g::Uno::Func16_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[72] = ::g::Uno::Action16_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[9] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Runtime::Environment_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[73] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BindVariable_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[74] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL);
    ::TYPES[75] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL);
    ::TYPES[76] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[77] = ::g::Outracks::Simulator::Bytecode::Return_typeof();
    type->SetFields(0,
        ::g::Outracks::Simulator::Runtime::Environment_typeof(), offsetof(ScopeClosure, _scope), 0,
        ::TYPES[12/*Outracks.Simulator.Runtime.IReflection*/], offsetof(ScopeClosure, _reflection), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Execute", NULL, (void*)ScopeClosure__Execute1_fn, 0, false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), ::TYPES[11/*object[]*/]),
        new uFunction(".ctor", NULL, (void*)ScopeClosure__New1_fn, 0, true, type, 2, ::g::Outracks::Simulator::Runtime::Environment_typeof(), ::TYPES[12/*Outracks.Simulator.Runtime.IReflection*/]));
}

uType* ScopeClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ScopeClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.ScopeClosure", options);
    type->fp_build_ = ScopeClosure_build;
    return type;
}

// public ScopeClosure(Outracks.Simulator.Runtime.Environment scope, Outracks.Simulator.Runtime.IReflection reflection) :13
void ScopeClosure__ctor__fn(ScopeClosure* __this, ::g::Outracks::Simulator::Runtime::Environment* scope, uObject* reflection)
{
    __this->ctor_(scope, reflection);
}

// private object Evaluate(Outracks.Simulator.Bytecode.AddEventHandler e) :129
void ScopeClosure__Evaluate_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::AddEventHandler* e, uObject** __retval)
{
    *__retval = __this->Evaluate(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.BlobLiteral e) :284
void ScopeClosure__Evaluate1_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::BlobLiteral* e, uObject** __retval)
{
    *__retval = __this->Evaluate1(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.BooleanLiteral e) :286
void ScopeClosure__Evaluate2_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::BooleanLiteral* e, uObject** __retval)
{
    *__retval = __this->Evaluate2(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallDynamicMethod m) :108
void ScopeClosure__Evaluate3_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::CallDynamicMethod* m, uObject** __retval)
{
    *__retval = __this->Evaluate3(m);
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallLambda i) :98
void ScopeClosure__Evaluate4_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::CallLambda* i, uObject** __retval)
{
    *__retval = __this->Evaluate4(i);
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallStaticMethod m) :103
void ScopeClosure__Evaluate5_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::CallStaticMethod* m, uObject** __retval)
{
    *__retval = __this->Evaluate5(m);
}

// private object Evaluate(Outracks.Simulator.Bytecode.EnumLiteral i) :306
void ScopeClosure__Evaluate6_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::EnumLiteral* i, uObject** __retval)
{
    *__retval = __this->Evaluate6(i);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Expression expression) :55
void ScopeClosure__Evaluate7_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Expression* expression, uObject** __retval)
{
    *__retval = __this->Evaluate7(expression);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Instantiate i) :93
void ScopeClosure__Evaluate8_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Instantiate* i, uObject** __retval)
{
    *__retval = __this->Evaluate8(i);
}

// private object Evaluate(Outracks.Simulator.Bytecode.IsType t) :81
void ScopeClosure__Evaluate9_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::IsType* t, uObject** __retval)
{
    *__retval = __this->Evaluate9(t);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Lambda p) :228
void ScopeClosure__Evaluate10_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Lambda* p, uObject** __retval)
{
    *__retval = __this->Evaluate10(p);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Literal e) :279
void ScopeClosure__Evaluate11_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Literal* e, uObject** __retval)
{
    *__retval = __this->Evaluate11(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.LogicalOr o) :88
void ScopeClosure__Evaluate12_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::LogicalOr* o, uObject** __retval)
{
    *__retval = __this->Evaluate12(o);
}

// private object Evaluate(Outracks.Simulator.Bytecode.MethodGroup g) :65
void ScopeClosure__Evaluate13_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::MethodGroup* g, uObject** __retval)
{
    *__retval = __this->Evaluate13(g);
}

// private object Evaluate(Outracks.Simulator.Bytecode.NumberLiteral l) :290
void ScopeClosure__Evaluate14_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::NumberLiteral* l, uObject** __retval)
{
    *__retval = __this->Evaluate14(l);
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadProperty e) :118
void ScopeClosure__Evaluate15_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::ReadProperty* e, uObject** __retval)
{
    *__retval = __this->Evaluate15(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadStaticField e) :113
void ScopeClosure__Evaluate16_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::ReadStaticField* e, uObject** __retval)
{
    *__retval = __this->Evaluate16(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadVariable e) :60
void ScopeClosure__Evaluate17_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::ReadVariable* e, uObject** __retval)
{
    *__retval = __this->Evaluate17(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.RemoveEventHandler e) :135
void ScopeClosure__Evaluate18_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::RemoveEventHandler* e, uObject** __retval)
{
    *__retval = __this->Evaluate18(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.StringLiteral e) :288
void ScopeClosure__Evaluate19_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::StringLiteral* e, uObject** __retval)
{
    *__retval = __this->Evaluate19(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.WriteProperty p) :123
void ScopeClosure__Evaluate20_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::WriteProperty* p, uObject** __retval)
{
    *__retval = __this->Evaluate20(p);
}

// private object[] Evaluate(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :141
void ScopeClosure__Evaluate21_fn(ScopeClosure* __this, ::g::Outracks::Simulator::ImmutableList* arguments, uArray** __retval)
{
    *__retval = __this->Evaluate21(arguments);
}

// private object Execute(object lambda, object[] arguments) :153
void ScopeClosure__Execute_fn(ScopeClosure* __this, uObject* lambda, uArray* arguments, uObject** __retval)
{
    *__retval = __this->Execute(lambda, arguments);
}

// public object Execute(Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) :23
void ScopeClosure__Execute1_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments, uObject** __retval)
{
    *__retval = __this->Execute1(lambda, arguments);
}

// private object Execute(Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) :36
void ScopeClosure__Execute2_fn(ScopeClosure* __this, uObject* statements, uObject** __retval)
{
    *__retval = __this->Execute2(statements);
}

// public ScopeClosure New(Outracks.Simulator.Runtime.Environment scope, Outracks.Simulator.Runtime.IReflection reflection) :13
void ScopeClosure__New1_fn(::g::Outracks::Simulator::Runtime::Environment* scope, uObject* reflection, ScopeClosure** __retval)
{
    *__retval = ScopeClosure::New1(scope, reflection);
}

// public ScopeClosure(Outracks.Simulator.Runtime.Environment scope, Outracks.Simulator.Runtime.IReflection reflection) [instance] :13
void ScopeClosure::ctor_(::g::Outracks::Simulator::Runtime::Environment* scope, uObject* reflection)
{
    _reflection = reflection;
    _scope = scope;
}

// private object Evaluate(Outracks.Simulator.Bytecode.AddEventHandler e) [instance] :129
uObject* ScopeClosure::Evaluate(::g::Outracks::Simulator::Bytecode::AddEventHandler* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.AddEventHandler)");
    ::g::Outracks::Simulator::Runtime::IReflection::AddEventHandler(uInterface(uPtr(_reflection), ::TYPES[12/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(e)->Object), uPtr(uPtr(e)->Event)->Name, Evaluate7(uPtr(e)->Handler));
    return NULL;
}

// private object Evaluate(Outracks.Simulator.Bytecode.BlobLiteral e) [instance] :284
uObject* ScopeClosure::Evaluate1(::g::Outracks::Simulator::Bytecode::BlobLiteral* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.BlobLiteral)");
    return uPtr(e)->Bytes;
}

// private object Evaluate(Outracks.Simulator.Bytecode.BooleanLiteral e) [instance] :286
uObject* ScopeClosure::Evaluate2(::g::Outracks::Simulator::Bytecode::BooleanLiteral* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.BooleanLiteral)");
    return uBox(::g::Uno::Bool_typeof(), uPtr(e)->BooleanValue);
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallDynamicMethod m) [instance] :108
uObject* ScopeClosure::Evaluate3(::g::Outracks::Simulator::Bytecode::CallDynamicMethod* m)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.CallDynamicMethod)");
    return ::g::Outracks::Simulator::Runtime::IReflection::CallDynamic(uInterface(uPtr(_reflection), ::TYPES[12/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(m)->Object), uPtr(uPtr(m)->Method)->Name, Evaluate21(uPtr(m)->Arguments));
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallLambda i) [instance] :98
uObject* ScopeClosure::Evaluate4(::g::Outracks::Simulator::Bytecode::CallLambda* i)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.CallLambda)");
    return Execute(Evaluate7(uPtr(i)->Lambda), Evaluate21(uPtr(i)->Arguments));
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallStaticMethod m) [instance] :103
uObject* ScopeClosure::Evaluate5(::g::Outracks::Simulator::Bytecode::CallStaticMethod* m)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.CallStaticMethod)");
    return ::g::Outracks::Simulator::Runtime::IReflection::CallStatic(uInterface(uPtr(_reflection), ::TYPES[12/*Outracks.Simulator.Runtime.IReflection*/]), uPtr(uPtr(uPtr(m)->StaticMethod)->TypeName)->FullName(), uPtr(uPtr(uPtr(m)->StaticMethod)->MemberName)->Name, Evaluate21(uPtr(m)->Arguments));
}

// private object Evaluate(Outracks.Simulator.Bytecode.EnumLiteral i) [instance] :306
uObject* ScopeClosure::Evaluate6(::g::Outracks::Simulator::Bytecode::EnumLiteral* i)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.EnumLiteral)");
    return ::g::Outracks::Simulator::Runtime::IReflection::GetEnumValue(uInterface(uPtr(_reflection), ::TYPES[12/*Outracks.Simulator.Runtime.IReflection*/]), uPtr(uPtr(uPtr(i)->Value)->TypeName)->FullName(), uPtr(uPtr(uPtr(i)->Value)->MemberName)->Name);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Expression expression) [instance] :55
uObject* ScopeClosure::Evaluate7(::g::Outracks::Simulator::Bytecode::Expression* expression)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.Expression)");
    uObject* ret7;
    return (::g::Outracks::Simulator::Bytecode::Expression__Match3_fn(uPtr(expression), ::TYPES[13/*Outracks.Simulator.Bytecode.Expression.Match<object>*/], uDelegate::New(::TYPES[14/*Uno.Func<Outracks.Simulator.Bytecode.ReadVariable, object>*/], (void*)ScopeClosure__Evaluate17_fn, this), uDelegate::New(::TYPES[15/*Uno.Func<Outracks.Simulator.Bytecode.Literal, object>*/], (void*)ScopeClosure__Evaluate11_fn, this), uDelegate::New(::TYPES[16/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object>*/], (void*)ScopeClosure__Evaluate10_fn, this), uDelegate::New(::TYPES[17/*Uno.Func<Outracks.Simulator.Bytecode.MethodGroup, object>*/], (void*)ScopeClosure__Evaluate13_fn, this), uDelegate::New(::TYPES[18/*Uno.Func<Outracks.Simulator.Bytecode.IsType, object>*/], (void*)ScopeClosure__Evaluate9_fn, this), uDelegate::New(::TYPES[19/*Uno.Func<Outracks.Simulator.Bytecode.LogicalOr, object>*/], (void*)ScopeClosure__Evaluate12_fn, this), uDelegate::New(::TYPES[20/*Uno.Func<Outracks.Simulator.Bytecode.Instantiate, object>*/], (void*)ScopeClosure__Evaluate8_fn, this), uDelegate::New(::TYPES[21/*Uno.Func<Outracks.Simulator.Bytecode.CallLambda, object>*/], (void*)ScopeClosure__Evaluate4_fn, this), uDelegate::New(::TYPES[22/*Uno.Func<Outracks.Simulator.Bytecode.CallStaticMethod, object>*/], (void*)ScopeClosure__Evaluate5_fn, this), uDelegate::New(::TYPES[23/*Uno.Func<Outracks.Simulator.Bytecode.CallDynamicMethod, object>*/], (void*)ScopeClosure__Evaluate3_fn, this), uDelegate::New(::TYPES[24/*Uno.Func<Outracks.Simulator.Bytecode.ReadStaticField, object>*/], (void*)ScopeClosure__Evaluate16_fn, this), uDelegate::New(::TYPES[25/*Uno.Func<Outracks.Simulator.Bytecode.ReadProperty, object>*/], (void*)ScopeClosure__Evaluate15_fn, this), uDelegate::New(::TYPES[26/*Uno.Func<Outracks.Simulator.Bytecode.WriteProperty, object>*/], (void*)ScopeClosure__Evaluate20_fn, this), uDelegate::New(::TYPES[27/*Uno.Func<Outracks.Simulator.Bytecode.AddEventHandler, object>*/], (void*)ScopeClosure__Evaluate_fn, this), uDelegate::New(::TYPES[28/*Uno.Func<Outracks.Simulator.Bytecode.RemoveEventHandler, object>*/], (void*)ScopeClosure__Evaluate18_fn, this), &ret7), ret7);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Instantiate i) [instance] :93
uObject* ScopeClosure::Evaluate8(::g::Outracks::Simulator::Bytecode::Instantiate* i)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.Instantiate)");
    return ::g::Outracks::Simulator::Runtime::IReflection::Instantiate(uInterface(uPtr(_reflection), ::TYPES[12/*Outracks.Simulator.Runtime.IReflection*/]), uPtr(uPtr(i)->Type)->FullName(), Evaluate21(uPtr(i)->Arguments));
}

// private object Evaluate(Outracks.Simulator.Bytecode.IsType t) [instance] :81
uObject* ScopeClosure::Evaluate9(::g::Outracks::Simulator::Bytecode::IsType* t)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.IsType)");
    return uBox(::g::Uno::Bool_typeof(), uPtr(t)->IncludeSubtypes ? ::g::Outracks::Simulator::Runtime::IReflection::IsSubtype(uInterface(uPtr(_reflection), ::TYPES[12/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(t)->Object), uPtr(uPtr(t)->Type)->FullName()) : ::g::Outracks::Simulator::Runtime::IReflection::IsType(uInterface(uPtr(_reflection), ::TYPES[12/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(t)->Object), uPtr(uPtr(t)->Type)->FullName()));
}

// private object Evaluate(Outracks.Simulator.Bytecode.Lambda p) [instance] :228
uObject* ScopeClosure::Evaluate10(::g::Outracks::Simulator::Bytecode::Lambda* p)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.Lambda)");
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > ind5;

    if ((ind5 = uPtr(uPtr(p)->Signature)->ReturnType().Value< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > >(), (&ind5))->HasValue(::TYPES[29/*Outracks.Optional<Outracks.Simulator.Bytecode.TypeName>*/]))

        switch (uPtr(uPtr(uPtr(p)->Signature)->Parameters)->Count())
        {
            case 0:
                return uDelegate::New(::TYPES[30/*Uno.Func<object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 1:
                return uDelegate::New(::TYPES[32/*Uno.Func<object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func1_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 2:
                return uDelegate::New(::TYPES[33/*Uno.Func<object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func2_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 3:
                return uDelegate::New(::TYPES[34/*Uno.Func<object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func3_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 4:
                return uDelegate::New(::TYPES[35/*Uno.Func<object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func4_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 5:
                return uDelegate::New(::TYPES[36/*Uno.Func<object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func5_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 6:
                return uDelegate::New(::TYPES[37/*Uno.Func<object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func6_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 7:
                return uDelegate::New(::TYPES[38/*Uno.Func<object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func7_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 8:
                return uDelegate::New(::TYPES[39/*Uno.Func<object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func8_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 9:
                return uDelegate::New(::TYPES[40/*Uno.Func<object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func9_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 10:
                return uDelegate::New(::TYPES[41/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func10_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 11:
                return uDelegate::New(::TYPES[42/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func11_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 12:
                return uDelegate::New(::TYPES[43/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func12_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 13:
                return uDelegate::New(::TYPES[44/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func13_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 14:
                return uDelegate::New(::TYPES[45/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func14_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 15:
                return uDelegate::New(::TYPES[46/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func15_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
        }
    else

        switch (uPtr(uPtr(uPtr(p)->Signature)->Parameters)->Count())
        {
            case 0:
                return uDelegate::New(::TYPES[47/*Uno.Action*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 1:
                return uDelegate::New(::TYPES[48/*Uno.Action<object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action1_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 2:
                return uDelegate::New(::TYPES[49/*Uno.Action<object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action2_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 3:
                return uDelegate::New(::TYPES[50/*Uno.Action<object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action3_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 4:
                return uDelegate::New(::TYPES[51/*Uno.Action<object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action4_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 5:
                return uDelegate::New(::TYPES[52/*Uno.Action<object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action5_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 6:
                return uDelegate::New(::TYPES[53/*Uno.Action<object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action6_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 7:
                return uDelegate::New(::TYPES[54/*Uno.Action<object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action7_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 8:
                return uDelegate::New(::TYPES[55/*Uno.Action<object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action8_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 9:
                return uDelegate::New(::TYPES[56/*Uno.Action<object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action9_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 10:
                return uDelegate::New(::TYPES[57/*Uno.Action<object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action10_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 11:
                return uDelegate::New(::TYPES[58/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action11_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 12:
                return uDelegate::New(::TYPES[59/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action12_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 13:
                return uDelegate::New(::TYPES[60/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action13_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 14:
                return uDelegate::New(::TYPES[61/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action14_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 15:
                return uDelegate::New(::TYPES[62/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action15_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
        }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Illegal par...*/]));
}

// private object Evaluate(Outracks.Simulator.Bytecode.Literal e) [instance] :279
uObject* ScopeClosure::Evaluate11(::g::Outracks::Simulator::Bytecode::Literal* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.Literal)");
    uObject* ret8;
    return (::g::Outracks::Simulator::Bytecode::Literal__Match5_fn(uPtr(e), ::TYPES[63/*Outracks.Simulator.Bytecode.Literal.Match<object>*/], uDelegate::New(::TYPES[64/*Uno.Func<Outracks.Simulator.Bytecode.BooleanLiteral, object>*/], (void*)ScopeClosure__Evaluate2_fn, this), uDelegate::New(::TYPES[65/*Uno.Func<Outracks.Simulator.Bytecode.StringLiteral, object>*/], (void*)ScopeClosure__Evaluate19_fn, this), uDelegate::New(::TYPES[66/*Uno.Func<Outracks.Simulator.Bytecode.NumberLiteral, object>*/], (void*)ScopeClosure__Evaluate14_fn, this), uDelegate::New(::TYPES[67/*Uno.Func<Outracks.Simulator.Bytecode.EnumLiteral, object>*/], (void*)ScopeClosure__Evaluate6_fn, this), uDelegate::New(::TYPES[68/*Uno.Func<Outracks.Simulator.Bytecode.BlobLiteral, object>*/], (void*)ScopeClosure__Evaluate1_fn, this), &ret8), ret8);
}

// private object Evaluate(Outracks.Simulator.Bytecode.LogicalOr o) [instance] :88
uObject* ScopeClosure::Evaluate12(::g::Outracks::Simulator::Bytecode::LogicalOr* o)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.LogicalOr)");
    return uBox(::g::Uno::Bool_typeof(), uUnbox<bool>(::g::Uno::Bool_typeof(), Evaluate7(uPtr(o)->Left)) || uUnbox<bool>(::g::Uno::Bool_typeof(), Evaluate7(uPtr(o)->Right)));
}

// private object Evaluate(Outracks.Simulator.Bytecode.MethodGroup g) [instance] :65
uObject* ScopeClosure::Evaluate13(::g::Outracks::Simulator::Bytecode::MethodGroup* g)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.MethodGroup)");
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > ind3;
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > ind4;
    ::g::Outracks::Simulator::Bytecode::Parameter* ret9;
    uArray* parameters = NULL;

    if ((ind3 = uPtr(g)->MethodSignature().Value< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > >(), (&ind3))->HasValue(::TYPES[69/*Outracks.Optional<Outracks.Simulator.Bytecode.Signature>*/]))
    {
        ::g::Outracks::Simulator::ImmutableList* sigParams = uPtr((ind4 = uPtr(g)->MethodSignature().Value< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > >(), (&ind4))->Value(::TYPES[69/*Outracks.Optional<Outracks.Simulator.Bytecode.Signature>*/]))->Parameters;
        parameters = uArray::New(::TYPES[70/*string[]*/], uPtr(sigParams)->Count());

        for (int32_t i = 0; i < sigParams->Count(); i++)
            uPtr(parameters)->Strong<uString*>(i) = uPtr(uPtr((::g::Outracks::Simulator::ImmutableList__get_Item_fn(uPtr(sigParams), uCRef<int32_t>(i), &ret9), ret9))->Type)->FullName();
    }

    return ::g::Outracks::Simulator::Runtime::IReflection::CreateDelegate(uInterface(uPtr(_reflection), ::TYPES[12/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(g)->Object), uPtr(uPtr(g)->MethodName)->Name, parameters, uPtr(uPtr(g)->DelegateType)->FullName());
}

// private object Evaluate(Outracks.Simulator.Bytecode.NumberLiteral l) [instance] :290
uObject* ScopeClosure::Evaluate14(::g::Outracks::Simulator::Bytecode::NumberLiteral* l)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.NumberLiteral)");

    switch (uPtr(l)->NumberType)
    {
        case 0:
            return uBox(::g::Uno::Double_typeof(), uPtr(l)->DoubleValue);
        case 1:
            return uBox(::g::Uno::Float_typeof(), (float)uPtr(l)->DoubleValue);
        case 2:
            return uBox<int32_t>(::g::Uno::Int_typeof(), (int32_t)uPtr(l)->DoubleValue);
        case 3:
            return uBox<uint32_t>(::g::Uno::UInt_typeof(), (uint32_t)uPtr(l)->DoubleValue);
        case 4:
            return uBox<int16_t>(::g::Uno::Short_typeof(), (int16_t)uPtr(l)->DoubleValue);
        case 5:
            return uBox<uint16_t>(::g::Uno::UShort_typeof(), (uint16_t)uPtr(l)->DoubleValue);
        case 6:
            return uBox<int8_t>(::g::Uno::SByte_typeof(), (int8_t)uPtr(l)->DoubleValue);
        case 7:
            return uBox<uint8_t>(::g::Uno::Byte_typeof(), (uint8_t)uPtr(l)->DoubleValue);
    }

    U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[4/*"Invalid num...*/], uBox<int32_t>(::g::Outracks::Simulator::Bytecode::NumberType_typeof(), uPtr(l)->NumberType))));
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadProperty e) [instance] :118
uObject* ScopeClosure::Evaluate15(::g::Outracks::Simulator::Bytecode::ReadProperty* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.ReadProperty)");
    return ::g::Outracks::Simulator::Runtime::IReflection::GetPropertyValue(uInterface(uPtr(_reflection), ::TYPES[12/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(e)->Object), uPtr(uPtr(e)->Property)->Name);
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadStaticField e) [instance] :113
uObject* ScopeClosure::Evaluate16(::g::Outracks::Simulator::Bytecode::ReadStaticField* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.ReadStaticField)");
    return ::g::Outracks::Simulator::Runtime::IReflection::GetStaticPropertyOrFieldValue(uInterface(uPtr(_reflection), ::TYPES[12/*Outracks.Simulator.Runtime.IReflection*/]), uPtr(uPtr(uPtr(e)->Field)->TypeName)->FullName(), uPtr(uPtr(uPtr(e)->Field)->MemberName)->Name);
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadVariable e) [instance] :60
uObject* ScopeClosure::Evaluate17(::g::Outracks::Simulator::Bytecode::ReadVariable* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.ReadVariable)");
    return uPtr(_scope)->GetValue(uPtr(e)->Variable);
}

// private object Evaluate(Outracks.Simulator.Bytecode.RemoveEventHandler e) [instance] :135
uObject* ScopeClosure::Evaluate18(::g::Outracks::Simulator::Bytecode::RemoveEventHandler* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.RemoveEventHandler)");
    ::g::Outracks::Simulator::Runtime::IReflection::RemoveEventHandler(uInterface(uPtr(_reflection), ::TYPES[12/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(e)->Object), uPtr(uPtr(e)->Event)->Name, Evaluate7(uPtr(e)->Handler));
    return NULL;
}

// private object Evaluate(Outracks.Simulator.Bytecode.StringLiteral e) [instance] :288
uObject* ScopeClosure::Evaluate19(::g::Outracks::Simulator::Bytecode::StringLiteral* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.StringLiteral)");
    return uPtr(e)->StringValue;
}

// private object Evaluate(Outracks.Simulator.Bytecode.WriteProperty p) [instance] :123
uObject* ScopeClosure::Evaluate20(::g::Outracks::Simulator::Bytecode::WriteProperty* p)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.WriteProperty)");
    ::g::Outracks::Simulator::Runtime::IReflection::SetPropertyValue(uInterface(uPtr(_reflection), ::TYPES[12/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(p)->Object), uPtr(uPtr(p)->Property)->Name, Evaluate7(uPtr(p)->Value));
    return NULL;
}

// private object[] Evaluate(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [instance] :141
uArray* ScopeClosure::Evaluate21(::g::Outracks::Simulator::ImmutableList* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression>)");
    ::g::Outracks::Simulator::Bytecode::Expression* ret10;
    uArray* objects = uArray::New(::TYPES[11/*object[]*/], uPtr(arguments)->Count());

    for (int32_t i = 0; i < arguments->Count(); i++)
        uPtr(objects)->Strong<uObject*>(i) = Evaluate7((::g::Outracks::Simulator::ImmutableList__get_Item_fn(uPtr(arguments), uCRef<int32_t>(i), &ret10), ret10));

    return objects;
}

// private object Execute(object lambda, object[] arguments) [instance] :153
uObject* ScopeClosure::Execute(uObject* lambda, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Execute(object,object[])");
    uDelegate* f0 = uAs<uDelegate*>(lambda, ::TYPES[30/*Uno.Func<object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f0, NULL))
        return uPtr(f0)->Invoke();

    uDelegate* f1 = uAs<uDelegate*>(lambda, ::TYPES[32/*Uno.Func<object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f1, NULL))
        return uPtr(f1)->Invoke(1, (uObject*)uPtr(arguments)->Strong<uObject*>(0));

    uDelegate* f2 = uAs<uDelegate*>(lambda, ::TYPES[33/*Uno.Func<object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f2, NULL))
        return uPtr(f2)->Invoke(2, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1));

    uDelegate* f3 = uAs<uDelegate*>(lambda, ::TYPES[34/*Uno.Func<object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f3, NULL))
        return uPtr(f3)->Invoke(3, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2));

    uDelegate* f4 = uAs<uDelegate*>(lambda, ::TYPES[35/*Uno.Func<object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f4, NULL))
        return uPtr(f4)->Invoke(4, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3));

    uDelegate* f5 = uAs<uDelegate*>(lambda, ::TYPES[36/*Uno.Func<object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f5, NULL))
        return uPtr(f5)->Invoke(5, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4));

    uDelegate* f6 = uAs<uDelegate*>(lambda, ::TYPES[37/*Uno.Func<object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f6, NULL))
        return uPtr(f6)->Invoke(6, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5));

    uDelegate* f7 = uAs<uDelegate*>(lambda, ::TYPES[38/*Uno.Func<object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f7, NULL))
        return uPtr(f7)->Invoke(7, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6));

    uDelegate* f8 = uAs<uDelegate*>(lambda, ::TYPES[39/*Uno.Func<object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f8, NULL))
        return uPtr(f8)->Invoke(8, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7));

    uDelegate* f9 = uAs<uDelegate*>(lambda, ::TYPES[40/*Uno.Func<object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f9, NULL))
        return uPtr(f9)->Invoke(9, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8));

    uDelegate* f10 = uAs<uDelegate*>(lambda, ::TYPES[41/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f10, NULL))
        return uPtr(f10)->Invoke(10, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9));

    uDelegate* f11 = uAs<uDelegate*>(lambda, ::TYPES[42/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f11, NULL))
        return uPtr(f11)->Invoke(11, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10));

    uDelegate* f12 = uAs<uDelegate*>(lambda, ::TYPES[43/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f12, NULL))
        return uPtr(f12)->Invoke(12, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11));

    uDelegate* f13 = uAs<uDelegate*>(lambda, ::TYPES[44/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f13, NULL))
        return uPtr(f13)->Invoke(13, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11), (uObject*)uPtr(arguments)->Strong<uObject*>(12));

    uDelegate* f14 = uAs<uDelegate*>(lambda, ::TYPES[45/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f14, NULL))
        return uPtr(f14)->Invoke(14, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11), (uObject*)uPtr(arguments)->Strong<uObject*>(12), (uObject*)uPtr(arguments)->Strong<uObject*>(13));

    uDelegate* f15 = uAs<uDelegate*>(lambda, ::TYPES[46/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f15, NULL))
        return uPtr(f15)->Invoke(15, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11), (uObject*)uPtr(arguments)->Strong<uObject*>(12), (uObject*)uPtr(arguments)->Strong<uObject*>(13), (uObject*)uPtr(arguments)->Strong<uObject*>(14));

    uDelegate* f16 = uAs<uDelegate*>(lambda, ::TYPES[71/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f16, NULL))
        return uPtr(f16)->Invoke(16, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11), (uObject*)uPtr(arguments)->Strong<uObject*>(12), (uObject*)uPtr(arguments)->Strong<uObject*>(13), (uObject*)uPtr(arguments)->Strong<uObject*>(14), (uObject*)uPtr(arguments)->Strong<uObject*>(15));

    uDelegate* a0 = uAs<uDelegate*>(lambda, ::TYPES[47/*Uno.Action*/]);

    if (::g::Uno::Delegate::op_Inequality(a0, NULL))
        uPtr(a0)->InvokeVoid();

    uDelegate* a1 = uAs<uDelegate*>(lambda, ::TYPES[48/*Uno.Action<object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a1, NULL))
        uPtr(a1)->InvokeVoid(uPtr(arguments)->Strong<uObject*>(0));

    uDelegate* a2 = uAs<uDelegate*>(lambda, ::TYPES[49/*Uno.Action<object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a2, NULL))
        uPtr(a2)->Invoke(2, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1));

    uDelegate* a3 = uAs<uDelegate*>(lambda, ::TYPES[50/*Uno.Action<object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a3, NULL))
        uPtr(a3)->Invoke(3, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2));

    uDelegate* a4 = uAs<uDelegate*>(lambda, ::TYPES[51/*Uno.Action<object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a4, NULL))
        uPtr(a4)->Invoke(4, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3));

    uDelegate* a5 = uAs<uDelegate*>(lambda, ::TYPES[52/*Uno.Action<object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a5, NULL))
        uPtr(a5)->Invoke(5, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4));

    uDelegate* a6 = uAs<uDelegate*>(lambda, ::TYPES[53/*Uno.Action<object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a6, NULL))
        uPtr(a6)->Invoke(6, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5));

    uDelegate* a7 = uAs<uDelegate*>(lambda, ::TYPES[54/*Uno.Action<object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a7, NULL))
        uPtr(a7)->Invoke(7, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6));

    uDelegate* a8 = uAs<uDelegate*>(lambda, ::TYPES[55/*Uno.Action<object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a8, NULL))
        uPtr(a8)->Invoke(8, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7));

    uDelegate* a9 = uAs<uDelegate*>(lambda, ::TYPES[56/*Uno.Action<object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a9, NULL))
        uPtr(a9)->Invoke(9, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8));

    uDelegate* a10 = uAs<uDelegate*>(lambda, ::TYPES[57/*Uno.Action<object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a10, NULL))
        uPtr(a10)->Invoke(10, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9));

    uDelegate* a11 = uAs<uDelegate*>(lambda, ::TYPES[58/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a11, NULL))
        uPtr(a11)->Invoke(11, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10));

    uDelegate* a12 = uAs<uDelegate*>(lambda, ::TYPES[59/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a12, NULL))
        uPtr(a12)->Invoke(12, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11));

    uDelegate* a13 = uAs<uDelegate*>(lambda, ::TYPES[60/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a13, NULL))
        uPtr(a13)->Invoke(13, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11), (uObject*)uPtr(arguments)->Strong<uObject*>(12));

    uDelegate* a14 = uAs<uDelegate*>(lambda, ::TYPES[61/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a14, NULL))
        uPtr(a14)->Invoke(14, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11), (uObject*)uPtr(arguments)->Strong<uObject*>(12), (uObject*)uPtr(arguments)->Strong<uObject*>(13));

    uDelegate* a15 = uAs<uDelegate*>(lambda, ::TYPES[62/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a15, NULL))
        uPtr(a15)->Invoke(15, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11), (uObject*)uPtr(arguments)->Strong<uObject*>(12), (uObject*)uPtr(arguments)->Strong<uObject*>(13), (uObject*)uPtr(arguments)->Strong<uObject*>(14));

    uDelegate* a16 = uAs<uDelegate*>(lambda, ::TYPES[72/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a16, NULL))
        uPtr(a16)->Invoke(16, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11), (uObject*)uPtr(arguments)->Strong<uObject*>(12), (uObject*)uPtr(arguments)->Strong<uObject*>(13), (uObject*)uPtr(arguments)->Strong<uObject*>(14), (uObject*)uPtr(arguments)->Strong<uObject*>(15));

    return NULL;
}

// public object Execute(Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) [instance] :23
uObject* ScopeClosure::Execute1(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Execute(Outracks.Simulator.Bytecode.Lambda,object[])");
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Runtime::Environment*> > ret11;
    ::g::Outracks::Simulator::Bytecode::BindVariable* ret12;
    ::g::Outracks::Simulator::Runtime::Environment* bodyEnv = ::g::Outracks::Simulator::Runtime::Environment::New1((::g::Outracks::Optional1__op_Implicit2_fn(::TYPES[9/*Outracks.Optional<Outracks.Simulator.Runtime.Environment>*/], _scope, &ret11), ret11));
    ScopeClosure* bodyClosure = ScopeClosure::New1(bodyEnv, _reflection);
    bodyEnv->Bind1(uPtr(uPtr(lambda)->Signature)->Parameters, arguments);
    uObject* enum1 = (uObject*)uPtr(uPtr(lambda)->LocalVariables)->GetEnumerator();

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Outracks::Simulator::Bytecode::BindVariable* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[73/*Uno.Collections.IEnumerator<Outracks.Simulator.Bytecode.BindVariable>*/]), &ret12), ret12);
                    uPtr(bodyEnv)->Bind(uPtr(b)->Variable, uPtr(bodyClosure)->Evaluate7(uPtr(b)->Expression));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[5/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_7;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[5/*Uno.IDisposable*/]));
        }
        __after_finally_7:;
    }

    return bodyClosure->Execute2((uObject*)lambda->Statements);
}

// private object Execute(Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) [instance] :36
uObject* ScopeClosure::Execute2(uObject* statements)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Execute(Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement>)");
    ::g::Outracks::Simulator::Bytecode::Statement* ret13;
    uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(statements), ::TYPES[74/*Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Outracks::Simulator::Bytecode::Statement* statement = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[75/*Uno.Collections.IEnumerator<Outracks.Simulator.Bytecode.Statement>*/]), &ret13), ret13);
                    ::g::Outracks::Simulator::Bytecode::Expression* e = uAs< ::g::Outracks::Simulator::Bytecode::Expression*>(statement, ::TYPES[76/*Outracks.Simulator.Bytecode.Expression*/]);

                    if (e != NULL)
                        Evaluate7(e);

                    ::g::Outracks::Simulator::Bytecode::Return* r = uAs< ::g::Outracks::Simulator::Bytecode::Return*>(statement, ::TYPES[77/*Outracks.Simulator.Bytecode.Return*/]);

                    if (r != NULL)
                    {
                        uObject* __uno_retval = Evaluate7(uPtr(r)->Value);
                        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[5/*Uno.IDisposable*/]));
                        return __uno_retval;
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[5/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_8;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[5/*Uno.IDisposable*/]));
        }
        __after_finally_8:;
    }

    return NULL;
}

// public ScopeClosure New(Outracks.Simulator.Runtime.Environment scope, Outracks.Simulator.Runtime.IReflection reflection) [static] :13
ScopeClosure* ScopeClosure::New1(::g::Outracks::Simulator::Runtime::Environment* scope, uObject* reflection)
{
    ScopeClosure* obj6 = (ScopeClosure*)uNew(ScopeClosure_typeof());
    obj6->ctor_(scope, reflection);
    return obj6;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/IReflection.cs
// ----------------------------------------------------------------------------------------

// public sealed class TypeNotFound :20
// {
static void TypeNotFound_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Type '");
    ::STRINGS[6] = uString::Const("' could not be found (recompile required?)");
    type->SetFields(4,
        ::g::Uno::String_typeof(), offsetof(TypeNotFound, Type), 0);
    type->Reflection.SetFields(1,
        new uField("Type", 4));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TypeNotFound__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* TypeNotFound_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(TypeNotFound);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.Runtime.TypeNotFound", options);
    type->fp_build_ = TypeNotFound_build;
    return type;
}

// public TypeNotFound(string type) :24
void TypeNotFound__ctor_3_fn(TypeNotFound* __this, uString* type)
{
    __this->ctor_3(type);
}

// public TypeNotFound New(string type) :24
void TypeNotFound__New4_fn(uString* type, TypeNotFound** __retval)
{
    *__retval = TypeNotFound::New4(type);
}

// public TypeNotFound(string type) [instance] :24
void TypeNotFound::ctor_3(uString* type)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[5/*"Type '"*/], type), ::STRINGS[6/*"' could not...*/]));
    Type = type;
}

// public TypeNotFound New(string type) [static] :24
TypeNotFound* TypeNotFound::New4(uString* type)
{
    TypeNotFound* obj1 = (TypeNotFound*)uNew(TypeNotFound_typeof());
    obj1->ctor_3(type);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/IReflection.cs
// ----------------------------------------------------------------------------------------

// public sealed class UnambiguousMethodNotFound :31
// {
static void UnambiguousMethodNotFound_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Call to '");
    ::STRINGS[8] = uString::Const("' method is ambigious on object of type '");
    ::STRINGS[2] = uString::Const("'");
    type->SetFields(4,
        ::g::Uno::String_typeof(), offsetof(UnambiguousMethodNotFound, Type), 0,
        ::g::Uno::String_typeof(), offsetof(UnambiguousMethodNotFound, Member), 0);
    type->Reflection.SetFields(2,
        new uField("Member", 5),
        new uField("Type", 4));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UnambiguousMethodNotFound__New4_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* UnambiguousMethodNotFound_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(UnambiguousMethodNotFound);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.Runtime.UnambiguousMethodNotFound", options);
    type->fp_build_ = UnambiguousMethodNotFound_build;
    return type;
}

// public UnambiguousMethodNotFound(string type, string member) :36
void UnambiguousMethodNotFound__ctor_3_fn(UnambiguousMethodNotFound* __this, uString* type, uString* member)
{
    __this->ctor_3(type, member);
}

// public UnambiguousMethodNotFound New(string type, string member) :36
void UnambiguousMethodNotFound__New4_fn(uString* type, uString* member, UnambiguousMethodNotFound** __retval)
{
    *__retval = UnambiguousMethodNotFound::New4(type, member);
}

// public UnambiguousMethodNotFound(string type, string member) [instance] :36
void UnambiguousMethodNotFound::ctor_3(uString* type, uString* member)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[7/*"Call to '"*/], member), ::STRINGS[8/*"' method is...*/]), type), ::STRINGS[2/*"'"*/]));
    Type = type;
    Member = member;
}

// public UnambiguousMethodNotFound New(string type, string member) [static] :36
UnambiguousMethodNotFound* UnambiguousMethodNotFound::New4(uString* type, uString* member)
{
    UnambiguousMethodNotFound* obj1 = (UnambiguousMethodNotFound*)uNew(UnambiguousMethodNotFound_typeof());
    obj1->ctor_3(type, member);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/UxFileSource.cs
// -----------------------------------------------------------------------------------------

// public sealed class UxFileSource :8
// {
static void UxFileSource_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::Byte_typeof()->Array(), offsetof(UxFileSource, _bytes), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)UxFileSource__New1_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()),
        new uFunction("Update", NULL, (void*)UxFileSource__Update_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte_typeof()->Array()));
}

::g::Uno::UX::FileSource_type* UxFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UxFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Outracks.Simulator.Runtime.UxFileSource", options);
    type->fp_build_ = UxFileSource_build;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))UxFileSource__OpenRead_fn;
    type->fp_ReadAllBytes = (void(*)(::g::Uno::UX::FileSource*, uArray**))UxFileSource__ReadAllBytes_fn;
    return type;
}

// public UxFileSource(string path, byte[] bytes) :12
void UxFileSource__ctor_1_fn(UxFileSource* __this, uString* path, uArray* bytes)
{
    __this->ctor_1(path, bytes);
}

// public UxFileSource New(string path, byte[] bytes) :12
void UxFileSource__New1_fn(uString* path, uArray* bytes, UxFileSource** __retval)
{
    *__retval = UxFileSource::New1(path, bytes);
}

// public override sealed Uno.IO.Stream OpenRead() :24
void UxFileSource__OpenRead_fn(UxFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxFileSource", "OpenRead()");
    return *__retval = ::g::Outracks::Simulator::Runtime::ArrayStream::New1(__this->_bytes), void();
}

// public override sealed byte[] ReadAllBytes() :30
void UxFileSource__ReadAllBytes_fn(UxFileSource* __this, uArray** __retval)
{
    return *__retval = __this->_bytes, void();
}

// public void Update(byte[] newBytes) :18
void UxFileSource__Update_fn(UxFileSource* __this, uArray* newBytes)
{
    __this->Update(newBytes);
}

// public UxFileSource(string path, byte[] bytes) [instance] :12
void UxFileSource::ctor_1(uString* path, uArray* bytes)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxFileSource", ".ctor(string,byte[])");
    ctor_(path);
    _bytes = bytes;
}

// public void Update(byte[] newBytes) [instance] :18
void UxFileSource::Update(uArray* newBytes)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxFileSource", "Update(byte[])");
    _bytes = newBytes;
    OnDataChanged();
}

// public UxFileSource New(string path, byte[] bytes) [static] :12
UxFileSource* UxFileSource::New1(uString* path, uArray* bytes)
{
    UxFileSource* obj1 = (UxFileSource*)uNew(UxFileSource_typeof());
    obj1->ctor_1(path, bytes);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/UxProperty.cs
// ---------------------------------------------------------------------------------------

// public sealed class UxProperty<T> :7
// {
static void UxProperty_build(uType* type)
{
    ::STRINGS[9] = uString::Const("");
    ::TYPES[78] = ::g::Uno::Type_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL));
    type->SetDependencies(
        ::g::Uno::Type_typeof());
    type->SetFields(1,
        ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL), offsetof(UxProperty, _setter), 0,
        ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL), offsetof(UxProperty, _getter), 0,
        ::g::Uno::UX::PropertyObject_typeof(), offsetof(UxProperty, _obj), 0,
        ::g::Uno::Bool_typeof(), offsetof(UxProperty, _supportsOriginSetter), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)UxProperty__New1_fn, 0, true, type, 5, ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL), ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL), ::g::Uno::UX::PropertyObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Uno::UX::Property1_type* UxProperty_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(UxProperty);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Outracks.Simulator.Runtime.UxProperty`1", options);
    type->fp_build_ = UxProperty_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))UxProperty__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))UxProperty__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))UxProperty__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))UxProperty__get_SupportsOriginSetter_fn;
    return type;
}

// public UxProperty(Uno.Action<object, object, object> setter, Uno.Func<object, object> getter, Uno.UX.PropertyObject obj, string name, bool supportsOriginSetter) :14
void UxProperty__ctor_3_fn(UxProperty* __this, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool* supportsOriginSetter)
{
    __this->ctor_3(setter, getter, obj, name, *supportsOriginSetter);
}

// public override sealed extern T Get(Uno.UX.PropertyObject obj) :45
void UxProperty__Get1_fn(UxProperty* __this, ::g::Uno::UX::PropertyObject* obj, uTRef __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxProperty`1", "Get(Uno.UX.PropertyObject)");
    uObject* res = uPtr(__this->_getter)->Invoke(1, obj);
    return __retval.Store(__this->__type->T(0), (res == NULL) ? ::g::Uno::Type::op_Equality(__this->__type->T(0), ::g::Uno::String_typeof()) ? (void*)uUnboxAny(__this->__type->T(0), ::STRINGS[9/*""*/]) : (void*)uT(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize)) : (void*)uUnboxAny(__this->__type->T(0), res)), void();
}

// public UxProperty New(Uno.Action<object, object, object> setter, Uno.Func<object, object> getter, Uno.UX.PropertyObject obj, string name, bool supportsOriginSetter) :14
void UxProperty__New1_fn(uType* __type, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool* supportsOriginSetter, UxProperty** __retval)
{
    *__retval = UxProperty::New1(__type, setter, getter, obj, name, *supportsOriginSetter);
}

// public override sealed Uno.UX.PropertyObject get_Object() :30
void UxProperty__get_Object_fn(UxProperty* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed extern void Set(Uno.UX.PropertyObject obj, T value, Uno.UX.IPropertyListener origin) :39
void UxProperty__Set1_fn(UxProperty* __this, ::g::Uno::UX::PropertyObject* obj, void* value, uObject* origin)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxProperty`1", "Set(Uno.UX.PropertyObject,T,Uno.UX.IPropertyListener)");
    uPtr(__this->_setter)->Invoke(3, obj, uBoxPtr(__this->__type->T(0), value), origin);
}

// public override sealed bool get_SupportsOriginSetter() :35
void UxProperty__get_SupportsOriginSetter_fn(UxProperty* __this, bool* __retval)
{
    return *__retval = __this->_supportsOriginSetter, void();
}

// public UxProperty(Uno.Action<object, object, object> setter, Uno.Func<object, object> getter, Uno.UX.PropertyObject obj, string name, bool supportsOriginSetter) [instance] :14
void UxProperty::ctor_3(uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool supportsOriginSetter)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxProperty`1", ".ctor(Uno.Action<object, object, object>,Uno.Func<object, object>,Uno.UX.PropertyObject,string,bool)");
    ctor_2(::g::Uno::UX::Selector__New1(name));
    _setter = setter;
    _getter = getter;
    _obj = obj;
    _supportsOriginSetter = supportsOriginSetter;
}

// public UxProperty New(Uno.Action<object, object, object> setter, Uno.Func<object, object> getter, Uno.UX.PropertyObject obj, string name, bool supportsOriginSetter) [static] :14
UxProperty* UxProperty::New1(uType* __type, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool supportsOriginSetter)
{
    UxProperty* obj1 = (UxProperty*)uNew(__type);
    obj1->ctor_3(setter, getter, obj, name, supportsOriginSetter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/UxTemplate.cs
// ---------------------------------------------------------------------------------------

// public sealed class UxTemplate :7
// {
static void UxTemplate_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::Func_typeof()->MakeType(uObject_typeof(), NULL), offsetof(UxTemplate, _create), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UxTemplate__New2_fn, 0, true, type, 3, ::g::Uno::Func_typeof()->MakeType(uObject_typeof(), NULL), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Uno::UX::Template_type* UxTemplate_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UxTemplate);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Outracks.Simulator.Runtime.UxTemplate", options);
    type->fp_build_ = UxTemplate_build;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))UxTemplate__New1_fn;
    return type;
}

// public UxTemplate(Uno.Func<object> create, string matchCase, bool isDefault) :11
void UxTemplate__ctor_1_fn(UxTemplate* __this, uDelegate* create, uString* matchCase, bool* isDefault)
{
    __this->ctor_1(create, matchCase, *isDefault);
}

// public override sealed object New() :20
void UxTemplate__New1_fn(UxTemplate* __this, uObject** __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxTemplate", "New()");
    return *__retval = uPtr(__this->_create)->Invoke(), void();
}

// public UxTemplate New(Uno.Func<object> create, string matchCase, bool isDefault) :11
void UxTemplate__New2_fn(uDelegate* create, uString* matchCase, bool* isDefault, UxTemplate** __retval)
{
    *__retval = UxTemplate::New2(create, matchCase, *isDefault);
}

// public UxTemplate(Uno.Func<object> create, string matchCase, bool isDefault) [instance] :11
void UxTemplate::ctor_1(uDelegate* create, uString* matchCase, bool isDefault)
{
    ctor_(matchCase, isDefault);
    _create = create;
}

// public UxTemplate New(Uno.Func<object> create, string matchCase, bool isDefault) [static] :11
UxTemplate* UxTemplate::New2(uDelegate* create, uString* matchCase, bool isDefault)
{
    UxTemplate* obj1 = (UxTemplate*)uNew(UxTemplate_typeof());
    obj1->ctor_1(create, matchCase, isDefault);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Scope.cs
// ----------------------------------------------------------------------------------

// public sealed class VariableNotBound :44
// {
static void VariableNotBound_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Element '");
    ::STRINGS[11] = uString::Const("' was referenced before it was initialized");
    type->SetFields(4,
        ::g::Outracks::Simulator::Bytecode::Variable_typeof(), offsetof(VariableNotBound, Variable), 0);
    type->Reflection.SetFields(1,
        new uField("Variable", 4));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)VariableNotBound__New4_fn, 0, true, type, 1, ::g::Outracks::Simulator::Bytecode::Variable_typeof()));
}

::g::Uno::Exception_type* VariableNotBound_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(VariableNotBound);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.Runtime.VariableNotBound", options);
    type->fp_build_ = VariableNotBound_build;
    return type;
}

// public VariableNotBound(Outracks.Simulator.Bytecode.Variable variable) :48
void VariableNotBound__ctor_3_fn(VariableNotBound* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    __this->ctor_3(variable);
}

// public VariableNotBound New(Outracks.Simulator.Bytecode.Variable variable) :48
void VariableNotBound__New4_fn(::g::Outracks::Simulator::Bytecode::Variable* variable, VariableNotBound** __retval)
{
    *__retval = VariableNotBound::New4(variable);
}

// public VariableNotBound(Outracks.Simulator.Bytecode.Variable variable) [instance] :48
void VariableNotBound::ctor_3(::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[10/*"Element '"*/], uPtr(variable)->Name), ::STRINGS[11/*"' was refer...*/]));
    Variable = variable;
}

// public VariableNotBound New(Outracks.Simulator.Bytecode.Variable variable) [static] :48
VariableNotBound* VariableNotBound::New4(::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    VariableNotBound* obj1 = (VariableNotBound*)uNew(VariableNotBound_typeof());
    obj1->ctor_3(variable);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/WeakDictionary.cs
// -------------------------------------------------------------------------------------------

// public sealed class WeakDictionary<TKey, TValue> :48
// {
static void WeakDictionary_build(uType* type)
{
    ::TYPES[79] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[80] = ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Outracks::Simulator::Runtime::HashableWeakReference_typeof(), type->T(1), NULL));
    type->SetFields(0,
        ::TYPES[79/*Uno.Collections.Dictionary`2*/]->MakeType(::g::Outracks::Simulator::Runtime::HashableWeakReference_typeof(), type->T(1), NULL), offsetof(WeakDictionary, _dictionary), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("AsEnumerable", NULL, (void*)WeakDictionary__AsEnumerable_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Outracks::Simulator::Runtime::HashableWeakReference_typeof(), type->T(1), NULL), NULL), 0),
        new uFunction("Clear", NULL, (void*)WeakDictionary__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Item", NULL, (void*)WeakDictionary__get_Item_fn, 0, false, type->T(1), 1, type->T(0)),
        new uFunction("set_Item", NULL, (void*)WeakDictionary__set_Item_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(1)),
        new uFunction(".ctor", type, (void*)WeakDictionary__New1_fn, 0, true, type, 0),
        new uFunction("Remove", NULL, (void*)WeakDictionary__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Outracks::Simulator::Runtime::HashableWeakReference_typeof()),
        new uFunction("TryGetValue", NULL, (void*)WeakDictionary__TryGetValue_fn, 0, false, ::g::Uno::Bool_typeof(), 2, type->T(0), type->T(1)->ByRef()));
}

uType* WeakDictionary_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(WeakDictionary);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.WeakDictionary`2", options);
    type->fp_build_ = WeakDictionary_build;
    type->fp_ctor_ = (void*)WeakDictionary__New1_fn;
    return type;
}

// public generated WeakDictionary() :48
void WeakDictionary__ctor__fn(WeakDictionary* __this)
{
    __this->ctor_();
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Outracks.Simulator.Runtime.HashableWeakReference, TValue>> AsEnumerable() :53
void WeakDictionary__AsEnumerable_fn(WeakDictionary* __this, uObject** __retval)
{
    *__retval = __this->AsEnumerable();
}

// public void Clear() :58
void WeakDictionary__Clear_fn(WeakDictionary* __this)
{
    __this->Clear();
}

// private static Outracks.Simulator.Runtime.HashableWeakReference GetKey(TKey obj) :79
void WeakDictionary__GetKey_fn(uType* __type, void* obj, ::g::Outracks::Simulator::Runtime::HashableWeakReference** __retval)
{
    return *__retval = ::g::Outracks::Simulator::Runtime::HashableWeakReference::New1((::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[80/*Uno.WeakReference<object>*/], uBoxPtr(__type->T(0), obj))), void();
}

// public TValue get_Item(TKey key) :75
void WeakDictionary__get_Item_fn(WeakDictionary* __this, void* key, uTRef __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.WeakDictionary`2", "get_Item(TKey)");
    uT ret5(__this->__type->T(1), U_ALLOCA(__this->__type->T(1)->ValueSize));
    ::g::Outracks::Simulator::Runtime::HashableWeakReference* ret6;
    return __retval.Store((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret6), ret6), &ret5), ret5)), void();
}

// public void set_Item(TKey key, TValue value) :76
void WeakDictionary__set_Item_fn(WeakDictionary* __this, void* key, void* value)
{
    uStackFrame __("Outracks.Simulator.Runtime.WeakDictionary`2", "set_Item(TKey,TValue)");
    ::g::Outracks::Simulator::Runtime::HashableWeakReference* ret7;
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret7), ret7), value);
}

// public generated WeakDictionary New() :48
void WeakDictionary__New1_fn(uType* __type, WeakDictionary** __retval)
{
    *__retval = WeakDictionary::New1(__type);
}

// public bool Remove(Outracks.Simulator.Runtime.HashableWeakReference key) :68
void WeakDictionary__Remove_fn(WeakDictionary* __this, ::g::Outracks::Simulator::Runtime::HashableWeakReference* key, bool* __retval)
{
    *__retval = __this->Remove(key);
}

// public bool TryGetValue(TKey key, TValue& value) :63
void WeakDictionary__TryGetValue_fn(WeakDictionary* __this, void* key, uTRef value, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.WeakDictionary`2", "TryGetValue(TKey,TValue&)");
    bool ret3;
    ::g::Outracks::Simulator::Runtime::HashableWeakReference* ret4;
    return *__retval = (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret4), ret4), value, &ret3), ret3), void();
}

// public generated WeakDictionary() [instance] :48
void WeakDictionary::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<Outracks.Simulator.Runtime.HashableWeakReference, TValue>*/),
    };
    _dictionary = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Outracks.Simulator.Runtime.HashableWeakReference, TValue>> AsEnumerable() [instance] :53
uObject* WeakDictionary::AsEnumerable()
{
    uStackFrame __("Outracks.Simulator.Runtime.WeakDictionary`2", "AsEnumerable()");
    return (uObject*)_dictionary;
}

// public void Clear() [instance] :58
void WeakDictionary::Clear()
{
    uStackFrame __("Outracks.Simulator.Runtime.WeakDictionary`2", "Clear()");
    uPtr(_dictionary)->Clear();
}

// public bool Remove(Outracks.Simulator.Runtime.HashableWeakReference key) [instance] :68
bool WeakDictionary::Remove(::g::Outracks::Simulator::Runtime::HashableWeakReference* key)
{
    uStackFrame __("Outracks.Simulator.Runtime.WeakDictionary`2", "Remove(Outracks.Simulator.Runtime.HashableWeakReference)");
    bool ret2;
    return (::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_dictionary), key, &ret2), ret2);
}

// public generated WeakDictionary New() [static] :48
WeakDictionary* WeakDictionary::New1(uType* __type)
{
    WeakDictionary* obj1 = (WeakDictionary*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

}}}} // ::g::Outracks::Simulator::Runtime
