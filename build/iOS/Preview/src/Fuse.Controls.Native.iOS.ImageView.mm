// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/iOS/ImageView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.ImageHandle.h>
#include <Fuse.Controls.Native.ImageLoader.h>
#include <Fuse.Controls.Native.iOS.ImageView.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.MultiDensityImageSource.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float3.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>
static uString* STRINGS[1];
static uType* TYPES[8];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class ImageView :14
// {
static void ImageView_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" not supported in native context");
    ::TYPES[0] = ::g::Fuse::Resources::MultiDensityImageSource_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[5] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[6] = ::g::Uno::IDisposable_typeof();
    ::TYPES[7] = ::g::ObjC::Object_typeof();
    type->SetDependencies(
        ::g::Fuse::Controls::Native::ImageLoader_typeof());
    type->SetInterfaces(
        ::TYPES[6/*Uno.IDisposable*/], offsetof(ImageView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ImageView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(ImageView_type, interface2),
        ::g::Fuse::Controls::Native::IImageView_typeof(), offsetof(ImageView_type, interface3));
    type->SetFields(10,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ImageView, _imageSource), 0,
        ::g::Uno::Float4_typeof(), offsetof(ImageView, _tintColor), 0,
        ::TYPES[7/*ObjC.Object*/], offsetof(ImageView, _uiImageView), 0,
        ::TYPES[7/*ObjC.Object*/], offsetof(ImageView, _uiImageHandle), 0,
        ::TYPES[6/*Uno.IDisposable*/], offsetof(ImageView, _imageHandle), 0);
}

ImageView_type* ImageView_typeof()
{
    static uSStrong<ImageView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ImageView);
    options.TypeSize = sizeof(ImageView_type);
    type = (ImageView_type*)uClassType::New("Fuse.Controls.Native.iOS.ImageView", options);
    type->fp_build_ = ImageView_build;
    type->fp_ctor_ = (void*)ImageView__New3_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))ImageView__Dispose_fn;
    type->interface3.fp_UpdateImageTransform = (void(*)(uObject*, float*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float2*))ImageView__UpdateImageTransform_fn;
    type->interface3.fp_set_ImageSource = (void(*)(uObject*, ::g::Fuse::Resources::ImageSource*))ImageView__set_ImageSource_fn;
    type->interface3.fp_set_TintColor = (void(*)(uObject*, ::g::Uno::Float4*))ImageView__set_TintColor_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ImageView__Dispose_fn;
    return type;
}

// public ImageView() :77
void ImageView__ctor_5_fn(ImageView* __this)
{
    __this->ctor_5();
}

// private static void ClearImage(ObjC.Object imageViewHandle) :253
void ImageView__ClearImage_fn(::g::ObjC::Object* imageViewHandle)
{
    ImageView::ClearImage(imageViewHandle);
}

// private static ObjC.Object Create() :260
void ImageView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = ImageView::Create();
}

// private static ObjC.Object CreateImageView(ObjC.Object container) :271
void ImageView__CreateImageView_fn(::g::ObjC::Object* container, ::g::ObjC::Object** __retval)
{
    *__retval = ImageView::CreateImageView(container);
}

// public override sealed void Dispose() :90
void ImageView__Dispose_fn(ImageView* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "Dispose()");
    __this->ImageHandle(NULL);

    if ((__this->ImageSource() != NULL) && uIs((::g::Fuse::Resources::ImageSource*)__this->ImageSource(), ::TYPES[0/*Fuse.Resources.MultiDensityImageSource*/]))
        uPtr(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(__this->ImageSource(), ::TYPES[0/*Fuse.Resources.MultiDensityImageSource*/]))->remove_ActiveChanged(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)ImageView__OnMultiDensityImageSourceActiveChanged_fn, __this));

    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private static float GetImageHeight(ObjC.Object handle) :216
void ImageView__GetImageHeight_fn(::g::ObjC::Object* handle, float* __retval)
{
    *__retval = ImageView::GetImageHeight(handle);
}

// private float2 GetImageSize() :199
void ImageView__GetImageSize_fn(ImageView* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetImageSize();
}

