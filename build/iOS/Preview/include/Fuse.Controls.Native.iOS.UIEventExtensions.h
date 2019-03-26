// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/iOS/PointerCaptureAdapter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct UIEventExtensions;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class UIEventExtensions :108
// {
uClassType* UIEventExtensions_typeof();
void UIEventExtensions__GetTouchesForView_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, uArray** __retval);
void UIEventExtensions__GetTouchesForViewCount_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int64_t* __retval);
void UIEventExtensions__GetTouchForView_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int32_t* index, ::g::ObjC::Object** __retval);

struct UIEventExtensions : uObject
{
    static uArray* GetTouchesForView(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle);
    static int64_t GetTouchesForViewCount(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle);
    static ::g::ObjC::Object* GetTouchForView(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, int32_t index);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
