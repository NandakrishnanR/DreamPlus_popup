// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Version.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Version;}}

namespace g{
namespace Fuse{

// public static class Version :8
// {
uClassType* Version_typeof();

struct Version : uObject
{
    static int32_t Major_;
    static int32_t& Major() { return Version_typeof()->Init(), Major_; }
    static int32_t Minor_;
    static int32_t& Minor() { return Version_typeof()->Init(), Minor_; }
    static int32_t Patch_;
    static int32_t& Patch() { return Version_typeof()->Init(), Patch_; }
    static uSStrong<uString*> String_;
    static uSStrong<uString*>& String() { return Version_typeof()->Init(), String_; }
};
// }

}} // ::g::Fuse
