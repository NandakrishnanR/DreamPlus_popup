// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.Primitiv-2b9696be.h>
#include <Android.Base.Primitiv-b7b09a.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Android.Base.Wrappers-90b493fe.h>
#include <android/asset_manager_jni.h>
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <Java.Object.h>
#include <jni.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <Uno.Action1-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRang-6803b39e.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Delegate.h>
#include <Uno.Environment.h>
#include <Uno.GC.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.IO.AAssetManager.h>
#include <Uno.IO.AAssetManagerPtr.h>
#include <Uno.IO.AAssetPtr.h>
#include <Uno.IO.AAssetStream.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.Enum-e0c10ae8.h>
#include <Uno.IO.Directory.Enumerable.h>
#include <Uno.IO.Directory.Enumerator.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.DirectoryInfo.h>
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
#include <Uno.IO.TextReader.h>
#include <Uno.IO.TextWriter.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.NotImplementedException.h>
#include <Uno.NotSupportedException.h>
#include <Uno.Object.h>
#include <Uno.ObjectDisposedException.h>
#include <Uno.String.h>
#include <Uno.Text.Decoder.h>
#include <Uno.Text.Encoding.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Time.DateTimeZone.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[40];
static uType* TYPES[11];

namespace g{
namespace Uno{
namespace IO{

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Bundle.uno
// --------------------------------------------------------------------

// internal static extern class AAssetManager :315
// {
// static generated AAssetManager() :315
static void AAssetManager__cctor__fn(uType* __type)
{
    AAssetManager::Ptr_ = AAssetManager::GetPtr();
}

static void AAssetManager_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Asset not found: ");
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetFields(0,
        ::g::Uno::IO::AAssetManagerPtr_typeof(), (uintptr_t)&AAssetManager::Ptr_, uFieldFlagsStatic);
}

uClassType* AAssetManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.AAssetManager", options);
    type->fp_build_ = AAssetManager_build;
    type->fp_cctor_ = AAssetManager__cctor__fn;
    return type;
}

// private static Java.Object GetJavaObject() :336
void AAssetManager__GetJavaObject_fn(::g::Java::Object** __retval)
{
    *__retval = AAssetManager::GetJavaObject();
}

// private static Uno.IO.AAssetManagerPtr GetPtr() :328
void AAssetManager__GetPtr_fn(::AAssetManager** __retval)
{
    *__retval = AAssetManager::GetPtr();
}

// public static Uno.IO.AAssetPtr OpenOrThrow(string filename) :319
void AAssetManager__OpenOrThrow_fn(uString* filename, ::AAsset** __retval)
{
    *__retval = AAssetManager::OpenOrThrow(filename);
}

::AAssetManager* AAssetManager::Ptr_;

// private static Java.Object GetJavaObject() [static] :336
::g::Java::Object* AAssetManager::GetJavaObject()
{
    AAssetManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetJavaObject52", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Uno.IO.AAssetManagerPtr GetPtr() [static] :328
::AAssetManager* AAssetManager::GetPtr()
{
    AAssetManager_typeof()->Init();
    JNIEnv* env = ::g::Android::Base::JNI::GetEnvPtr();
    jobject jobject = ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(uPtr((uObject*)AAssetManager::GetJavaObject()), ::TYPES[0/*Android.Base.Wrappers.IJWrapper*/]));
    return AAssetManager_fromJava(env, jobject);
}

// public static Uno.IO.AAssetPtr OpenOrThrow(string filename) [static] :319
::AAsset* AAssetManager::OpenOrThrow(uString* filename)
{
    AAssetManager_typeof()->Init();
    ::AAsset* retval = AAssetManager_open(AAssetManager::Ptr_, uCString(filename).Ptr, AASSET_MODE_STREAMING);

    if (!retval)
        U_THROW(::g::Uno::IO::FileNotFoundException::New5(::g::Uno::String::op_Addition2(::STRINGS[0/*"Asset not f...*/], filename), filename));

    return retval;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Bundle.uno
// --------------------------------------------------------------------

// internal extern struct AAssetManagerPtr :311
// {
static void AAssetManagerPtr_build(uType* type)
{
}

uStructType* AAssetManagerPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(::AAssetManager*);
    options.ValueSize = sizeof(::AAssetManager*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.IO.AAssetManagerPtr", options);
    type->fp_build_ = AAssetManagerPtr_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Bundle.uno
// --------------------------------------------------------------------

// internal extern struct AAssetPtr :304
// {
static void AAssetPtr_build(uType* type)
{
}

uStructType* AAssetPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(::AAsset*);
    options.ValueSize = sizeof(::AAsset*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.IO.AAssetPtr", options);
    type->fp_build_ = AAssetPtr_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Bundle.uno
// --------------------------------------------------------------------

// internal sealed extern class AAssetStream :342
// {
static void AAssetStream_build(uType* type)
{
    ::STRINGS[1] = uString::Const("The asset stream was closed");
    ::STRINGS[2] = uString::Const("dst");
    type->SetDependencies(
        ::g::Uno::IO::AAssetManager_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::AAssetPtr_typeof(), offsetof(AAssetStream, _fp), 0);
}

::g::Uno::IO::Stream_type* AAssetStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::Stream_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(AAssetStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Uno.IO.AAssetStream", options);
    type->fp_build_ = AAssetStream_build;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::Stream*, bool*))AAssetStream__Dispose1_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))AAssetStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))AAssetStream__get_Length_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*, int32_t*))AAssetStream__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*))AAssetStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public AAssetStream(string filename) :346
void AAssetStream__ctor_1_fn(AAssetStream* __this, uString* filename)
{
    __this->ctor_1(filename);
}

// private void CheckDisposed() :440
void AAssetStream__CheckDisposed_fn(AAssetStream* __this)
{
    __this->CheckDisposed();
}

// public override sealed void Dispose(bool disposing) :432
void AAssetStream__Dispose1_fn(AAssetStream* __this, bool* disposing)
{
    bool disposing_ = *disposing;
    if (!__this->_fp)
        return;
    AAsset_close(__this->_fp);
    __this->_fp = NULL;
}

// public override sealed void Flush() :428
void AAssetStream__Flush_fn(AAssetStream* __this)
{
}

// public override sealed long get_Length() :368
void AAssetStream__get_Length_fn(AAssetStream* __this, int64_t* __retval)
{
    __this->CheckDisposed();
    return *__retval = AAsset_getLength(__this->_fp), void();
}

