// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/LazyFontFace.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.CacheItem-2.h>
#include <Fuse.Text.Font.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Text{struct Glyph;}}}
namespace g{namespace Fuse{namespace Text{struct GlyphAtlas;}}}
namespace g{namespace Fuse{namespace Text{struct GlyphTexture;}}}
namespace g{namespace Fuse{namespace Text{struct LazyFont;}}}
namespace g{namespace Fuse{namespace Text{struct LazyFontFace;}}}
namespace g{namespace Fuse{namespace Text{struct PositionedGlyph;}}}
namespace g{namespace Fuse{namespace Text{struct RenderedGlyph;}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}

namespace g{
namespace Fuse{
namespace Text{

// public sealed class LazyFont :52
// {
::g::Fuse::Text::Font_type* LazyFont_typeof();
void LazyFont__ctor_1_fn(LazyFont* __this, ::g::Fuse::Text::LazyFontFace* fontFace, int32_t* pixelSize);
void LazyFont__get_Ascender_fn(LazyFont* __this, float* __retval);
void LazyFont__get_Descender_fn(LazyFont* __this, float* __retval);
void LazyFont__Dispose_fn(LazyFont* __this);
void LazyFont__Force_fn(LazyFont* __this, ::g::Fuse::Text::Font** __retval);
void LazyFont__GetCachedGlyphTexture_fn(LazyFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::GlyphAtlas* atlas, int32_t* version, ::g::Fuse::Text::GlyphTexture* __retval);
void LazyFont__get_LineHeight_fn(LazyFont* __this, float* __retval);
void LazyFont__New1_fn(::g::Fuse::Text::LazyFontFace* fontFace, int32_t* pixelSize, LazyFont** __retval);
void LazyFont__get_NumGlyphs_fn(LazyFont* __this, int32_t* __retval);
void LazyFont__get_PixelSize_fn(LazyFont* __this, int32_t* __retval);
void LazyFont__Render_fn(LazyFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::RenderedGlyph* __retval);
void LazyFont__Shape_fn(LazyFont* __this, ::g::Fuse::Text::Substring* text, int32_t* fontIndex, int32_t* dir, uArray** __retval);

struct LazyFont : ::g::Fuse::Text::Font
{
    uStrong< ::g::Fuse::Text::LazyFontFace*> _fontFace;
    int32_t _pixelSize;
    ::g::Fuse::Internal::CacheItem _loadedFont;
    uStrong<uObject*> _loadedFontMutex;

    void ctor_1(::g::Fuse::Text::LazyFontFace* fontFace, int32_t pixelSize);
    ::g::Fuse::Text::Font* Force();
    static LazyFont* New1(::g::Fuse::Text::LazyFontFace* fontFace, int32_t pixelSize);
};
// }

}}} // ::g::Fuse::Text
