// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/Interfaces.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IRangeView :55
// {
uInterfaceType* IRangeView_typeof();

struct IRangeView
{
    void(*fp_set_Progress)(uObject*, double*);
    static void Progress(const uInterface& __this, double value) { __this.VTable<IRangeView>()->fp_set_Progress(__this, &value); }
};
// }

}}}} // ::g::Fuse::Controls::Native