// public AAssetStream New(string filename) :346
void AAssetStream__New1_fn(uString* filename, AAssetStream** __retval)
{
    *__retval = AAssetStream::New1(filename);
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :394
void AAssetStream__Read_fn(AAssetStream* __this, uArray* dst, int32_t* byteOffset, int32_t* byteCount, int32_t* __retval)
{
    int32_t byteOffset_ = *byteOffset;
    int32_t byteCount_ = *byteCount;

    if (dst == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[2/*"dst"*/]));

    __this->CheckDisposed();
    return *__retval = AAsset_read(__this->_fp, (uint8_t*) dst->Ptr() + byteOffset_, byteCount_), void();
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :403
void AAssetStream__Write_fn(AAssetStream* __this, uArray* src, int32_t* byteOffset, int32_t* byteCount)
{
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public AAssetStream(string filename) [instance] :346
void AAssetStream::ctor_1(uString* filename)
{
    ctor_();
    _fp = ::g::Uno::IO::AAssetManager::OpenOrThrow(filename);
}

// private void CheckDisposed() [instance] :440
void AAssetStream::CheckDisposed()
{
    if (!this->_fp)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[1/*"The asset s...*/]));
}

// public AAssetStream New(string filename) [static] :346
AAssetStream* AAssetStream::New1(uString* filename)
{
    AAssetStream* obj1 = (AAssetStream*)uNew(AAssetStream_typeof());
    obj1->ctor_1(filename);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/BinaryReader.uno
// --------------------------------------------------------------------------

// public sealed class BinaryReader :7
// {
static void BinaryReader_build(uType* type)
{
    ::STRINGS[3] = uString::Const("byteCount");
    ::TYPES[1] = ::g::Uno::Byte_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(BinaryReader_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::Stream_typeof(), offsetof(BinaryReader, _stream), 0,
        ::TYPES[1/*byte[]*/], offsetof(BinaryReader, _buffer), 0,
        ::g::Uno::Bool_typeof(), offsetof(BinaryReader, _LittleEndian), 0);
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

// public byte[] ReadBytes(int byteCount) :56
void BinaryReader__ReadBytes_fn(BinaryReader* __this, int32_t* byteCount, uArray** __retval)
{
    *__retval = __this->ReadBytes(*byteCount);
}

// public BinaryReader(Uno.IO.Stream stream) [instance] :14
void BinaryReader::ctor_(::g::Uno::IO::Stream* stream)
{
    _stream = stream;
    _buffer = uArray::New(::TYPES[1/*byte[]*/], 64);
    LittleEndian(true);
}

// public void Dispose() [instance] :32
void BinaryReader::Dispose()
{
    uPtr(_stream)->Dispose();
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

// public byte[] ReadBytes(int byteCount) [instance] :56
uArray* BinaryReader::ReadBytes(int32_t byteCount)
{
    if (byteCount < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[3/*"byteCount"*/]));

    uArray* buffer = uArray::New(::TYPES[1/*byte[]*/], byteCount);
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

    uArray* result = uArray::New(::TYPES[1/*byte[]*/], offset);

    for (int32_t i = 0; i < offset; i++)
        uPtr(result)->Item<uint8_t>(i) = uPtr(buffer)->Item<uint8_t>(i);

    return result;
}

// public BinaryReader New(Uno.IO.Stream stream) [static] :14
BinaryReader* BinaryReader::New1(::g::Uno::IO::Stream* stream)
{
    BinaryReader* obj1 = (BinaryReader*)uNew(BinaryReader_typeof());
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
    Bundle::_bundles_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[2/*Uno.Collections.Dictionary<string, Uno.IO.Bundle>*/]));
    Bundle::_allFiles_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<Uno.IO.BundleFile>*/]));

    for (array1 = ::g::Uno::String::Split(uPtr(::g::Uno::IO::BundleFile::New1(Bundle::New1(NULL), ::STRINGS[4/*"bundle"*/], ::STRINGS[4/*"bundle"*/])->ReadAllText()), uArray::Init<int32_t>(::TYPES[4/*char[]*/], 1, 10)), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        uString* line = uPtr(array1)->Strong<uString*>(index2);
        uArray* parts = ::g::Uno::String::Split(uPtr(line), uArray::Init<int32_t>(::TYPES[4/*char[]*/], 1, ':'));
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
    ::STRINGS[4] = uString::Const("bundle");
    ::STRINGS[5] = uString::Const("BundleFile not found: ");
    ::TYPES[2] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), type, NULL);
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Bundle, _packageName), 0,
        ::TYPES[3/*Uno.Collections.List<Uno.IO.BundleFile>*/], offsetof(Bundle, _files), 0,
        ::TYPES[2/*Uno.Collections.Dictionary<string, Uno.IO.Bundle>*/], (uintptr_t)&Bundle::_bundles_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Collections.List<Uno.IO.BundleFile>*/], (uintptr_t)&Bundle::_allFiles_, uFieldFlagsStatic);
}

uType* Bundle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
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
    _files = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<Uno.IO.BundleFile>*/]));
    _packageName = packageName;
}

// public Uno.Collections.IEnumerable<Uno.IO.BundleFile> get_Files() [instance] :283
uObject* Bundle::Files()
{
    return (uObject*)_files;
}

// public Uno.IO.BundleFile GetFile(string filename) [instance] :286
::g::Uno::IO::BundleFile* Bundle::GetFile(uString* filename)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::IO::BundleFile*> > ret7;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::IO::BundleFile*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_files), &ret7), ret7);

    {
        try
        {
            {
                while (enum4.MoveNext(::TYPES[5/*Uno.Collections.List<Uno.IO.BundleFile>.Enumerator*/]))
                {
                    ::g::Uno::IO::BundleFile* f = enum4.Current(::TYPES[5/*Uno.Collections.List<Uno.IO.BundleFile>.Enumerator*/]);

                    if (::g::Uno::String::op_Equality(uPtr(f)->SourcePath(), filename) || ::g::Uno::String::op_Equality(uPtr(f)->BundlePath(), filename))
                    {
                        ::g::Uno::IO::BundleFile* __uno_retval = f;
                        enum4.Dispose(::TYPES[5/*Uno.Collections.List<Uno.IO.BundleFile>.Enumerator*/]);
                        return __uno_retval;
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum4.Dispose(::TYPES[5/*Uno.Collections.List<Uno.IO.BundleFile>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum4.Dispose(::TYPES[5/*Uno.Collections.List<Uno.IO.BundleFile>.Enumerator*/]);
        }
        __after_finally_0:;
    }

    U_THROW(::g::Uno::IO::FileNotFoundException::New5(::g::Uno::String::op_Addition2(::STRINGS[5/*"BundleFile ...*/], filename), filename));
}

// public static Uno.IO.Bundle Get([string package]) [static] :251
Bundle* Bundle::Get(uString* package)
{
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
    Bundle_typeof()->Init();
    return (uObject*)Bundle::_allFiles_;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Bundle.uno
// --------------------------------------------------------------------

// public sealed class BundleFile :26
// {
static void BundleFile_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Uno.IO.BundleFile.BundlePath");
    ::TYPES[1] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[6] = ::g::Uno::IDisposable_typeof();
    ::TYPES[7] = ::g::Uno::Action1_typeof()->MakeType(type, NULL);
    type->SetFields(0,
        ::g::Uno::IO::Bundle_typeof(), offsetof(BundleFile, _Bundle), uFieldFlagsWeak,
        ::g::Uno::String_typeof(), offsetof(BundleFile, _BundlePath), 0,
        ::g::Uno::Bool_typeof(), offsetof(BundleFile, _IsFile), 0,
        ::g::Uno::String_typeof(), offsetof(BundleFile, _SourcePath), 0,
        ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/], offsetof(BundleFile, Changed1), 0);
}

uType* BundleFile_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(BundleFile);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.IO.BundleFile", options);
    type->fp_build_ = BundleFile_build;
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

// internal BundleFile(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) [instance] :73
void BundleFile::ctor_(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath)
{
    Bundle(bundle);
    SourcePath(sourcePath);
    BundlePath(bundlePath);
    IsFile(false);
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
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]);
}

