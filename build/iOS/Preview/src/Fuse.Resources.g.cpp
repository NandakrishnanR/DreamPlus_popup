// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Http.HttpLoader.h>
#include <Experimental.Http.HttpResponseHeader.h>
#include <Experimental.TextureLoader.TextureLoader.h>
#include <Fuse.AppBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Node.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.Resources.DisposalPolicy.h>
#include <Fuse.Resources.DisposalRequest.h>
#include <Fuse.Resources.Exif.ExifData.h>
#include <Fuse.Resources.Exif.ImageOrientation.h>
#include <Fuse.Resources.ExpirationDisposalPolicy.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.FileImageSourceCache.h>
#include <Fuse.Resources.FileImageSourceImpl.BackgroundLoad.h>
#include <Fuse.Resources.FileImageSourceImpl.h>
#include <Fuse.Resources.FileResource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.HttpImageSourceCache.h>
#include <Fuse.Resources.HttpImageSourceImpl.BackgroundLoad.h>
#include <Fuse.Resources.HttpImageSourceImpl.h>
#include <Fuse.Resources.IDeferredDisposable.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.ImageSourceChangedArgs.h>
#include <Fuse.Resources.ImageSourceErrorArgs.h>
#include <Fuse.Resources.ImageSourceErrorHandler.h>
#include <Fuse.Resources.ImageSourceState.h>
#include <Fuse.Resources.IMemoryResource.h>
#include <Fuse.Resources.ISoftDisposable.h>
#include <Fuse.Resources.LoadingImageSource.CleanupReason.h>
#include <Fuse.Resources.LoadingImageSource.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Resources.MultiDensityImageSource.h>
#include <Fuse.Resources.PolicyDeferredDisposable.h>
#include <Fuse.Resources.ProxyImageSource.h>
#include <Fuse.Resources.ResourceBool.h>
#include <Fuse.Resources.ResourceFloat.h>
#include <Fuse.Resources.ResourceFloat2.h>
#include <Fuse.Resources.ResourceFloat3.h>
#include <Fuse.Resources.ResourceFloat4.h>
#include <Fuse.Resources.ResourceObject.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Resources.ResourceSetter-1.h>
#include <Fuse.Resources.ResourceString.h>
#include <Fuse.Resources.RetainDisposalPolicy.h>
#include <Fuse.Resources.SystemFileSource.h>
#include <Fuse.Resources.TextureImageSource.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <OpenGL.GL.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler1-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.File.h>
#include <Uno.IO.FileStream.h>
#include <Uno.IO.Stream.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.WeakReference-1.h>
static uString* STRINGS[6];
static uType* TYPES[27];

namespace g{
namespace Fuse{
namespace Resources{

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/HttpImageSource.uno
// -------------------------------------------------------------------------------

// private sealed class HttpImageSourceImpl.BackgroundLoad :160
// {
static void HttpImageSourceImpl__BackgroundLoad_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::GraphicsWorker_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(HttpImageSourceImpl__BackgroundLoad, _data), 0,
        ::g::Uno::String_typeof(), offsetof(HttpImageSourceImpl__BackgroundLoad, _contentType), 0,
        ::TYPES[2/*Uno.Action<texture2D>*/], offsetof(HttpImageSourceImpl__BackgroundLoad, _done), 0,
        ::g::Uno::Action1_typeof()->MakeType(::TYPES[1/*Uno.Exception*/], NULL), offsetof(HttpImageSourceImpl__BackgroundLoad, _fail), 0,
        ::TYPES[1/*Uno.Exception*/], offsetof(HttpImageSourceImpl__BackgroundLoad, _exception), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(HttpImageSourceImpl__BackgroundLoad, _tex), 0);
}

uType* HttpImageSourceImpl__BackgroundLoad_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(HttpImageSourceImpl__BackgroundLoad);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.HttpImageSourceImpl.BackgroundLoad", options);
    type->fp_build_ = HttpImageSourceImpl__BackgroundLoad_build;
    return type;
}

// public BackgroundLoad(byte[] data, string contentType, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) :167
void HttpImageSourceImpl__BackgroundLoad__ctor__fn(HttpImageSourceImpl__BackgroundLoad* __this, uArray* data, uString* contentType, uDelegate* done, uDelegate* fail)
{
    __this->ctor_(data, contentType, done, fail);
}

// private void GWDoneCallback(texture2D tex) :190
void HttpImageSourceImpl__BackgroundLoad__GWDoneCallback_fn(HttpImageSourceImpl__BackgroundLoad* __this, ::g::Uno::Graphics::Texture2D* tex)
{
    __this->GWDoneCallback(tex);
}

// public BackgroundLoad New(byte[] data, string contentType, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) :167
void HttpImageSourceImpl__BackgroundLoad__New1_fn(uArray* data, uString* contentType, uDelegate* done, uDelegate* fail, HttpImageSourceImpl__BackgroundLoad** __retval)
{
    *__retval = HttpImageSourceImpl__BackgroundLoad::New1(data, contentType, done, fail);
}

// public void Run() :176
void HttpImageSourceImpl__BackgroundLoad__Run_fn(HttpImageSourceImpl__BackgroundLoad* __this)
{
    __this->Run();
}

// private void UIDoneCallback() :199
void HttpImageSourceImpl__BackgroundLoad__UIDoneCallback_fn(HttpImageSourceImpl__BackgroundLoad* __this)
{
    __this->UIDoneCallback();
}

// private void UIFailCallback() :204
void HttpImageSourceImpl__BackgroundLoad__UIFailCallback_fn(HttpImageSourceImpl__BackgroundLoad* __this)
{
    __this->UIFailCallback();
}

// public BackgroundLoad(byte[] data, string contentType, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) [instance] :167
void HttpImageSourceImpl__BackgroundLoad::ctor_(uArray* data, uString* contentType, uDelegate* done, uDelegate* fail)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl.BackgroundLoad", ".ctor(byte[],string,Uno.Action<texture2D>,Uno.Action<Uno.Exception>)");
    _data = data;
    _contentType = contentType;
    _done = done;
    _fail = fail;
    ::g::Fuse::GraphicsWorker::Dispatch(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)HttpImageSourceImpl__BackgroundLoad__Run_fn, this));
}

// private void GWDoneCallback(texture2D tex) [instance] :190
void HttpImageSourceImpl__BackgroundLoad::GWDoneCallback(::g::Uno::Graphics::Texture2D* tex)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl.BackgroundLoad", "GWDoneCallback(texture2D)");
    ::g::OpenGL::GL::Finish();
    _tex = tex;
    ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)HttpImageSourceImpl__BackgroundLoad__UIDoneCallback_fn, this), 0);
}

// public void Run() [instance] :176
void HttpImageSourceImpl__BackgroundLoad::Run()
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl.BackgroundLoad", "Run()");

    try
    {
        {
            ::g::Experimental::TextureLoader::TextureLoader::ByteArrayToTexture2DContentType(::g::Uno::Buffer::New1(_data), _contentType, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)HttpImageSourceImpl__BackgroundLoad__GWDoneCallback_fn, this));
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        _exception = e;
        ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)HttpImageSourceImpl__BackgroundLoad__UIFailCallback_fn, this), 0);
    }
}

// private void UIDoneCallback() [instance] :199
void HttpImageSourceImpl__BackgroundLoad::UIDoneCallback()
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl.BackgroundLoad", "UIDoneCallback()");
    uPtr(_done)->InvokeVoid(_tex);
}

// private void UIFailCallback() [instance] :204
void HttpImageSourceImpl__BackgroundLoad::UIFailCallback()
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl.BackgroundLoad", "UIFailCallback()");
    ::g::Uno::Exception* e = _exception;
    _exception = NULL;
    uPtr(_fail)->InvokeVoid(e);
}

// public BackgroundLoad New(byte[] data, string contentType, Uno.Action<texture2D> done, Uno.Action<Uno.Exception> fail) [static] :167
HttpImageSourceImpl__BackgroundLoad* HttpImageSourceImpl__BackgroundLoad::New1(uArray* data, uString* contentType, uDelegate* done, uDelegate* fail)
{
    HttpImageSourceImpl__BackgroundLoad* obj1 = (HttpImageSourceImpl__BackgroundLoad*)uNew(HttpImageSourceImpl__BackgroundLoad_typeof());
    obj1->ctor_(data, contentType, done, fail);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/FileImageSource.uno
// -------------------------------------------------------------------------------

// private sealed class FileImageSourceImpl.BackgroundLoad :243
// {
static void FileImageSourceImpl__BackgroundLoad_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::GraphicsWorker_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(FileImageSourceImpl__BackgroundLoad, _file), 0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), NULL), offsetof(FileImageSourceImpl__BackgroundLoad, _done), 0,
        ::g::Uno::Action1_typeof()->MakeType(::TYPES[1/*Uno.Exception*/], NULL), offsetof(FileImageSourceImpl__BackgroundLoad, _fail), 0,
        ::TYPES[1/*Uno.Exception*/], offsetof(FileImageSourceImpl__BackgroundLoad, _exception), 0,
        ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), offsetof(FileImageSourceImpl__BackgroundLoad, _orientation), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(FileImageSourceImpl__BackgroundLoad, _tex), 0);
}

uType* FileImageSourceImpl__BackgroundLoad_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(FileImageSourceImpl__BackgroundLoad);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.FileImageSourceImpl.BackgroundLoad", options);
    type->fp_build_ = FileImageSourceImpl__BackgroundLoad_build;
    return type;
}

// public BackgroundLoad(Uno.UX.FileSource file, Uno.Action<texture2D, Fuse.Resources.Exif.ImageOrientation> done, Uno.Action<Uno.Exception> fail) :251
void FileImageSourceImpl__BackgroundLoad__ctor__fn(FileImageSourceImpl__BackgroundLoad* __this, ::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail)
{
    __this->ctor_(file, done, fail);
}

// private void GWDoneCallback(texture2D tex) :275
void FileImageSourceImpl__BackgroundLoad__GWDoneCallback_fn(FileImageSourceImpl__BackgroundLoad* __this, ::g::Uno::Graphics::Texture2D* tex)
{
    __this->GWDoneCallback(tex);
}

// public BackgroundLoad New(Uno.UX.FileSource file, Uno.Action<texture2D, Fuse.Resources.Exif.ImageOrientation> done, Uno.Action<Uno.Exception> fail) :251
void FileImageSourceImpl__BackgroundLoad__New1_fn(::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail, FileImageSourceImpl__BackgroundLoad** __retval)
{
    *__retval = FileImageSourceImpl__BackgroundLoad::New1(file, done, fail);
}

// public void Run() :259
void FileImageSourceImpl__BackgroundLoad__Run_fn(FileImageSourceImpl__BackgroundLoad* __this)
{
    __this->Run();
}

// private void UIDoneCallback() :284
void FileImageSourceImpl__BackgroundLoad__UIDoneCallback_fn(FileImageSourceImpl__BackgroundLoad* __this)
{
    __this->UIDoneCallback();
}

// private void UIFailCallback() :289
void FileImageSourceImpl__BackgroundLoad__UIFailCallback_fn(FileImageSourceImpl__BackgroundLoad* __this)
{
    __this->UIFailCallback();
}

// public BackgroundLoad(Uno.UX.FileSource file, Uno.Action<texture2D, Fuse.Resources.Exif.ImageOrientation> done, Uno.Action<Uno.Exception> fail) [instance] :251
void FileImageSourceImpl__BackgroundLoad::ctor_(::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail)
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl.BackgroundLoad", ".ctor(Uno.UX.FileSource,Uno.Action<texture2D, Fuse.Resources.Exif.ImageOrientation>,Uno.Action<Uno.Exception>)");
    _file = file;
    _done = done;
    _fail = fail;
    ::g::Fuse::GraphicsWorker::Dispatch(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)FileImageSourceImpl__BackgroundLoad__Run_fn, this));
}

// private void GWDoneCallback(texture2D tex) [instance] :275
void FileImageSourceImpl__BackgroundLoad::GWDoneCallback(::g::Uno::Graphics::Texture2D* tex)
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl.BackgroundLoad", "GWDoneCallback(texture2D)");
    ::g::OpenGL::GL::Finish();
    _tex = tex;
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)FileImageSourceImpl__BackgroundLoad__UIDoneCallback_fn, this));
}

// public void Run() [instance] :259
void FileImageSourceImpl__BackgroundLoad::Run()
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl.BackgroundLoad", "Run()");

    try
    {
        {
            uArray* data = uPtr(_file)->ReadAllBytes();
            _orientation = ::g::Fuse::Resources::Exif::ExifData__FromByteArray(data).Orientation;
            ::g::Experimental::TextureLoader::TextureLoader::ByteArrayToTexture2DFilename(::g::Uno::Buffer::New1(data), uPtr(_file)->Name, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)FileImageSourceImpl__BackgroundLoad__GWDoneCallback_fn, this));
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        _exception = e;
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)FileImageSourceImpl__BackgroundLoad__UIFailCallback_fn, this));
    }
}

// private void UIDoneCallback() [instance] :284
void FileImageSourceImpl__BackgroundLoad::UIDoneCallback()
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl.BackgroundLoad", "UIDoneCallback()");
    uPtr(_done)->Invoke(2, (::g::Uno::Graphics::Texture2D*)_tex, uCRef<int32_t>(_orientation));
}

// private void UIFailCallback() [instance] :289
void FileImageSourceImpl__BackgroundLoad::UIFailCallback()
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl.BackgroundLoad", "UIFailCallback()");
    ::g::Uno::Exception* e = _exception;
    _exception = NULL;
    uPtr(_fail)->InvokeVoid(e);
}

// public BackgroundLoad New(Uno.UX.FileSource file, Uno.Action<texture2D, Fuse.Resources.Exif.ImageOrientation> done, Uno.Action<Uno.Exception> fail) [static] :251
FileImageSourceImpl__BackgroundLoad* FileImageSourceImpl__BackgroundLoad::New1(::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail)
{
    FileImageSourceImpl__BackgroundLoad* obj1 = (FileImageSourceImpl__BackgroundLoad*)uNew(FileImageSourceImpl__BackgroundLoad_typeof());
    obj1->ctor_(file, done, fail);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/LoadingImageSource.uno
// ----------------------------------------------------------------------------------

// protected enum LoadingImageSource.CleanupReason :10
uEnumType* LoadingImageSource__CleanupReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Resources.LoadingImageSource.CleanupReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Normal", 0LL,
        "Failed", 1LL,
        "Disposed", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Resources/DisposalManager.uno
// -----------------------------------------------------------------------------

// internal static class DisposalManager :7
// {
// static generated DisposalManager() :7
static void DisposalManager__cctor__fn(uType* __type)
{
    DisposalManager::_items_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<Fuse.Resources.IMemoryResource>*/]));
    DisposalManager::_softDisposables_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Fuse.Resources.ISoftDisposable>*/]));
}

static void DisposalManager_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Resources::IMemoryResource_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Resources::ISoftDisposable_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Resources::IMemoryResource_typeof();
    ::TYPES[6] = ::g::Fuse::Resources::ISoftDisposable_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(0,
        ::TYPES[3/*Uno.Collections.List<Fuse.Resources.IMemoryResource>*/], (uintptr_t)&DisposalManager::_items_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&DisposalManager::_actionAdded_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&DisposalManager::_disposeAt_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Collections.List<Fuse.Resources.ISoftDisposable>*/], (uintptr_t)&DisposalManager::_softDisposables_, uFieldFlagsStatic);
}

uClassType* DisposalManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.DisposalManager", options);
    type->fp_build_ = DisposalManager_build;
    type->fp_cctor_ = DisposalManager__cctor__fn;
    return type;
}

// public static void Add(Fuse.Resources.IMemoryResource item) :18
void DisposalManager__Add_fn(uObject* item)
{
    DisposalManager::Add(item);
}

// public static void Add(Fuse.Resources.ISoftDisposable item) :101
void DisposalManager__Add1_fn(uObject* item)
{
    DisposalManager::Add1(item);
}

// public static void Clean(Fuse.Resources.DisposalRequest dr) :75
void DisposalManager__Clean_fn(int32_t* dr)
{
    DisposalManager::Clean(*dr);
}

// public static void Remove(Fuse.Resources.IMemoryResource item) :29
void DisposalManager__Remove_fn(uObject* item)
{
    DisposalManager::Remove(item);
}

// public static void Remove(Fuse.Resources.ISoftDisposable item) :106
void DisposalManager__Remove1_fn(uObject* item)
{
    DisposalManager::Remove1(item);
}

// private static void Update() :54
void DisposalManager__Update_fn()
{
    DisposalManager::Update();
}

// private static void VerifyAttach() :37
void DisposalManager__VerifyAttach_fn()
{
    DisposalManager::VerifyAttach();
}

uSStrong< ::g::Uno::Collections::List*> DisposalManager::_items_;
bool DisposalManager::_actionAdded_;
int32_t DisposalManager::_disposeAt_;
uSStrong< ::g::Uno::Collections::List*> DisposalManager::_softDisposables_;

// public static void Add(Fuse.Resources.IMemoryResource item) [static] :18
void DisposalManager::Add(uObject* item)
{
    uStackFrame __("Fuse.Resources.DisposalManager", "Add(Fuse.Resources.IMemoryResource)");
    DisposalManager_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(DisposalManager::_items_), item);
    DisposalManager::VerifyAttach();
}

// public static void Add(Fuse.Resources.ISoftDisposable item) [static] :101
void DisposalManager::Add1(uObject* item)
{
    uStackFrame __("Fuse.Resources.DisposalManager", "Add(Fuse.Resources.ISoftDisposable)");
    DisposalManager_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(DisposalManager::_softDisposables_), item);
}

