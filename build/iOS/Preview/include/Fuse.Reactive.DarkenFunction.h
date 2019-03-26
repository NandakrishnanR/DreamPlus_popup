// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Color.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.BinaryColorFunction.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct DarkenFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class DarkenFunction :130
// {
::g::Fuse::Reactive::BinaryColorFunction_type* DarkenFunction_typeof();
void DarkenFunction__ctor_5_fn(DarkenFunction* __this, ::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* lightness);
void DarkenFunction__ColorCompute_fn(DarkenFunction* __this, ::g::Uno::Float4* color, float* value, ::g::Uno::Float4* __retval);
void DarkenFunction__New1_fn(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* lightness, DarkenFunction** __retval);

struct DarkenFunction : ::g::Fuse::Reactive::BinaryColorFunction
{
    void ctor_5(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* lightness);
    static DarkenFunction* New1(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* lightness);
};
// }

}}} // ::g::Fuse::Reactive