// public generated void remove_Changed(Uno.Action<Uno.IO.BundleFile> value) [instance] :31
void BundleFile::remove_Changed(uDelegate* value)
{
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

// public Uno.IO.Stream OpenRead() [instance] :85
::g::Uno::IO::Stream* BundleFile::OpenRead()
{
    if (::g::Uno::String::op_Equality(BundlePath(), NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[6/*"Uno.IO.Bund...*/]));

    return ::g::Uno::IO::AAssetStream::New1(BundlePath());
}

// public byte[] ReadAllBytes() [instance] :153
uArray* BundleFile::ReadAllBytes()
{
    ::g::Uno::IO::Stream* stream = OpenRead();

    {
        try
        {
            {
                uArray* result = uArray::New(::TYPES[1/*byte[]*/], (int32_t)uPtr(stream)->Length());
                stream->Read(result, 0, result->Length());
                uArray* __uno_retval = result;
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::TYPES[6/*Uno.IDisposable*/]));
                return __uno_retval;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::TYPES[6/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::TYPES[6/*Uno.IDisposable*/]));
        }
        __after_finally_1:;
    }
}

// public string ReadAllText() [instance] :170
uString* BundleFile::ReadAllText()
{
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

// internal BundleFile New(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) [static] :73
BundleFile* BundleFile::New1(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath)
{
    BundleFile* obj1 = (BundleFile*)uNew(BundleFile_typeof());
    obj1->ctor_(bundle, sourcePath, bundlePath);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Directory.uno
// -----------------------------------------------------------------------

// public static class Directory :29
// {
static void Directory_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::IO::Path_typeof());
}

uClassType* Directory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.Directory", options);
    type->fp_build_ = Directory_build;
    return type;
}

// public static void CreateDirectory(string dirName) :283
void Directory__CreateDirectory_fn(uString* dirName)
{
    Directory::CreateDirectory(dirName);
}

// public static void Delete(string dirName, bool recursive) :320
void Directory__Delete_fn(uString* dirName, bool* recursive)
{
    Directory::Delete(dirName, *recursive);
}

// public static Uno.Collections.IEnumerable<string> EnumerateDirectories(string dirName) :392
void Directory__EnumerateDirectories_fn(uString* dirName, uObject** __retval)
{
    *__retval = Directory::EnumerateDirectories(dirName);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFiles(string dirName) :397
void Directory__EnumerateFiles_fn(uString* dirName, uObject** __retval)
{
    *__retval = Directory::EnumerateFiles(dirName);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFileSystemEntries(string dirName) :402
void Directory__EnumerateFileSystemEntries_fn(uString* dirName, uObject** __retval)
{
    *__retval = Directory::EnumerateFileSystemEntries(dirName);
}

// public static bool Exists(string dirName) :371
void Directory__Exists_fn(uString* dirName, bool* __retval)
{
    *__retval = Directory::Exists(dirName);
}

// public static string GetCurrentDirectory() :245
void Directory__GetCurrentDirectory_fn(uString** __retval)
{
    *__retval = Directory::GetCurrentDirectory();
}

// private static extern string GetUserConfigDirectory() :158
void Directory__GetUserConfigDirectory_fn(uString** __retval)
{
    *__retval = Directory::GetUserConfigDirectory();
}

// private static extern string GetUserDataDirectory() :167
void Directory__GetUserDataDirectory_fn(uString** __retval)
{
    *__retval = Directory::GetUserDataDirectory();
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) :32
void Directory__GetUserDirectory_fn(int32_t* dir, uString** __retval)
{
    *__retval = Directory::GetUserDirectory(*dir);
}

// public static void Move(string oldName, string newName) :348
void Directory__Move_fn(uString* oldName, uString* newName)
{
    Directory::Move(oldName, newName);
}

// public static void CreateDirectory(string dirName) [static] :283
void Directory::CreateDirectory(uString* dirName)
{
    if (::g::Uno::String::op_Equality(dirName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[7/*"dirName"*/]));

    if (((uPtr(dirName)->Length() == 0) || ((false && (uPtr(dirName)->Length() == 2)) && (uPtr(dirName)->Item(1) == ':'))) || Directory::Exists(dirName))
        return;

    Directory::CreateDirectory(::g::Uno::IO::Path::GetDirectoryName(dirName));
    if (mkdir(uCString(dirName).Ptr, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == 0 ||
            errno == EEXIST)
        return;
    U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Unable to create directory '"), dirName), ::STRINGS[14/*"'"*/])));
}

// public static void Delete(string dirName, bool recursive) [static] :320
void Directory::Delete(uString* dirName, bool recursive)
{
    uString* ret3;
    uString* ret4;

    if (::g::Uno::String::op_Equality(dirName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[7/*"dirName"*/]));

    if (recursive)
    {
        uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Directory::EnumerateDirectories(dirName)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL)));

        {
            try
            {
                {
                    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())))
                    {
                        uString* e = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::String_typeof(), NULL)), &ret3), ret3);
                        Directory::Delete(e, true);
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[6/*Uno.IDisposable*/]));
                }
                                throw __t;
                goto __after_finally_2;
            }

            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[6/*Uno.IDisposable*/]));
            }
            __after_finally_2:;
        }

        uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Directory::EnumerateFiles(dirName)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL)));

        {
            try
            {
                {
                    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())))
                    {
                        uString* e1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::String_typeof(), NULL)), &ret4), ret4);
                        ::g::Uno::IO::File::Delete(e1);
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[6/*Uno.IDisposable*/]));
                }
                                throw __t;
                goto __after_finally_3;
            }

            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[6/*Uno.IDisposable*/]));
            }
            __after_finally_3:;
        }
    }

    uCString cstr(dirName);

    if (rmdir(cstr.Ptr) != 0)
        U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Unable to delete directory '"), dirName), ::STRINGS[14/*"'"*/])));
}

