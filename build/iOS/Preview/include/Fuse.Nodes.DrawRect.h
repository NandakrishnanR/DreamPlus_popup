// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.9.0/DrawRectVisualizer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.Recti.h>
namespace g{namespace Fuse{namespace Nodes{struct DrawRect;}}}

namespace g{
namespace Fuse{
namespace Nodes{

// internal struct DrawRect :33
// {
uStructType* DrawRect_typeof();
void DrawRect__ctor__fn(DrawRect* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* c, ::g::Uno::Float4* d, ::g::Uno::Recti* scissor);
void DrawRect__ctor_1_fn(DrawRect* __this, uArray* verts, ::g::Uno::Recti* scissor);
void DrawRect__New1_fn(::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* c, ::g::Uno::Float4* d, ::g::Uno::Recti* scissor, DrawRect* __retval);
void DrawRect__New2_fn(uArray* verts, ::g::Uno::Recti* scissor, DrawRect* __retval);

struct DrawRect
{
    ::g::Uno::Float4 A;
    ::g::Uno::Float4 B;
    ::g::Uno::Float4 C;
    ::g::Uno::Float4 D;
    ::g::Uno::Recti Scissor;

    void ctor_(::g::Uno::Float4 a, ::g::Uno::Float4 b, ::g::Uno::Float4 c, ::g::Uno::Float4 d, ::g::Uno::Recti scissor);
    void ctor_1(uArray* verts, ::g::Uno::Recti scissor);
};

DrawRect DrawRect__New1(::g::Uno::Float4 a, ::g::Uno::Float4 b, ::g::Uno::Float4 c, ::g::Uno::Float4 d, ::g::Uno::Recti scissor);
DrawRect DrawRect__New2(uArray* verts, ::g::Uno::Recti scissor);
// }

}}} // ::g::Fuse::Nodes
