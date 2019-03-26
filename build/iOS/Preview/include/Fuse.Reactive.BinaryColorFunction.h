// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Color.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct BinaryColorFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class BinaryColorFunction :100
// {
struct BinaryColorFunction_type : ::g::Fuse::Reactive::BinaryOperator_type
{
    void(*fp_ColorCompute)(::g::Fuse::Reactive::BinaryColorFunction*, ::g::Uno::Float4*, float*, ::g::Uno::Float4*);
};

BinaryColorFunction_type* BinaryColorFunction_typeof();
void BinaryColorFunction__ctor_4_fn(BinaryColorFunction* __this, ::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* value, uString* name);
void BinaryColorFunction__TryCompute1_fn(BinaryColorFunction* __this, uObject* color_, uObject* value_, uObject** result, bool* __retval);

struct BinaryColorFunction : ::g::Fuse::Reactive::BinaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* value, uString* name);
    ::g::Uno::Float4 ColorCompute(::g::Uno::Float4 color, float value);
};

}}} // ::g::Fuse::Reactive

#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Reactive{

inline ::g::Uno::Float4 BinaryColorFunction::ColorCompute(::g::Uno::Float4 color, float value) { ::g::Uno::Float4 __retval; return (((BinaryColorFunction_type*)__type)->fp_ColorCompute)(this, &color, &value, &__retval), __retval; }
// }

}}} // ::g::Fuse::Reactive