// public static void Clean(Fuse.Resources.DisposalRequest dr) [static] :75
void DisposalManager::Clean(int32_t dr)
{
    uStackFrame __("Fuse.Resources.DisposalManager", "Clean(Fuse.Resources.DisposalRequest)");
    DisposalManager_typeof()->Init();
    uObject* ret1;
    uObject* ret2;

    for (int32_t i = uPtr(DisposalManager::_items_)->Count() - 1; i >= 0; --i)
    {
        if (i >= uPtr(DisposalManager::_items_)->Count())
            continue;

        uObject* item = (::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_items_), uCRef<int32_t>(i), &ret1), ret1);

        if (!uPtr(::g::Fuse::Resources::IMemoryResource::MemoryPolicy(uInterface(uPtr(item), ::TYPES[5/*Fuse.Resources.IMemoryResource*/])))->ShouldSoftDispose(dr, item))
            continue;

        uPtr(DisposalManager::_items_)->RemoveAt(i);
        ::g::Fuse::Resources::IMemoryResource::SoftDispose(uInterface(uPtr(item), ::TYPES[5/*Fuse.Resources.IMemoryResource*/]));
    }

    if ((dr == 1) || (dr == 2))

        for (int32_t i1 = 0; i1 < uPtr(DisposalManager::_softDisposables_)->Count(); ++i1)
            ::g::Fuse::Resources::ISoftDisposable::SoftDispose(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_softDisposables_), uCRef<int32_t>(i1), &ret2), ret2)), ::TYPES[6/*Fuse.Resources.ISoftDisposable*/]));
}

// public static void Remove(Fuse.Resources.IMemoryResource item) [static] :29
void DisposalManager::Remove(uObject* item)
{
    uStackFrame __("Fuse.Resources.DisposalManager", "Remove(Fuse.Resources.IMemoryResource)");
    DisposalManager_typeof()->Init();
    bool ret3;

    if ((::g::Uno::Collections::List__Remove_fn(uPtr(DisposalManager::_items_), item, &ret3), ret3))
        DisposalManager::VerifyAttach();
}

// public static void Remove(Fuse.Resources.ISoftDisposable item) [static] :106
void DisposalManager::Remove1(uObject* item)
{
    uStackFrame __("Fuse.Resources.DisposalManager", "Remove(Fuse.Resources.ISoftDisposable)");
    DisposalManager_typeof()->Init();
    bool ret4;
    ::g::Uno::Collections::List__Remove_fn(uPtr(DisposalManager::_softDisposables_), item, &ret4);
}

// private static void Update() [static] :54
void DisposalManager::Update()
{
    uStackFrame __("Fuse.Resources.DisposalManager", "Update()");
    DisposalManager_typeof()->Init();
    uObject* ret5;

    for (int32_t i = 0; i < 2; ++i)
    {
        if (uPtr(DisposalManager::_items_)->Count() == 0)
            return;

        DisposalManager::_disposeAt_++;

        if (DisposalManager::_disposeAt_ >= uPtr(DisposalManager::_items_)->Count())
            DisposalManager::_disposeAt_ = 0;

        uObject* item = (::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_items_), uCRef<int32_t>(DisposalManager::_disposeAt_), &ret5), ret5);

        if (!uPtr(::g::Fuse::Resources::IMemoryResource::MemoryPolicy(uInterface(uPtr(item), ::TYPES[5/*Fuse.Resources.IMemoryResource*/])))->ShouldSoftDispose(0, item))
            continue;

        uPtr(DisposalManager::_items_)->RemoveAt(DisposalManager::_disposeAt_);
        ::g::Fuse::Resources::IMemoryResource::SoftDispose(uInterface(uPtr(item), ::TYPES[5/*Fuse.Resources.IMemoryResource*/]));
    }
}

// private static void VerifyAttach() [static] :37
void DisposalManager::VerifyAttach()
{
    uStackFrame __("Fuse.Resources.DisposalManager", "VerifyAttach()");
    DisposalManager_typeof()->Init();
    bool on = uPtr(DisposalManager::_items_)->Count() > 0;

    if (on == DisposalManager::_actionAdded_)
        return;

    if (on)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)DisposalManager__Update_fn), 0);
    else
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)DisposalManager__Update_fn), 0);

    DisposalManager::_actionAdded_ = on;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Resources/DisposalPolicy.uno
// ----------------------------------------------------------------------------

// internal abstract class DisposalPolicy :7
// {
static void DisposalPolicy_build(uType* type)
{
}

DisposalPolicy_type* DisposalPolicy_typeof()
{
    static uSStrong<DisposalPolicy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(DisposalPolicy);
    options.TypeSize = sizeof(DisposalPolicy_type);
    type = (DisposalPolicy_type*)uClassType::New("Fuse.Resources.DisposalPolicy", options);
    type->fp_build_ = DisposalPolicy_build;
    return type;
}

// protected generated DisposalPolicy() :7
void DisposalPolicy__ctor__fn(DisposalPolicy* __this)
{
    __this->ctor_();
}

// protected generated DisposalPolicy() [instance] :7
void DisposalPolicy::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Resources/IDeferredDisposable.uno
// ---------------------------------------------------------------------------------

// public enum DisposalRequest :6
uEnumType* DisposalRequest_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Resources.DisposalRequest", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Regular", 0LL,
        "Background", 1LL,
        "LowMemory", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Resources/DisposalPolicy.uno
// ----------------------------------------------------------------------------

// internal sealed class ExpirationDisposalPolicy :14
// {
static void ExpirationDisposalPolicy_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(ExpirationDisposalPolicy, lastUsedFrameTime), 0,
        ::g::Uno::Double_typeof(), offsetof(ExpirationDisposalPolicy, _Timeout), 0);
}

::g::Fuse::Resources::DisposalPolicy_type* ExpirationDisposalPolicy_typeof()
{
    static uSStrong< ::g::Fuse::Resources::DisposalPolicy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::DisposalPolicy_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ExpirationDisposalPolicy);
    options.TypeSize = sizeof(::g::Fuse::Resources::DisposalPolicy_type);
    type = (::g::Fuse::Resources::DisposalPolicy_type*)uClassType::New("Fuse.Resources.ExpirationDisposalPolicy", options);
    type->fp_build_ = ExpirationDisposalPolicy_build;
    type->fp_ctor_ = (void*)ExpirationDisposalPolicy__New1_fn;
    type->fp_CanDispose = (void(*)(::g::Fuse::Resources::DisposalPolicy*, int32_t*, bool*, bool*))ExpirationDisposalPolicy__CanDispose_fn;
    type->fp_Clone = (void(*)(::g::Fuse::Resources::DisposalPolicy*, ::g::Fuse::Resources::DisposalPolicy**))ExpirationDisposalPolicy__Clone_fn;
    type->fp_MarkUsed = (void(*)(::g::Fuse::Resources::DisposalPolicy*))ExpirationDisposalPolicy__MarkUsed_fn;
    return type;
}

// public generated ExpirationDisposalPolicy() :14
void ExpirationDisposalPolicy__ctor_1_fn(ExpirationDisposalPolicy* __this)
{
    __this->ctor_1();
}

// public override sealed bool CanDispose(Fuse.Resources.DisposalRequest dr, bool pinned) :25
void ExpirationDisposalPolicy__CanDispose_fn(ExpirationDisposalPolicy* __this, int32_t* dr, bool* pinned, bool* __retval)
{
    bool pinned_ = *pinned;
    int32_t dr_ = *dr;

    if (!pinned_ && (__this->Timeout() > 0.0))
    {
        double elapsed = ::g::Fuse::Time::FrameTime() - __this->lastUsedFrameTime;

        if (elapsed > __this->Timeout())
            return *__retval = true, void();
    }

    return *__retval = dr_ != 0, void();
}

// public override sealed Fuse.Resources.DisposalPolicy Clone() :38
void ExpirationDisposalPolicy__Clone_fn(ExpirationDisposalPolicy* __this, ::g::Fuse::Resources::DisposalPolicy** __retval)
{
    ExpirationDisposalPolicy* p = ExpirationDisposalPolicy::New1();
    p->Timeout(__this->Timeout());
    return *__retval = p, void();
}

// public override sealed void MarkUsed() :20
void ExpirationDisposalPolicy__MarkUsed_fn(ExpirationDisposalPolicy* __this)
{
    __this->lastUsedFrameTime = ::g::Fuse::Time::FrameTime();
}

// public generated ExpirationDisposalPolicy New() :14
void ExpirationDisposalPolicy__New1_fn(ExpirationDisposalPolicy** __retval)
{
    *__retval = ExpirationDisposalPolicy::New1();
}

// public generated double get_Timeout() :18
void ExpirationDisposalPolicy__get_Timeout_fn(ExpirationDisposalPolicy* __this, double* __retval)
{
    *__retval = __this->Timeout();
}

// public generated void set_Timeout(double value) :18
void ExpirationDisposalPolicy__set_Timeout_fn(ExpirationDisposalPolicy* __this, double* value)
{
    __this->Timeout(*value);
}

// public generated ExpirationDisposalPolicy() [instance] :14
void ExpirationDisposalPolicy::ctor_1()
{
    ctor_();
}

// public generated double get_Timeout() [instance] :18
double ExpirationDisposalPolicy::Timeout()
{
    return _Timeout;
}

// public generated void set_Timeout(double value) [instance] :18
void ExpirationDisposalPolicy::Timeout(double value)
{
    _Timeout = value;
}

// public generated ExpirationDisposalPolicy New() [static] :14
ExpirationDisposalPolicy* ExpirationDisposalPolicy::New1()
{
    ExpirationDisposalPolicy* obj1 = (ExpirationDisposalPolicy*)uNew(ExpirationDisposalPolicy_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/FileImageSource.uno
// -------------------------------------------------------------------------------

// public sealed class FileImageSource :67
// {
static void FileImageSource_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[8] = ::g::Fuse::Resources::FileImageSourceImpl_typeof();
    type->SetDependencies(
        ::g::Fuse::Resources::FileImageSourceCache_typeof());
    type->SetFields(5,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(FileImageSource, _proxy), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("set_DefaultPolicy", NULL, (void*)FileImageSource__set_DefaultPolicy_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::MemoryPolicy_typeof()),
        new uFunction("get_Density", NULL, (void*)FileImageSource__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Density", NULL, (void*)FileImageSource__set_Density_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_File", NULL, (void*)FileImageSource__get_File_fn, 0, false, ::TYPES[7/*Uno.UX.FileSource*/], 0),
        new uFunction("set_File", NULL, (void*)FileImageSource__set_File_fn, 0, false, uVoid_typeof(), 1, ::TYPES[7/*Uno.UX.FileSource*/]),
        new uFunction(".ctor", NULL, (void*)FileImageSource__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)FileImageSource__New3_fn, 0, true, type, 1, ::TYPES[7/*Uno.UX.FileSource*/]),
        new uFunction("get_Policy", NULL, (void*)FileImageSource__get_Policy_fn, 0, false, ::g::Fuse::Resources::MemoryPolicy_typeof(), 0),
        new uFunction("set_Policy", NULL, (void*)FileImageSource__set_Policy_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::MemoryPolicy_typeof()));
}

::g::Fuse::Resources::ImageSource_type* FileImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FileImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.FileImageSource", options);
    type->fp_build_ = FileImageSource_build;
    type->fp_ctor_ = (void*)FileImageSource__New2_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))FileImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))FileImageSource__OnPinChanged_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))FileImageSource__get_Orientation_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))FileImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))FileImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))FileImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))FileImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))FileImageSource__get_State_fn;
    return type;
}

// public FileImageSource() :100
void FileImageSource__ctor_2_fn(FileImageSource* __this)
{
    __this->ctor_2();
}

// public FileImageSource(Uno.UX.FileSource file) :94
void FileImageSource__ctor_3_fn(FileImageSource* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_3(file);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) :107
void FileImageSource__set_DefaultPolicy_fn(FileImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->DefaultPolicy(value);
}

// public float get_Density() :138
void FileImageSource__get_Density_fn(FileImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :138
void FileImageSource__set_Density_fn(FileImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public Uno.UX.FileSource get_File() :76
void FileImageSource__get_File_fn(FileImageSource* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :77
void FileImageSource__set_File_fn(FileImageSource* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public override sealed texture2D GetTexture() :131
void FileImageSource__GetTexture_fn(FileImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "GetTexture()");
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// public FileImageSource New() :100
void FileImageSource__New2_fn(FileImageSource** __retval)
{
    *__retval = FileImageSource::New2();
}

// public FileImageSource New(Uno.UX.FileSource file) :94
void FileImageSource__New3_fn(::g::Uno::UX::FileSource* file, FileImageSource** __retval)
{
    *__retval = FileImageSource::New3(file);
}

// protected override sealed void OnPinChanged() :126
void FileImageSource__OnPinChanged_fn(FileImageSource* __this)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "OnPinChanged()");
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation() :127
void FileImageSource__get_Orientation_fn(FileImageSource* __this, int32_t* __retval)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "get_Orientation()");
    return *__retval = uPtr(__this->_proxy)->Orientation(), void();
}

// public override sealed int2 get_PixelSize() :129
void FileImageSource__get_PixelSize_fn(FileImageSource* __this, ::g::Uno::Int2* __retval)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "get_PixelSize()");
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public Fuse.Resources.MemoryPolicy get_Policy() :120
void FileImageSource__get_Policy_fn(FileImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) :121
void FileImageSource__set_Policy_fn(FileImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->Policy(value);
}

// public override sealed void Reload() :132
void FileImageSource__Reload_fn(FileImageSource* __this)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "Reload()");
    uPtr(__this->_proxy)->Reload();
}

// public override sealed float2 get_Size() :128
void FileImageSource__get_Size_fn(FileImageSource* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "get_Size()");
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity() :133
void FileImageSource__get_SizeDensity_fn(FileImageSource* __this, float* __retval)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "get_SizeDensity()");
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :130
void FileImageSource__get_State_fn(FileImageSource* __this, int32_t* __retval)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "get_State()");
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// public FileImageSource() [instance] :100
void FileImageSource::ctor_2()
{
    ctor_1();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
}

// public FileImageSource(Uno.UX.FileSource file) [instance] :94
void FileImageSource::ctor_3(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Resources.FileImageSource", ".ctor(Uno.UX.FileSource)");
    ctor_1();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
    File(file);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) [instance] :107
void FileImageSource::DefaultPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "set_DefaultPolicy(Fuse.Resources.MemoryPolicy)");
    uPtr(_proxy)->DefaultSetPolicy(value);
}

// public float get_Density() [instance] :138
float FileImageSource::Density()
{
    uStackFrame __("Fuse.Resources.FileImageSource", "get_Density()");
    return uPtr(_proxy)->Density();
}

// public void set_Density(float value) [instance] :138
void FileImageSource::Density(float value)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "set_Density(float)");
    uPtr(_proxy)->Density(value);
}

// public Uno.UX.FileSource get_File() [instance] :76
::g::Uno::UX::FileSource* FileImageSource::File()
{
    uStackFrame __("Fuse.Resources.FileImageSource", "get_File()");
    return (uPtr(_proxy)->Impl() == NULL) ? uCast< ::g::Uno::UX::FileSource*>(NULL, ::TYPES[7/*Uno.UX.FileSource*/]) : (::g::Uno::UX::FileSource*)uPtr(uAs< ::g::Fuse::Resources::FileImageSourceImpl*>(uPtr(_proxy)->Impl(), ::TYPES[8/*Fuse.Resources.FileImageSourceImpl*/]))->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :77
void FileImageSource::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "set_File(Uno.UX.FileSource)");
    uPtr(_proxy)->Release();

    if (value == NULL)
        return;

    ::g::Fuse::Resources::FileImageSourceImpl* bf = ::g::Fuse::Resources::FileImageSourceCache::GetFileSource(value);
    uPtr(_proxy)->Attach(bf);
}

// public Fuse.Resources.MemoryPolicy get_Policy() [instance] :120
::g::Fuse::Resources::MemoryPolicy* FileImageSource::Policy()
{
    uStackFrame __("Fuse.Resources.FileImageSource", "get_Policy()");
    return uPtr(_proxy)->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) [instance] :121
void FileImageSource::Policy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uStackFrame __("Fuse.Resources.FileImageSource", "set_Policy(Fuse.Resources.MemoryPolicy)");
    uPtr(_proxy)->Policy(value);
}

// public FileImageSource New() [static] :100
FileImageSource* FileImageSource::New2()
{
    FileImageSource* obj2 = (FileImageSource*)uNew(FileImageSource_typeof());
    obj2->ctor_2();
    return obj2;
}

// public FileImageSource New(Uno.UX.FileSource file) [static] :94
FileImageSource* FileImageSource::New3(::g::Uno::UX::FileSource* file)
{
    FileImageSource* obj1 = (FileImageSource*)uNew(FileImageSource_typeof());
    obj1->ctor_3(file);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/FileImageSource.uno
// -------------------------------------------------------------------------------

// internal static class FileImageSourceCache :11
// {
// static generated FileImageSourceCache() :11
static void FileImageSourceCache__cctor__fn(uType* __type)
{
    FileImageSourceCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<Uno.UX.FileSource, Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>*/]));
}

static void FileImageSourceCache_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::FileImageSourceImpl_typeof(), NULL), NULL);
    ::TYPES[10] = ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::FileImageSourceImpl_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[9/*Uno.Collections.Dictionary<Uno.UX.FileSource, Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>*/], (uintptr_t)&FileImageSourceCache::_cache_, uFieldFlagsStatic);
}

uClassType* FileImageSourceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.FileImageSourceCache", options);
    type->fp_build_ = FileImageSourceCache_build;
    type->fp_cctor_ = FileImageSourceCache__cctor__fn;
    return type;
}

// public static Fuse.Resources.FileImageSourceImpl GetFileSource(Uno.UX.FileSource file) :15
void FileImageSourceCache__GetFileSource_fn(::g::Uno::UX::FileSource* file, ::g::Fuse::Resources::FileImageSourceImpl** __retval)
{
    *__retval = FileImageSourceCache::GetFileSource(file);
}

