// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/iOS/ObjectExtensions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct ObjectExtensions;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class ObjectExtensions :8
// {
uClassType* ObjectExtensions_typeof();
void ObjectExtensions__IsUIControl_fn(::g::ObjC::Object* obj, bool* __retval);
void ObjectExtensions__IsUIEvent_fn(::g::ObjC::Object* obj, bool* __retval);

struct ObjectExtensions : uObject
{
    static bool IsUIControl(::g::ObjC::Object* obj);
    static bool IsUIEvent(::g::ObjC::Object* obj);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
