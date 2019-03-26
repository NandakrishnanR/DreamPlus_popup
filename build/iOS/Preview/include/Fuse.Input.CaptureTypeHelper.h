// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.9.0/Input/Pointer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct CaptureTypeHelper;}}}

namespace g{
namespace Fuse{
namespace Input{

// public static class CaptureTypeHelper :35
// {
uClassType* CaptureTypeHelper_typeof();
void CaptureTypeHelper__BecameHard_fn(int32_t* prev, int32_t* next, bool* __retval);
void CaptureTypeHelper__GainedCapture_fn(int32_t* prev, int32_t* next, bool* __retval);

struct CaptureTypeHelper : uObject
{
    static bool BecameHard(int32_t prev, int32_t next);
    static bool GainedCapture(int32_t prev, int32_t next);
};
// }

}}} // ::g::Fuse::Input