uSStrong< ::g::Uno::Collections::Dictionary*> FileImageSourceCache::_cache_;

// public static Fuse.Resources.FileImageSourceImpl GetFileSource(Uno.UX.FileSource file) [static] :15
::g::Fuse::Resources::FileImageSourceImpl* FileImageSourceCache::GetFileSource(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Resources.FileImageSourceCache", "GetFileSource(Uno.UX.FileSource)");
    FileImageSourceCache_typeof()->Init();
    bool ret1;
    bool ret2;
    ::g::Uno::WeakReference* value = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(FileImageSourceCache::_cache_), file, (void**)(&value), &ret1), ret1))
    {
        ::g::Fuse::Resources::FileImageSourceImpl* his;

        if (uPtr(value)->TryGetTarget((uObject**)(&his)))
            return his;

        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(FileImageSourceCache::_cache_), file, &ret2);
    }

    ::g::Fuse::Resources::FileImageSourceImpl* nv = ::g::Fuse::Resources::FileImageSourceImpl::New2(file);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(FileImageSourceCache::_cache_), file, (::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[10/*Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>*/], nv));
    return nv;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/FileImageSource.uno
// -------------------------------------------------------------------------------

// internal sealed class FileImageSourceImpl :142
// {
// ~FileImageSourceImpl() :161
static void FileImageSourceImpl__Finalize_fn(FileImageSourceImpl* __this)
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl", "Finalize()");
    uPtr(__this->_file)->remove_DataChanged(uDelegate::New(::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL), (void*)FileImageSourceImpl__OnDataChanged_fn, __this));
}

static void FileImageSourceImpl_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource_type, interface0));
    type->SetFields(13,
        ::g::Uno::UX::FileSource_typeof(), offsetof(FileImageSourceImpl, _file), 0,
        ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), offsetof(FileImageSourceImpl, _orientation), 0);
}

::g::Fuse::Resources::LoadingImageSource_type* FileImageSourceImpl_typeof()
{
    static uSStrong< ::g::Fuse::Resources::LoadingImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::LoadingImageSource_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FileImageSourceImpl);
    options.TypeSize = sizeof(::g::Fuse::Resources::LoadingImageSource_type);
    type = (::g::Fuse::Resources::LoadingImageSource_type*)uClassType::New("Fuse.Resources.FileImageSourceImpl", options);
    type->fp_build_ = FileImageSourceImpl_build;
    type->fp_Finalize = (void(*)(uObject*))FileImageSourceImpl__Finalize_fn;
    type->fp_AttemptLoad = (void(*)(::g::Fuse::Resources::LoadingImageSource*))FileImageSourceImpl__AttemptLoad_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))FileImageSourceImpl__get_Orientation_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// public FileImageSourceImpl(Uno.UX.FileSource file) :152
void FileImageSourceImpl__ctor_3_fn(FileImageSourceImpl* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_3(file);
}

// protected override sealed void AttemptLoad() :215
void FileImageSourceImpl__AttemptLoad_fn(FileImageSourceImpl* __this)
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl", "AttemptLoad()");

    if (uPtr(__this->Policy())->BundlePreload())
    {
        __this->SyncLoad();
        return;
    }

    __this->_loading = true;
    FileImageSourceImpl__BackgroundLoad::New1(__this->_file, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::TYPES[23/*texture2D*/], ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), NULL), (void*)FileImageSourceImpl__SuccessCallback_fn, __this), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::TYPES[1/*Uno.Exception*/], NULL), (void*)FileImageSourceImpl__FailureCallback_fn, __this));
    __this->OnChanged();
}

// private void FailureCallback(Uno.Exception e) :235
void FileImageSourceImpl__FailureCallback_fn(FileImageSourceImpl* __this, ::g::Uno::Exception* e)
{
    __this->FailureCallback(e);
}

// public Uno.UX.FileSource get_File() :149
void FileImageSourceImpl__get_File_fn(FileImageSourceImpl* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public FileImageSourceImpl New(Uno.UX.FileSource file) :152
void FileImageSourceImpl__New2_fn(::g::Uno::UX::FileSource* file, FileImageSourceImpl** __retval)
{
    *__retval = FileImageSourceImpl::New2(file);
}

// private void OnDataChanged(object s, object a) :166
void FileImageSourceImpl__OnDataChanged_fn(FileImageSourceImpl* __this, uObject* s, uObject* a)
{
    __this->OnDataChanged(s, a);
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation() :212
void FileImageSourceImpl__get_Orientation_fn(FileImageSourceImpl* __this, int32_t* __retval)
{
    return *__retval = __this->_orientation, void();
}

// private void SuccessCallback(texture2D texture, Fuse.Resources.Exif.ImageOrientation orientation) :228
void FileImageSourceImpl__SuccessCallback_fn(FileImageSourceImpl* __this, ::g::Uno::Graphics::Texture2D* texture, int32_t* orientation)
{
    __this->SuccessCallback(texture, *orientation);
}

// public void SyncLoad() :171
void FileImageSourceImpl__SyncLoad_fn(FileImageSourceImpl* __this)
{
    __this->SyncLoad();
}

// public FileImageSourceImpl(Uno.UX.FileSource file) [instance] :152
void FileImageSourceImpl::ctor_3(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl", ".ctor(Uno.UX.FileSource)");
    ctor_2();

    if (file == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("file")));

    _file = file;
    uPtr(_file)->add_DataChanged(uDelegate::New(::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL), (void*)FileImageSourceImpl__OnDataChanged_fn, this));
}

// private void FailureCallback(Uno.Exception e) [instance] :235
void FileImageSourceImpl::FailureCallback(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl", "FailureCallback(Uno.Exception)");
    _loading = false;
    Cleanup(1);
    OnError(::g::Uno::String::op_Addition2(uString::Const("Loading image from file failed. "), uPtr(e)->Message()), e);
}

// public Uno.UX.FileSource get_File() [instance] :149
::g::Uno::UX::FileSource* FileImageSourceImpl::File()
{
    return _file;
}

// private void OnDataChanged(object s, object a) [instance] :166
void FileImageSourceImpl::OnDataChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl", "OnDataChanged(object,object)");
    Reload();
}

// private void SuccessCallback(texture2D texture, Fuse.Resources.Exif.ImageOrientation orientation) [instance] :228
void FileImageSourceImpl::SuccessCallback(::g::Uno::Graphics::Texture2D* texture, int32_t orientation)
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl", "SuccessCallback(texture2D,Fuse.Resources.Exif.ImageOrientation)");
    _loading = false;
    _orientation = orientation;
    SetTexture(texture);
}

// public void SyncLoad() [instance] :171
void FileImageSourceImpl::SyncLoad()
{
    uStackFrame __("Fuse.Resources.FileImageSourceImpl", "SyncLoad()");

    if (IsLoaded())
    {
        MarkUsed();
        return;
    }

    try
    {
        {
            uArray* data = uPtr(_file)->ReadAllBytes();
            _orientation = ::g::Fuse::Resources::Exif::ExifData__FromByteArray(data).Orientation;
            ::g::Experimental::TextureLoader::TextureLoader::ByteArrayToTexture2DFilename(::g::Uno::Buffer::New1(data), uPtr(_file)->Name, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)::g::Fuse::Resources::LoadingImageSource__SetTexture_fn, this));
            OnChanged();
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Cleanup(1);
        OnError(::g::Uno::String::op_Addition2(uString::Const("Loading image from file failed. "), uPtr(e)->Message()), e);
    }
}

// public FileImageSourceImpl New(Uno.UX.FileSource file) [static] :152
FileImageSourceImpl* FileImageSourceImpl::New2(::g::Uno::UX::FileSource* file)
{
    FileImageSourceImpl* obj1 = (FileImageSourceImpl*)uNew(FileImageSourceImpl_typeof());
    obj1->ctor_3(file);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Resources/FileResource.uno
// --------------------------------------------------------------------------

// public sealed class FileResource :7
// {
static void FileResource_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::UX::FileSource_typeof(), offsetof(FileResource, _file), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FileResource__New1_fn, 0, true, type, 1, ::g::Uno::UX::FileSource_typeof()));
}

::g::Uno::UX::FileSource_type* FileResource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FileResource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.Resources.FileResource", options);
    type->fp_build_ = FileResource_build;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))FileResource__OpenRead_fn;
    return type;
}

// public FileResource(Uno.UX.FileSource file) :12
void FileResource__ctor_1_fn(FileResource* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_1(file);
}

// public FileResource New(Uno.UX.FileSource file) :12
void FileResource__New1_fn(::g::Uno::UX::FileSource* file, FileResource** __retval)
{
    *__retval = FileResource::New1(file);
}

// public override sealed Uno.IO.Stream OpenRead() :17
void FileResource__OpenRead_fn(FileResource* __this, ::g::Uno::IO::Stream** __retval)
{
    uStackFrame __("Fuse.Resources.FileResource", "OpenRead()");
    return *__retval = uPtr(__this->_file)->OpenRead(), void();
}

// public FileResource(Uno.UX.FileSource file) [instance] :12
void FileResource::ctor_1(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Resources.FileResource", ".ctor(Uno.UX.FileSource)");
    ctor_(uPtr(file)->Name);
    _file = file;
}

// public FileResource New(Uno.UX.FileSource file) [static] :12
FileResource* FileResource::New1(::g::Uno::UX::FileSource* file)
{
    FileResource* obj1 = (FileResource*)uNew(FileResource_typeof());
    obj1->ctor_1(file);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/HttpImageSource.uno
// -------------------------------------------------------------------------------

// public sealed class HttpImageSource :24
// {
static void HttpImageSource_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::TYPES[11] = ::g::Fuse::Resources::HttpImageSourceImpl_typeof();
    type->SetDependencies(
        ::g::Fuse::Resources::HttpImageSourceCache_typeof());
    type->SetFields(5,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(HttpImageSource, _proxy), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("set_DefaultPolicy", NULL, (void*)HttpImageSource__set_DefaultPolicy_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::MemoryPolicy_typeof()),
        new uFunction("get_Density", NULL, (void*)HttpImageSource__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Density", NULL, (void*)HttpImageSource__set_Density_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)HttpImageSource__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)HttpImageSource__New3_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("get_Policy", NULL, (void*)HttpImageSource__get_Policy_fn, 0, false, ::g::Fuse::Resources::MemoryPolicy_typeof(), 0),
        new uFunction("set_Policy", NULL, (void*)HttpImageSource__set_Policy_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::MemoryPolicy_typeof()),
        new uFunction("get_Url", NULL, (void*)HttpImageSource__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)HttpImageSource__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Resources::ImageSource_type* HttpImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(HttpImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.HttpImageSource", options);
    type->fp_build_ = HttpImageSource_build;
    type->fp_ctor_ = (void*)HttpImageSource__New2_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))HttpImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))HttpImageSource__OnPinChanged_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))HttpImageSource__get_Orientation_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))HttpImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))HttpImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))HttpImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))HttpImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))HttpImageSource__get_State_fn;
    return type;
}

// public HttpImageSource() :43
void HttpImageSource__ctor_2_fn(HttpImageSource* __this)
{
    __this->ctor_2();
}

// public HttpImageSource(string url) :48
void HttpImageSource__ctor_3_fn(HttpImageSource* __this, uString* url)
{
    __this->ctor_3(url);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) :54
void HttpImageSource__set_DefaultPolicy_fn(HttpImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->DefaultPolicy(value);
}

// public float get_Density() :70
void HttpImageSource__get_Density_fn(HttpImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :70
void HttpImageSource__set_Density_fn(HttpImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public override sealed texture2D GetTexture() :63
void HttpImageSource__GetTexture_fn(HttpImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "GetTexture()");
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// public HttpImageSource New() :43
void HttpImageSource__New2_fn(HttpImageSource** __retval)
{
    *__retval = HttpImageSource::New2();
}

// public HttpImageSource New(string url) :48
void HttpImageSource__New3_fn(uString* url, HttpImageSource** __retval)
{
    *__retval = HttpImageSource::New3(url);
}

// protected override sealed void OnPinChanged() :57
void HttpImageSource__OnPinChanged_fn(HttpImageSource* __this)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "OnPinChanged()");
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation() :59
void HttpImageSource__get_Orientation_fn(HttpImageSource* __this, int32_t* __retval)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "get_Orientation()");
    return *__retval = uPtr(__this->_proxy)->Orientation(), void();
}

// public override sealed int2 get_PixelSize() :61
void HttpImageSource__get_PixelSize_fn(HttpImageSource* __this, ::g::Uno::Int2* __retval)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "get_PixelSize()");
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public Fuse.Resources.MemoryPolicy get_Policy() :56
void HttpImageSource__get_Policy_fn(HttpImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) :56
void HttpImageSource__set_Policy_fn(HttpImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->Policy(value);
}

// public override sealed void Reload() :64
void HttpImageSource__Reload_fn(HttpImageSource* __this)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "Reload()");
    uPtr(__this->_proxy)->Reload();
}

// public override sealed float2 get_Size() :60
void HttpImageSource__get_Size_fn(HttpImageSource* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "get_Size()");
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity() :65
void HttpImageSource__get_SizeDensity_fn(HttpImageSource* __this, float* __retval)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "get_SizeDensity()");
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :62
void HttpImageSource__get_State_fn(HttpImageSource* __this, int32_t* __retval)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "get_State()");
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// public string get_Url() :30
void HttpImageSource__get_Url_fn(HttpImageSource* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :31
void HttpImageSource__set_Url_fn(HttpImageSource* __this, uString* value)
{
    __this->Url(value);
}

// public HttpImageSource() [instance] :43
void HttpImageSource::ctor_2()
{
    ctor_1();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
}

// public HttpImageSource(string url) [instance] :48
void HttpImageSource::ctor_3(uString* url)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", ".ctor(string)");
    ctor_1();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
    Url(url);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) [instance] :54
void HttpImageSource::DefaultPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "set_DefaultPolicy(Fuse.Resources.MemoryPolicy)");
    uPtr(_proxy)->DefaultSetPolicy(value);
}

// public float get_Density() [instance] :70
float HttpImageSource::Density()
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "get_Density()");
    return uPtr(_proxy)->Density();
}

// public void set_Density(float value) [instance] :70
void HttpImageSource::Density(float value)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "set_Density(float)");
    uPtr(_proxy)->Density(value);
}

// public Fuse.Resources.MemoryPolicy get_Policy() [instance] :56
::g::Fuse::Resources::MemoryPolicy* HttpImageSource::Policy()
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "get_Policy()");
    return uPtr(_proxy)->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) [instance] :56
void HttpImageSource::Policy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "set_Policy(Fuse.Resources.MemoryPolicy)");
    uPtr(_proxy)->Policy(value);
}

// public string get_Url() [instance] :30
uString* HttpImageSource::Url()
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "get_Url()");
    return (uPtr(_proxy)->Impl() == NULL) ? ::STRINGS[0/*""*/] : (uString*)uPtr(uAs< ::g::Fuse::Resources::HttpImageSourceImpl*>(uPtr(_proxy)->Impl(), ::TYPES[11/*Fuse.Resources.HttpImageSourceImpl*/]))->Url();
}

// public void set_Url(string value) [instance] :31
void HttpImageSource::Url(uString* value)
{
    uStackFrame __("Fuse.Resources.HttpImageSource", "set_Url(string)");
    uPtr(_proxy)->Release();

    if (::g::Uno::String::op_Equality(value, NULL) || ::g::Uno::String::op_Equality(value, ::STRINGS[0/*""*/]))
        return;

    uPtr(_proxy)->Attach(::g::Fuse::Resources::HttpImageSourceCache::GetUrl(value));
}

// public HttpImageSource New() [static] :43
HttpImageSource* HttpImageSource::New2()
{
    HttpImageSource* obj1 = (HttpImageSource*)uNew(HttpImageSource_typeof());
    obj1->ctor_2();
    return obj1;
}

// public HttpImageSource New(string url) [static] :48
HttpImageSource* HttpImageSource::New3(uString* url)
{
    HttpImageSource* obj2 = (HttpImageSource*)uNew(HttpImageSource_typeof());
    obj2->ctor_3(url);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/HttpImageSource.uno
// -------------------------------------------------------------------------------

// internal static class HttpImageSourceCache :73
// {
// static generated HttpImageSourceCache() :73
static void HttpImageSourceCache__cctor__fn(uType* __type)
{
    HttpImageSourceCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[12/*Uno.Collections.Dictionary<string, Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>*/]));
}

static void HttpImageSourceCache_build(uType* type)
{
    ::TYPES[12] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::HttpImageSourceImpl_typeof(), NULL), NULL);
    ::TYPES[13] = ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::HttpImageSourceImpl_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[12/*Uno.Collections.Dictionary<string, Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>*/], (uintptr_t)&HttpImageSourceCache::_cache_, uFieldFlagsStatic);
}

uClassType* HttpImageSourceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.HttpImageSourceCache", options);
    type->fp_build_ = HttpImageSourceCache_build;
    type->fp_cctor_ = HttpImageSourceCache__cctor__fn;
    return type;
}

// public static Fuse.Resources.HttpImageSourceImpl GetUrl(string url) :76
void HttpImageSourceCache__GetUrl_fn(uString* url, ::g::Fuse::Resources::HttpImageSourceImpl** __retval)
{
    *__retval = HttpImageSourceCache::GetUrl(url);
}

uSStrong< ::g::Uno::Collections::Dictionary*> HttpImageSourceCache::_cache_;

