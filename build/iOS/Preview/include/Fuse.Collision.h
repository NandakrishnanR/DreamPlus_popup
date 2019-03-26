// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Collision.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Box;}}
namespace g{namespace Fuse{struct Collision;}}
namespace g{namespace Fuse{struct Ray;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{

// public static class Collision :4
// {
uClassType* Collision_typeof();
void Collision__LineLineIntersection_fn(::g::Uno::Float2* p1, ::g::Uno::Float2* v1, ::g::Uno::Float2* p2, ::g::Uno::Float2* v2, ::g::Uno::Float2* r, bool* __retval);
void Collision__RayIntersectsBox_fn(::g::Fuse::Ray* ray, ::g::Fuse::Box* box, float* distance, bool* __retval);

struct Collision : uObject
{
    static bool LineLineIntersection(::g::Uno::Float2 p1, ::g::Uno::Float2 v1, ::g::Uno::Float2 p2, ::g::Uno::Float2 v2, ::g::Uno::Float2* r);
    static bool RayIntersectsBox(::g::Fuse::Ray ray, ::g::Fuse::Box box, float* distance);
};
// }

}} // ::g::Fuse