// public static Uno.Collections.IEnumerable<string> EnumerateDirectories(string dirName) [static] :392
uObject* Directory::EnumerateDirectories(uString* dirName)
{
    return (uObject*)Directory__Enumerable::New1(dirName, 1);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFiles(string dirName) [static] :397
uObject* Directory::EnumerateFiles(uString* dirName)
{
    return (uObject*)Directory__Enumerable::New1(dirName, 2);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFileSystemEntries(string dirName) [static] :402
uObject* Directory::EnumerateFileSystemEntries(uString* dirName)
{
    return (uObject*)Directory__Enumerable::New1(dirName, 0);
}

// public static bool Exists(string dirName) [static] :371
bool Directory::Exists(uString* dirName)
{
    if (::g::Uno::String::op_Equality(dirName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[7/*"dirName"*/]));

    struct stat attributes;
    return stat(uCString(dirName).Ptr, &attributes) != -1 &&
        S_ISDIR(attributes.st_mode);
}

// public static string GetCurrentDirectory() [static] :245
uString* Directory::GetCurrentDirectory()
{
    char buf[4096];
    if (getcwd(buf, sizeof(buf)) != buf)
        U_THROW_IOE("getcwd() failed");
    
    return uString::Utf8(buf);
}

// private static extern string GetUserConfigDirectory() [static] :158
uString* Directory::GetUserConfigDirectory()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetUserConfigDirectory53", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern string GetUserDataDirectory() [static] :167
uString* Directory::GetUserDataDirectory()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetUserDataDirectory54", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) [static] :32
uString* Directory::GetUserDirectory(int32_t dir)
{
    switch (dir)
    {
        case 1:
            return Directory::GetUserConfigDirectory();
        case 2:
            return Directory::GetUserDataDirectory();
        default:
            return uString::Const("/sdcard");
    }

    U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(uString::Const("dir")));
}

// public static void Move(string oldName, string newName) [static] :348
void Directory::Move(uString* oldName, uString* newName)
{
    if (::g::Uno::String::op_Equality(oldName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[18/*"oldName"*/]));

    if (::g::Uno::String::op_Equality(newName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[19/*"newName"*/]));

    uCString oldNameU8(oldName);
    uCString newNameU8(newName);

    if (rename(oldNameU8.Ptr, newNameU8.Ptr) != 0)
        U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Unable to move directory '"), oldName), ::STRINGS[21/*"' to '"*/]), newName), ::STRINGS[14/*"'"*/])));
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/DirectoryInfo.uno
// ---------------------------------------------------------------------------

// public sealed class DirectoryInfo :5
// {
static void DirectoryInfo_build(uType* type)
{
    type->SetFields(3);
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
    ::STRINGS[7] = uString::Const("dirName");
    ::STRINGS[8] = uString::Const("Directory not found: ");
    ::STRINGS[9] = uString::Const(".");
    ::STRINGS[10] = uString::Const("");
    ::TYPES[4] = ::g::Uno::Char_typeof()->Array();
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
    if (::g::Uno::String::op_Equality(dirName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[7/*"dirName"*/]));

    dirName = ::g::Uno::String::TrimEnd(uPtr(dirName), uArray::Init<int32_t>(::TYPES[4/*char[]*/], 1, ::g::Uno::IO::Path::DirectorySeparatorChar()));

    if (!::g::Uno::IO::Directory::Exists(dirName))
        U_THROW(::g::Uno::IO::FileNotFoundException::New5(::g::Uno::String::op_Addition2(::STRINGS[8/*"Directory n...*/], dirName), dirName));

    _mode = mode;
    _prefix = (::g::Uno::String::op_Inequality(dirName, ::STRINGS[9/*"."*/]) ? (uString*)::g::Uno::String::op_Addition1(dirName, uBox<char16_t>(::g::Uno::Char_typeof(), ::g::Uno::IO::Path::DirectorySeparatorChar())) : ::STRINGS[10/*""*/]);
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
    ::STRINGS[11] = uString::Const("sourceFile");
    ::STRINGS[12] = uString::Const("destinationFile");
    ::STRINGS[13] = uString::Const("Unable to copy from file '");
    ::STRINGS[14] = uString::Const("'");
    ::STRINGS[15] = uString::Const("Unable to copy to file '");
    ::STRINGS[16] = uString::Const("filename");
    ::STRINGS[17] = uString::Const("Unable to delete file '");
    ::STRINGS[18] = uString::Const("oldName");
    ::STRINGS[19] = uString::Const("newName");
    ::STRINGS[20] = uString::Const("Unable to move file '");
    ::STRINGS[21] = uString::Const("' to '");
    ::STRINGS[22] = uString::Const("rb");
    ::TYPES[6] = ::g::Uno::IDisposable_typeof();
    ::TYPES[1] = ::g::Uno::Byte_typeof()->Array();
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
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)w), ::TYPES[6/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_4;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)w), ::TYPES[6/*Uno.IDisposable*/]));
        }
        __after_finally_4:;
    }
}

// public static void Copy(string sourceFile, string destinationFile) [static] :57
void File::Copy(uString* sourceFile, uString* destinationFile)
{
    File::Copy1(sourceFile, destinationFile, false);
}

// public static void Copy(string sourceFile, string destinationFile, bool overwrite) [static] :62
void File::Copy1(uString* sourceFile, uString* destinationFile, bool overwrite)
{
    if (::g::Uno::String::op_Equality(sourceFile, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[11/*"sourceFile"*/]));

    if (::g::Uno::String::op_Equality(destinationFile, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[12/*"destination...*/]));

    int32_t source;
    int32_t destination;
    uCString sourceFileU8(sourceFile);
    source = open(sourceFileU8.Ptr, O_RDONLY);

    if (source == -1)
        U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[13/*"Unable to c...*/], sourceFile), ::STRINGS[14/*"'"*/])));

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
        U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[15/*"Unable to c...*/], destinationFile), ::STRINGS[14/*"'"*/])));
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
    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[16/*"filename"*/]));

    uCString cstr(filename);

    if (unlink(cstr.Ptr) != 0)
        U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[17/*"Unable to d...*/], filename), ::STRINGS[14/*"'"*/])));
}

// public static bool Exists(string filename) [static] :143
bool File::Exists(uString* filename)
{
    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[16/*"filename"*/]));

    struct stat attributes;
    return stat(uCString(filename).Ptr, &attributes) != -1 &&
        !S_ISDIR(attributes.st_mode);
}

// public static void Move(string oldName, string newName) [static] :120
void File::Move(uString* oldName, uString* newName)
{
    if (::g::Uno::String::op_Equality(oldName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[18/*"oldName"*/]));

    if (::g::Uno::String::op_Equality(newName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[19/*"newName"*/]));

    uCString oldNameU8(oldName);
    uCString newNameU8(newName);

    if (rename(oldNameU8.Ptr, newNameU8.Ptr) != 0)
        U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[20/*"Unable to m...*/], oldName), ::STRINGS[21/*"' to '"*/]), newName), ::STRINGS[14/*"'"*/])));
}

// public static Uno.IO.FileStream Open(string filename, Uno.IO.FileMode filemode) [static] :16
::g::Uno::IO::FileStream* File::Open(uString* filename, int32_t filemode)
{
    return ::g::Uno::IO::FileStream::New1(filename, filemode);
}

