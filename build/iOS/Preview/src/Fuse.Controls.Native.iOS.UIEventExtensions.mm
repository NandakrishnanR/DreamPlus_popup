// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/iOS/PointerCaptureAdapter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.UIEventExtensions.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <uObjC.Foreign.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class UIEventExtensions :108
// {
static void UIEventExtensions_build(uType* type)
{
    ::TYPES[0] = ::g::ObjC::Object_typeof()->Array();
}

uClassType* UIEventExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.UIEventExtensions", options);
    type->fp_build_ = UIEventExtensions_build;
    return type;
}

// public static ObjC.Object[] GetTouchesForView(ObjC.Object handle, ObjC.Object viewHandle) :110
void UIEventExtensions__GetTouchesForView_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, uArray** __retval)
{
    *__retval = UIEventExtensions::GetTouchesForView(handle, viewHandle);
}

// private static long GetTouchesForViewCount(ObjC.Object handle, ObjC.Object viewHandle) :121
void UIEventExtensions__GetTouchesForViewCount_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int64_t* __retval)
{
    *__retval = UIEventExtensions::GetTouchesForViewCount(handle, viewHandle);
}

// private static ObjC.Object GetTouchForView(ObjC.Object handle, ObjC.Object viewHandle, int index) :130
void UIEventExtensions__GetTouchForView_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int32_t* index, ::g::ObjC::Object** __retval)
{
    *__retval = UIEventExtensions::GetTouchForView(handle, viewHandle, *index);
}

// public static ObjC.Object[] GetTouchesForView(ObjC.Object handle, ObjC.Object viewHandle) [static] :110
uArray* UIEventExtensions::GetTouchesForView(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UIEventExtensions", "GetTouchesForView(ObjC.Object,ObjC.Object)");
    int32_t touchCount = (int32_t)UIEventExtensions::GetTouchesForViewCount(handle, viewHandle);
    uArray* touches = uArray::New(::TYPES[0/*ObjC.Object[]*/], touchCount);

    for (int32_t i = 0; i < touchCount; i++)
        uPtr(touches)->Strong< ::g::ObjC::Object*>(i) = UIEventExtensions::GetTouchForView(handle, viewHandle, i);

    return touches;
}

// private static long GetTouchesForViewCount(ObjC.Object handle, ObjC.Object viewHandle) [static] :121
int64_t UIEventExtensions::GetTouchesForViewCount(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle)
{
    @autoreleasepool
    {
        return [] (::id handle, ::id viewHandle) -> int64_t
        {
            ::UIEvent* ev = (::UIEvent*)handle;
            ::UIView* view = (::UIView*)viewHandle;
            return [[[ev touchesForView:view] allObjects] count];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(viewHandle));
        
    }
    
}

// private static ObjC.Object GetTouchForView(ObjC.Object handle, ObjC.Object viewHandle, int index) [static] :130
::g::ObjC::Object* UIEventExtensions::GetTouchForView(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int32_t index)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle, ::id viewHandle, int32_t index) -> ::id
        {
            ::UIEvent* ev = (::UIEvent*)handle;
            ::UIView* view = (::UIView*)viewHandle;
            return [[[ev touchesForView:view] allObjects] objectAtIndex:index];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(viewHandle), index));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
