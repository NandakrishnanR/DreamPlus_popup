// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.9.0/Shapes/PathExpression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.PathExpression.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Controls{struct PathPointAtDistance;}}}
namespace g{namespace Fuse{namespace Controls{struct SegmentedShape;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class PathPointAtDistance :118
// {
::g::Fuse::Controls::PathExpression_type* PathPointAtDistance_typeof();
void PathPointAtDistance__ctor_2_fn(PathPointAtDistance* __this, ::g::Fuse::Reactive::Expression* path, ::g::Fuse::Reactive::Expression* distance);
void PathPointAtDistance__Calculate_fn(PathPointAtDistance* __this, ::g::Fuse::Controls::SegmentedShape* path, uObject* param, uObject** __retval);
void PathPointAtDistance__New1_fn(::g::Fuse::Reactive::Expression* path, ::g::Fuse::Reactive::Expression* distance, PathPointAtDistance** __retval);

struct PathPointAtDistance : ::g::Fuse::Controls::PathExpression
{
    void ctor_2(::g::Fuse::Reactive::Expression* path, ::g::Fuse::Reactive::Expression* distance);
    static PathPointAtDistance* New1(::g::Fuse::Reactive::Expression* path, ::g::Fuse::Reactive::Expression* distance);
};
// }

}}} // ::g::Fuse::Controls