// public static Uno.IO.FileStream OpenRead(string filename) [static] :21
::g::Uno::IO::FileStream* File::OpenRead(uString* filename)
{
    return ::g::Uno::IO::FileStream::New2(::g::Uno::IO::FILEPtr::OpenOrThrow(filename, ::STRINGS[22/*"rb"*/]), true, false);
}

// public static byte[] ReadAllBytes(string filename) [static] :194
uArray* File::ReadAllBytes(uString* filename)
{
    ::g::Uno::IO::FileStream* f = File::Open(filename, 3);

    {
        try
        {
            {
                uArray* result = uArray::New(::TYPES[1/*byte[]*/], (int32_t)uPtr(f)->Length());
                f->Read(result, 0, result->Length());
                uArray* __uno_retval = result;
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)f), ::TYPES[6/*Uno.IDisposable*/]));
                return __uno_retval;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)f), ::TYPES[6/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_5;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)f), ::TYPES[6/*Uno.IDisposable*/]));
        }
        __after_finally_5:;
    }
}

// public static string ReadAllText(string filename) [static] :179
uString* File::ReadAllText(uString* filename)
{
    ::g::Uno::IO::StreamReader* r = ::g::Uno::IO::StreamReader::New1(File::Open(filename, 3));

    {
        try
        {
            {
                uString* __uno_retval = uPtr(r)->ReadToEnd();
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)r), ::TYPES[6/*Uno.IDisposable*/]));
                return __uno_retval;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)r), ::TYPES[6/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_6;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)r), ::TYPES[6/*Uno.IDisposable*/]));
        }
        __after_finally_6:;
    }
}

// public static void WriteAllBytes(string filename, byte[] bytes) [static] :210
void File::WriteAllBytes(uString* filename, uArray* bytes)
{
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
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)f), ::TYPES[6/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_7;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)f), ::TYPES[6/*Uno.IDisposable*/]));
        }
        __after_finally_7:;
    }
}

// public static void WriteAllText(string filename, string text) [static] :204
void File::WriteAllText(uString* filename, uString* text)
{
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
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)w), ::TYPES[6/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_8;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)w), ::TYPES[6/*Uno.IDisposable*/]));
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
    ctor_(originalPath);
}

// public long get_Length() [instance] :34
int64_t FileInfo::Length()
{
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
    ::STRINGS[16] = uString::Const("filename");
    ::STRINGS[23] = uString::Const("Can't open file: ");
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
    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[16/*"filename"*/]));

    FILE* retval = fopen(uCString(filename).Ptr, uCString(mode).Ptr);
    if (!retval)
        FILEPtr::Throw(filename);
    return retval;
}

// private static void Throw(string filename) [static] :33
void FILEPtr::Throw(uString* filename)
{
    U_THROW(::g::Uno::IO::FileNotFoundException::New5(::g::Uno::String::op_Addition2(::STRINGS[23/*"Can't open ...*/], filename), filename));
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
    ::STRINGS[24] = uString::Const("The file stream was closed");
    ::STRINGS[25] = uString::Const("File not found: ");
    ::STRINGS[26] = uString::Const("wb");
    ::STRINGS[27] = uString::Const("r+b");
    ::STRINGS[28] = uString::Const("File already exists: ");
    ::STRINGS[29] = uString::Const("ab");
    ::STRINGS[30] = uString::Const("mode");
    ::STRINGS[31] = uString::Const("File stream is not readable");
    ::STRINGS[32] = uString::Const("Error while seeking in file stream");
    ::STRINGS[33] = uString::Const("File stream is not writable");
    ::STRINGS[34] = uString::Const("Error while writing to file stream");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::FILEPtr_typeof(), offsetof(FileStream, _fp), 0,
        ::g::Uno::Bool_typeof(), offsetof(FileStream, _canRead), 0,
        ::g::Uno::Bool_typeof(), offsetof(FileStream, _canWrite), 0);
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
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::Stream*, bool*))FileStream__Dispose1_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))FileStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))FileStream__get_Length_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*, int32_t*))FileStream__Read_fn;
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

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :169
void FileStream__Read_fn(FileStream* __this, uArray* dst, int32_t* byteOffset, int32_t* byteCount, int32_t* __retval)
{
    int32_t byteOffset_ = *byteOffset;
    int32_t byteCount_ = *byteCount;
    __this->CheckDisposed();

    if (__this->_canRead && __this->_canWrite)
        __this->Flush();
    else if (!__this->_canRead)
        U_THROW(::g::Uno::IO::IOException::New4(::STRINGS[31/*"File stream...*/]));

    return *__retval = (int)fread((uint8_t*)dst->Ptr() + byteOffset_, 1, byteCount_, __this->_fp), void();
}

// public long Seek(long byteOffset, Uno.IO.SeekOrigin origin) :206
void FileStream__Seek_fn(FileStream* __this, int64_t* byteOffset, int32_t* origin, int64_t* __retval)
{
    *__retval = __this->Seek(*byteOffset, *origin);
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :185
void FileStream__Write_fn(FileStream* __this, uArray* src, int32_t* byteOffset, int32_t* byteCount)
{
    int32_t byteOffset_ = *byteOffset;
    int32_t byteCount_ = *byteCount;
    __this->CheckDisposed();

    if (__this->_canRead && __this->_canWrite)
        __this->Seek(0LL, 1);
    else if (!__this->_canWrite)
        U_THROW(::g::Uno::IO::IOException::New4(::STRINGS[33/*"File stream...*/]));

    int32_t result = (int)fwrite((const uint8_t*)src->Ptr() + byteOffset_, 1, byteCount_, __this->_fp);

    if (result != byteCount_)
        U_THROW(::g::Uno::IO::IOException::New4(::STRINGS[34/*"Error while...*/]));
}

// public FileStream(string filename, Uno.IO.FileMode mode) [instance] :45
void FileStream::ctor_1(uString* filename, int32_t mode)
{
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
    if (!this->_fp)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[24/*"The file st...*/]));
}

// private extern string GetNativeFileMode(string filename, Uno.IO.FileMode mode) [instance] :62
uString* FileStream::GetNativeFileMode(uString* filename, int32_t mode)
{
    switch (mode)
    {
        case 5:
        {
            if (!::g::Uno::IO::File::Exists(filename))
                U_THROW(::g::Uno::IO::FileNotFoundException::New5(::g::Uno::String::op_Addition2(::STRINGS[25/*"File not fo...*/], filename), filename));

            _canRead = true;
            _canWrite = true;
            fclose(::g::Uno::IO::FILEPtr::OpenOrThrow(filename, ::STRINGS[26/*"wb"*/]));
            return ::STRINGS[27/*"r+b"*/];
        }
        case 2:
        {
            _canRead = true;
            _canWrite = true;
            fclose(::g::Uno::IO::FILEPtr::OpenOrThrow(filename, ::STRINGS[26/*"wb"*/]));
            return ::STRINGS[27/*"r+b"*/];
        }
        case 1:
        {
            if (::g::Uno::IO::File::Exists(filename))
                U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::STRINGS[28/*"File alread...*/], filename)));

            _canWrite = true;
            return ::STRINGS[26/*"wb"*/];
        }
        case 4:
        {
            if (!::g::Uno::IO::File::Exists(filename))
                fclose(::g::Uno::IO::FILEPtr::OpenOrThrow(filename, ::STRINGS[26/*"wb"*/]));

            _canRead = true;
            _canWrite = true;
            return ::STRINGS[27/*"r+b"*/];
        }
        case 3:
        {
            _canRead = true;
            _canWrite = true;
            return ::STRINGS[27/*"r+b"*/];
        }
        case 6:
        {
            _canWrite = true;
            return ::STRINGS[29/*"ab"*/];
        }
    }

    U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[30/*"mode"*/]));
}