// private static float GetImageWidth(ObjC.Object handle) :207
void ImageView__GetImageWidth_fn(::g::ObjC::Object* handle, float* __retval)
{
    *__retval = ImageView::GetImageWidth(handle);
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) :104
void ImageView__set_ImageHandle_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* value)
{
    __this->ImageHandle(value);
}

// private Fuse.Resources.ImageSource get_ImageSource() :43
void ImageView__get_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->ImageSource();
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) :20
void ImageView__set_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->ImageSource(value);
}

// public ImageView New() :77
void ImageView__New3_fn(ImageView** __retval)
{
    *__retval = ImageView::New3();
}

// private void OnImageLoaded(Fuse.Controls.Native.ImageHandle handle) :133
void ImageView__OnImageLoaded_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* handle)
{
    __this->OnImageLoaded(handle);
}

// private void OnImageLoadFailed(Uno.Exception e) :152
void ImageView__OnImageLoadFailed_fn(ImageView* __this, ::g::Uno::Exception* e)
{
    __this->OnImageLoadFailed(e);
}

// private void OnMultiDensityImageSourceActiveChanged() :49
void ImageView__OnMultiDensityImageSourceActiveChanged_fn(ImageView* __this)
{
    __this->OnMultiDensityImageSourceActiveChanged();
}

// private static void SetAnchorPoint(ObjC.Object handle) :84
void ImageView__SetAnchorPoint_fn(::g::ObjC::Object* handle)
{
    ImageView::SetAnchorPoint(handle);
}

// private static void SetBounds(ObjC.Object handle, float x, float y, float w, float h) :193
void ImageView__SetBounds_fn(::g::ObjC::Object* handle, float* x, float* y, float* w, float* h)
{
    ImageView::SetBounds(handle, *x, *y, *w, *h);
}

// private static void SetImage(ObjC.Object imageViewHandle, ObjC.Object uiImageHandle) :225
void ImageView__SetImage_fn(::g::ObjC::Object* imageViewHandle, ::g::ObjC::Object* uiImageHandle)
{
    ImageView::SetImage(imageViewHandle, uiImageHandle);
}

// private static void SetTransform(ObjC.Object handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) :176
void ImageView__SetTransform2_fn(::g::ObjC::Object* handle, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44)
{
    ImageView::SetTransform2(handle, *m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// private static void SetTransform(ObjC.Object handle, float4x4 t) :166
void ImageView__SetTransform3_fn(::g::ObjC::Object* handle, ::g::Uno::Float4x4* t)
{
    ImageView::SetTransform3(handle, *t);
}

// public void set_TintColor(float4 value) :60
void ImageView__set_TintColor_fn(ImageView* __this, ::g::Uno::Float4* value)
{
    __this->TintColor(*value);
}

// private static ObjC.Object TintImage(ObjC.Object handle, float r, float g, float b, float a) :233
void ImageView__TintImage_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a, ::g::ObjC::Object** __retval)
{
    *__retval = ImageView::TintImage(handle, *r, *g, *b, *a);
}

// private void UpdateImage() :67
void ImageView__UpdateImage_fn(ImageView* __this)
{
    __this->UpdateImage();
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) :123
void ImageView__UpdateImage1_fn(ImageView* __this, ::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    __this->UpdateImage1(fileImageSource);
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) :128
void ImageView__UpdateImage2_fn(ImageView* __this, ::g::Fuse::Resources::HttpImageSource* http)
{
    __this->UpdateImage2(http);
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) :138
void ImageView__UpdateImage3_fn(ImageView* __this, ::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    __this->UpdateImage3(multi);
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) :157
void ImageView__UpdateImageTransform_fn(ImageView* __this, float* density, ::g::Uno::Float2* origin, ::g::Uno::Float2* scale, ::g::Uno::Float2* drawSize)
{
    __this->UpdateImageTransform(*density, *origin, *scale, *drawSize);
}

// public ImageView() [instance] :77
void ImageView::ctor_5()
{
    _tintColor = ::g::Uno::Float4__New1(1.0f);
    ctor_4(ImageView::Create());
    _uiImageView = ImageView::CreateImageView(Handle());
    ImageView::SetAnchorPoint(_uiImageView);
}

// private float2 GetImageSize() [instance] :199
::g::Uno::Float2 ImageView::GetImageSize()
{
    return ::g::Uno::Float2__New2(ImageView::GetImageWidth(_uiImageView), ImageView::GetImageHeight(_uiImageView));
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) [instance] :104
void ImageView::ImageHandle(::g::Fuse::Controls::Native::ImageHandle* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "set_ImageHandle(Fuse.Controls.Native.ImageHandle)");

    if (_imageHandle != NULL)
    {
        ImageView::ClearImage(_uiImageView);
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_imageHandle), ::TYPES[6/*Uno.IDisposable*/]));
        _imageHandle = NULL;
    }

    _imageHandle = (uObject*)value;

    if (_imageHandle != NULL)
    {
        _uiImageHandle = uCast< ::g::ObjC::Object*>(uPtr(value)->Handle(), ::TYPES[7/*ObjC.Object*/]);
        UpdateImage();
    }
}