// public static Fuse.Resources.HttpImageSourceImpl GetUrl(string url) [static] :76
::g::Fuse::Resources::HttpImageSourceImpl* HttpImageSourceCache::GetUrl(uString* url)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceCache", "GetUrl(string)");
    HttpImageSourceCache_typeof()->Init();
    bool ret1;
    bool ret2;
    ::g::Uno::WeakReference* value = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(HttpImageSourceCache::_cache_), url, (void**)(&value), &ret1), ret1))
    {
        ::g::Fuse::Resources::HttpImageSourceImpl* his;

        if (uPtr(value)->TryGetTarget((uObject**)(&his)))
        {
            if (uPtr(his)->State() == 3)
                uPtr(his)->Reload();

            return his;
        }

        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(HttpImageSourceCache::_cache_), url, &ret2);
    }

    ::g::Fuse::Resources::HttpImageSourceImpl* nv = ::g::Fuse::Resources::HttpImageSourceImpl::New2(url);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(HttpImageSourceCache::_cache_), url, (::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[13/*Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>*/], nv));
    return nv;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/HttpImageSource.uno
// -------------------------------------------------------------------------------

// internal sealed class HttpImageSourceImpl :97
// {
static void HttpImageSourceImpl_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource_type, interface0));
    type->SetFields(13,
        ::g::Uno::String_typeof(), offsetof(HttpImageSourceImpl, _url), 0,
        ::g::Uno::String_typeof(), offsetof(HttpImageSourceImpl, _contentType), 0,
        ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), offsetof(HttpImageSourceImpl, _orientation), 0);
}

::g::Fuse::Resources::LoadingImageSource_type* HttpImageSourceImpl_typeof()
{
    static uSStrong< ::g::Fuse::Resources::LoadingImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::LoadingImageSource_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpImageSourceImpl);
    options.TypeSize = sizeof(::g::Fuse::Resources::LoadingImageSource_type);
    type = (::g::Fuse::Resources::LoadingImageSource_type*)uClassType::New("Fuse.Resources.HttpImageSourceImpl", options);
    type->fp_build_ = HttpImageSourceImpl_build;
    type->fp_AttemptLoad = (void(*)(::g::Fuse::Resources::LoadingImageSource*))HttpImageSourceImpl__AttemptLoad_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))HttpImageSourceImpl__get_Orientation_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// public HttpImageSourceImpl(string url) :103
void HttpImageSourceImpl__ctor_3_fn(HttpImageSourceImpl* __this, uString* url)
{
    __this->ctor_3(url);
}

// protected override sealed void AttemptLoad() :108
void HttpImageSourceImpl__AttemptLoad_fn(HttpImageSourceImpl* __this)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl", "AttemptLoad()");

    try
    {
        {
            ::g::Experimental::Http::HttpLoader::LoadBinary(__this->Url(), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::g::Experimental::Http::HttpResponseHeader_typeof(), ::g::Uno::Byte_typeof()->Array(), NULL), (void*)HttpImageSourceImpl__HttpCallback_fn, __this), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), (void*)HttpImageSourceImpl__LoadFailed_fn, __this));
            __this->_loading = true;
            __this->OnChanged();
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        __this->Fail(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Loading image from '"), __this->Url()), uString::Const("' failed. ")), uPtr(e)->Message()), e);
    }
}

// private void Fail(string msg, [Uno.Exception e]) :217
void HttpImageSourceImpl__Fail_fn(HttpImageSourceImpl* __this, uString* msg, ::g::Uno::Exception* e)
{
    __this->Fail(msg, e);
}

// private void FailureCallback(Uno.Exception e) :128
void HttpImageSourceImpl__FailureCallback_fn(HttpImageSourceImpl* __this, ::g::Uno::Exception* e)
{
    __this->FailureCallback(e);
}

// private void HttpCallback(Experimental.Http.HttpResponseHeader response, byte[] data) :140
void HttpImageSourceImpl__HttpCallback_fn(HttpImageSourceImpl* __this, ::g::Experimental::Http::HttpResponseHeader* response, uArray* data)
{
    __this->HttpCallback(response, data);
}

// private void LoadFailed(string reason) :212
void HttpImageSourceImpl__LoadFailed_fn(HttpImageSourceImpl* __this, uString* reason)
{
    __this->LoadFailed(reason);
}

// public HttpImageSourceImpl New(string url) :103
void HttpImageSourceImpl__New2_fn(uString* url, HttpImageSourceImpl** __retval)
{
    *__retval = HttpImageSourceImpl::New2(url);
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation() :137
void HttpImageSourceImpl__get_Orientation_fn(HttpImageSourceImpl* __this, int32_t* __retval)
{
    return *__retval = __this->_orientation, void();
}

// private void SuccessCallback(texture2D texture) :122
void HttpImageSourceImpl__SuccessCallback_fn(HttpImageSourceImpl* __this, ::g::Uno::Graphics::Texture2D* texture)
{
    __this->SuccessCallback(texture);
}

// public string get_Url() :100
void HttpImageSourceImpl__get_Url_fn(HttpImageSourceImpl* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public HttpImageSourceImpl(string url) [instance] :103
void HttpImageSourceImpl::ctor_3(uString* url)
{
    ctor_2();
    _url = url;
}

// private void Fail(string msg, [Uno.Exception e]) [instance] :217
void HttpImageSourceImpl::Fail(uString* msg, ::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl", "Fail(string,[Uno.Exception])");
    Cleanup(1);
    OnError(msg, e);
}

// private void FailureCallback(Uno.Exception e) [instance] :128
void HttpImageSourceImpl::FailureCallback(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl", "FailureCallback(Uno.Exception)");
    _loading = false;
    Fail(::g::Uno::String::op_Addition2(uString::Const("Loading image from HTTP failed. "), uPtr(e)->Message()), e);
}

// private void HttpCallback(Experimental.Http.HttpResponseHeader response, byte[] data) [instance] :140
void HttpImageSourceImpl::HttpCallback(::g::Experimental::Http::HttpResponseHeader* response, uArray* data)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl", "HttpCallback(Experimental.Http.HttpResponseHeader,byte[])");
    bool ret2;

    if (uPtr(response)->StatusCode() != 200)
    {
        Fail(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(uString::Const("Loading image from HTTP failed with HTTP Status: "), uBox<int32_t>(::g::Uno::Int_typeof(), uPtr(response)->StatusCode())), uString::Const(" ")), uPtr(response)->ReasonPhrase()), NULL);
        return;
    }

    uString* ct;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(response)->Headers()), uString::Const("content-type"), (void**)(&ct), &ret2), ret2))
        _contentType = uString::Const("x-missing");
    else
        _contentType = ct;

    _orientation = ::g::Fuse::Resources::Exif::ExifData__FromByteArray(data).Orientation;
    HttpImageSourceImpl__BackgroundLoad::New1(data, _contentType, uDelegate::New(::TYPES[2/*Uno.Action<texture2D>*/], (void*)HttpImageSourceImpl__SuccessCallback_fn, this), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::TYPES[1/*Uno.Exception*/], NULL), (void*)HttpImageSourceImpl__FailureCallback_fn, this));
}

// private void LoadFailed(string reason) [instance] :212
void HttpImageSourceImpl::LoadFailed(uString* reason)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl", "LoadFailed(string)");
    Fail(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Loading image from '"), Url()), uString::Const("' failed: ")), reason), NULL);
}

// private void SuccessCallback(texture2D texture) [instance] :122
void HttpImageSourceImpl::SuccessCallback(::g::Uno::Graphics::Texture2D* texture)
{
    uStackFrame __("Fuse.Resources.HttpImageSourceImpl", "SuccessCallback(texture2D)");
    _loading = false;
    SetTexture(texture);
}

// public string get_Url() [instance] :100
uString* HttpImageSourceImpl::Url()
{
    return _url;
}

// public HttpImageSourceImpl New(string url) [static] :103
HttpImageSourceImpl* HttpImageSourceImpl::New2(uString* url)
{
    HttpImageSourceImpl* obj1 = (HttpImageSourceImpl*)uNew(HttpImageSourceImpl_typeof());
    obj1->ctor_3(url);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Resources/IDeferredDisposable.uno
// ---------------------------------------------------------------------------------

// internal abstract interface IDeferredDisposable :13
// {
uInterfaceType* IDeferredDisposable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Resources.IDeferredDisposable", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/ImageSource.uno
// ---------------------------------------------------------------------------

// public abstract class ImageSource :87
// {
static void ImageSource_build(uType* type)
{
    ::STRINGS[1] = uString::Const("ImageSource error: '");
    ::STRINGS[2] = uString::Const("'");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/ImageSource.uno");
    ::STRINGS[4] = uString::Const("OnError");
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    ::TYPES[15] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(ImageSource, _pinCount), 0,
        ::TYPES[14/*Uno.EventHandler*/], offsetof(ImageSource, Changed1), 0,
        ::TYPES[15/*Fuse.Resources.ImageSourceErrorHandler*/], offsetof(ImageSource, Error1), 0);
    type->Reflection.SetFunctions(14,
        new uFunction("add_Changed", NULL, (void*)ImageSource__add_Changed_fn, 0, false, uVoid_typeof(), 1, ::TYPES[14/*Uno.EventHandler*/]),
        new uFunction("remove_Changed", NULL, (void*)ImageSource__remove_Changed_fn, 0, false, uVoid_typeof(), 1, ::TYPES[14/*Uno.EventHandler*/]),
        new uFunction("add_Error", NULL, (void*)ImageSource__add_Error_fn, 0, false, uVoid_typeof(), 1, ::TYPES[15/*Fuse.Resources.ImageSourceErrorHandler*/]),
        new uFunction("remove_Error", NULL, (void*)ImageSource__remove_Error_fn, 0, false, uVoid_typeof(), 1, ::TYPES[15/*Fuse.Resources.ImageSourceErrorHandler*/]),
        new uFunction("GetTexture", NULL, NULL, offsetof(ImageSource_type, fp_GetTexture), false, ::g::Uno::Graphics::Texture2D_typeof(), 0),
        new uFunction("get_IsPinned", NULL, (void*)ImageSource__get_IsPinned_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Orientation", NULL, NULL, offsetof(ImageSource_type, fp_get_Orientation), false, ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), 0),
        new uFunction("Pin", NULL, (void*)ImageSource__Pin_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_PixelSize", NULL, NULL, offsetof(ImageSource_type, fp_get_PixelSize), false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("Reload", NULL, NULL, offsetof(ImageSource_type, fp_Reload), false, uVoid_typeof(), 0),
        new uFunction("get_Size", NULL, NULL, offsetof(ImageSource_type, fp_get_Size), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_SizeDensity", NULL, NULL, offsetof(ImageSource_type, fp_get_SizeDensity), false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_State", NULL, NULL, offsetof(ImageSource_type, fp_get_State), false, ::g::Fuse::Resources::ImageSourceState_typeof(), 0),
        new uFunction("Unpin", NULL, (void*)ImageSource__Unpin_fn, 0, false, uVoid_typeof(), 0));
}

ImageSource_type* ImageSource_typeof()
{
    static uSStrong<ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ImageSource);
    options.TypeSize = sizeof(ImageSource_type);
    type = (ImageSource_type*)uClassType::New("Fuse.Resources.ImageSource", options);
    type->fp_build_ = ImageSource_build;
    type->fp_OnPinChanged = ImageSource__OnPinChanged_fn;
    type->fp_Reload = ImageSource__Reload_fn;
    return type;
}

// protected generated ImageSource() :87
void ImageSource__ctor_1_fn(ImageSource* __this)
{
    __this->ctor_1();
}

// public generated void add_Changed(Uno.EventHandler value) :89
void ImageSource__add_Changed_fn(ImageSource* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// public generated void remove_Changed(Uno.EventHandler value) :89
void ImageSource__remove_Changed_fn(ImageSource* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// public generated void add_Error(Fuse.Resources.ImageSourceErrorHandler value) :109
void ImageSource__add_Error_fn(ImageSource* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Fuse.Resources.ImageSourceErrorHandler value) :109
void ImageSource__remove_Error_fn(ImageSource* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// internal void FireChanged(Fuse.Resources.ImageSourceChangedArgs args) :103
void ImageSource__FireChanged_fn(ImageSource* __this, ::g::Fuse::Resources::ImageSourceChangedArgs* args)
{
    __this->FireChanged(args);
}

// internal void FireError(Fuse.Resources.ImageSourceErrorArgs args) :126
void ImageSource__FireError_fn(ImageSource* __this, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    __this->FireError(args);
}

// public bool get_IsPinned() :147
void ImageSource__get_IsPinned_fn(ImageSource* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// protected void OnChanged() :90
void ImageSource__OnChanged_fn(ImageSource* __this)
{
    __this->OnChanged();
}

// protected void OnError(string msg, [Uno.Exception e]) :110
void ImageSource__OnError_fn(ImageSource* __this, uString* msg, ::g::Uno::Exception* e)
{
    __this->OnError(msg, e);
}

// protected virtual void OnPinChanged() :149
void ImageSource__OnPinChanged_fn(ImageSource* __this)
{
}

// public void Pin() :133
void ImageSource__Pin_fn(ImageSource* __this)
{
    __this->Pin();
}

// internal void ProxyChanged(object s, Uno.EventArgs a) :98
void ImageSource__ProxyChanged_fn(ImageSource* __this, uObject* s, ::g::Uno::EventArgs* a)
{
    __this->ProxyChanged(s, a);
}

// internal void ProxyError(object s, Fuse.Resources.ImageSourceErrorArgs a) :121
void ImageSource__ProxyError_fn(ImageSource* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    __this->ProxyError(s, a);
}

// public virtual void Reload() :156
void ImageSource__Reload_fn(ImageSource* __this)
{
}

// public void Unpin() :139
void ImageSource__Unpin_fn(ImageSource* __this)
{
    __this->Unpin();
}

// protected generated ImageSource() [instance] :87
void ImageSource::ctor_1()
{
    ctor_();
}

// public generated void add_Changed(Uno.EventHandler value) [instance] :89
void ImageSource::add_Changed(uDelegate* value)
{
    uStackFrame __("Fuse.Resources.ImageSource", "add_Changed(Uno.EventHandler)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void remove_Changed(Uno.EventHandler value) [instance] :89
void ImageSource::remove_Changed(uDelegate* value)
{
    uStackFrame __("Fuse.Resources.ImageSource", "remove_Changed(Uno.EventHandler)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void add_Error(Fuse.Resources.ImageSourceErrorHandler value) [instance] :109
void ImageSource::add_Error(uDelegate* value)
{
    uStackFrame __("Fuse.Resources.ImageSource", "add_Error(Fuse.Resources.ImageSourceErrorHandler)");
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::TYPES[15/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// public generated void remove_Error(Fuse.Resources.ImageSourceErrorHandler value) [instance] :109
void ImageSource::remove_Error(uDelegate* value)
{
    uStackFrame __("Fuse.Resources.ImageSource", "remove_Error(Fuse.Resources.ImageSourceErrorHandler)");
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::TYPES[15/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// internal void FireChanged(Fuse.Resources.ImageSourceChangedArgs args) [instance] :103
void ImageSource::FireChanged(::g::Fuse::Resources::ImageSourceChangedArgs* args)
{
    uStackFrame __("Fuse.Resources.ImageSource", "FireChanged(Fuse.Resources.ImageSourceChangedArgs)");

    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->Invoke(2, this, args);
}

// internal void FireError(Fuse.Resources.ImageSourceErrorArgs args) [instance] :126
void ImageSource::FireError(::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    uStackFrame __("Fuse.Resources.ImageSource", "FireError(Fuse.Resources.ImageSourceErrorArgs)");

    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
        uPtr(Error1)->Invoke(2, this, args);
}

// public bool get_IsPinned() [instance] :147
bool ImageSource::IsPinned()
{
    return _pinCount > 0;
}

// protected void OnChanged() [instance] :90
void ImageSource::OnChanged()
{
    uStackFrame __("Fuse.Resources.ImageSource", "OnChanged()");

    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Resources::ImageSourceChangedArgs__Post_fn, ::g::Fuse::Resources::ImageSourceChangedArgs::New2(this)), -1, 2);
}

// protected void OnError(string msg, [Uno.Exception e]) [instance] :110
void ImageSource::OnError(uString* msg, ::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Resources.ImageSource", "OnError(string,[Uno.Exception])");
    ::g::Fuse::Diagnostics::UnknownException(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[1/*"ImageSource...*/], msg), ::STRINGS[2/*"'"*/]), e, this, ::STRINGS[3/*"/usr/local/...*/], 112, ::STRINGS[4/*"OnError"*/]);

    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
    {
        ::g::Fuse::Resources::ImageSourceErrorArgs* sa = ::g::Fuse::Resources::ImageSourceErrorArgs::New2(this);
        sa->Reason = msg;
        sa->ExceptionCause = e;
        ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Resources::ImageSourceErrorArgs__Post_fn, sa), -1, 2);
    }
}

// public void Pin() [instance] :133
void ImageSource::Pin()
{
    uStackFrame __("Fuse.Resources.ImageSource", "Pin()");
    _pinCount++;

    if (_pinCount == 1)
        OnPinChanged();
}

// internal void ProxyChanged(object s, Uno.EventArgs a) [instance] :98
void ImageSource::ProxyChanged(uObject* s, ::g::Uno::EventArgs* a)
{
    uStackFrame __("Fuse.Resources.ImageSource", "ProxyChanged(object,Uno.EventArgs)");

    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->Invoke(2, s, a);
}

// internal void ProxyError(object s, Fuse.Resources.ImageSourceErrorArgs a) [instance] :121
void ImageSource::ProxyError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    uStackFrame __("Fuse.Resources.ImageSource", "ProxyError(object,Fuse.Resources.ImageSourceErrorArgs)");

    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
        uPtr(Error1)->Invoke(2, s, a);
}

// public void Unpin() [instance] :139
void ImageSource::Unpin()
{
    uStackFrame __("Fuse.Resources.ImageSource", "Unpin()");
    _pinCount--;

    if (_pinCount == 0)
        OnPinChanged();
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/ImageSource.uno
// ---------------------------------------------------------------------------

// internal sealed class ImageSourceChangedArgs :52
// {
static void ImageSourceChangedArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ImageSourceChangedArgs, _imageSource), 0);
}

uType* ImageSourceChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ImageSourceChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.ImageSourceChangedArgs", options);
    type->fp_build_ = ImageSourceChangedArgs_build;
    return type;
}

// internal ImageSourceChangedArgs(Fuse.Resources.ImageSource imageSource) :56
void ImageSourceChangedArgs__ctor_1_fn(ImageSourceChangedArgs* __this, ::g::Fuse::Resources::ImageSource* imageSource)
{
    __this->ctor_1(imageSource);
}

// internal ImageSourceChangedArgs New(Fuse.Resources.ImageSource imageSource) :56
void ImageSourceChangedArgs__New2_fn(::g::Fuse::Resources::ImageSource* imageSource, ImageSourceChangedArgs** __retval)
{
    *__retval = ImageSourceChangedArgs::New2(imageSource);
}

// internal void Post() :61
void ImageSourceChangedArgs__Post_fn(ImageSourceChangedArgs* __this)
{
    __this->Post();
}

// internal ImageSourceChangedArgs(Fuse.Resources.ImageSource imageSource) [instance] :56
void ImageSourceChangedArgs::ctor_1(::g::Fuse::Resources::ImageSource* imageSource)
{
    ctor_();
    _imageSource = imageSource;
}

// internal void Post() [instance] :61
void ImageSourceChangedArgs::Post()
{
    uStackFrame __("Fuse.Resources.ImageSourceChangedArgs", "Post()");
    uPtr(_imageSource)->FireChanged(this);
}

// internal ImageSourceChangedArgs New(Fuse.Resources.ImageSource imageSource) [static] :56
ImageSourceChangedArgs* ImageSourceChangedArgs::New2(::g::Fuse::Resources::ImageSource* imageSource)
{
    ImageSourceChangedArgs* obj1 = (ImageSourceChangedArgs*)uNew(ImageSourceChangedArgs_typeof());
    obj1->ctor_1(imageSource);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/ImageSource.uno
// ---------------------------------------------------------------------------

// public sealed class ImageSourceErrorArgs :26
// {
static void ImageSourceErrorArgs_build(uType* type)
{
    ::STRINGS[5] = uString::Const("reason");
    ::TYPES[16] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(ImageSourceErrorArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ImageSourceErrorArgs, Reason), 0,
        ::g::Uno::Exception_typeof(), offsetof(ImageSourceErrorArgs, ExceptionCause), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ImageSourceErrorArgs, _imageSource), 0);
    type->Reflection.SetFields(2,
        new uField("ExceptionCause", 1),
        new uField("Reason", 0));
}

ImageSourceErrorArgs_type* ImageSourceErrorArgs_typeof()
{
    static uSStrong<ImageSourceErrorArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ImageSourceErrorArgs);
    options.TypeSize = sizeof(ImageSourceErrorArgs_type);
    type = (ImageSourceErrorArgs_type*)uClassType::New("Fuse.Resources.ImageSourceErrorArgs", options);
    type->fp_build_ = ImageSourceErrorArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))ImageSourceErrorArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// internal ImageSourceErrorArgs(Fuse.Resources.ImageSource imageSource) :39