// public long Seek(long byteOffset, Uno.IO.SeekOrigin origin) [instance] :206
int64_t FileStream::Seek(int64_t byteOffset, int32_t origin)
{
    int64_t byteOffset_ = byteOffset;
    int32_t origin_ = origin;
    switch (origin_)
    {
    case 0:
        if (fseek(this->_fp, (long)byteOffset_, SEEK_SET) == 0)
            return ftell(this->_fp);
        break;
    
    case 1:
        if (fseek(this->_fp, (long)byteOffset_, SEEK_CUR) == 0)
            return ftell(this->_fp);
        break;
    
    case 2:
        if (fseek(this->_fp, (long)byteOffset_, SEEK_END) == 0)
            return ftell(this->_fp);
        break;
    }
    U_THROW(::g::Uno::IO::IOException::New4(::STRINGS[32/*"Error while...*/]));
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
    ::STRINGS[35] = uString::Const("originalPath");
    ::TYPES[8] = ::g::Uno::Time::ZonedDateTime_typeof();
    type->SetDependencies(
        ::g::Uno::IO::Path_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(FileSystemInfo, _fullPath), 0,
        ::g::Uno::String_typeof(), offsetof(FileSystemInfo, _originalPath), 0,
        ::g::Uno::IO::FileStatus_typeof(), offsetof(FileSystemInfo, _status), 0);
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
    if (::g::Uno::String::op_Equality(originalPath, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[35/*"originalPath"*/]));

    _originalPath = originalPath;
    _fullPath = ::g::Uno::IO::Path::GetFullPath(_originalPath);
}