// private Fuse.Resources.ImageSource get_ImageSource() [instance] :43
::g::Fuse::Resources::ImageSource* ImageView::ImageSource()
{
    return _imageSource;
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) [instance] :20
void ImageView::ImageSource(::g::Fuse::Resources::ImageSource* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "set_ImageSource(Fuse.Resources.ImageSource)");

    if (uIs((::g::Fuse::Resources::ImageSource*)ImageSource(), ::TYPES[0/*Fuse.Resources.MultiDensityImageSource*/]))
        uPtr(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(ImageSource(), ::TYPES[0/*Fuse.Resources.MultiDensityImageSource*/]))->remove_ActiveChanged(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)ImageView__OnMultiDensityImageSourceActiveChanged_fn, this));

    _imageSource = value;

    if (value == NULL)
        return;

    if (uIs(value, ::TYPES[4/*Fuse.Resources.FileImageSource*/]))
        UpdateImage1(uCast< ::g::Fuse::Resources::FileImageSource*>(value, ::TYPES[4/*Fuse.Resources.FileImageSource*/]));
    else if (uIs(value, ::TYPES[5/*Fuse.Resources.HttpImageSource*/]))
        UpdateImage2(uCast< ::g::Fuse::Resources::HttpImageSource*>(value, ::TYPES[5/*Fuse.Resources.HttpImageSource*/]));
    else if (uIs(value, ::TYPES[0/*Fuse.Resources.MultiDensityImageSource*/]))
    {
        uPtr(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(ImageSource(), ::TYPES[0/*Fuse.Resources.MultiDensityImageSource*/]))->add_ActiveChanged(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)ImageView__OnMultiDensityImageSourceActiveChanged_fn, this));
        UpdateImage3(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(value, ::TYPES[0/*Fuse.Resources.MultiDensityImageSource*/]));
    }
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(value, ::STRINGS[0/*" not suppor...*/])));
}

// private void OnImageLoaded(Fuse.Controls.Native.ImageHandle handle) [instance] :133
void ImageView::OnImageLoaded(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "OnImageLoaded(Fuse.Controls.Native.ImageHandle)");
    ImageHandle(handle);
}

// private void OnImageLoadFailed(Uno.Exception e) [instance] :152
void ImageView::OnImageLoadFailed(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "OnImageLoadFailed(Uno.Exception)");
    ImageHandle(NULL);
}

// private void OnMultiDensityImageSourceActiveChanged() [instance] :49
void ImageView::OnMultiDensityImageSourceActiveChanged()
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "OnMultiDensityImageSourceActiveChanged()");

    if (uIs((::g::Fuse::Resources::ImageSource*)ImageSource(), ::TYPES[0/*Fuse.Resources.MultiDensityImageSource*/]))
        UpdateImage3(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(ImageSource(), ::TYPES[0/*Fuse.Resources.MultiDensityImageSource*/]));
}

// public void set_TintColor(float4 value) [instance] :60
void ImageView::TintColor(::g::Uno::Float4 value)
{
    _tintColor = value;
    UpdateImage();
}

