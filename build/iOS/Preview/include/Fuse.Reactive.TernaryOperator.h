// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/TernaryOperator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.ComputeExpression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct TernaryOperator;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class TernaryOperator :8
// {
struct TernaryOperator_type : ::g::Fuse::Reactive::ComputeExpression_type
{
    void(*fp_TryCompute1)(::g::Fuse::Reactive::TernaryOperator*, uObject*, uObject*, uObject*, uObject**, bool*);
};

TernaryOperator_type* TernaryOperator_typeof();
void TernaryOperator__ctor_2_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third, int32_t* flags);
void TernaryOperator__Compute_fn(TernaryOperator* __this, uObject* first, uObject* second, uObject* third, uObject** __retval);
void TernaryOperator__get_First_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void TernaryOperator__GetFlags_fn(TernaryOperator* __this, int32_t* __retval);
void TernaryOperator__get_IsFirstOptional_fn(TernaryOperator* __this, bool* __retval);
void TernaryOperator__get_IsSecondOptional_fn(TernaryOperator* __this, bool* __retval);
void TernaryOperator__get_IsThirdOptional_fn(TernaryOperator* __this, bool* __retval);
void TernaryOperator__get_Second_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void TernaryOperator__get_Third_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void TernaryOperator__TryCompute_fn(TernaryOperator* __this, uArray* args, uObject** result, bool* __retval);
void TernaryOperator__TryCompute1_fn(TernaryOperator* __this, uObject* first, uObject* second, uObject* third, uObject** result, bool* __retval);

struct TernaryOperator : ::g::Fuse::Reactive::ComputeExpression
{
    void ctor_2(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third, int32_t flags);
    uObject* Compute(uObject* first, uObject* second, uObject* third);
    ::g::Fuse::Reactive::Expression* First();
    bool IsFirstOptional();
    bool IsSecondOptional();
    bool IsThirdOptional();
    ::g::Fuse::Reactive::Expression* Second();
    ::g::Fuse::Reactive::Expression* Third();
    bool TryCompute1(uObject* first, uObject* second, uObject* third, uObject** result) { bool __retval; return (((TernaryOperator_type*)__type)->fp_TryCompute1)(this, first, second, third, result, &__retval), __retval; }
    static bool TryCompute1(TernaryOperator* __this, uObject* first, uObject* second, uObject* third, uObject** result) { bool __retval; return TernaryOperator__TryCompute1_fn(__this, first, second, third, result, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
