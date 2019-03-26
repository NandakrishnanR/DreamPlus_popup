// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.9.0/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Computer;}}

namespace g{
namespace Fuse{

// internal abstract class Computer :14
// {
struct Computer_type : uType
{
    void(*fp_TryOp)(::g::Fuse::Computer*, int32_t*, uObject*, uObject*, bool*, bool*);
    void(*fp_TryOp1)(::g::Fuse::Computer*, int32_t*, uObject*, uObject*, uObject**, bool*);
};

Computer_type* Computer_typeof();
void Computer__ctor__fn(Computer* __this);

struct Computer : uObject
{
    void ctor_();
    bool TryOp(int32_t op, uObject* a, uObject* b, bool* result) { bool __retval; return (((Computer_type*)__type)->fp_TryOp)(this, &op, a, b, result, &__retval), __retval; }
    bool TryOp1(int32_t op, uObject* a, uObject* b, uObject** result) { bool __retval; return (((Computer_type*)__type)->fp_TryOp1)(this, &op, a, b, result, &__retval), __retval; }
};
// }

}} // ::g::Fuse
