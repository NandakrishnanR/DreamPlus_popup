// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/CircleLayout.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct CircleLayout;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class CircleLayout :32
// {
::g::Fuse::Layouts::Layout_type* CircleLayout_typeof();
void CircleLayout__ctor_2_fn(CircleLayout* __this);
void CircleLayout__ArrangePaddingBox_fn(CircleLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp);
void CircleLayout__get_EndAngleDegrees_fn(CircleLayout* __this, float* __retval);
void CircleLayout__set_EndAngleDegrees_fn(CircleLayout* __this, float* value);
void CircleLayout__GetContentSize_fn(CircleLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void CircleLayout__get_ItemSpacingDegrees_fn(CircleLayout* __this, float* __retval);
void CircleLayout__set_ItemSpacingDegrees_fn(CircleLayout* __this, float* value);
void CircleLayout__New2_fn(CircleLayout** __retval);
void CircleLayout__get_Radius_fn(CircleLayout* __this, float* __retval);
void CircleLayout__set_Radius_fn(CircleLayout* __this, float* value);
void CircleLayout__get_StartAngleDegrees_fn(CircleLayout* __this, float* __retval);
void CircleLayout__set_StartAngleDegrees_fn(CircleLayout* __this, float* value);

struct CircleLayout : ::g::Fuse::Layouts::Layout
{
    float _radius;
    float _itemSpacing;
    float _startAngle;
    float _endAngle;

    void ctor_2();
    float EndAngleDegrees();
    void EndAngleDegrees(float value);
    float ItemSpacingDegrees();
    void ItemSpacingDegrees(float value);
    float Radius();
    void Radius(float value);
    float StartAngleDegrees();
    void StartAngleDegrees(float value);
    static CircleLayout* New2();
};
// }

}}} // ::g::Fuse::Layouts
