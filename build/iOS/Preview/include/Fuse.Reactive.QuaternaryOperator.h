// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/QuaternaryOperator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.ComputeExpression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct QuaternaryOperator;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class QuaternaryOperator :8
// {
::g::Fuse::Reactive::ComputeExpression_type* QuaternaryOperator_typeof();
void QuaternaryOperator__ctor_2_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third, ::g::Fuse::Reactive::Expression* fourth, int32_t* flags);
void QuaternaryOperator__Compute_fn(QuaternaryOperator* __this, uObject* first, uObject* second, uObject* third, uObject* fourth, uObject** __retval);
void QuaternaryOperator__get_First_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void QuaternaryOperator__get_Fourth_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void QuaternaryOperator__GetFlags_fn(QuaternaryOperator* __this, int32_t* __retval);
void QuaternaryOperator__get_IsFirstOptional_fn(QuaternaryOperator* __this, bool* __retval);
void QuaternaryOperator__get_IsFourthOptional_fn(QuaternaryOperator* __this, bool* __retval);
void QuaternaryOperator__get_IsSecondOptional_fn(QuaternaryOperator* __this, bool* __retval);
void QuaternaryOperator__get_IsThirdOptional_fn(QuaternaryOperator* __this, bool* __retval);
void QuaternaryOperator__get_Second_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void QuaternaryOperator__get_Third_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void QuaternaryOperator__TryCompute_fn(QuaternaryOperator* __this, uArray* args, uObject** result, bool* __retval);
void QuaternaryOperator__TryCompute1_fn(QuaternaryOperator* __this, uObject* first, uObject* second, uObject* third, uObject* fourth, uObject** result, bool* __retval);

struct QuaternaryOperator : ::g::Fuse::Reactive::ComputeExpression
{
    void ctor_2(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third, ::g::Fuse::Reactive::Expression* fourth, int32_t flags);
    uObject* Compute(uObject* first, uObject* second, uObject* third, uObject* fourth);
    ::g::Fuse::Reactive::Expression* First();
    ::g::Fuse::Reactive::Expression* Fourth();
    bool IsFirstOptional();
    bool IsFourthOptional();
    bool IsSecondOptional();
    bool IsThirdOptional();
    ::g::Fuse::Reactive::Expression* Second();
    ::g::Fuse::Reactive::Expression* Third();
    bool TryCompute1(uObject* first, uObject* second, uObject* third, uObject* fourth, uObject** result);
};
// }

}}} // ::g::Fuse::Reactive
