// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Edit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{namespace Edit{struct Caret;}}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Edit{

// internal struct Caret :9
// {
uStructType* Caret_typeof();
void Caret__ctor__fn(Caret* __this, int32_t* cluster, int32_t* lineIndex, int32_t* runIndex, ::g::Uno::Float2* visualPos);
void Caret__New1_fn(int32_t* cluster, int32_t* lineIndex, int32_t* runIndex, ::g::Uno::Float2* visualPos, Caret* __retval);

struct Caret
{
    int32_t Cluster;
    int32_t LineIndex;
    int32_t RunIndex;
    ::g::Uno::Float2 VisualPos;

    void ctor_(int32_t cluster, int32_t lineIndex, int32_t runIndex, ::g::Uno::Float2 visualPos);
};

Caret Caret__New1(int32_t cluster, int32_t lineIndex, int32_t runIndex, ::g::Uno::Float2 visualPos);
// }

}}}} // ::g::Fuse::Text::Edit
