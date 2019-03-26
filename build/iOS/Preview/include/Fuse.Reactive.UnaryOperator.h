// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/UnaryOperator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.ComputeExpression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct UnaryOperator;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class UnaryOperator :8
// {
struct UnaryOperator_type : ::g::Fuse::Reactive::ComputeExpression_type
{
    void(*fp_TryCompute1)(::g::Fuse::Reactive::UnaryOperator*, uObject*, uObject**, bool*);
};

UnaryOperator_type* UnaryOperator_typeof();
void UnaryOperator__ctor_2_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression* operand, int32_t* flags);
void UnaryOperator__ctor_3_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression* operand, uString* name, int32_t* flags);
void UnaryOperator__Compute_fn(UnaryOperator* __this, uObject* operand, uObject** __retval);
void UnaryOperator__GetFlags_fn(UnaryOperator* __this, int32_t* __retval);
void UnaryOperator__InternalOnLostOperand_fn(UnaryOperator* __this, uObject* listener);
void UnaryOperator__InternalOnNewOperand_fn(UnaryOperator* __this, uObject* listener, uObject* operand);
void UnaryOperator__get_IsOperandOptional_fn(UnaryOperator* __this, bool* __retval);
void UnaryOperator__OnLostOperand_fn(UnaryOperator* __this, uObject* listener);
void UnaryOperator__OnNewOperand_fn(UnaryOperator* __this, uObject* listener, uObject* operand);
void UnaryOperator__get_Operand_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void UnaryOperator__TryCompute_fn(UnaryOperator* __this, uArray* args, uObject** result, bool* __retval);
void UnaryOperator__TryCompute1_fn(UnaryOperator* __this, uObject* operand, uObject** result, bool* __retval);

struct UnaryOperator : ::g::Fuse::Reactive::ComputeExpression
{
    void ctor_2(::g::Fuse::Reactive::Expression* operand, int32_t flags);
    void ctor_3(::g::Fuse::Reactive::Expression* operand, uString* name, int32_t flags);
    uObject* Compute(uObject* operand);
    void InternalOnLostOperand(uObject* listener);
    void InternalOnNewOperand(uObject* listener, uObject* operand);
    bool IsOperandOptional();
    void OnLostOperand(uObject* listener);
    void OnNewOperand(uObject* listener, uObject* operand);
    ::g::Fuse::Reactive::Expression* Operand();
    bool TryCompute1(uObject* operand, uObject** result) { bool __retval; return (((UnaryOperator_type*)__type)->fp_TryCompute1)(this, operand, result, &__retval), __retval; }
    static bool TryCompute1(UnaryOperator* __this, uObject* operand, uObject** result) { bool __retval; return UnaryOperator__TryCompute1_fn(__this, operand, result, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
