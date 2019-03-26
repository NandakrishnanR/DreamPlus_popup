// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/FontFace.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.Glyph.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{struct PositionedGlyph;}}}

namespace g{
namespace Fuse{
namespace Text{

// public struct PositionedGlyph :22
// {
uStructType* PositionedGlyph_typeof();
void PositionedGlyph__ctor__fn(PositionedGlyph* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Uno::Float2* advance, ::g::Uno::Float2* offset, int32_t* cluster);
void PositionedGlyph__get_Advance_fn(PositionedGlyph* __this, ::g::Uno::Float2* __retval);
void PositionedGlyph__set_Advance_fn(PositionedGlyph* __this, ::g::Uno::Float2* value);
void PositionedGlyph__get_Glyph_fn(PositionedGlyph* __this, ::g::Fuse::Text::Glyph* __retval);
void PositionedGlyph__set_Glyph_fn(PositionedGlyph* __this, ::g::Fuse::Text::Glyph* value);
void PositionedGlyph__New1_fn(::g::Fuse::Text::Glyph* glyph, ::g::Uno::Float2* advance, ::g::Uno::Float2* offset, int32_t* cluster, PositionedGlyph* __retval);

struct PositionedGlyph
{
    ::g::Uno::Float2 Offset;
    int32_t Cluster;
    ::g::Uno::Float2 _Advance;
    ::g::Fuse::Text::Glyph _Glyph;

    void ctor_(::g::Fuse::Text::Glyph glyph, ::g::Uno::Float2 advance, ::g::Uno::Float2 offset, int32_t cluster);
    ::g::Uno::Float2 Advance();
    void Advance(::g::Uno::Float2 value);
    ::g::Fuse::Text::Glyph Glyph();
    void Glyph(::g::Fuse::Text::Glyph value);
};

PositionedGlyph PositionedGlyph__New1(::g::Fuse::Text::Glyph glyph, ::g::Uno::Float2 advance, ::g::Uno::Float2 offset, int32_t cluster);
// }

}}} // ::g::Fuse::Text