void ImageSourceErrorArgs__ctor_1_fn(ImageSourceErrorArgs* __this, ::g::Fuse::Resources::ImageSource* imageSource)
{
    __this->ctor_1(imageSource);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :32
void ImageSourceErrorArgs__FuseScriptingIScriptEventSerialize_fn(ImageSourceErrorArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.Resources.ImageSourceErrorArgs", "Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer)");
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[16/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[5/*"reason"*/], __this->Reason);
}

// internal ImageSourceErrorArgs New(Fuse.Resources.ImageSource imageSource) :39
void ImageSourceErrorArgs__New2_fn(::g::Fuse::Resources::ImageSource* imageSource, ImageSourceErrorArgs** __retval)
{
    *__retval = ImageSourceErrorArgs::New2(imageSource);
}

// internal void Post() :44
void ImageSourceErrorArgs__Post_fn(ImageSourceErrorArgs* __this)
{
    __this->Post();
}

// internal ImageSourceErrorArgs(Fuse.Resources.ImageSource imageSource) [instance] :39
void ImageSourceErrorArgs::ctor_1(::g::Fuse::Resources::ImageSource* imageSource)
{
    ctor_();
    _imageSource = imageSource;
}

// internal void Post() [instance] :44
void ImageSourceErrorArgs::Post()
{
    uStackFrame __("Fuse.Resources.ImageSourceErrorArgs", "Post()");
    uPtr(_imageSource)->FireError(this);
}

// internal ImageSourceErrorArgs New(Fuse.Resources.ImageSource imageSource) [static] :39
ImageSourceErrorArgs* ImageSourceErrorArgs::New2(::g::Fuse::Resources::ImageSource* imageSource)
{
    ImageSourceErrorArgs* obj1 = (ImageSourceErrorArgs*)uNew(ImageSourceErrorArgs_typeof());
    obj1->ctor_1(imageSource);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/ImageSource.uno
// ---------------------------------------------------------------------------

// public delegate void ImageSourceErrorHandler(object sender, Fuse.Resources.ImageSourceErrorArgs args) :50
uDelegateType* ImageSourceErrorHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Resources.ImageSourceErrorHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Resources::ImageSourceErrorArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/ImageSource.uno
// ---------------------------------------------------------------------------

// public enum ImageSourceState :14
uEnumType* ImageSourceState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Resources.ImageSourceState", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Pending", 0LL,
        "Ready", 1LL,
        "Loading", 2LL,
        "Failed", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Resources/MemoryPolicy.uno
// --------------------------------------------------------------------------

// internal abstract interface IMemoryResource :86
// {
uInterfaceType* IMemoryResource_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Resources.IMemoryResource", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Resources/ISoftDisposable.uno
// -----------------------------------------------------------------------------

// internal abstract interface ISoftDisposable :5
// {
uInterfaceType* ISoftDisposable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Resources.ISoftDisposable", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/LoadingImageSource.uno
// ----------------------------------------------------------------------------------

// internal abstract class LoadingImageSource :8
// {
static void LoadingImageSource_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Resources::DisposalManager_typeof(),
        ::g::Fuse::Resources::MemoryPolicy_typeof());
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(LoadingImageSource_type, interface0));
    type->SetFields(5,
        ::g::Uno::Double_typeof(), offsetof(LoadingImageSource, _lastUsed), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(LoadingImageSource, _policy), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(LoadingImageSource, _texture), 0,
        ::g::Uno::Int2_typeof(), offsetof(LoadingImageSource, _textureSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(LoadingImageSource, _loading), 0,
        ::g::Uno::Bool_typeof(), offsetof(LoadingImageSource, _failed), 0,
        ::g::Uno::Bool_typeof(), offsetof(LoadingImageSource, _inDisposal), 0,
        ::g::Uno::Float_typeof(), offsetof(LoadingImageSource, _density), 0);
}

LoadingImageSource_type* LoadingImageSource_typeof()
{
    static uSStrong<LoadingImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(LoadingImageSource);
    options.TypeSize = sizeof(LoadingImageSource_type);
    type = (LoadingImageSource_type*)uClassType::New("Fuse.Resources.LoadingImageSource", options);
    type->fp_build_ = LoadingImageSource_build;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))LoadingImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))LoadingImageSource__OnPinChanged_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))LoadingImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))LoadingImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))LoadingImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))LoadingImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))LoadingImageSource__get_State_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// protected generated LoadingImageSource() :8
void LoadingImageSource__ctor_2_fn(LoadingImageSource* __this)
{
    __this->ctor_2();
}

// protected void Cleanup(Fuse.Resources.LoadingImageSource.CleanupReason reason) :86
void LoadingImageSource__Cleanup_fn(LoadingImageSource* __this, int32_t* reason)
{
    __this->Cleanup(*reason);
}

// private bool Fuse.Resources.IMemoryResource.get_IsPinned() :18
void LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn(LoadingImageSource* __this, bool* __retval)
{
    return *__retval = __this->IsPinned(), void();
}

// private double Fuse.Resources.IMemoryResource.get_LastUsed() :20
void LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn(LoadingImageSource* __this, double* __retval)
{
    return *__retval = __this->_lastUsed, void();
}

// private Fuse.Resources.MemoryPolicy Fuse.Resources.IMemoryResource.get_MemoryPolicy() :17
void LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    return *__retval = __this->Policy(), void();
}

// private void Fuse.Resources.IMemoryResource.SoftDispose() :21
void LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn(LoadingImageSource* __this)
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "Fuse.Resources.IMemoryResource.SoftDispose()");
    __this->Cleanup(2);
}

// public override sealed texture2D GetTexture() :54
void LoadingImageSource__GetTexture_fn(LoadingImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "GetTexture()");

    if (__this->_texture != NULL)
    {
        __this->MarkUsed();
        return *__retval = __this->_texture, void();
    }

    __this->LoadTexture();
    return *__retval = __this->_texture, void();
}

// protected bool get_IsLoaded() :107
void LoadingImageSource__get_IsLoaded_fn(LoadingImageSource* __this, bool* __retval)
{
    *__retval = __this->IsLoaded();
}

// private void LoadTexture() :66
void LoadingImageSource__LoadTexture_fn(LoadingImageSource* __this)
{
    __this->LoadTexture();
}

// protected void MarkUsed() :26
void LoadingImageSource__MarkUsed_fn(LoadingImageSource* __this)
{
    __this->MarkUsed();
}

// protected override sealed void OnPinChanged() :164
void LoadingImageSource__OnPinChanged_fn(LoadingImageSource* __this)
{
    ::g::Fuse::Resources::ImageSource__OnPinChanged_fn(__this);
    __this->MarkUsed();
}

// public override sealed int2 get_PixelSize() :154
void LoadingImageSource__get_PixelSize_fn(LoadingImageSource* __this, ::g::Uno::Int2* __retval)
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "get_PixelSize()");

    if (__this->_texture == NULL)
        __this->LoadTexture();

    __this->MarkUsed();
    return *__retval = __this->_textureSize, void();
}

// public Fuse.Resources.MemoryPolicy get_Policy() :34
void LoadingImageSource__get_Policy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) :35
void LoadingImageSource__set_Policy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->Policy(value);
}

// public override sealed void Reload() :74
void LoadingImageSource__Reload_fn(LoadingImageSource* __this)
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "Reload()");
    __this->Cleanup(0);
    __this->LoadTexture();
}

// protected void SetTexture(texture2D texture) :109
void LoadingImageSource__SetTexture_fn(LoadingImageSource* __this, ::g::Uno::Graphics::Texture2D* texture)
{
    __this->SetTexture(texture);
}

// public override sealed float2 get_Size() :145
void LoadingImageSource__get_Size_fn(LoadingImageSource* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "get_Size()");
    ::g::Uno::Int2 ts = __this->PixelSize();
    return *__retval = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)ts.X, (float)ts.Y), __this->_density), void();
}

// public override sealed float get_SizeDensity() :140
void LoadingImageSource__get_SizeDensity_fn(LoadingImageSource* __this, float* __retval)
{
    return *__retval = __this->_density, void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :125
void LoadingImageSource__get_State_fn(LoadingImageSource* __this, int32_t* __retval)
{
    if (__this->_texture != NULL)
        return *__retval = 1, void();

    if (__this->_failed)
        return *__retval = 3, void();

    if (__this->_loading)
        return *__retval = 2, void();

    return *__retval = 0, void();
}

// protected generated LoadingImageSource() [instance] :8
void LoadingImageSource::ctor_2()
{
    _policy = ::g::Fuse::Resources::MemoryPolicy::PreloadRetain();
    _density = 1.0f;
    ctor_1();
}

// protected void Cleanup(Fuse.Resources.LoadingImageSource.CleanupReason reason) [instance] :86
void LoadingImageSource::Cleanup(int32_t reason)
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "Cleanup(Fuse.Resources.LoadingImageSource.CleanupReason)");

    if (_texture != NULL)
    {
        uPtr(_texture)->Dispose();
        _texture = NULL;
    }

    _textureSize = ::g::Uno::Int2__New1(0);
    _loading = false;
    _failed = (reason == 1);

    if (_inDisposal)
        ::g::Fuse::Resources::DisposalManager::Remove((uObject*)this);

    _inDisposal = false;

    if (reason != 2)
        OnChanged();
}

// protected bool get_IsLoaded() [instance] :107
bool LoadingImageSource::IsLoaded()
{
    return _texture != NULL;
}

// private void LoadTexture() [instance] :66
void LoadingImageSource::LoadTexture()
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "LoadTexture()");

    if (_loading || _failed)
        return;

    AttemptLoad();
}

// protected void MarkUsed() [instance] :26
void LoadingImageSource::MarkUsed()
{
    _lastUsed = ::g::Fuse::Time::FrameTime();
}

// public Fuse.Resources.MemoryPolicy get_Policy() [instance] :34
::g::Fuse::Resources::MemoryPolicy* LoadingImageSource::Policy()
{
    return _policy;
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) [instance] :35
void LoadingImageSource::Policy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "set_Policy(Fuse.Resources.MemoryPolicy)");

    if (value == NULL)
        U_THROW(::g::Uno::Exception::New2(uString::Const("value-cannot-be-null")));

    _policy = value;
}

// protected void SetTexture(texture2D texture) [instance] :109
void LoadingImageSource::SetTexture(::g::Uno::Graphics::Texture2D* texture)
{
    uStackFrame __("Fuse.Resources.LoadingImageSource", "SetTexture(texture2D)");
    _texture = texture;
    _textureSize = uPtr(texture)->Size();

    if (!_inDisposal)
    {
        ::g::Fuse::Resources::DisposalManager::Add((uObject*)this);
        _inDisposal = true;
    }

    MarkUsed();
    OnChanged();
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Resources/MemoryPolicy.uno
// --------------------------------------------------------------------------

// public sealed class MemoryPolicy :10
// {
// static generated MemoryPolicy() :10
static void MemoryPolicy__cctor__fn(uType* __type)
{
    MemoryPolicy* collection4;
    MemoryPolicy* collection3;
    MemoryPolicy* collection2;
    MemoryPolicy* collection1;
    MemoryPolicy::PreloadRetain_ = (collection4 = MemoryPolicy::New1(), uPtr(collection4)->BundlePreload(true), true, collection4);
    MemoryPolicy::UnloadUnused_ = (collection3 = MemoryPolicy::New1(), uPtr(collection3)->UnloadInBackground(true), true, uPtr(collection3)->UnusedTimeout(60.0), 60.0, uPtr(collection3)->UnpinInvisible(true), true, collection3);
    MemoryPolicy::QuickUnload_ = (collection2 = MemoryPolicy::New1(), uPtr(collection2)->UnloadInBackground(true), true, uPtr(collection2)->UnusedTimeout(1.0), 1.0, uPtr(collection2)->UnpinInvisible(true), true, collection2);
    MemoryPolicy::UnloadInBackgroundPolicy_ = (collection1 = MemoryPolicy::New1(), uPtr(collection1)->UnloadInBackground(true), true, collection1);
}

static void MemoryPolicy_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Resources::IMemoryResource_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(MemoryPolicy, _AllowPinnedFree), 0,
        ::g::Uno::Bool_typeof(), offsetof(MemoryPolicy, _BundlePreload), 0,
        ::g::Uno::Bool_typeof(), offsetof(MemoryPolicy, _UnloadInBackground), 0,
        ::g::Uno::Bool_typeof(), offsetof(MemoryPolicy, _UnpinInvisible), 0,
        ::g::Uno::Double_typeof(), offsetof(MemoryPolicy, _UnusedTimeout), 0,
        type, (uintptr_t)&MemoryPolicy::PreloadRetain_, uFieldFlagsStatic,
        type, (uintptr_t)&MemoryPolicy::UnloadUnused_, uFieldFlagsStatic,
        type, (uintptr_t)&MemoryPolicy::QuickUnload_, uFieldFlagsStatic,
        type, (uintptr_t)&MemoryPolicy::UnloadInBackgroundPolicy_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("PreloadRetain", 5),
        new uField("QuickUnload", 7),
        new uField("UnloadInBackgroundPolicy", 8),
        new uField("UnloadUnused", 6));
    type->Reflection.SetFunctions(11,
        new uFunction("get_AllowPinnedFree", NULL, (void*)MemoryPolicy__get_AllowPinnedFree_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowPinnedFree", NULL, (void*)MemoryPolicy__set_AllowPinnedFree_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_BundlePreload", NULL, (void*)MemoryPolicy__get_BundlePreload_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_BundlePreload", NULL, (void*)MemoryPolicy__set_BundlePreload_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)MemoryPolicy__New1_fn, 0, true, type, 0),
        new uFunction("get_UnloadInBackground", NULL, (void*)MemoryPolicy__get_UnloadInBackground_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_UnloadInBackground", NULL, (void*)MemoryPolicy__set_UnloadInBackground_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_UnpinInvisible", NULL, (void*)MemoryPolicy__get_UnpinInvisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_UnpinInvisible", NULL, (void*)MemoryPolicy__set_UnpinInvisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_UnusedTimeout", NULL, (void*)MemoryPolicy__get_UnusedTimeout_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_UnusedTimeout", NULL, (void*)MemoryPolicy__set_UnusedTimeout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

uType* MemoryPolicy_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(MemoryPolicy);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.MemoryPolicy", options);
    type->fp_build_ = MemoryPolicy_build;
    type->fp_ctor_ = (void*)MemoryPolicy__New1_fn;
    type->fp_cctor_ = MemoryPolicy__cctor__fn;
    return type;
}

// public generated MemoryPolicy() :10
void MemoryPolicy__ctor__fn(MemoryPolicy* __this)
{
    __this->ctor_();
}

// public generated bool get_AllowPinnedFree() :61
void MemoryPolicy__get_AllowPinnedFree_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->AllowPinnedFree();
}

// public generated void set_AllowPinnedFree(bool value) :61
void MemoryPolicy__set_AllowPinnedFree_fn(MemoryPolicy* __this, bool* value)
{
    __this->AllowPinnedFree(*value);
}

// public generated bool get_BundlePreload() :52
void MemoryPolicy__get_BundlePreload_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->BundlePreload();
}

