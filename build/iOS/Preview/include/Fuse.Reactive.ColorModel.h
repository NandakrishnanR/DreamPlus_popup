// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Color.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Reactive{struct ColorModel;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal static class ColorModel :7
// {
uClassType* ColorModel_typeof();
void ColorModel__HslaToRgba_fn(::g::Uno::Float4* v, ::g::Uno::Float4* __retval);
void ColorModel__Hue_2_RGB_fn(float* v1, float* v2, float* vH, float* __retval);
void ColorModel__RgbaToHsla_fn(::g::Uno::Float4* v, ::g::Uno::Float4* __retval);

struct ColorModel : uObject
{
    static ::g::Uno::Float4 HslaToRgba(::g::Uno::Float4 v);
    static float Hue_2_RGB(float v1, float v2, float vH);
    static ::g::Uno::Float4 RgbaToHsla(::g::Uno::Float4 v);
};
// }

}}} // ::g::Fuse::Reactive