// private void UpdateImage() [instance] :67
void ImageView::UpdateImage()
{
    ::g::Uno::Float4 c = _tintColor;
    ::g::ObjC::Object* imageHandle = (_uiImageHandle != NULL) ? (::g::ObjC::Object*)ImageView::TintImage(_uiImageHandle, c.X, c.Y, c.Z, c.W) : NULL;
    ImageView::SetImage(_uiImageView, imageHandle);
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) [instance] :123
void ImageView::UpdateImage1(::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "UpdateImage(Fuse.Resources.FileImageSource)");
    ImageHandle(::g::Fuse::Controls::Native::ImageLoader::Load3(uPtr(fileImageSource)->File()));
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) [instance] :128
void ImageView::UpdateImage2(::g::Fuse::Resources::HttpImageSource* http)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "UpdateImage(Fuse.Resources.HttpImageSource)");
    uPtr(::g::Fuse::Controls::Native::ImageLoader::Load(http))->Then1(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Controls.Native.ImageHandle>*/], (void*)ImageView__OnImageLoaded_fn, this), uDelegate::New(::TYPES[3/*Uno.Action<Uno.Exception>*/], (void*)ImageView__OnImageLoadFailed_fn, this));
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) [instance] :138
void ImageView::UpdateImage3(::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ImageView", "UpdateImage(Fuse.Resources.MultiDensityImageSource)");
    ::g::Fuse::Resources::ImageSource* active = uPtr(multi)->Active();

    if (active != NULL)
    {
        if (uIs(active, ::TYPES[4/*Fuse.Resources.FileImageSource*/]))
            UpdateImage1(uCast< ::g::Fuse::Resources::FileImageSource*>(active, ::TYPES[4/*Fuse.Resources.FileImageSource*/]));
        else if (uIs(active, ::TYPES[5/*Fuse.Resources.HttpImageSource*/]))
            UpdateImage2(uCast< ::g::Fuse::Resources::HttpImageSource*>(active, ::TYPES[5/*Fuse.Resources.HttpImageSource*/]));
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(active, ::STRINGS[0/*" not suppor...*/])));
    }
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) [instance] :157
void ImageView::UpdateImageTransform(float density, ::g::Uno::Float2 origin, ::g::Uno::Float2 scale, ::g::Uno::Float2 drawSize)
{
    ImageView::SetTransform3(_uiImageView, ::g::Uno::Float4x4__Identity());
    ::g::Uno::Float2 imageSize = GetImageSize();
    ImageView::SetBounds(_uiImageView, 0.0f, 0.0f, imageSize.X, imageSize.Y);
    ::g::Uno::Float4x4 imageTransform = ::g::Uno::Matrix::Compose(::g::Uno::Float3__New4(scale, 0.0f), ::g::Uno::Float4__Identity(), ::g::Uno::Float3__New4(origin, 0.0f));
    ImageView::SetTransform3(_uiImageView, imageTransform);
}

// private static void ClearImage(ObjC.Object imageViewHandle) [static] :253
void ImageView::ClearImage(::g::ObjC::Object* imageViewHandle)
{
    @autoreleasepool
    {
        [] (::id imageViewHandle) -> void
        {
            UIImageView* imageView = (UIImageView*)imageViewHandle;
            [imageView setImage:nil];
        } (::g::ObjC::Object::GetHandle(imageViewHandle));
        
    }
    
}

// private static ObjC.Object Create() [static] :260
::g::ObjC::Object* ImageView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIControl* uicontrol = [[UIControl alloc] init];
            [uicontrol setMultipleTouchEnabled:true];
            [uicontrol setAutoresizesSubviews:false];
            [uicontrol setTranslatesAutoresizingMaskIntoConstraints:false];
            [uicontrol setClipsToBounds:true];
            return uicontrol;
        } ());
        
    }
    
}

// private static ObjC.Object CreateImageView(ObjC.Object container) [static] :271
::g::ObjC::Object* ImageView::CreateImageView(::g::ObjC::Object* container)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id container) -> ::id
        {
            UIImageView* imageView = [[UIImageView alloc] init];
            [container addSubview:imageView];
            return imageView;
        } (::g::ObjC::Object::GetHandle(container)));
        
    }
    
}