// public generated void set_BundlePreload(bool value) :52
void MemoryPolicy__set_BundlePreload_fn(MemoryPolicy* __this, bool* value)
{
    __this->BundlePreload(*value);
}

// public generated MemoryPolicy New() :10
void MemoryPolicy__New1_fn(MemoryPolicy** __retval)
{
    *__retval = MemoryPolicy::New1();
}

// internal bool ShouldSoftDispose(Fuse.Resources.DisposalRequest dr, Fuse.Resources.IMemoryResource resource) :66
void MemoryPolicy__ShouldSoftDispose_fn(MemoryPolicy* __this, int32_t* dr, uObject* resource, bool* __retval)
{
    *__retval = __this->ShouldSoftDispose(*dr, resource);
}

// public generated bool get_UnloadInBackground() :55
void MemoryPolicy__get_UnloadInBackground_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->UnloadInBackground();
}

// public generated void set_UnloadInBackground(bool value) :55
void MemoryPolicy__set_UnloadInBackground_fn(MemoryPolicy* __this, bool* value)
{
    __this->UnloadInBackground(*value);
}

// public generated bool get_UnpinInvisible() :64
void MemoryPolicy__get_UnpinInvisible_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->UnpinInvisible();
}

// public generated void set_UnpinInvisible(bool value) :64
void MemoryPolicy__set_UnpinInvisible_fn(MemoryPolicy* __this, bool* value)
{
    __this->UnpinInvisible(*value);
}

// public generated double get_UnusedTimeout() :58
void MemoryPolicy__get_UnusedTimeout_fn(MemoryPolicy* __this, double* __retval)
{
    *__retval = __this->UnusedTimeout();
}

// public generated void set_UnusedTimeout(double value) :58
void MemoryPolicy__set_UnusedTimeout_fn(MemoryPolicy* __this, double* value)
{
    __this->UnusedTimeout(*value);
}

uSStrong<MemoryPolicy*> MemoryPolicy::PreloadRetain_;
uSStrong<MemoryPolicy*> MemoryPolicy::UnloadUnused_;
uSStrong<MemoryPolicy*> MemoryPolicy::QuickUnload_;
uSStrong<MemoryPolicy*> MemoryPolicy::UnloadInBackgroundPolicy_;

// public generated MemoryPolicy() [instance] :10
void MemoryPolicy::ctor_()
{
}

// public generated bool get_AllowPinnedFree() [instance] :61
bool MemoryPolicy::AllowPinnedFree()
{
    return _AllowPinnedFree;
}

// public generated void set_AllowPinnedFree(bool value) [instance] :61
void MemoryPolicy::AllowPinnedFree(bool value)
{
    _AllowPinnedFree = value;
}

// public generated bool get_BundlePreload() [instance] :52
bool MemoryPolicy::BundlePreload()
{
    return _BundlePreload;
}

// public generated void set_BundlePreload(bool value) [instance] :52
void MemoryPolicy::BundlePreload(bool value)
{
    _BundlePreload = value;
}

// internal bool ShouldSoftDispose(Fuse.Resources.DisposalRequest dr, Fuse.Resources.IMemoryResource resource) [instance] :66
bool MemoryPolicy::ShouldSoftDispose(int32_t dr, uObject* resource)
{
    uStackFrame __("Fuse.Resources.MemoryPolicy", "ShouldSoftDispose(Fuse.Resources.DisposalRequest,Fuse.Resources.IMemoryResource)");

    if ((dr == 1) && UnloadInBackground())
        return true;

    if ((dr == 2) && (!::g::Fuse::Resources::IMemoryResource::IsPinned(uInterface(uPtr(resource), ::TYPES[5/*Fuse.Resources.IMemoryResource*/])) || AllowPinnedFree()))
        return true;

    if ((AllowPinnedFree() || !::g::Fuse::Resources::IMemoryResource::IsPinned(uInterface(uPtr(resource), ::TYPES[5/*Fuse.Resources.IMemoryResource*/]))) && (UnusedTimeout() > 0.0))
    {
        double elapsed = ::g::Fuse::Time::FrameTime() - ::g::Fuse::Resources::IMemoryResource::LastUsed(uInterface(uPtr(resource), ::TYPES[5/*Fuse.Resources.IMemoryResource*/]));

        if (elapsed > UnusedTimeout())
            return true;
    }

    return false;
}

// public generated bool get_UnloadInBackground() [instance] :55
bool MemoryPolicy::UnloadInBackground()
{
    return _UnloadInBackground;
}

// public generated void set_UnloadInBackground(bool value) [instance] :55
void MemoryPolicy::UnloadInBackground(bool value)
{
    _UnloadInBackground = value;
}

// public generated bool get_UnpinInvisible() [instance] :64
bool MemoryPolicy::UnpinInvisible()
{
    return _UnpinInvisible;
}

// public generated void set_UnpinInvisible(bool value) [instance] :64
void MemoryPolicy::UnpinInvisible(bool value)
{
    _UnpinInvisible = value;
}

// public generated double get_UnusedTimeout() [instance] :58
double MemoryPolicy::UnusedTimeout()
{
    return _UnusedTimeout;
}

// public generated void set_UnusedTimeout(double value) [instance] :58
void MemoryPolicy::UnusedTimeout(double value)
{
    _UnusedTimeout = value;
}

// public generated MemoryPolicy New() [static] :10
MemoryPolicy* MemoryPolicy::New1()
{
    MemoryPolicy* obj5 = (MemoryPolicy*)uNew(MemoryPolicy_typeof());
    obj5->ctor_();
    return obj5;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/MultiDensityImageSource.uno
// ---------------------------------------------------------------------------------------

// public sealed class MultiDensityImageSource :28
// {
static void MultiDensityImageSource_build(uType* type)
{
    ::TYPES[17] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[20] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::IDisposable_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(5,
        ::TYPES[17/*Uno.Collections.ObservableList<Fuse.Resources.ImageSource>*/], offsetof(MultiDensityImageSource, _sources), 0,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(MultiDensityImageSource, _proxy), 0,
        ::g::Uno::Float_typeof(), offsetof(MultiDensityImageSource, _matchDensity), 0,
        ::g::Uno::Bool_typeof(), offsetof(MultiDensityImageSource, _hasMatchDensity), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(MultiDensityImageSource, _active), 0,
        ::TYPES[0/*Uno.Action*/], offsetof(MultiDensityImageSource, ActiveChanged1), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_MatchDensity", NULL, (void*)MultiDensityImageSource__get_MatchDensity_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MatchDensity", NULL, (void*)MultiDensityImageSource__set_MatchDensity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)MultiDensityImageSource__New2_fn, 0, true, type, 0),
        new uFunction("get_Sources", NULL, (void*)MultiDensityImageSource__get_Sources_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL), 0));
}

::g::Fuse::Resources::ImageSource_type* MultiDensityImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 11;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(MultiDensityImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.MultiDensityImageSource", options);
    type->fp_build_ = MultiDensityImageSource_build;
    type->fp_ctor_ = (void*)MultiDensityImageSource__New2_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))MultiDensityImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))MultiDensityImageSource__OnPinChanged_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))MultiDensityImageSource__get_Orientation_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))MultiDensityImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))MultiDensityImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))MultiDensityImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))MultiDensityImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))MultiDensityImageSource__get_State_fn;
    return type;
}

// public MultiDensityImageSource() :43
void MultiDensityImageSource__ctor_2_fn(MultiDensityImageSource* __this)
{
    __this->ctor_2();
}

// internal Fuse.Resources.ImageSource get_Active() :94
void MultiDensityImageSource__get_Active_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Active();
}

// internal generated void add_ActiveChanged(Uno.Action value) :49
void MultiDensityImageSource__add_ActiveChanged_fn(MultiDensityImageSource* __this, uDelegate* value)
{
    __this->add_ActiveChanged(value);
}

// internal generated void remove_ActiveChanged(Uno.Action value) :49
void MultiDensityImageSource__remove_ActiveChanged_fn(MultiDensityImageSource* __this, uDelegate* value)
{
    __this->remove_ActiveChanged(value);
}

// public override sealed texture2D GetTexture() :174
void MultiDensityImageSource__GetTexture_fn(MultiDensityImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "GetTexture()");
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// public float get_MatchDensity() :78
void MultiDensityImageSource__get_MatchDensity_fn(MultiDensityImageSource* __this, float* __retval)
{
    *__retval = __this->MatchDensity();
}

// public void set_MatchDensity(float value) :79
void MultiDensityImageSource__set_MatchDensity_fn(MultiDensityImageSource* __this, float* value)
{
    __this->MatchDensity(*value);
}

// public MultiDensityImageSource New() :43
void MultiDensityImageSource__New2_fn(MultiDensityImageSource** __retval)
{
    *__retval = MultiDensityImageSource::New2();
}

// private void OnActiveChanged() :51
void MultiDensityImageSource__OnActiveChanged_fn(MultiDensityImageSource* __this)
{
    __this->OnActiveChanged();
}

// private void OnImageAdded(Fuse.Resources.ImageSource img) :60
void MultiDensityImageSource__OnImageAdded_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* img)
{
    __this->OnImageAdded(img);
}

// private void OnImageRemoved(Fuse.Resources.ImageSource img) :66
void MultiDensityImageSource__OnImageRemoved_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* img)
{
    __this->OnImageRemoved(img);
}

// protected override sealed void OnPinChanged() :136
void MultiDensityImageSource__OnPinChanged_fn(MultiDensityImageSource* __this)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "OnPinChanged()");
    __this->SelectActive();
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation() :160
void MultiDensityImageSource__get_Orientation_fn(MultiDensityImageSource* __this, int32_t* __retval)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "get_Orientation()");
    return *__retval = uPtr(__this->_proxy)->Orientation(), void();
}

// public override sealed int2 get_PixelSize() :152
void MultiDensityImageSource__get_PixelSize_fn(MultiDensityImageSource* __this, ::g::Uno::Int2* __retval)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "get_PixelSize()");
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public override sealed void Reload() :179
void MultiDensityImageSource__Reload_fn(MultiDensityImageSource* __this)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "Reload()");
    uPtr(__this->_proxy)->Reload();
}

// private void SelectActive() :97
void MultiDensityImageSource__SelectActive_fn(MultiDensityImageSource* __this)
{
    __this->SelectActive();
}

// public override sealed float2 get_Size() :144
void MultiDensityImageSource__get_Size_fn(MultiDensityImageSource* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "get_Size()");
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity() :186
void MultiDensityImageSource__get_SizeDensity_fn(MultiDensityImageSource* __this, float* __retval)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "get_SizeDensity()");
    return *__retval = uPtr(__this->_proxy)->Density(), void();
}

// public Uno.Collections.IList<Fuse.Resources.ImageSource> get_Sources() :35
void MultiDensityImageSource__get_Sources_fn(MultiDensityImageSource* __this, uObject** __retval)
{
    *__retval = __this->Sources();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :168
void MultiDensityImageSource__get_State_fn(MultiDensityImageSource* __this, int32_t* __retval)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "get_State()");
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// private void SwapActive(Fuse.Resources.ImageSource use) :116
void MultiDensityImageSource__SwapActive_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* use)
{
    __this->SwapActive(use);
}

// public MultiDensityImageSource() [instance] :43
void MultiDensityImageSource::ctor_2()
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", ".ctor()");
    ctor_1();
    _sources = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[17/*Uno.Collections.ObservableList<Fuse.Resources.ImageSource>*/], uDelegate::New(::TYPES[18/*Uno.Action<Fuse.Resources.ImageSource>*/], (void*)MultiDensityImageSource__OnImageAdded_fn, this), uDelegate::New(::TYPES[18/*Uno.Action<Fuse.Resources.ImageSource>*/], (void*)MultiDensityImageSource__OnImageRemoved_fn, this)));
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
}

// internal Fuse.Resources.ImageSource get_Active() [instance] :94
::g::Fuse::Resources::ImageSource* MultiDensityImageSource::Active()
{
    return _active;
}

// internal generated void add_ActiveChanged(Uno.Action value) [instance] :49
void MultiDensityImageSource::add_ActiveChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "add_ActiveChanged(Uno.Action)");
    ActiveChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ActiveChanged1, value), ::TYPES[0/*Uno.Action*/]);
}

// internal generated void remove_ActiveChanged(Uno.Action value) [instance] :49
void MultiDensityImageSource::remove_ActiveChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "remove_ActiveChanged(Uno.Action)");
    ActiveChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ActiveChanged1, value), ::TYPES[0/*Uno.Action*/]);
}

// public float get_MatchDensity() [instance] :78
float MultiDensityImageSource::MatchDensity()
{
    return _matchDensity;
}

// public void set_MatchDensity(float value) [instance] :79
void MultiDensityImageSource::MatchDensity(float value)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "set_MatchDensity(float)");

    if (_hasMatchDensity && (_matchDensity == value))
        return;

    _hasMatchDensity = true;
    _matchDensity = value;
    SelectActive();
}

// private void OnActiveChanged() [instance] :51
void MultiDensityImageSource::OnActiveChanged()
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "OnActiveChanged()");
    uDelegate* handler = ActiveChanged1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid();
}

// private void OnImageAdded(Fuse.Resources.ImageSource img) [instance] :60
void MultiDensityImageSource::OnImageAdded(::g::Fuse::Resources::ImageSource* img)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "OnImageAdded(Fuse.Resources.ImageSource)");

    if (IsPinned())
        SelectActive();
}

// private void OnImageRemoved(Fuse.Resources.ImageSource img) [instance] :66
void MultiDensityImageSource::OnImageRemoved(::g::Fuse::Resources::ImageSource* img)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "OnImageRemoved(Fuse.Resources.ImageSource)");

    if (IsPinned())
        SelectActive();
}

// private void SelectActive() [instance] :97
void MultiDensityImageSource::SelectActive()
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "SelectActive()");
    ::g::Fuse::Resources::ImageSource* ret3;
    float screen = _hasMatchDensity ? _matchDensity : uPtr(::g::Fuse::AppBase::Current2())->PixelsPerPoint();
    float diff = FLT_INF;
    ::g::Fuse::Resources::ImageSource* use = NULL;
    uObject* enum1 = (uObject*)uPtr(_sources)->GetEnumerator();

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[19/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Fuse::Resources::ImageSource* source = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[20/*Uno.Collections.IEnumerator<Fuse.Resources.ImageSource>*/]), &ret3), ret3);
                    float d = ::g::Uno::Math::Abs1(uPtr(source)->SizeDensity() - screen);

                    if (d < diff)
                    {
                        use = source;
                        diff = d;
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[21/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[21/*Uno.IDisposable*/]));
        }
        __after_finally_0:;
    }

    SwapActive(use);
}

// public Uno.Collections.IList<Fuse.Resources.ImageSource> get_Sources() [instance] :35
uObject* MultiDensityImageSource::Sources()
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "get_Sources()");
    return (uObject*)_sources;
}

// private void SwapActive(Fuse.Resources.ImageSource use) [instance] :116
void MultiDensityImageSource::SwapActive(::g::Fuse::Resources::ImageSource* use)
{
    uStackFrame __("Fuse.Resources.MultiDensityImageSource", "SwapActive(Fuse.Resources.ImageSource)");

    if (use == _active)
        return;

    if (_active != NULL)
        uPtr(_proxy)->Release();

    _active = use;

    if (use != NULL)
        uPtr(_proxy)->Attach(use);

    OnActiveChanged();
}

