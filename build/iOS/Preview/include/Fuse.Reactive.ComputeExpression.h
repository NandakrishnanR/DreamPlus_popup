// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/ExpressionListener.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct ComputeExpression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class ComputeExpression :223
// {
struct ComputeExpression_type : ::g::Fuse::Reactive::Expression_type
{
    void(*fp_GetFlags)(::g::Fuse::Reactive::ComputeExpression*, int32_t*);
    void(*fp_TryCompute)(::g::Fuse::Reactive::ComputeExpression*, uArray*, uObject**, bool*);
};

ComputeExpression_type* ComputeExpression_typeof();
void ComputeExpression__ctor_1_fn(ComputeExpression* __this, uArray* args, int32_t* flags, uString* name);
void ComputeExpression__get_EffectiveFlags_fn(ComputeExpression* __this, int32_t* __retval);
void ComputeExpression__GetArgument_fn(ComputeExpression* __this, int32_t* i, ::g::Fuse::Reactive::Expression** __retval);
void ComputeExpression__GetFlags_fn(ComputeExpression* __this, int32_t* __retval);
void ComputeExpression__get_Name_fn(ComputeExpression* __this, uString** __retval);
void ComputeExpression__Subscribe_fn(ComputeExpression* __this, uObject* context, uObject* listener, uObject** __retval);
void ComputeExpression__ToString_fn(ComputeExpression* __this, uString** __retval);

struct ComputeExpression : ::g::Fuse::Reactive::Expression
{
    uStrong<uArray*> _args;
    int32_t _flags;
    uStrong<uString*> _name;

    void ctor_1(uArray* args, int32_t flags, uString* name);
    int32_t EffectiveFlags();
    ::g::Fuse::Reactive::Expression* GetArgument(int32_t i);
    int32_t GetFlags() { int32_t __retval; return (((ComputeExpression_type*)__type)->fp_GetFlags)(this, &__retval), __retval; }
    uString* Name();
    bool TryCompute(uArray* args, uObject** result) { bool __retval; return (((ComputeExpression_type*)__type)->fp_TryCompute)(this, args, result, &__retval), __retval; }
    static int32_t GetFlags(ComputeExpression* __this) { int32_t __retval; return ComputeExpression__GetFlags_fn(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