// public bool get_Exists() [instance] :48
bool FileSystemInfo::Exists()
{
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
    return FileSystemInfo::ConvertTime(uPtr(Status())->LastAccessTimeUtc());
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() [instance] :54
::g::Uno::Time::ZonedDateTime* FileSystemInfo::LastWriteTimeUtc()
{
    return FileSystemInfo::ConvertTime(uPtr(Status())->LastWriteTimeUtc());
}

// public void Refresh() [instance] :23
void FileSystemInfo::Refresh()
{
    _status = LoadStatus();
}

// internal extern Uno.IO.FileStatus get_Status() [instance] :61
::g::Uno::IO::FileStatus* FileSystemInfo::Status()
{
    if (_status == NULL)
        Refresh();

    return _status;
}

// private static Uno.Time.ZonedDateTime ConvertTime(object time) [static] :33
::g::Uno::Time::ZonedDateTime* FileSystemInfo::ConvertTime(uObject* time)
{
    return uCast< ::g::Uno::Time::ZonedDateTime*>(time, ::TYPES[8/*Uno.Time.ZonedDateTime*/]);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/IOException.uno
// -------------------------------------------------------------------------

// public class IOException :6
// {
static void IOException_build(uType* type)
{
    type->SetFields(4);
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
    ::TYPES[1] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[9] = ::g::Uno::Array_typeof()->MakeMethod(1/*Copy<byte>*/, ::g::Uno::Byte_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(MemoryStream, _canWrite), 0,
        ::g::Uno::Bool_typeof(), offsetof(MemoryStream, _canResize), 0,
        ::TYPES[1/*byte[]*/], offsetof(MemoryStream, _buffer), 0,
        ::g::Uno::Int_typeof(), offsetof(MemoryStream, _nextIncrease), 0,
        ::g::Uno::Long_typeof(), offsetof(MemoryStream, _length), 0,
        ::g::Uno::Long_typeof(), offsetof(MemoryStream, _Position), 0);
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
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))MemoryStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__get_Length_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*, int32_t*))MemoryStream__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*))MemoryStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public MemoryStream() :50
void MemoryStream__ctor_1_fn(MemoryStream* __this)
{
    __this->ctor_1();
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

// public generated long get_Position() :41
void MemoryStream__get_Position_fn(MemoryStream* __this, int64_t* __retval)
{
    *__retval = __this->Position();
}

// public generated void set_Position(long value) :41
void MemoryStream__set_Position_fn(MemoryStream* __this, int64_t* value)
{
    __this->Position(*value);
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :86
void MemoryStream__Read_fn(MemoryStream* __this, uArray* dst, int32_t* byteOffset, int32_t* byteCount, int32_t* __retval)
{
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

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :69
void MemoryStream__Write_fn(MemoryStream* __this, uArray* src, int32_t* byteOffset, int32_t* byteCount)
{
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
    _buffer = uArray::New(::TYPES[1/*byte[]*/], 0);
    _nextIncrease = 256;
    ctor_();
}

// public int get_Capacity() [instance] :36
int32_t MemoryStream::Capacity()
{
    return uPtr(_buffer)->Length();
}

// private void EnsureCapacity(int byteCount) [instance] :114
void MemoryStream::EnsureCapacity(int32_t byteCount)
{
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

// public generated long get_Position() [instance] :41
int64_t MemoryStream::Position()
{
    return _Position;
}

// public generated void set_Position(long value) [instance] :41
void MemoryStream::Position(int64_t value)
{
    int64_t value_ = value;
    _Position = value_;
}

// private void ResizeTo(int newSize) [instance] :130
void MemoryStream::ResizeTo(int32_t newSize)
{
    if (!_canResize)
        U_THROW(::g::Uno::NotSupportedException::New4());

    uArray* newBuffer = uArray::New(::TYPES[1/*byte[]*/], newSize);
    ::g::Uno::Array::Copy1(::TYPES[9/*Uno.Array.Copy<byte>*/], _buffer, newBuffer, uPtr(_buffer)->Length());
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
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Path.uno
// ------------------------------------------------------------------

// public static class Path :7
// {
// static generated Path() :7
static void Path__cctor__fn(uType* __type)
{
    Path::DirectorySeparatorChar_ = Path::GetDirectorySeparatorChar();
    Path::AltDirectorySeparatorChar_ = '/';
    Path::PathSeparator_ = Path::GetPathSeparator();
    Path::VolumeSeparatorChar_ = Path::GetVolumeSeparatorChar();
    Path::DirectorySeparatorChars_ = Path::GetDirectorySeparatorChars();
}

static void Path_build(uType* type)
{
    ::STRINGS[36] = uString::Const("path1");
    ::STRINGS[37] = uString::Const("path2");
    ::TYPES[4] = ::g::Uno::Char_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Char_typeof(), (uintptr_t)&Path::DirectorySeparatorChar_, uFieldFlagsStatic,
        ::g::Uno::Char_typeof(), (uintptr_t)&Path::AltDirectorySeparatorChar_, uFieldFlagsStatic,
        ::g::Uno::Char_typeof(), (uintptr_t)&Path::PathSeparator_, uFieldFlagsStatic,
        ::g::Uno::Char_typeof(), (uintptr_t)&Path::VolumeSeparatorChar_, uFieldFlagsStatic,
        ::TYPES[4/*char[]*/], (uintptr_t)&Path::DirectorySeparatorChars_, uFieldFlagsStatic);
}

uClassType* Path_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.Path", options);
    type->fp_build_ = Path_build;
    type->fp_cctor_ = Path__cctor__fn;
    return type;
}

// public static string Combine(string path1, string path2) :38
void Path__Combine_fn(uString* path1, uString* path2, uString** __retval)
{
    *__retval = Path::Combine(path1, path2);
}

// private static string CombineInternal(string a, string b) :21
void Path__CombineInternal_fn(uString* a, uString* b, uString** __retval)
{
    *__retval = Path::CombineInternal(a, b);
}

// public static string GetDirectoryName(string path) :117
void Path__GetDirectoryName_fn(uString* path, uString** __retval)
{
    *__retval = Path::GetDirectoryName(path);
}

// private static char GetDirectorySeparatorChar() :254
void Path__GetDirectorySeparatorChar_fn(char16_t* __retval)
{
    *__retval = Path::GetDirectorySeparatorChar();
}

// private static char[] GetDirectorySeparatorChars() :261
void Path__GetDirectorySeparatorChars_fn(uArray** __retval)
{
    *__retval = Path::GetDirectorySeparatorChars();
}

// public static string GetFullPath(string filename) :188
void Path__GetFullPath_fn(uString* filename, uString** __retval)
{
    *__retval = Path::GetFullPath(filename);
}

// private static char GetPathSeparator() :268
void Path__GetPathSeparator_fn(char16_t* __retval)
{
    *__retval = Path::GetPathSeparator();
}

// private static char GetVolumeSeparatorChar() :275
void Path__GetVolumeSeparatorChar_fn(char16_t* __retval)
{
    *__retval = Path::GetVolumeSeparatorChar();
}

// private static bool IsDirectorySeparator(char ch) :16
void Path__IsDirectorySeparator_fn(char16_t* ch, bool* __retval)
{
    *__retval = Path::IsDirectorySeparator(*ch);
}

// public static bool IsPathRooted(string path) :213
void Path__IsPathRooted_fn(uString* path, bool* __retval)
{
    *__retval = Path::IsPathRooted(path);
}

// private static string NormalizePathSeparators(string path) :93
void Path__NormalizePathSeparators_fn(uString* path, uString** __retval)
{
    *__retval = Path::NormalizePathSeparators(path);
}

char16_t Path::DirectorySeparatorChar_;
char16_t Path::AltDirectorySeparatorChar_;
char16_t Path::PathSeparator_;
char16_t Path::VolumeSeparatorChar_;
uSStrong<uArray*> Path::DirectorySeparatorChars_;

// public static string Combine(string path1, string path2) [static] :38
uString* Path::Combine(uString* path1, uString* path2)
{
    Path_typeof()->Init();

    if (::g::Uno::String::op_Equality(path1, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[36/*"path1"*/]));

    if (::g::Uno::String::op_Equality(path2, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[37/*"path2"*/]));

    return Path::CombineInternal(path1, path2);
}

// private static string CombineInternal(string a, string b) [static] :21
uString* Path::CombineInternal(uString* a, uString* b)
{
    Path_typeof()->Init();

    if (uPtr(b)->Length() == 0)
        return a;

    if (uPtr(a)->Length() == 0)
        return b;

    if (Path::IsPathRooted(b))
        return b;

    if (Path::IsDirectorySeparator(uPtr(a)->Item(uPtr(a)->Length() - 1)))
        return ::g::Uno::String::op_Addition2(a, b);

    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(a, uBox<char16_t>(::g::Uno::Char_typeof(), Path::DirectorySeparatorChar_)), b);
}

// public static string GetDirectoryName(string path) [static] :117
uString* Path::GetDirectoryName(uString* path)
{
    Path_typeof()->Init();

    if (::g::Uno::String::op_Equality(path, NULL))
        return NULL;

    path = Path::NormalizePathSeparators(path);
    int32_t lastDirectorySeparator = ::g::Uno::String::LastIndexOfAny(uPtr(path), Path::DirectorySeparatorChars_);

    if (lastDirectorySeparator < 0)
        return ::g::Uno::String::Empty();

    if (lastDirectorySeparator == 0)
    {
        if (uPtr(path)->Length() == 1)
            return NULL;

        lastDirectorySeparator = 1;
    }

    return ::g::Uno::String::Substring1(path, 0, lastDirectorySeparator);
}

// private static char GetDirectorySeparatorChar() [static] :254
char16_t Path::GetDirectorySeparatorChar()
{
    Path_typeof()->Init();
    return '/';
}

// private static char[] GetDirectorySeparatorChars() [static] :261
uArray* Path::GetDirectorySeparatorChars()
{
    Path_typeof()->Init();
    return uArray::Init<int32_t>(::TYPES[4/*char[]*/], 1, '/');
}

// public static string GetFullPath(string filename) [static] :188
uString* Path::GetFullPath(uString* filename)
{
    Path_typeof()->Init();
    return Path::IsPathRooted(filename) ? filename : (uString*)Path::Combine(::g::Uno::IO::Directory::GetCurrentDirectory(), filename);
}

// private static char GetPathSeparator() [static] :268
char16_t Path::GetPathSeparator()
{
    Path_typeof()->Init();
    return ':';
}

// private static char GetVolumeSeparatorChar() [static] :275
char16_t Path::GetVolumeSeparatorChar()
{
    Path_typeof()->Init();
    return '/';
}

// private static bool IsDirectorySeparator(char ch) [static] :16
bool Path::IsDirectorySeparator(char16_t ch)
{
    Path_typeof()->Init();
    return (ch == Path::DirectorySeparatorChar_) || (ch == Path::AltDirectorySeparatorChar_);
}

// public static bool IsPathRooted(string path) [static] :213
bool Path::IsPathRooted(uString* path)
{
    Path_typeof()->Init();

    if (::g::Uno::String::IsNullOrEmpty(path))
        return false;

    if (Path::IsDirectorySeparator(uPtr(path)->Item(0)))
        return true;

    return false;
}

// private static string NormalizePathSeparators(string path) [static] :93
uString* Path::NormalizePathSeparators(uString* path)
{
    Path_typeof()->Init();
    int32_t length = uPtr(path)->Length();
    int32_t pos = 0;
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();

    for (; pos < length; ++pos)
    {
        char16_t ch = uPtr(path)->Item(pos);

        if (!Path::IsDirectorySeparator(ch))
        {
            uPtr(sb)->Append(ch);
            continue;
        }

        while (((pos + 1) < length) && Path::IsDirectorySeparator(path->Item(pos + 1)))
            pos++;

        uPtr(sb)->Append(Path::DirectorySeparatorChar_);
    }

    return sb->ToString();
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
    type->fp_Dispose1 = Stream__Dispose1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Stream__Dispose_fn;
    return type;
}

// protected generated Stream() :7
void Stream__ctor__fn(Stream* __this)
{
    __this->ctor_();
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

// protected generated Stream() [instance] :7
void Stream::ctor_()
{
}

// public void Close() [instance] :63
void Stream::Close()
{
    Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(this);
}

// public void Dispose() [instance] :69
void Stream::Dispose()
{
    Close();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/StreamReader.uno
// --------------------------------------------------------------------------

// public sealed class StreamReader :7
// {
static void StreamReader_build(uType* type)
{
    ::STRINGS[38] = uString::Const("StreamReader");
    ::TYPES[1] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[4] = ::g::Uno::Char_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextReader_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::Stream_typeof(), offsetof(StreamReader, _stream), 0,
        ::g::Uno::Text::Decoder_typeof(), offsetof(StreamReader, _decoder), 0,
        ::TYPES[1/*byte[]*/], offsetof(StreamReader, _byteBuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(StreamReader, _byteLen), 0,
        ::TYPES[4/*char[]*/], offsetof(StreamReader, _charBuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(StreamReader, _charPos), 0,
        ::g::Uno::Int_typeof(), offsetof(StreamReader, _charLen), 0);
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
    if (__this->_stream == NULL)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[38/*"StreamReader"*/]));

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
    if (__this->_stream == NULL)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[38/*"StreamReader"*/]));

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
    ctor_();
    _stream = stream;
    _decoder = uPtr(::g::Uno::Text::Encoding::UTF8())->GetDecoder();
    _byteBuffer = uArray::New(::TYPES[1/*byte[]*/], 256);
    _byteLen = 0;
    _charBuffer = uArray::New(::TYPES[4/*char[]*/], 256);
    _charPos = 0;
    _charLen = 0;
}

// private void ReadBuffer() [instance] :144
void StreamReader::ReadBuffer()
{
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
    ::g::Uno::Text::StringBuilder* stringBuilder = ::g::Uno::Text::StringBuilder::New1();

    if (_charLen == 0)
        ReadBuffer();

    while (_charLen != 0)
    {
        int32_t count = _charLen - _charPos;
        uArray* array = uArray::New(::TYPES[4/*char[]*/], count);

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
    ::TYPES[1] = ::g::Uno::Byte_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextWriter_type, interface0));
    type->SetFields(1,
        ::g::Uno::IO::Stream_typeof(), offsetof(StreamWriter, _stream), 0,
        ::TYPES[1/*byte[]*/], offsetof(StreamWriter, _buffer), 0,
        ::g::Uno::Int_typeof(), offsetof(StreamWriter, _index), 0);
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
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::TextWriter*, bool*))StreamWriter__Dispose1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::TextWriter__Dispose_fn;
    return type;
}