// public MultiDensityImageSource New() [static] :43
MultiDensityImageSource* MultiDensityImageSource::New2()
{
    MultiDensityImageSource* obj2 = (MultiDensityImageSource*)uNew(MultiDensityImageSource_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Resources/IDeferredDisposable.uno
// ---------------------------------------------------------------------------------

// internal abstract class PolicyDeferredDisposable :20
// {
static void PolicyDeferredDisposable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Resources::IDeferredDisposable_typeof(), offsetof(PolicyDeferredDisposable_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(PolicyDeferredDisposable_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Resources::DisposalPolicy_typeof(), offsetof(PolicyDeferredDisposable, Policy), 0);
}

PolicyDeferredDisposable_type* PolicyDeferredDisposable_typeof()
{
    static uSStrong<PolicyDeferredDisposable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(PolicyDeferredDisposable);
    options.TypeSize = sizeof(PolicyDeferredDisposable_type);
    type = (PolicyDeferredDisposable_type*)uClassType::New("Fuse.Resources.PolicyDeferredDisposable", options);
    type->fp_build_ = PolicyDeferredDisposable_build;
    type->interface0.fp_MarkUsed = (void(*)(uObject*))PolicyDeferredDisposable__MarkUsed_fn;
    type->interface0.fp_CanDispose = (void(*)(uObject*, int32_t*, bool*))PolicyDeferredDisposable__CanDispose_fn;
    return type;
}

// protected generated PolicyDeferredDisposable() :20
void PolicyDeferredDisposable__ctor__fn(PolicyDeferredDisposable* __this)
{
    __this->ctor_();
}

// public bool CanDispose(Fuse.Resources.DisposalRequest dr) :30
void PolicyDeferredDisposable__CanDispose_fn(PolicyDeferredDisposable* __this, int32_t* dr, bool* __retval)
{
    *__retval = __this->CanDispose(*dr);
}

// protected bool get_IsPinned() :39
void PolicyDeferredDisposable__get_IsPinned_fn(PolicyDeferredDisposable* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// public void MarkUsed() :24
void PolicyDeferredDisposable__MarkUsed_fn(PolicyDeferredDisposable* __this)
{
    __this->MarkUsed();
}

// protected generated PolicyDeferredDisposable() [instance] :20
void PolicyDeferredDisposable::ctor_()
{
}

// public bool CanDispose(Fuse.Resources.DisposalRequest dr) [instance] :30
bool PolicyDeferredDisposable::CanDispose(int32_t dr)
{
    uStackFrame __("Fuse.Resources.PolicyDeferredDisposable", "CanDispose(Fuse.Resources.DisposalRequest)");

    if (Policy != NULL)
        return uPtr(Policy)->CanDispose(dr, IsPinned());

    return true;
}

// protected bool get_IsPinned() [instance] :39
bool PolicyDeferredDisposable::IsPinned()
{
    return false;
}

// public void MarkUsed() [instance] :24
void PolicyDeferredDisposable::MarkUsed()
{
    uStackFrame __("Fuse.Resources.PolicyDeferredDisposable", "MarkUsed()");

    if (Policy != NULL)
        uPtr(Policy)->MarkUsed();
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/ProxyImageSource.uno
// --------------------------------------------------------------------------------

// internal sealed class ProxyImageSource :7
// {
static void ProxyImageSource_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    ::TYPES[15] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    ::TYPES[22] = ::g::Fuse::Resources::LoadingImageSource_typeof();
    ::TYPES[23] = ::g::Uno::Graphics::Texture2D_typeof();
    type->SetDependencies(
        ::g::Fuse::Resources::MemoryPolicy_typeof());
    type->SetFields(0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ProxyImageSource, _outer), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ProxyImageSource, _impl), 0,
        ::g::Uno::Bool_typeof(), offsetof(ProxyImageSource, _isDefaultPolicy), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(ProxyImageSource, _policy), 0,
        ::g::Uno::Float_typeof(), offsetof(ProxyImageSource, _density), 0,
        ::g::Uno::Bool_typeof(), offsetof(ProxyImageSource, _hasDensity), 0);
}

uType* ProxyImageSource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ProxyImageSource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.ProxyImageSource", options);
    type->fp_build_ = ProxyImageSource_build;
    return type;
}

// public ProxyImageSource(Fuse.Resources.ImageSource outer) :10
void ProxyImageSource__ctor__fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource* outer)
{
    __this->ctor_(outer);
}

// public void Attach(Fuse.Resources.ImageSource impl) :149
void ProxyImageSource__Attach_fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource* impl)
{
    __this->Attach(impl);
}

// public void DefaultSetPolicy(Fuse.Resources.MemoryPolicy mp) :43
void ProxyImageSource__DefaultSetPolicy_fn(ProxyImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* mp)
{
    __this->DefaultSetPolicy(mp);
}

// public float get_Density() :98
void ProxyImageSource__get_Density_fn(ProxyImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :104
void ProxyImageSource__set_Density_fn(ProxyImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public texture2D GetTexture() :116
void ProxyImageSource__GetTexture_fn(ProxyImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->GetTexture();
}

// public Fuse.Resources.ImageSource get_Impl() :16
void ProxyImageSource__get_Impl_fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Impl();
}

// public ProxyImageSource New(Fuse.Resources.ImageSource outer) :10
void ProxyImageSource__New1_fn(::g::Fuse::Resources::ImageSource* outer, ProxyImageSource** __retval)
{
    *__retval = ProxyImageSource::New1(outer);
}

// public void OnPinChanged() :18
void ProxyImageSource__OnPinChanged_fn(ProxyImageSource* __this)
{
    __this->OnPinChanged();
}

// public Fuse.Resources.Exif.ImageOrientation get_Orientation() :61
void ProxyImageSource__get_Orientation_fn(ProxyImageSource* __this, int32_t* __retval)
{
    *__retval = __this->Orientation();
}

// public int2 get_PixelSize() :83
void ProxyImageSource__get_PixelSize_fn(ProxyImageSource* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->PixelSize();
}

// public Fuse.Resources.MemoryPolicy get_Policy() :33
void ProxyImageSource__get_Policy_fn(ProxyImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) :34
void ProxyImageSource__set_Policy_fn(ProxyImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->Policy(value);
}

// private void ProxyOnChanged(object s, Uno.EventArgs a) :139
void ProxyImageSource__ProxyOnChanged_fn(ProxyImageSource* __this, uObject* s, ::g::Uno::EventArgs* a)
{
    __this->ProxyOnChanged(s, a);
}

// private void ProxyOnError(object s, Fuse.Resources.ImageSourceErrorArgs a) :144
void ProxyImageSource__ProxyOnError_fn(ProxyImageSource* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    __this->ProxyOnError(s, a);
}

// public void Release() :127
void ProxyImageSource__Release_fn(ProxyImageSource* __this)
{
    __this->Release();
}

// public void Reload() :121
void ProxyImageSource__Reload_fn(ProxyImageSource* __this)
{
    __this->Reload();
}

// public float2 get_Size() :71
void ProxyImageSource__get_Size_fn(ProxyImageSource* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public Fuse.Resources.ImageSourceState get_State() :113
void ProxyImageSource__get_State_fn(ProxyImageSource* __this, int32_t* __retval)
{
    *__retval = __this->State();
}

// private void UpdatePolicy() :52
void ProxyImageSource__UpdatePolicy_fn(ProxyImageSource* __this)
{
    __this->UpdatePolicy();
}

// public ProxyImageSource(Fuse.Resources.ImageSource outer) [instance] :10
void ProxyImageSource::ctor_(::g::Fuse::Resources::ImageSource* outer)
{
    _isDefaultPolicy = true;
    _policy = ::g::Fuse::Resources::MemoryPolicy::PreloadRetain();
    _density = 1.0f;
    _outer = outer;
}

// public void Attach(Fuse.Resources.ImageSource impl) [instance] :149
void ProxyImageSource::Attach(::g::Fuse::Resources::ImageSource* impl)
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "Attach(Fuse.Resources.ImageSource)");
    _impl = impl;
    uPtr(_impl)->add_Changed(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)ProxyImageSource__ProxyOnChanged_fn, this));
    uPtr(_impl)->add_Error(uDelegate::New(::TYPES[15/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ProxyImageSource__ProxyOnError_fn, this));

    if (uPtr(_outer)->IsPinned())
        uPtr(_impl)->Pin();

    ::g::Fuse::Resources::LoadingImageSource* loading = uAs< ::g::Fuse::Resources::LoadingImageSource*>(impl, ::TYPES[22/*Fuse.Resources.LoadingImageSource*/]);

    if (loading != NULL)
        uPtr(loading)->Policy(_policy);

    uPtr(_outer)->ProxyChanged(this, ::g::Uno::EventArgs::New1());
}

// public void DefaultSetPolicy(Fuse.Resources.MemoryPolicy mp) [instance] :43
void ProxyImageSource::DefaultSetPolicy(::g::Fuse::Resources::MemoryPolicy* mp)
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "DefaultSetPolicy(Fuse.Resources.MemoryPolicy)");

    if (!_isDefaultPolicy)
        return;

    _policy = mp;
    UpdatePolicy();
}

// public float get_Density() [instance] :98
float ProxyImageSource::Density()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "get_Density()");

    if (_hasDensity || (_impl == NULL))
        return _density;

    return uPtr(_impl)->SizeDensity();
}

// public void set_Density(float value) [instance] :104
void ProxyImageSource::Density(float value)
{
    _density = value;
    _hasDensity = true;
}

// public texture2D GetTexture() [instance] :116
::g::Uno::Graphics::Texture2D* ProxyImageSource::GetTexture()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "GetTexture()");
    return (_impl == NULL) ? uCast< ::g::Uno::Graphics::Texture2D*>(NULL, ::TYPES[23/*texture2D*/]) : (::g::Uno::Graphics::Texture2D*)uPtr(_impl)->GetTexture();
}

// public Fuse.Resources.ImageSource get_Impl() [instance] :16
::g::Fuse::Resources::ImageSource* ProxyImageSource::Impl()
{
    return _impl;
}

// public void OnPinChanged() [instance] :18
void ProxyImageSource::OnPinChanged()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "OnPinChanged()");

    if (_impl == NULL)
        return;

    if (uPtr(_outer)->IsPinned())
        uPtr(_impl)->Pin();
    else
        uPtr(_impl)->Unpin();
}

// public Fuse.Resources.Exif.ImageOrientation get_Orientation() [instance] :61
int32_t ProxyImageSource::Orientation()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "get_Orientation()");

    if (_impl != NULL)
        return uPtr(_impl)->Orientation();

    return 0;
}

// public int2 get_PixelSize() [instance] :83
::g::Uno::Int2 ProxyImageSource::PixelSize()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "get_PixelSize()");

    if (_impl == NULL)
        return ::g::Uno::Int2__New1(0);

    return uPtr(_impl)->PixelSize();
}

// public Fuse.Resources.MemoryPolicy get_Policy() [instance] :33
::g::Fuse::Resources::MemoryPolicy* ProxyImageSource::Policy()
{
    return _policy;
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) [instance] :34
void ProxyImageSource::Policy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "set_Policy(Fuse.Resources.MemoryPolicy)");
    _policy = value;
    _isDefaultPolicy = false;
    UpdatePolicy();
}

// private void ProxyOnChanged(object s, Uno.EventArgs a) [instance] :139
void ProxyImageSource::ProxyOnChanged(uObject* s, ::g::Uno::EventArgs* a)
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "ProxyOnChanged(object,Uno.EventArgs)");
    uPtr(_outer)->ProxyChanged(this, a);
}

// private void ProxyOnError(object s, Fuse.Resources.ImageSourceErrorArgs a) [instance] :144
void ProxyImageSource::ProxyOnError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "ProxyOnError(object,Fuse.Resources.ImageSourceErrorArgs)");
    uPtr(_outer)->ProxyError(this, a);
}

// public void Release() [instance] :127
void ProxyImageSource::Release()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "Release()");

    if (_impl != NULL)
    {
        if (uPtr(_outer)->IsPinned())
            uPtr(_impl)->Unpin();

        uPtr(_impl)->remove_Changed(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)ProxyImageSource__ProxyOnChanged_fn, this));
        uPtr(_impl)->remove_Error(uDelegate::New(::TYPES[15/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ProxyImageSource__ProxyOnError_fn, this));
        _impl = NULL;
    }
}

// public void Reload() [instance] :121
void ProxyImageSource::Reload()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "Reload()");

    if (_impl != NULL)
        uPtr(_impl)->Reload();
}

// public float2 get_Size() [instance] :71
::g::Uno::Float2 ProxyImageSource::Size()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "get_Size()");

    if (_impl == NULL)
        return ::g::Uno::Float2__New1(0.0f);

    ::g::Uno::Int2 ps = uPtr(_impl)->PixelSize();
    return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)ps.X, (float)ps.Y), Density());
}

// public Fuse.Resources.ImageSourceState get_State() [instance] :113
int32_t ProxyImageSource::State()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "get_State()");
    return (_impl == NULL) ? 0 : uPtr(_impl)->State();
}

// private void UpdatePolicy() [instance] :52
void ProxyImageSource::UpdatePolicy()
{
    uStackFrame __("Fuse.Resources.ProxyImageSource", "UpdatePolicy()");
    ::g::Fuse::Resources::LoadingImageSource* loading = uAs< ::g::Fuse::Resources::LoadingImageSource*>(_impl, ::TYPES[22/*Fuse.Resources.LoadingImageSource*/]);

    if (loading != NULL)
        uPtr(loading)->Policy(_policy);
}

// public ProxyImageSource New(Fuse.Resources.ImageSource outer) [static] :10
ProxyImageSource* ProxyImageSource::New1(::g::Fuse::Resources::ImageSource* outer)
{
    ProxyImageSource* obj1 = (ProxyImageSource*)uNew(ProxyImageSource_typeof());
    obj1->ctor_(outer);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.9.0/ResourceSetter.uno
// -----------------------------------------------------------------

// public sealed class ResourceBool :70
// {
static void ResourceBool_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(20);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceBool__New2_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* ResourceBool_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ResourceSetter_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(ResourceBool);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Resources.ResourceBool", options);
    type->fp_build_ = ResourceBool_build;
    type->fp_ctor_ = (void*)ResourceBool__New2_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated ResourceBool() :70
void ResourceBool__ctor_4_fn(ResourceBool* __this)
{
    __this->ctor_4();
}

// public generated ResourceBool New() :70
void ResourceBool__New2_fn(ResourceBool** __retval)
{
    *__retval = ResourceBool::New2();
}

// public generated ResourceBool() [instance] :70
void ResourceBool::ctor_4()
{
    ctor_3();
}

// public generated ResourceBool New() [static] :70
ResourceBool* ResourceBool::New2()
{
    ResourceBool* obj1 = (ResourceBool*)uNew(ResourceBool_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.9.0/ResourceSetter.uno
// -----------------------------------------------------------------

// public sealed class ResourceFloat :71
// {
static void ResourceFloat_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(20);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceFloat__New2_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* ResourceFloat_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ResourceSetter_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(ResourceFloat);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Resources.ResourceFloat", options);
    type->fp_build_ = ResourceFloat_build;
    type->fp_ctor_ = (void*)ResourceFloat__New2_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated ResourceFloat() :71
void ResourceFloat__ctor_4_fn(ResourceFloat* __this)
{
    __this->ctor_4();
}

// public generated ResourceFloat New() :71
void ResourceFloat__New2_fn(ResourceFloat** __retval)
{
    *__retval = ResourceFloat::New2();
}

// public generated ResourceFloat() [instance] :71
void ResourceFloat::ctor_4()
{
    ctor_3();
}

// public generated ResourceFloat New() [static] :71
ResourceFloat* ResourceFloat::New2()
{
    ResourceFloat* obj1 = (ResourceFloat*)uNew(ResourceFloat_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.9.0/ResourceSetter.uno
// -----------------------------------------------------------------

// public sealed class ResourceFloat2 :72
// {
static void ResourceFloat2_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(20);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceFloat2__New2_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* ResourceFloat2_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ResourceSetter_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(ResourceFloat2);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Resources.ResourceFloat2", options);
    type->fp_build_ = ResourceFloat2_build;
    type->fp_ctor_ = (void*)ResourceFloat2__New2_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated ResourceFloat2() :72
void ResourceFloat2__ctor_4_fn(ResourceFloat2* __this)
{
    __this->ctor_4();
}

// public generated ResourceFloat2 New() :72
void ResourceFloat2__New2_fn(ResourceFloat2** __retval)
{
    *__retval = ResourceFloat2::New2();
}

// public generated ResourceFloat2() [instance] :72
void ResourceFloat2::ctor_4()
{
    ctor_3();
}

// public generated ResourceFloat2 New() [static] :72
ResourceFloat2* ResourceFloat2::New2()
{
    ResourceFloat2* obj1 = (ResourceFloat2*)uNew(ResourceFloat2_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.9.0/ResourceSetter.uno
// -----------------------------------------------------------------

// public sealed class ResourceFloat3 :73
// {
static void ResourceFloat3_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::Float3_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(20);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceFloat3__New2_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* ResourceFloat3_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ResourceSetter_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(ResourceFloat3);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Resources.ResourceFloat3", options);
    type->fp_build_ = ResourceFloat3_build;
    type->fp_ctor_ = (void*)ResourceFloat3__New2_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated ResourceFloat3() :73
void ResourceFloat3__ctor_4_fn(ResourceFloat3* __this)
{
    __this->ctor_4();
}

// public generated ResourceFloat3 New() :73
void ResourceFloat3__New2_fn(ResourceFloat3** __retval)
{
    *__retval = ResourceFloat3::New2();
}

// public generated ResourceFloat3() [instance] :73
void ResourceFloat3::ctor_4()
{
    ctor_3();
}

// public generated ResourceFloat3 New() [static] :73
ResourceFloat3* ResourceFloat3::New2()
{
    ResourceFloat3* obj1 = (ResourceFloat3*)uNew(ResourceFloat3_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.9.0/ResourceSetter.uno
// -----------------------------------------------------------------

// public sealed class ResourceFloat4 :74
// {
static void ResourceFloat4_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(20);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceFloat4__New2_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* ResourceFloat4_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ResourceSetter_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(ResourceFloat4);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Resources.ResourceFloat4", options);
    type->fp_build_ = ResourceFloat4_build;
    type->fp_ctor_ = (void*)ResourceFloat4__New2_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated ResourceFloat4() :74
void ResourceFloat4__ctor_4_fn(ResourceFloat4* __this)
{
    __this->ctor_4();
}

// public generated ResourceFloat4 New() :74
void ResourceFloat4__New2_fn(ResourceFloat4** __retval)
{
    *__retval = ResourceFloat4::New2();
}

// public generated ResourceFloat4() [instance] :74
void ResourceFloat4::ctor_4()
{
    ctor_3();
}

// public generated ResourceFloat4 New() [static] :74
ResourceFloat4* ResourceFloat4::New2()
{
    ResourceFloat4* obj1 = (ResourceFloat4*)uNew(ResourceFloat4_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.9.0/ResourceSetter.uno
// -----------------------------------------------------------------

// public sealed class ResourceObject :69
// {
static void ResourceObject_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(uObject_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(20);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceObject__New2_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* ResourceObject_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ResourceSetter_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(ResourceObject);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Resources.ResourceObject", options);
    type->fp_build_ = ResourceObject_build;
    type->fp_ctor_ = (void*)ResourceObject__New2_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated ResourceObject() :69
void ResourceObject__ctor_4_fn(ResourceObject* __this)
{
    __this->ctor_4();
}

// public generated ResourceObject New() :69
void ResourceObject__New2_fn(ResourceObject** __retval)
{
    *__retval = ResourceObject::New2();
}

// public generated ResourceObject() [instance] :69
void ResourceObject::ctor_4()
{
    ctor_3();
}

// public generated ResourceObject New() [static] :69
ResourceObject* ResourceObject::New2()
{
    ResourceObject* obj1 = (ResourceObject*)uNew(ResourceObject_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Resources/ResourceRegistry.uno
// ------------------------------------------------------------------------------

// public static class ResourceRegistry :8
// {
// static generated ResourceRegistry() :8
static void ResourceRegistry__cctor__fn(uType* __type)
{
    ResourceRegistry::_handlers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[24/*Uno.Collections.Dictionary<string, Uno.Collections.List<Uno.Action>>*/]));
}

static void ResourceRegistry_build(uType* type)
{
    ::TYPES[24] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL), NULL);
    ::TYPES[25] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    ::TYPES[26] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[24/*Uno.Collections.Dictionary<string, Uno.Collections.List<Uno.Action>>*/], (uintptr_t)&ResourceRegistry::_handlers_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("AddResourceChangedHandler", NULL, (void*)ResourceRegistry__AddResourceChangedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action_typeof()),
        new uFunction("NotifyResourceChanged", NULL, (void*)ResourceRegistry__NotifyResourceChanged_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("RemoveResourceChangedHandler", NULL, (void*)ResourceRegistry__RemoveResourceChangedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action_typeof()));
}

uClassType* ResourceRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.ResourceRegistry", options);
    type->fp_build_ = ResourceRegistry_build;
    type->fp_cctor_ = ResourceRegistry__cctor__fn;
    return type;
}

// public static void AddResourceChangedHandler(string key, Uno.Action handler) :12
void ResourceRegistry__AddResourceChangedHandler_fn(uString* key, uDelegate* handler)
{
    ResourceRegistry::AddResourceChangedHandler(key, handler);
}

// public static void NotifyResourceChanged(string key) :28
void ResourceRegistry__NotifyResourceChanged_fn(uString* key)
{
    ResourceRegistry::NotifyResourceChanged(key);
}

// public static void RemoveResourceChangedHandler(string key, Uno.Action handler) :22
void ResourceRegistry__RemoveResourceChangedHandler_fn(uString* key, uDelegate* handler)
{
    ResourceRegistry::RemoveResourceChangedHandler(key, handler);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ResourceRegistry::_handlers_;

// public static void AddResourceChangedHandler(string key, Uno.Action handler) [static] :12
void ResourceRegistry::AddResourceChangedHandler(uString* key, uDelegate* handler)
{
    uStackFrame __("Fuse.Resources.ResourceRegistry", "AddResourceChangedHandler(string,Uno.Action)");
    ResourceRegistry_typeof()->Init();
    bool ret2;
    ::g::Uno::Collections::List* ret3;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ResourceRegistry::_handlers_), key, &ret2), ret2))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ResourceRegistry::_handlers_), key, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[25/*Uno.Collections.List<Uno.Action>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ResourceRegistry::_handlers_), key, &ret3), ret3)), handler);
}

// public static void NotifyResourceChanged(string key) [static] :28
void ResourceRegistry::NotifyResourceChanged(uString* key)
{
    uStackFrame __("Fuse.Resources.ResourceRegistry", "NotifyResourceChanged(string)");
    ResourceRegistry_typeof()->Init();
    bool ret4;
    ::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > ret5;
    ::g::Uno::Collections::List* list;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ResourceRegistry::_handlers_), key, (void**)(&list), &ret4), ret4))
    {
        ::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(list), &ret5), ret5);

        {
            try
            {
                {
                    while (enum1.MoveNext(::TYPES[26/*Uno.Collections.List<Uno.Action>.Enumerator*/]))
                    {
                        uDelegate* h = enum1.Current(::TYPES[26/*Uno.Collections.List<Uno.Action>.Enumerator*/]);
                        uPtr(h)->InvokeVoid();
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum1.Dispose(::TYPES[26/*Uno.Collections.List<Uno.Action>.Enumerator*/]);
                }
                                throw __t;
                goto __after_finally_1;
            }

            {
                enum1.Dispose(::TYPES[26/*Uno.Collections.List<Uno.Action>.Enumerator*/]);
            }
            __after_finally_1:;
        }
    }
}

