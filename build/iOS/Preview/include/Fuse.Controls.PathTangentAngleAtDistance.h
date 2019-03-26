// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.9.0/Shapes/PathExpression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.PathExpression.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Controls{struct PathTangentAngleAtDistance;}}}
namespace g{namespace Fuse{namespace Controls{struct SegmentedShape;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class PathTangentAngleAtDistance :137
// {
::g::Fuse::Controls::PathExpression_type* PathTangentAngleAtDistance_typeof();
void PathTangentAngleAtDistance__ctor_2_fn(PathTangentAngleAtDistance* __this, ::g::Fuse::Reactive::Expression* path, ::g::Fuse::Reactive::Expression* distance);
void PathTangentAngleAtDistance__Calculate_fn(PathTangentAngleAtDistance* __this, ::g::Fuse::Controls::SegmentedShape* path, uObject* param, uObject** __retval);
void PathTangentAngleAtDistance__New1_fn(::g::Fuse::Reactive::Expression* path, ::g::Fuse::Reactive::Expression* distance, PathTangentAngleAtDistance** __retval);

struct PathTangentAngleAtDistance : ::g::Fuse::Controls::PathExpression
{
    void ctor_2(::g::Fuse::Reactive::Expression* path, ::g::Fuse::Reactive::Expression* distance);
    static PathTangentAngleAtDistance* New1(::g::Fuse::Reactive::Expression* path, ::g::Fuse::Reactive::Expression* distance);
};
// }

}}} // ::g::Fuse::Controls
