// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LayoutFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.LayoutFunction.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Elements{struct XYBaseLayoutFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Elements{

// public abstract class XYBaseLayoutFunction :164
// {
struct XYBaseLayoutFunction_type : ::g::Fuse::Elements::LayoutFunction_type
{
    void(*fp_TryCompute)(::g::Fuse::Elements::XYBaseLayoutFunction*, ::g::Uno::Float4*, int32_t*, uObject**, bool*);
};

XYBaseLayoutFunction_type* XYBaseLayoutFunction_typeof();
void XYBaseLayoutFunction__ctor_2_fn(XYBaseLayoutFunction* __this, ::g::Fuse::Reactive::Expression* element);
void XYBaseLayoutFunction__TryComputeAlternate_fn(XYBaseLayoutFunction* __this, uObject* value, uObject** result, bool* __retval);

struct XYBaseLayoutFunction : ::g::Fuse::Elements::LayoutFunction
{
    void ctor_2(::g::Fuse::Reactive::Expression* element);
    bool TryCompute(::g::Uno::Float4 v, int32_t sz, uObject** value);
};

}}} // ::g::Fuse::Elements

#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Elements{

inline bool XYBaseLayoutFunction::TryCompute(::g::Uno::Float4 v, int32_t sz, uObject** value) { bool __retval; return (((XYBaseLayoutFunction_type*)__type)->fp_TryCompute)(this, &v, &sz, value, &__retval), __retval; }
// }

}}} // ::g::Fuse::Elements