// private static float GetImageHeight(ObjC.Object handle) [static] :216
float ImageView::GetImageHeight(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> float
        {
            UIImageView* imageView = (UIImageView*)handle;
            return (imageView.image)
            	? (float)imageView.image.size.height
            	: 0.0f;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private static float GetImageWidth(ObjC.Object handle) [static] :207
float ImageView::GetImageWidth(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> float
        {
            UIImageView* imageView = (UIImageView*)handle;
            return (imageView.image)
            	? (float)imageView.image.size.width
            	: 0.0f;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public ImageView New() [static] :77
ImageView* ImageView::New3()
{
    ImageView* obj1 = (ImageView*)uNew(ImageView_typeof());
    obj1->ctor_5();
    return obj1;
}

// private static void SetAnchorPoint(ObjC.Object handle) [static] :84
void ImageView::SetAnchorPoint(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            ::UIView* view = (::UIView*)handle;
            [[view layer] setAnchorPoint: { 0.0f, 0.0f }];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private static void SetBounds(ObjC.Object handle, float x, float y, float w, float h) [static] :193
void ImageView::SetBounds(::g::ObjC::Object* handle, float x, float y, float w, float h)
{
    @autoreleasepool
    {
        [] (::id handle, float x, float y, float w, float h) -> void
        {
            ::UIView* view = (::UIView*)handle;
            [view setBounds: { { x, y }, { w, h } }];
        } (::g::ObjC::Object::GetHandle(handle), x, y, w, h);
        
    }
    
}

// private static void SetImage(ObjC.Object imageViewHandle, ObjC.Object uiImageHandle) [static] :225
void ImageView::SetImage(::g::ObjC::Object* imageViewHandle, ::g::ObjC::Object* uiImageHandle)
{
    @autoreleasepool
    {
        [] (::id imageViewHandle, ::id uiImageHandle) -> void
        {
            UIImageView* imageView = (UIImageView*)imageViewHandle;
            UIImage* image = (UIImage*)uiImageHandle;
            [imageView setImage:image];
        } (::g::ObjC::Object::GetHandle(imageViewHandle), ::g::ObjC::Object::GetHandle(uiImageHandle));
        
    }
    
}

// private static void SetTransform(ObjC.Object handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [static] :176
void ImageView::SetTransform2(::g::ObjC::Object* handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    @autoreleasepool
    {
        [] (::id handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) -> void
        {
            CATransform3D transform = {
            	m11, m12, m13, m14,
            	m21, m22, m23, m24,
            	m31, m32, m33, m34,
            	m41, m42, m43, m44
            };
            ::UIView* view = (::UIView*)handle;
            [[view layer] setTransform:transform];
        } (::g::ObjC::Object::GetHandle(handle), m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
        
    }
    
}

// private static void SetTransform(ObjC.Object handle, float4x4 t) [static] :166
void ImageView::SetTransform3(::g::ObjC::Object* handle, ::g::Uno::Float4x4 t)
{
    ImageView::SetTransform2(handle, t.M11, t.M12, t.M13, t.M14, t.M21, t.M22, t.M23, t.M24, t.M31, t.M32, t.M33, t.M34, t.M41, t.M42, t.M43, t.M44);
}

// private static ObjC.Object TintImage(ObjC.Object handle, float r, float g, float b, float a) [static] :233
::g::ObjC::Object* ImageView::TintImage(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle, float r, float g, float b, float a) -> ::id
        {
            UIImage* image = (UIImage*)handle;
            UIGraphicsBeginImageContextWithOptions(image.size, NO, image.scale);
            CGRect imageRect = CGRectMake(0.0f, 0.0f, image.size.width, image.size.height);
            CGContextRef ctx = UIGraphicsGetCurrentContext();
            [[UIColor colorWithRed:r green:g blue:b alpha:a] setFill];
            CGContextTranslateCTM(ctx, 0, image.size.height);
            CGContextScaleCTM(ctx, 1.0, -1.0);
            CGContextSetBlendMode(ctx, kCGBlendModeMultiply);
            CGContextDrawImage(ctx, imageRect, image.CGImage);
            CGContextClipToMask(ctx, imageRect, image.CGImage);
            CGContextAddRect(ctx, imageRect);
            CGContextDrawPath(ctx, kCGPathFill);
            UIImage* result = UIGraphicsGetImageFromCurrentImageContext();
            UIGraphicsEndImageContext();
            return result;
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
