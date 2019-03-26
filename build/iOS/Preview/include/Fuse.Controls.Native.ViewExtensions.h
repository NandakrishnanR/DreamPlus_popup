// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/Interfaces.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewExtensions;}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal static extern class ViewExtensions :160
// {
uClassType* ViewExtensions_typeof();
void ViewExtensions__GetNativeHandle_fn(uObject* view, ::g::ObjC::Object** __retval);

struct ViewExtensions : uObject
{
    static ::g::ObjC::Object* GetNativeHandle(uObject* view);
};
// }

}}}} // ::g::Fuse::Controls::Native
