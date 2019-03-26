// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.9.0/Shapes/PathExpression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.PathExpression.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Controls{struct PathPointAtTime;}}}
namespace g{namespace Fuse{namespace Controls{struct SegmentedShape;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class PathPointAtTime :157
// {
::g::Fuse::Controls::PathExpression_type* PathPointAtTime_typeof();
void PathPointAtTime__ctor_2_fn(PathPointAtTime* __this, ::g::Fuse::Reactive::Expression* path, ::g::Fuse::Reactive::Expression* time);
void PathPointAtTime__Calculate_fn(PathPointAtTime* __this, ::g::Fuse::Controls::SegmentedShape* path, uObject* param, uObject** __retval);
void PathPointAtTime__New1_fn(::g::Fuse::Reactive::Expression* path, ::g::Fuse::Reactive::Expression* time, PathPointAtTime** __retval);

struct PathPointAtTime : ::g::Fuse::Controls::PathExpression
{
    void ctor_2(::g::Fuse::Reactive::Expression* path, ::g::Fuse::Reactive::Expression* time);
    static PathPointAtTime* New1(::g::Fuse::Reactive::Expression* path, ::g::Fuse::Reactive::Expression* time);
};
// }

}}} // ::g::Fuse::Controls
