// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.9.0/Transform.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Transform.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float3.h>
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct Rotation;}}

namespace g{
namespace Fuse{

// public sealed class Rotation :59
// {
::g::Fuse::Transform_type* Rotation_typeof();
void Rotation__ctor_3_fn(Rotation* __this);
void Rotation__get_Angle_fn(Rotation* __this, float* __retval);
void Rotation__set_Angle_fn(Rotation* __this, float* value);
void Rotation__get_AngleX_fn(Rotation* __this, float* __retval);
void Rotation__set_AngleX_fn(Rotation* __this, float* value);
void Rotation__get_AngleY_fn(Rotation* __this, float* __retval);
void Rotation__set_AngleY_fn(Rotation* __this, float* value);
void Rotation__get_AngleZ_fn(Rotation* __this, float* __retval);
void Rotation__set_AngleZ_fn(Rotation* __this, float* value);
void Rotation__AppendTo_fn(Rotation* __this, ::g::Fuse::FastMatrix* m, float* weight);
void Rotation__get_Degrees_fn(Rotation* __this, float* __retval);
void Rotation__set_Degrees_fn(Rotation* __this, float* value);
void Rotation__get_DegreesX_fn(Rotation* __this, float* __retval);
void Rotation__set_DegreesX_fn(Rotation* __this, float* value);
void Rotation__get_DegreesY_fn(Rotation* __this, float* __retval);
void Rotation__set_DegreesY_fn(Rotation* __this, float* value);
void Rotation__get_DegreesZ_fn(Rotation* __this, float* __retval);
void Rotation__set_DegreesZ_fn(Rotation* __this, float* value);
void Rotation__get_EulerAngle_fn(Rotation* __this, ::g::Uno::Float3* __retval);
void Rotation__set_EulerAngle_fn(Rotation* __this, ::g::Uno::Float3* value);
void Rotation__get_EulerAngleDegrees_fn(Rotation* __this, ::g::Uno::Float3* __retval);
void Rotation__set_EulerAngleDegrees_fn(Rotation* __this, ::g::Uno::Float3* value);
void Rotation__get_HasRotation_fn(Rotation* __this, bool* __retval);
void Rotation__get_IsFlat_fn(Rotation* __this, bool* __retval);
void Rotation__New2_fn(Rotation** __retval);
void Rotation__PrependTo_fn(Rotation* __this, ::g::Fuse::FastMatrix* m);

struct Rotation : ::g::Fuse::Transform
{
    ::g::Uno::Float3 _euler;

    void ctor_3();
    float Angle();
    void Angle(float value);
    float AngleX();
    void AngleX(float value);
    float AngleY();
    void AngleY(float value);
    float AngleZ();
    void AngleZ(float value);
    float Degrees();
    void Degrees(float value);
    float DegreesX();
    void DegreesX(float value);
    float DegreesY();
    void DegreesY(float value);
    float DegreesZ();
    void DegreesZ(float value);
    ::g::Uno::Float3 EulerAngle();
    void EulerAngle(::g::Uno::Float3 value);
    ::g::Uno::Float3 EulerAngleDegrees();
    void EulerAngleDegrees(::g::Uno::Float3 value);
    bool HasRotation();
    static Rotation* New2();
};
// }

}} // ::g::Fuse
