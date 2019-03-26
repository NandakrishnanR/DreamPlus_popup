// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.9.0/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Computer.h>
namespace g{namespace Fuse{struct Computer1;}}

namespace g{
namespace Fuse{

// internal abstract class Computer<T> :38
// {
struct Computer1_type : ::g::Fuse::Computer_type
{
    void(*fp_TryOpImpl)(::g::Fuse::Computer1*, int32_t*, void*, void*, bool*, bool*);
    void(*fp_TryOpImpl1)(::g::Fuse::Computer1*, int32_t*, void*, void*, uTRef, bool*);
};

Computer1_type* Computer1_typeof();
void Computer1__ctor_1_fn(Computer1* __this);
void Computer1__TryConvert_fn(Computer1* __this, uObject* o, uTRef result, bool* __retval);
void Computer1__TryOp_fn(Computer1* __this, int32_t* op, uObject* a, uObject* b, bool* result, bool* __retval);
void Computer1__TryOp1_fn(Computer1* __this, int32_t* op, uObject* a, uObject* b, uObject** result, bool* __retval);

struct Computer1 : ::g::Fuse::Computer
{
    void ctor_1();
    template<class T>
    bool TryConvert(uObject* o, T* result) { bool __retval; return Computer1__TryConvert_fn(this, o, uConstrain(__type->GetBase(Computer1_typeof())->T(0), result), &__retval), __retval; }
    template<class T>
    bool TryOpImpl(int32_t op, T a, T b, bool* result) { bool __retval; return (((Computer1_type*)__type)->fp_TryOpImpl)(this, &op, uConstrain(__type->GetBase(Computer1_typeof())->T(0), a), uConstrain(__type->GetBase(Computer1_typeof())->T(0), b), result, &__retval), __retval; }
    void TryOpImpl_ex(int32_t* op, void* a, void* b, bool* result, bool* __retval) { (((Computer1_type*)__type)->fp_TryOpImpl)(this, op, a, b, result, __retval); }
    template<class T>
    bool TryOpImpl1(int32_t op, T a, T b, T* result) { bool __retval; return (((Computer1_type*)__type)->fp_TryOpImpl1)(this, &op, uConstrain(__type->GetBase(Computer1_typeof())->T(0), a), uConstrain(__type->GetBase(Computer1_typeof())->T(0), b), uConstrain(__type->GetBase(Computer1_typeof())->T(0), result), &__retval), __retval; }
    void TryOpImpl1_ex(int32_t* op, void* a, void* b, uTRef result, bool* __retval) { (((Computer1_type*)__type)->fp_TryOpImpl1)(this, op, a, b, result, __retval); }
};
// }

}} // ::g::Fuse
