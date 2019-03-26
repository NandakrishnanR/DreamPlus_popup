// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/BinaryOperator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.ComputeExpression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct BinaryOperator;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class BinaryOperator :8
// {
struct BinaryOperator_type : ::g::Fuse::Reactive::ComputeExpression_type
{
    void(*fp_TryCompute1)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**, bool*);
};

BinaryOperator_type* BinaryOperator_typeof();
void BinaryOperator__ctor_2_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, int32_t* flags);
void BinaryOperator__ctor_3_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, uString* name, int32_t* flags);
void BinaryOperator__Compute_fn(BinaryOperator* __this, uObject* left, uObject* right, uObject** __retval);
void BinaryOperator__GetFlags_fn(BinaryOperator* __this, int32_t* __retval);
void BinaryOperator__get_IsLeftOptional_fn(BinaryOperator* __this, bool* __retval);
void BinaryOperator__get_IsRightOptional_fn(BinaryOperator* __this, bool* __retval);
void BinaryOperator__get_Left_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void BinaryOperator__get_Right_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void BinaryOperator__TryCompute_fn(BinaryOperator* __this, uArray* args, uObject** result, bool* __retval);
void BinaryOperator__TryCompute1_fn(BinaryOperator* __this, uObject* left, uObject* right, uObject** result, bool* __retval);

struct BinaryOperator : ::g::Fuse::Reactive::ComputeExpression
{
    void ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, int32_t flags);
    void ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, uString* name, int32_t flags);
    uObject* Compute(uObject* left, uObject* right);
    bool IsLeftOptional();
    bool IsRightOptional();
    ::g::Fuse::Reactive::Expression* Left();
    ::g::Fuse::Reactive::Expression* Right();
    bool TryCompute1(uObject* left, uObject* right, uObject** result) { bool __retval; return (((BinaryOperator_type*)__type)->fp_TryCompute1)(this, left, right, result, &__retval), __retval; }
    static bool TryCompute1(BinaryOperator* __this, uObject* left, uObject* right, uObject** result) { bool __retval; return BinaryOperator__TryCompute1_fn(__this, left, right, result, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
