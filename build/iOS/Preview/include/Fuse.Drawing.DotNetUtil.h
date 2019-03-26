// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.9.0/DotNetSurface.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct DotNetUtil;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal static class DotNetUtil :36
// {
uClassType* DotNetUtil_typeof();
void DotNetUtil__AdjustedEndPoints_fn(::g::Uno::Float4* area, ::g::Uno::Float2* start, ::g::Uno::Float2* end, ::g::Uno::Float4* __retval);
void DotNetUtil__AdjustedOffsets_fn(::g::Uno::Float2* start, ::g::Uno::Float2* end, ::g::Uno::Float2* adjStart, ::g::Uno::Float2* adjEnd, ::g::Uno::Float2* __retval);

struct DotNetUtil : uObject
{
    static ::g::Uno::Float4 AdjustedEndPoints(::g::Uno::Float4 area, ::g::Uno::Float2 start, ::g::Uno::Float2 end);
    static ::g::Uno::Float2 AdjustedOffsets(::g::Uno::Float2 start, ::g::Uno::Float2 end, ::g::Uno::Float2* adjStart, ::g::Uno::Float2* adjEnd);
};
// }

}}} // ::g::Fuse::Drawing
