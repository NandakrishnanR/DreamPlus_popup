// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.9.0/AppBase.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{

// public abstract interface IRootVisualProvider :14
// {
uInterfaceType* IRootVisualProvider_typeof();

struct IRootVisualProvider
{
    void(*fp_get_Root)(uObject*, ::g::Fuse::Visual**);
    static ::g::Fuse::Visual* Root(const uInterface& __this) { ::g::Fuse::Visual* __retval; return __this.VTable<IRootVisualProvider>()->fp_get_Root(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse
