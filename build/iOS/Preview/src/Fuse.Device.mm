// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS/1.9.0/iOSApp.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Device.h>
#include <UIKit/UIKit.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{

// internal static extern class Device :150
// {
static void Device_build(uType* type)
{
}

uClassType* Device_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Device", options);
    type->fp_build_ = Device_build;
    return type;
}

// private static int GetCurrentOrientation() :163
void Device__GetCurrentOrientation_fn(int32_t* __retval)
{
    *__retval = Device::GetCurrentOrientation();
}

// private static int GetStatusBarOrientation() :169
void Device__GetStatusBarOrientation_fn(int32_t* __retval)
{
    *__retval = Device::GetStatusBarOrientation();
}

// public static int get_Orientation() :154
void Device__get_Orientation_fn(int32_t* __retval)
{
    *__retval = Device::Orientation();
}

// public static int get_StatusBarOrientation() :159
void Device__get_StatusBarOrientation_fn(int32_t* __retval)
{
    *__retval = Device::StatusBarOrientation();
}

// private static int GetCurrentOrientation() [static] :163
int32_t Device::GetCurrentOrientation()
{
    @autoreleasepool
    {
        return (int)[[UIDevice currentDevice] orientation];
    }
    
}

// private static int GetStatusBarOrientation() [static] :169
int32_t Device::GetStatusBarOrientation()
{
    @autoreleasepool
    {
        return (int)[[UIApplication sharedApplication] statusBarOrientation];
    }
    
}

// public static int get_Orientation() [static] :154
int32_t Device::Orientation()
{
    return Device::GetCurrentOrientation();
}

// public static int get_StatusBarOrientation() [static] :159
int32_t Device::StatusBarOrientation()
{
    return Device::GetStatusBarOrientation();
}
// }

}} // ::g::Fuse