// public static void RemoveResourceChangedHandler(string key, Uno.Action handler) [static] :22
void ResourceRegistry::RemoveResourceChangedHandler(uString* key, uDelegate* handler)
{
    uStackFrame __("Fuse.Resources.ResourceRegistry", "RemoveResourceChangedHandler(string,Uno.Action)");
    ResourceRegistry_typeof()->Init();
    bool ret6;
    bool ret7;
    ::g::Uno::Collections::List* ret8;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ResourceRegistry::_handlers_), key, &ret6), ret6))
        U_THROW(::g::Uno::Exception::New1());

    ::g::Uno::Collections::List__Remove_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ResourceRegistry::_handlers_), key, &ret8), ret8)), handler, &ret7);
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.9.0/ResourceSetter.uno
// -----------------------------------------------------------------

// public abstract class ResourceSetter<T> :26
// {
static void ResourceSetter_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(18,
        ::g::Uno::String_typeof(), offsetof(ResourceSetter, _key), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Key", NULL, (void*)ResourceSetter__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Key", NULL, (void*)ResourceSetter__set_Key_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)ResourceSetter__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)ResourceSetter__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
}

::g::Fuse::Node_type* ResourceSetter_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 20;
    options.GenericCount = 1;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(ResourceSetter);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Resources.ResourceSetter`1", options);
    type->fp_build_ = ResourceSetter_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ResourceSetter__OnRooted_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated ResourceSetter() :26
void ResourceSetter__ctor_3_fn(ResourceSetter* __this)
{
    __this->ctor_3();
}

// public string get_Key() :31
void ResourceSetter__get_Key_fn(ResourceSetter* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// public void set_Key(string value) :32
void ResourceSetter__set_Key_fn(ResourceSetter* __this, uString* value)
{
    __this->Key(value);
}

// private void OnChanged() :59
void ResourceSetter__OnChanged_fn(ResourceSetter* __this)
{
    __this->OnChanged();
}

// protected override sealed void OnRooted() :53
void ResourceSetter__OnRooted_fn(ResourceSetter* __this)
{
    uStackFrame __("Fuse.Resources.ResourceSetter`1", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->OnChanged();
}

// public T get_Value() :42
void ResourceSetter__get_Value_fn(ResourceSetter* __this, uTRef __retval)
{
    return __retval.Store(__this->_value()), void();
}

// public void set_Value(T value) :43
void ResourceSetter__set_Value_fn(ResourceSetter* __this, void* value)
{
    uStackFrame __("Fuse.Resources.ResourceSetter`1", "set_Value(T)");

    if (!::g::Uno::Object::Equals1(uBoxPtr(__this->__type->GetBase(ResourceSetter_typeof())->T(0), __this->_value()), uBoxPtr(__this->__type->GetBase(ResourceSetter_typeof())->T(0), value)))
    {
        __this->_value() = value;
        __this->OnChanged();
    }
}

// protected generated ResourceSetter() [instance] :26
void ResourceSetter::ctor_3()
{
    ctor_2();
}

// public string get_Key() [instance] :31
uString* ResourceSetter::Key()
{
    return _key;
}

// public void set_Key(string value) [instance] :32
void ResourceSetter::Key(uString* value)
{
    uStackFrame __("Fuse.Resources.ResourceSetter`1", "set_Key(string)");
    _key = value;
    OnChanged();
}

// private void OnChanged() [instance] :59
void ResourceSetter::OnChanged()
{
    uStackFrame __("Fuse.Resources.ResourceSetter`1", "OnChanged()");

    if ((Parent() != NULL) && ::g::Uno::String::op_Inequality(_key, NULL))
        uPtr(Parent())->SetResource(_key, uBoxPtr(__type->GetBase(ResourceSetter_typeof())->T(0), _value()));
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.9.0/ResourceSetter.uno
// -----------------------------------------------------------------

// public sealed class ResourceString :68
// {
static void ResourceString_build(uType* type)
{
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(20);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceString__New2_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* ResourceString_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ResourceSetter_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(ResourceString);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Resources.ResourceString", options);
    type->fp_build_ = ResourceString_build;
    type->fp_ctor_ = (void*)ResourceString__New2_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated ResourceString() :68
void ResourceString__ctor_4_fn(ResourceString* __this)
{
    __this->ctor_4();
}

// public generated ResourceString New() :68
void ResourceString__New2_fn(ResourceString** __retval)
{
    *__retval = ResourceString::New2();
}

// public generated ResourceString() [instance] :68
void ResourceString::ctor_4()
{
    ctor_3();
}

// public generated ResourceString New() [static] :68
ResourceString* ResourceString::New2()
{
    ResourceString* obj1 = (ResourceString*)uNew(ResourceString_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Resources/DisposalPolicy.uno
// ----------------------------------------------------------------------------

// internal sealed class RetainDisposalPolicy :47
// {
static void RetainDisposalPolicy_build(uType* type)
{
}

::g::Fuse::Resources::DisposalPolicy_type* RetainDisposalPolicy_typeof()
{
    static uSStrong< ::g::Fuse::Resources::DisposalPolicy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::DisposalPolicy_typeof();
    options.ObjectSize = sizeof(RetainDisposalPolicy);
    options.TypeSize = sizeof(::g::Fuse::Resources::DisposalPolicy_type);
    type = (::g::Fuse::Resources::DisposalPolicy_type*)uClassType::New("Fuse.Resources.RetainDisposalPolicy", options);
    type->fp_build_ = RetainDisposalPolicy_build;
    type->fp_ctor_ = (void*)RetainDisposalPolicy__New1_fn;
    type->fp_CanDispose = (void(*)(::g::Fuse::Resources::DisposalPolicy*, int32_t*, bool*, bool*))RetainDisposalPolicy__CanDispose_fn;
    type->fp_Clone = (void(*)(::g::Fuse::Resources::DisposalPolicy*, ::g::Fuse::Resources::DisposalPolicy**))RetainDisposalPolicy__Clone_fn;
    type->fp_MarkUsed = (void(*)(::g::Fuse::Resources::DisposalPolicy*))RetainDisposalPolicy__MarkUsed_fn;
    return type;
}

// public generated RetainDisposalPolicy() :47
void RetainDisposalPolicy__ctor_1_fn(RetainDisposalPolicy* __this)
{
    __this->ctor_1();
}

// public override sealed bool CanDispose(Fuse.Resources.DisposalRequest dr, bool pinned) :50
void RetainDisposalPolicy__CanDispose_fn(RetainDisposalPolicy* __this, int32_t* dr, bool* pinned, bool* __retval)
{
    return *__retval = false, void();
}

// public override sealed Fuse.Resources.DisposalPolicy Clone() :51
void RetainDisposalPolicy__Clone_fn(RetainDisposalPolicy* __this, ::g::Fuse::Resources::DisposalPolicy** __retval)
{
    return *__retval = RetainDisposalPolicy::New1(), void();
}

// public override sealed void MarkUsed() :49
void RetainDisposalPolicy__MarkUsed_fn(RetainDisposalPolicy* __this)
{
}

// public generated RetainDisposalPolicy New() :47
void RetainDisposalPolicy__New1_fn(RetainDisposalPolicy** __retval)
{
    *__retval = RetainDisposalPolicy::New1();
}

// public generated RetainDisposalPolicy() [instance] :47
void RetainDisposalPolicy::ctor_1()
{
    ctor_();
}

// public generated RetainDisposalPolicy New() [static] :47
RetainDisposalPolicy* RetainDisposalPolicy::New1()
{
    RetainDisposalPolicy* obj1 = (RetainDisposalPolicy*)uNew(RetainDisposalPolicy_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Resources/SystemFileSource.uno
// ------------------------------------------------------------------------------

// internal sealed class SystemFileSource :6
// {
static void SystemFileSource_build(uType* type)
{
    type->SetFields(2);
}

::g::Uno::UX::FileSource_type* SystemFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SystemFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.Resources.SystemFileSource", options);
    type->fp_build_ = SystemFileSource_build;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))SystemFileSource__OpenRead_fn;
    return type;
}

// public SystemFileSource(string file) :8
void SystemFileSource__ctor_1_fn(SystemFileSource* __this, uString* file)
{
    __this->ctor_1(file);
}

// public SystemFileSource New(string file) :8
void SystemFileSource__New1_fn(uString* file, SystemFileSource** __retval)
{
    *__retval = SystemFileSource::New1(file);
}

// public override sealed Uno.IO.Stream OpenRead() :13
void SystemFileSource__OpenRead_fn(SystemFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    uStackFrame __("Fuse.Resources.SystemFileSource", "OpenRead()");
    return *__retval = ::g::Uno::IO::File::OpenRead(__this->Name), void();
}

// public SystemFileSource(string file) [instance] :8
void SystemFileSource::ctor_1(uString* file)
{
    uStackFrame __("Fuse.Resources.SystemFileSource", ".ctor(string)");
    ctor_(file);
}

// public SystemFileSource New(string file) [static] :8
SystemFileSource* SystemFileSource::New1(uString* file)
{
    SystemFileSource* obj1 = (SystemFileSource*)uNew(SystemFileSource_typeof());
    obj1->ctor_1(file);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Resources/TextureImageSource.uno
// ----------------------------------------------------------------------------------

// public sealed class TextureImageSource :17
// {
static void TextureImageSource_build(uType* type)
{
    type->SetFields(5,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(TextureImageSource, _texture), 0,
        ::g::Uno::Float_typeof(), offsetof(TextureImageSource, _density), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Density", NULL, (void*)TextureImageSource__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Density", NULL, (void*)TextureImageSource__set_Density_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)TextureImageSource__New2_fn, 0, true, type, 0),
        new uFunction("get_Texture", NULL, (void*)TextureImageSource__get_Texture_fn, 0, false, ::g::Uno::Graphics::Texture2D_typeof(), 0),
        new uFunction("set_Texture", NULL, (void*)TextureImageSource__set_Texture_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::Texture2D_typeof()));
}

::g::Fuse::Resources::ImageSource_type* TextureImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 7;
    options.ObjectSize = sizeof(TextureImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.TextureImageSource", options);
    type->fp_build_ = TextureImageSource_build;
    type->fp_ctor_ = (void*)TextureImageSource__New2_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))TextureImageSource__GetTexture_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))TextureImageSource__get_Orientation_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))TextureImageSource__get_PixelSize_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))TextureImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))TextureImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))TextureImageSource__get_State_fn;
    return type;
}

// public generated TextureImageSource() :17
void TextureImageSource__ctor_2_fn(TextureImageSource* __this)
{
    __this->ctor_2();
}

// public float get_Density() :44
void TextureImageSource__get_Density_fn(TextureImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :45
void TextureImageSource__set_Density_fn(TextureImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public override sealed texture2D GetTexture() :90
void TextureImageSource__GetTexture_fn(TextureImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = __this->_texture, void();
}

// public generated TextureImageSource New() :17
void TextureImageSource__New2_fn(TextureImageSource** __retval)
{
    *__retval = TextureImageSource::New2();
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation() :36
void TextureImageSource__get_Orientation_fn(TextureImageSource* __this, int32_t* __retval)
{
    return *__retval = 0, void();
}

// public override sealed int2 get_PixelSize() :72
void TextureImageSource__get_PixelSize_fn(TextureImageSource* __this, ::g::Uno::Int2* __retval)
{
    uStackFrame __("Fuse.Resources.TextureImageSource", "get_PixelSize()");

    if (__this->_texture != NULL)
        return *__retval = uPtr(__this->_texture)->Size(), void();

    return *__retval = ::g::Uno::Int2__New1(0), void();
}

// public override sealed float2 get_Size() :62
void TextureImageSource__get_Size_fn(TextureImageSource* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Resources.TextureImageSource", "get_Size()");

    if (__this->_texture != NULL)
        return *__retval = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(__this->_texture)->Size().X, (float)uPtr(__this->_texture)->Size().Y), __this->_density), void();

    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public override sealed float get_SizeDensity() :57
void TextureImageSource__get_SizeDensity_fn(TextureImageSource* __this, float* __retval)
{
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :82
void TextureImageSource__get_State_fn(TextureImageSource* __this, int32_t* __retval)
{
    if (__this->_texture != NULL)
        return *__retval = 1, void();

    return *__retval = 0, void();
}

// public texture2D get_Texture() :23
void TextureImageSource__get_Texture_fn(TextureImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->Texture();
}

// public void set_Texture(texture2D value) :24
void TextureImageSource__set_Texture_fn(TextureImageSource* __this, ::g::Uno::Graphics::Texture2D* value)
{
    __this->Texture(value);
}

// public generated TextureImageSource() [instance] :17
void TextureImageSource::ctor_2()
{
    _density = 1.0f;
    ctor_1();
}

// public float get_Density() [instance] :44
float TextureImageSource::Density()
{
    return _density;
}

// public void set_Density(float value) [instance] :45
void TextureImageSource::Density(float value)
{
    uStackFrame __("Fuse.Resources.TextureImageSource", "set_Density(float)");

    if (_density != value)
    {
        _density = value;
        OnChanged();
    }
}

// public texture2D get_Texture() [instance] :23
::g::Uno::Graphics::Texture2D* TextureImageSource::Texture()
{
    return _texture;
}

// public void set_Texture(texture2D value) [instance] :24
void TextureImageSource::Texture(::g::Uno::Graphics::Texture2D* value)
{
    uStackFrame __("Fuse.Resources.TextureImageSource", "set_Texture(texture2D)");

    if (_texture != value)
    {
        _texture = value;
        OnChanged();
    }
}

// public generated TextureImageSource New() [static] :17
TextureImageSource* TextureImageSource::New2()
{
    TextureImageSource* obj1 = (TextureImageSource*)uNew(TextureImageSource_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}} // ::g::Fuse::Resources
