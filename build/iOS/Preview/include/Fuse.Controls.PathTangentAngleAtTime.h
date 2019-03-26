// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.9.0/Shapes/PathExpression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.PathExpression.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Controls{struct PathTangentAngleAtTime;}}}
namespace g{namespace Fuse{namespace Controls{struct SegmentedShape;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class PathTangentAngleAtTime :176
// {
::g::Fuse::Controls::PathExpression_type* PathTangentAngleAtTime_typeof();
void PathTangentAngleAtTime__ctor_2_fn(PathTangentAngleAtTime* __this, ::g::Fuse::Reactive::Expression* path, ::g::Fuse::Reactive::Expression* time);
void PathTangentAngleAtTime__Calculate_fn(PathTangentAngleAtTime* __this, ::g::Fuse::Controls::SegmentedShape* path, uObject* param, uObject** __retval);
void PathTangentAngleAtTime__New1_fn(::g::Fuse::Reactive::Expression* path, ::g::Fuse::Reactive::Expression* time, PathTangentAngleAtTime** __retval);

struct PathTangentAngleAtTime : ::g::Fuse::Controls::PathExpression
{
    void ctor_2(::g::Fuse::Reactive::Expression* path, ::g::Fuse::Reactive::Expression* time);
    static PathTangentAngleAtTime* New1(::g::Fuse::Reactive::Expression* path, ::g::Fuse::Reactive::Expression* time);
};
// }

}}} // ::g::Fuse::Controls