// public StreamWriter(Uno.IO.Stream stream) :24
void StreamWriter__ctor_1_fn(StreamWriter* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_1(stream);
}

// protected override sealed void Dispose(bool disposing) :32
void StreamWriter__Dispose1_fn(StreamWriter* __this, bool* disposing)
{
    bool disposing_ = *disposing;
    __this->Flush();

    if (disposing_ && (__this->_stream != NULL))
        uPtr(__this->_stream)->Close();

    ::g::Uno::IO::TextWriter__Dispose1_fn(__this, uCRef(disposing_));
}

// public void Flush() :98
void StreamWriter__Flush_fn(StreamWriter* __this)
{
    __this->Flush();
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

// public void Write(string value) :74
void StreamWriter__Write9_fn(StreamWriter* __this, uString* value)
{
    __this->Write9(value);
}

// public StreamWriter(Uno.IO.Stream stream) [instance] :24
void StreamWriter::ctor_1(::g::Uno::IO::Stream* stream)
{
    ctor_();
    _stream = stream;
    _buffer = uArray::New(::TYPES[1/*byte[]*/], 256);
    _index = 0;
}

// public void Flush() [instance] :98
void StreamWriter::Flush()
{
    if (_index != 0)
    {
        uPtr(_stream)->Write(_buffer, 0, _index);
        _index = 0;
    }

    uPtr(_stream)->Flush();
}

// private void Write(byte[] array, int index, int count) [instance] :80
void StreamWriter::Write13(uArray* array, int32_t index, int32_t count)
{
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

// public void Write(string value) [instance] :74
void StreamWriter::Write9(uString* value)
{
    uArray* array = ::g::Uno::Text::Utf8::GetBytes(value);
    Write13(array, 0, uPtr(array)->Length());
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
    ::STRINGS[39] = uString::Const("StringReader");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextReader_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(StringReader, _string), 0,
        ::g::Uno::Int_typeof(), offsetof(StringReader, _index), 0,
        ::g::Uno::Int_typeof(), offsetof(StringReader, _length), 0);
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
    if (::g::Uno::String::op_Equality(__this->_string, NULL))
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[39/*"StringReader"*/]));

    if (__this->_index == __this->_length)
        return *__retval = -1, void();

    return *__retval = (int32_t)uPtr(__this->_string)->Item(__this->_index), void();
}

// public override sealed int Read() :39
void StringReader__Read_fn(StringReader* __this, int32_t* __retval)
{
    if (::g::Uno::String::op_Equality(__this->_string, NULL))
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[39/*"StringReader"*/]));

    if (__this->_index == __this->_length)
        return *__retval = -1, void();

    return *__retval = (int32_t)uPtr(__this->_string)->Item(__this->_index++), void();
}

// public StringReader(string text) [instance] :12
void StringReader::ctor_1(uString* text)
{
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

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/TextReader.uno
// ------------------------------------------------------------------------

// public abstract class TextReader :8
// {
static void TextReader_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Char_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextReader_type, interface0));
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
    Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(this);
}

// public string ReadLine() [instance] :95
uString* TextReader::ReadLine()
{
    ::g::Uno::Collections::List* buffer = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[10/*Uno.Collections.List<char>*/], 16);
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
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextWriter_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(TextWriter, _newline), 0);
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
    type->fp_Dispose1 = TextWriter__Dispose1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TextWriter__Dispose_fn;
    return type;
}

// protected generated TextWriter() :7
void TextWriter__ctor__fn(TextWriter* __this)
{
    __this->ctor_();
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

// protected generated TextWriter() [instance] :7
void TextWriter::ctor_()
{
    _newline = ::g::Uno::Environment::NewLine();
}

// public void Dispose() [instance] :19
void TextWriter::Dispose()
{
    Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(this);
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
