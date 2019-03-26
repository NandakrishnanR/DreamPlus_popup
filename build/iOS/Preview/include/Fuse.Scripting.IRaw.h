// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.9.0/ValueMirror.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{

// internal abstract interface IRaw :8
// {
uInterfaceType* IRaw_typeof();

struct IRaw
{
    void(*fp_get_Raw)(uObject*, uObject**);
    void(*fp_get_ReflectedRaw)(uObject*, uObject**);
    static uObject* Raw(const uInterface& __this) { uObject* __retval; return __this.VTable<IRaw>()->fp_get_Raw(__this, &__retval), __retval; }
    static uObject* ReflectedRaw(const uInterface& __this) { uObject* __retval; return __this.VTable<IRaw>()->fp_get_ReflectedRaw(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
